#include "MyHeaders.h"

#define stripeImageWidth 32
GLubyte stripeImage[4 * stripeImageWidth];

void makeStripeImage(void) {
	int j;

	for (j = 0; j < stripeImageWidth; j++) {
		stripeImage[4 * j] = (GLubyte)((j <= 4) ? 255 : 0);
		stripeImage[4 * j + 1] = (GLubyte)((j > 4) ? 255 : 0);
		stripeImage[4 * j + 2] = (GLubyte)0;
		stripeImage[4 * j + 3] = (GLubyte)255;
	}
}

// 텍스처 좌표계를 생성하기 위한 평면
static GLfloat xequalzero[] = { 1.0, 0.0, 0.0, 0.0 };
static GLfloat slanted[] = { 1.0, 1.0, 1.0, 0.0 };
static GLfloat *currentCoeff;
static GLenum currentPlane;
static GLint currentGenMode;

void init(void) {
	glClearColor(0.0, 0.0, 0.0, 0.0);	//Black
	glEnable(GL_DEPTH_TEST);
	glShadeModel(GL_SMOOTH);

	makeStripeImage();
	//이건 그대로 가져다 쓰면 됨.
	glPixelStorei(GL_UNPACK_ALIGNMENT, 1);

#ifdef GL_VERSION_1_1
	// 텍스처 번호 assign!
	glGenTextures(1, &texName);
	glBindTexture(GL_TEXTURE_1D, texName);
#endif // GL_VERSION_1_1
	glTexParameteri(GL_PROXY_TEXTURE_1D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	//glTexParameteri(GL_PROXY_TEXTURE_1D, GL_TEXTURE_WRAP_T, GL_REPEAT);	// 만약 2D 라면 이거까지 써야 함.
	glTexParameteri(GL_PROXY_TEXTURE_1D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	glTexParameteri(GL_PROXY_TEXTURE_1D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
#ifdef GL_VERSION_1_1
	glTexImage1D(GL_TEXTURE_1D, 0, GL_RGBA, stripeImageWidth, 0, GL_RGBA, GL_UNSIGNED_BYTE, stripeImage);
#else
	glTexImage1D(GL_TEXTURE_1D, 0, 4, stripeImageWidth, 0, GL_RGBA, GL_UNSIGNED_BYTE, stripeImage);
#endif // GL_VERSION_1_1
	// 여기까지 오는 순간, Texture는 GPU로 감. 고로, stripeImage는 free 시켜줘야함.

	/////////////////////////// 잘 안 쓰임... ///////////////////////////////////
	glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);
	currentCoeff = xequalzero;
	currentGenMode = GL_OBJECT_LINEAR;
	currentPlane = GL_OBJECT_PLANE;
	glTexGeni(GL_S, GL_TEXTURE_GEN_MODE, currentGenMode);
	glTexGenfv(GL_S, currentPlane, currentCoeff);
	/////////////////////////////////////////////////////////////////////////////

	glEnable(GL_TEXTURE_GEN_S);
	glEnable(GL_TEXTURE_1D);	// 1D 텍스처를 쓰기 위해 Enable 시켜준 것.
	glEnable(GL_CULL_FACE);		// 앞에만 보이게 만드는 것.
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glEnable(GL_AUTO_NORMAL);
	glEnable(GL_NORMALIZE);
	glFrontFace(GL_CW);
	glCullFace(GL_BACK);
	glMaterialf(GL_FRONT, GL_SHININESS, 64.0);

	return;
}

void display(void) {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glPushMatrix();
	glRotatef(45.0, 0.0, 0.0, 1.0);	//z축으로 45도 회전
#ifdef GL_VERSION_1_1
	glBindTexture(GL_TEXTURE_1D, texName);
#endif // GL_VERSION_1_1
	glutSolidTeapot(2.0);
	glPopMatrix();
	glFlush();

	return;
}

void reshape(int w, int h) {
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	if (w <= h)
		glOrtho(-3.5, 3.5, -3.5*(GLfloat)h / (GLfloat)w, 3.5*(GLfloat)h / (GLfloat)w, -3.5, 3.5);
	else
		glOrtho(-3.5*(GLfloat)w / (GLfloat)h, 3.5*(GLfloat)w / (GLfloat)h, -3.5, 3.5, -3.5, 3.5);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	
	return;
}
void keyboard(unsigned char key, int x, int y) {
	switch (key) {
	case 'e':
	case 'E':
		currentGenMode = GL_EYE_LINEAR;
		currentPlane = GL_EYE_PLANE;
		glTexGeni(GL_S, GL_TEXTURE_GEN_MODE, currentGenMode);
		glTexGenfv(GL_S, currentPlane, currentCoeff);
		glutPostRedisplay();
		break;
	case 'o':
	case 'O':
		currentGenMode = GL_OBJECT_LINEAR;
		currentPlane = GL_OBJECT_PLANE;
		glTexGeni(GL_S, GL_TEXTURE_GEN_MODE, currentGenMode);
		glTexGenfv(GL_S, currentPlane, currentCoeff);
		glutPostRedisplay();
		break;
	case 's':
	case 'S':
		currentCoeff = slanted;
		glTexGenfv(GL_S, currentPlane, currentCoeff);
		glutPostRedisplay();
	case 'x':
	case 'X':
		currentCoeff = xequalzero;
		glTexGenfv(GL_S, currentPlane, currentCoeff);
		glutPostRedisplay();
	case 27:
		exit(0);
		break;
	default:
		break;
	}

	return;
}