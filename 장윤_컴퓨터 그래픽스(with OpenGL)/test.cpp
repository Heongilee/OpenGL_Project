#include <gl/glut.h>

///////////////////////////////////////////////////////////////////////////////
//							[ 프로젝트 속성 -> 링커 -> 입력 -> 추가 종속성 ]
/*
opengl32.lib
glu32.lib
freeglut.lib
*/
//
///////////////////////////////////////////////////////////////////////////////
void drawAxes() {	//축 그리기
	glBegin(GL_LINES);
		glVertex2f(0, -0.2);
		glVertex2f(0, 0.2);
	glEnd();
	glBegin(GL_LINES);
		glVertex2f(-0.2, 0);
		glVertex2f(0.2, 0);
	glEnd();
	return;
}
void init() {
	// void glClearColor (GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
	glClearColor(0.0, 0.0, 0.0, 1.0);	// 검정 색상의 불투명 색상으로 state 초기화.

	glColor3f(1.0, 1.0, 1.0);			// white

	glMatrixMode(GL_MODELVIEW);		// GL_PROJECTION은 카메라를 뜻함.

	glLoadIdentity();					// Identity 행렬을 불러들임.
	glTranslatef(1.0, 2.0, 3.0);		// 변환
	glRotatef(30.0, 0.0, 0.0, 1.0);		// 회전 (z축 기준 30도 돌리기)
	glTranslatef(-1.0, -2.0, -3.0);		// 원위치

	glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
	drawAxes();
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
	glutCreateWindow("15012970 / 이헌기");

	// call mydisplay() function
	// FGAPI void    FGAPIENTRY glutDisplayFunc( void (* callback)( void ) );
	glutDisplayFunc(mydisplay);

	// call init() function
	init();

	glutMainLoop();
	return 0;
}