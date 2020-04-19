#include <stdio.h>
#include <gl/glut.h>

GLfloat red = 1.0;
GLfloat green = 1.0;
GLfloat blue = 1.0;
int mouseCurPositionX;
int mouseCurPositionY;
int mouseCurButton;
int mouseCurState;
bool startMovement;

void mydisplay() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(red, green, blue);

	// �ﰢ��
	glBegin(GL_POLYGON);
		glVertex2f(-25.0, -25.0);
		glVertex2f(0.0, -25.0);
		glVertex2f(-25.0, 0.0);
	glEnd();

	// �簢��
	glBegin(GL_POLYGON);
		glVertex2f(12.5, -12.5);
		glVertex2f(12.5, -37.5);
		glVertex2f(37.5, -37.5);
		glVertex2f(37.5, -12.5);
	glEnd();

	// ������
	glBegin(GL_POLYGON);
		glVertex2f(25.0, 37.5);
		glVertex2f(12.5, 25.0);
		glVertex2f(18.75, 12.5);
		glVertex2f(31.25, 12.5);
		glVertex2f(37.5, 25.0);
	glEnd();

	glFlush();
	return;
}

void Init() {
	glClearColor(255.0, 228.0, 0.0, 1.0);		// ���� (RGBA : ������, ������) �ʱ�ȭ

	// ī�޶� ����
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	gluOrtho2D(-50.0, 50.0, -50.0, 50.0);	// (-50, -50), (50, 50) ��, 100x100 ũ���� view ����.
	return;
}

void myMouseMotion(int x, int y) {
	printf("x = %d, y = %d\n", x, y);
	// left
	if ((x > 0 || x == 0) && (x < 250 || x == 250)) {
		red = 0.0;
		green = 1.0;
		blue = 0.0;
	}

	// right
	if ((x > 250 || x == 250) && (x < 500 || x == 500)) {
		red = 1.0;
		green = 0.0;
		blue = 0.0;
	}

	glutPostRedisplay();
	return;
}

void myMouse(int button, int state, int x, int y) {
	// ���� ��ư�� ����.
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
		if ((x > 0 || x == 0) && (x <  250|| x == 250)) {
			red = 0.0;
			green = 0.0;
			blue = 1.0;
		}
		if ((x > 250 || x == 250) && (x < 500 || x == 500)) {
			red = 1.0;
			green = 0.0;
			blue = 0.0;
		}
		glutPostRedisplay();	// refresh
	}
	// ������ ��ư�� ����.
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN) {
		if ((y > 0 || y == 0) && (y < 250 || y == 250)) {
			red = 1.0;
			green = 1.0;
			blue = 1.0;
		}
		if ((y > 250 || y == 250) && (y < 500 || y == 500)) {
			red = 0.0;
			green = 0.0;
			blue = 0.0;
		}
		glutPostRedisplay();	// refresh
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_UP) {
		startMovement = GL_FALSE;
	}
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_UP) {
		startMovement = GL_FALSE;
	}

	mouseCurPositionX = x;
	mouseCurPositionY = y;
	mouseCurButton = button;
	mouseCurState = state;
	//printf("mouseCurPositionX is %d\n mouseCurPositionY is %d\n mouseCurButton is %d\nmouseCurState is %d\nstartMovement is %d\n", mouseCurPositionX, mouseCurPositionY, mouseCurButton, mouseCurState, startMovement);
	return;
}
int main(int argc, char** argv) {
	// glut �ʱ�ȭ
	glutInit(&argc, argv);
	
	// ������ ���� ����
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

	// ������ ������ ����
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("15012970 / �����");

	// ������ ���ۿ� Input
	glutDisplayFunc(mydisplay);
	Init();

	// ���콺 �ݹ� ���.
	glutMouseFunc(myMouse);
	glutMotionFunc(myMouseMotion);

	//�ʴ� 60�� refresh
	glutMainLoop();	

	return 0;
}