#include "MyHeaders.h"

void makeCheckImages(void) {
	int i, j, c;
	for (i = 0; i < checkImageHeight; i++) {
		for (j = 0; j < checkImageWidth; j++) {
			c = ((((i & 0x8) == 0) ^ ((j & 0x8)) == 0)) * 255;
			checkImage[i][j][0] = (GLubyte)c;		// R
			checkImage[i][j][1] = (GLubyte)c;		// G
			checkImage[i][j][2] = (GLubyte)c;		// B
			checkImage[i][j][3] = (GLubyte)255;	// A
			c = ((((i & 0x4) == 0) ^ ((j & 0x4)) == 0)) * 255;
			subImage[i][j][0] = (GLubyte)c;			// R
			subImage[i][j][1] = (GLubyte)0;			// G
			subImage[i][j][2] = (GLubyte)0;			// B
			subImage[i][j][3] = (GLubyte)255;		// A
		}
	}
	return;
}

void init(void) {
	glClearColor(0.0, 0.0, 0.0, 0.0);	//Black
	glShadeModel(GL_FLAT);
	glEnable(GL_DEPTH_TEST);

	makeCheckImages();
	glPixelStorei(GL_UNPACK_ALIGNMENT, 1);

	// 텍스처 1개를 가져올 것임.
	glGenTextures(1, &texName);
	glBindTexture(GL_TEXTURE_2D, texName);

	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, checkImageWidth, checkImageHeight, 0, GL_RGBA, GL_UNSIGNED_BYTE, checkImage);

	return;
}

void display(void) {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glEnable(GL_TEXTURE_2D);
	glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_DECAL);
	glBindTexture(GL_TEXTURE_2D, texName);
	glBegin(GL_QUADS);
	glTexCoord2f(0.0, 0.0); glVertex3f(-2.0, -1.0, 0.0);
	glTexCoord2f(0.0, 1.0); glVertex3f(-2.0, 1.0, 0.0);
	glTexCoord2f(1.0, 1.0); glVertex3f(0.0, 1.0, 0.0);
	glTexCoord2f(1.0, 0.0); glVertex3f(0.0, -1.0, 0.0);
	//glEnd();
	//glBegin(GL_QUADS);
	glTexCoord2f(0.0, 0.0); glVertex3f(1.0, -1.0, 0.0);
	glTexCoord2f(0.0, 1.0); glVertex3f(1.0, 1.0, 0.0);
	glTexCoord2f(1.0, 1.0); glVertex3f(2.41421, 1.0, -1.41421);
	glTexCoord2f(1.0, 0.0); glVertex3f(2.41421, -1.0, -1.41421);
	glEnd();
	glFlush();
	glDisable(GL_TEXTURE_2D);
}

void reshape(int w, int h) {
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(60.0, (GLfloat)w / (GLfloat)h, 1.0, 30.0);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glTranslatef(0.0, 0.0, -3.6);
	return;
}

void keyboard(unsigned char key, int x, int y) {
	switch (key) {
	case 's':
	case 'S':
		glBindTexture(GL_TEXTURE_2D, texName);
		glTexSubImage2D(GL_TEXTURE_2D, 0, 12, 44, subImageWidth, subImageHeight, GL_RGBA, GL_UNSIGNED_BYTE, subImage);
		glutPostRedisplay();
		break;
	case 'r':
	case 'R':
		glBindTexture(GL_TEXTURE_2D, texName);
		glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, checkImageWidth, checkImageHeight, 0, GL_RGBA, GL_UNSIGNED_BYTE, checkImage);
		glutPostRedisplay();
		break;
	case 27:
		exit(0);
		break;
	}
}