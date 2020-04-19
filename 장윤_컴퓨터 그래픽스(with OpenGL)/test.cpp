#include <gl/glut.h>

///////////////////////////////////////////////////////////////////////////////
//							[ ������Ʈ �Ӽ� -> ��Ŀ -> �Է� -> �߰� ���Ӽ� ]
//
//		opengl32.lib
//		glu32.lib
//		freeglut.lib
//
///////////////////////////////////////////////////////////////////////////////

void init() {
	// void glClearColor (GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
	glClearColor(0.0, 0.0, 0.0, 1.0);	// ���� ������ ������ �������� state �ʱ�ȭ.

	glColor3f(1.0, 1.0, 1.0);			// white

	glMatrixMode(GL_PROJECTION);		// GL_PROJECTION�� ī�޶� ����.
	glLoadIdentity();					// Identity ����� �ҷ�����.

	//void gluOrtho2D (GLdouble left, GLdouble right, GLdouble bottom, GLdouble top);
	gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
	return;
}

void mydisplay() {
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POLYGON);
		glVertex2f(-0.5, -0.5);
		glVertex2f(-0.5, 0.5);
		glVertex2f(0.5, 0.5);
		glVertex2f(0.5, -0.5);
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
	glutCreateWindow("15012970 / �����");

	// call mydisplay() function
	// FGAPI void    FGAPIENTRY glutDisplayFunc( void (* callback)( void ) );
	glutDisplayFunc(mydisplay);

	// call init() function
	init();

	glutMainLoop();
	return 0;
}