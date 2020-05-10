//#include "Myheaders.h"
//
//void init() {
//	glClearColor(0.0, 0.0, 0.0, 0.0);
//	glShadeModel(GL_FLAT);
//
//	return;
//}
//
//void display() {
//	glClear(GL_COLOR_BUFFER_BIT);
//	glColor3f(1.0, 1.0, 1.0);
//	glLoadIdentity();			// clear the matrix
//	gluLookAt(0.0, 0.0, 5.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
//	glScalef(1.0, 2.0, 1.0);	// modeling transformation
//	glutWireCube(1.0);
//	glFlush();
//
//	return;
//}
//
//void reshape(int w, int h) {
//	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	glFrustum(-1.0, 1.0, -1.0, 1.0, 1.5, 20.0);
//	glMatrixMode(GL_MODELVIEW);
//
//	return;
//}
//
//void keyboard(unsigned char key, int x, int y) {
//	switch (key) {
//	case 27:	// esc
//		exit(0);
//		break;
//	}
//
//	return;
//}