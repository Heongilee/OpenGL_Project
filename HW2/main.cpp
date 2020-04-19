#include <gl/glut.h>

// HW2 - (a)
void init() {
	// void glClearColor (GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
	glClearColor(0.0, 0.0, 0.0, 1.0);	// 검정 색상의 불투명 색상으로 state 초기화.

	//glColor3f(255.0, 0.0, 221.0);			// white

	glMatrixMode(GL_PROJECTION);		// GL_PROJECTION은 카메라를 뜻함.
	glLoadIdentity();					// Identity 행렬을 불러들임.

	//void gluOrtho2D (GLdouble left, GLdouble right, GLdouble bottom, GLdouble top);
	gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
	return;
}

void mydisplay() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(255.0, 0.0, 221.0);			// white
	glBegin(GL_POLYGON);
	glVertex2f(-0.5, 0.5);
	glVertex2f(0.0, 0.5);
	glVertex2f(0.0, -0.5);
	glVertex2f(-0.5, -0.5);

	glEnd();

	glColor3f(1.0, 1.0, 1.0);			// white
	glBegin(GL_TRIANGLES);
	glVertex2f(0.1, 0.5);
	glVertex2f(0.5, 0.5);
	glVertex2f(0.1, -0.5);
	glEnd();

	glFlush();

	return;
}

int main(int argc, char** argv) {
	// glut init
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

	// actual window size
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(0, 0);

	// create window with title "simple"
	glutCreateWindow("15012970 / 이헌기");

	// call mydisplay() function
	glutDisplayFunc(mydisplay);

	init();

	glutMainLoop();
	return 0;
}