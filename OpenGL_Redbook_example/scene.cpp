//#include "Myheaders.h"
//
//void init() {
//	GLfloat light_ambient[] = { 0.0, 0.0, 0.0, 1.0 };	//은은하게 보이는 빛이 없다는 뜻.
//	GLfloat light_diffuse[] = { 1.0, 1.0, 1.0, 1.0 };
//	GLfloat light_specular[] = { 1.0, 1.0, 1.0, 1.0 };
//	// light_position is not default value...
//	GLfloat light_position[] = { 1.0, 1.0, 1.0, 0.0 };	// (1, 1, 1) 위치에 빛을 놨다.
//
//	glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient);
//	glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);
//	glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
//	glLightfv(GL_LIGHT0, GL_POSITION, light_position);
//
//	glEnable(GL_LIGHTING);			// 빛을 키겠습니다.
//	glEnable(GL_LIGHT0);			// 0번 빛을 키겠습니다.
//	glEnable(GL_DEPTH_TEST);
//
//	return;
//}
//
//void display(){
//	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//
//	glPushMatrix();
//	glRotatef(20.0, 1.0, 0.0, 0.0);
//
//	glPushMatrix();
//	glTranslatef(-0.75, 0.5, 0.0);
//	glRotatef(90.0, 1.0, 0.0, 0.0);
//	glutSolidTorus(0.275, 0.85, 15, 15);
//	glPopMatrix();
//
//	glPushMatrix();
//	glTranslatef(-0.75, -0.5, 0.0);
//	glRotatef(270.0, 1.0, 0.0, 0.0);
//	glutSolidCone(1.0, 2.0, 15, 15);
//	glPopMatrix();
//
//	glPushMatrix();
//	glTranslatef(0.75, 0.0, -1.0);
//	glutSolidSphere(1.0, 15, 15);
//	glPopMatrix();
//
//	glPopMatrix();
//	glFlush();
//
//	return;
//}
//
//void reshape(int w, int h) {
//	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//
//	// 카메라 뷰 셋팅
//	if (w <= h) {
//		glOrtho(-2.5, 2.5, -2.5 * (GLfloat)h / (GLfloat)w, 2.5 * (GLfloat)h / (GLfloat)w, -10.0, 10.0);
//	}
//	else {
//		glOrtho(-2.5 * (GLfloat)h / (GLfloat)w, 2.5 * (GLfloat)h / (GLfloat)w, -2.5, 2.5, -10.0, 10.0);
//	}
//
//	glMatrixMode(GL_MODELVIEW);
//	glLoadIdentity();
//
//	return;
//}
//
//void keyboard(unsigned char key, int x, int y) {
//	switch (key) {
//	case 27:
//		exit(0);
//		break;
//	case 48:
//		glDisable(GL_LIGHT0);
//		break;
//	case 49:
//		glEnable(GL_LIGHT0);
//		break;
//	default:
//		break;
//	}
//	
//	glutPostRedisplay();
//	return;
//}