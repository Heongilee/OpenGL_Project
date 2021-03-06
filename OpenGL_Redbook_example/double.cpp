#include "Myheaders.h"

static GLfloat spin = 0.0;

void display(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	glPushMatrix();
	glRotatef(spin, 0.0, 0.0, 1.0);
	glColor3f(1.0, 1.0, 1.0);
	glRectf(-25.0, -25.0, 25.0, 25.0);
	glPopMatrix();

	glutSwapBuffers();
	return;
}

void spinDisplay(void) {
	spin += 2.0;
	if (spin > 360.0) {
		spin = spin - 360.0;
	}
	glutPostRedisplay();

	return;
}

void init() {
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glShadeModel(GL_FLAT);

	return;
}

void reshape(int w, int h) {
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-50.0, 50.0, -50.0, 50.0, -1.0, 1.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	return;
}

void mouse(int button, int state, int x, int y) {
	switch (button) {
	case GLUT_LEFT_BUTTON:
		// glutIdleFunc() : callback함수를 아무짓도 안 할때 계속 refresh한다는 뜻임.
		if (state == GLUT_DOWN) glutIdleFunc(spinDisplay);
		break;
	case GLUT_MIDDLE_BUTTON:
		break;
	case GLUT_RIGHT_BUTTON:
		if (state == GLUT_DOWN) glutIdleFunc(NULL);
		break;
	default:
		break;
	}

	return;
}