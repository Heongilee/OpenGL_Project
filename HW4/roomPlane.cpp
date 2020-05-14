#include "Myheaders.h"
#include "MyFuncDecl.h"

void drawDoor(void) {
	GLfloat doorSize[3] = { 15.0, 2.0, 50.0 };

	// 문
	glPushMatrix();
	glTranslatef(-63.0, -38.0, 0.0);
	glRotatef(170.0, 0, 0, -1);
	glColor3ub(153, 112, 0);
		glBegin(GL_POLYGON);
		glVertex3f(-1 * (doorSize[0] / 2.0), -1 * (doorSize[1] / 2.0), -0.1);
		glVertex3f(1 * (doorSize[0] / 2.0), -1 * (doorSize[1] / 2.0), -0.1);
		glVertex3f(-1 * (doorSize[0] / 2.0), 1 * (doorSize[1] / 2.0), -0.1);
		glEnd();
		glBegin(GL_POLYGON);
		glVertex3f(-1 * (doorSize[0] / 2.0), 1 * (doorSize[1] / 2.0), -0.1);
		glVertex3f(1 * (doorSize[0] / 2.0), -1 * (doorSize[1] / 2.0), -0.1);
		glVertex3f(1 * (doorSize[0] / 2.0), 1 * (doorSize[1] / 2.0), -0.1);
		glEnd();
		glBegin(GL_POLYGON);
		glVertex3f(-1 * (doorSize[0] / 2.0), -1 * (doorSize[1] / 2.0), -0.1);
		glVertex3f(1 * (doorSize[0] / 2.0), -1 * (doorSize[1] / 2.0), -0.1);
		glVertex3f(-1 * (doorSize[0] / 2.0), -1 * (doorSize[1] / 2.0), -1 * (doorSize[2] + 0.1));
		glEnd();
		glBegin(GL_POLYGON);
		glVertex3f(-1 * (doorSize[0] / 2.0), -1 * (doorSize[1] / 2.0), -1 * (doorSize[2] + 0.1));
		glVertex3f(1 * (doorSize[0] / 2.0), -1 * (doorSize[1] / 2.0), -0.1);
		glVertex3f(1 * (doorSize[0] / 2.0), -1 * (doorSize[1] / 2.0), -1 * (doorSize[2] + 0.1));
		glEnd();
		glBegin(GL_POLYGON);
		glVertex3f(-1 * (doorSize[0] / 2.0), 1 * (doorSize[1] / 2.0), -0.1);
		glVertex3f(1 * (doorSize[0] / 2.0), 1 * (doorSize[1] / 2.0), -0.1);
		glVertex3f(-1 * (doorSize[0] / 2.0), 1 * (doorSize[1] / 2.0), -1 * (doorSize[2] + 0.1));
		glEnd();
		glBegin(GL_POLYGON);
		glVertex3f(-1 * (doorSize[0] / 2.0), 1 * (doorSize[1] / 2.0), -1 * (doorSize[2] + 0.1));
		glVertex3f(1 * (doorSize[0] / 2.0), 1 * (doorSize[1] / 2.0), -0.1);
		glVertex3f(1 * (doorSize[0] / 2.0), 1 * (doorSize[1] / 2.0), -1 * (doorSize[2] + 0.1));
		glEnd();
		glBegin(GL_POLYGON);
		glVertex3f(1 * (doorSize[0] / 2.0), -1 * (doorSize[1] / 2.0), -1 * (doorSize[2] + 0.1));
		glVertex3f(1 * (doorSize[0] / 2.0), -1 * (doorSize[1] / 2.0), -0.1);
		glVertex3f(1 * (doorSize[0] / 2.0), 1 * (doorSize[1] / 2.0), -0.1);
		glEnd();
		glBegin(GL_POLYGON);
		glVertex3f(1 * (doorSize[0] / 2.0), -1 * (doorSize[1] / 2.0), -1 * (doorSize[2] + 0.1));
		glVertex3f(1 * (doorSize[0] / 2.0), 1 * (doorSize[1] / 2.0), -0.1);
		glVertex3f(1 * (doorSize[0] / 2.0), 1 * (doorSize[1] / 2.0), -1 * (doorSize[2] + 0.1));
		glEnd();
		glBegin(GL_POLYGON);
		glVertex3f(-1 * (doorSize[0] / 2.0), -1 * (doorSize[1] / 2.0), -1 * (doorSize[2] + 0.1));
		glVertex3f(-1 * (doorSize[0] / 2.0), -1 * (doorSize[1] / 2.0), -0.1);
		glVertex3f(-1 * (doorSize[0] / 2.0), 1 * (doorSize[1] / 2.0), -0.1);
		glEnd();
		glBegin(GL_POLYGON);
		glVertex3f(-1 * (doorSize[0] / 2.0), -1 * (doorSize[1] / 2.0), -1 * (doorSize[2] + 0.1));
		glVertex3f(-1 * (doorSize[0] / 2.0), 1 * (doorSize[1] / 2.0), -0.1);
		glVertex3f(-1 * (doorSize[0] / 2.0), 1 * (doorSize[1] / 2.0), -1 * (doorSize[2] + 0.1));
		glEnd();
		glBegin(GL_POLYGON);
		glVertex3f(-1 * (doorSize[0] / 2.0), -1 * (doorSize[1] / 2.0), -1 * (doorSize[2] + 0.1));
		glVertex3f(1 * (doorSize[0] / 2.0), -1 * (doorSize[1] / 2.0), -1 * (doorSize[2] + 0.1));
		glVertex3f(-1 * (doorSize[0] / 2.0), 1 * (doorSize[1] / 2.0), -1 * (doorSize[2] + 0.1));
		glEnd();
		glBegin(GL_POLYGON);
		glVertex3f(-1 * (doorSize[0] / 2.0), 1 * (doorSize[1] / 2.0), -1 * (doorSize[2] + 0.1));
		glVertex3f(1 * (doorSize[0] / 2.0), -1 * (doorSize[1] / 2.0), -1 * (doorSize[2] + 0.1));
		glVertex3f(1 * (doorSize[0] / 2.0), 1 * (doorSize[1] / 2.0), -1 * (doorSize[2] + 0.1));
		glEnd();
			// 손잡이
			glPushMatrix();
			glColor3ub(166, 166, 166);
			glTranslatef(-6.5, -2.5, -25.1);
			glutSolidSphere(2.0, 15, 15);
			glPopMatrix();
	glPopMatrix();
	
	return;
}
void drawWall_1(GLfloat x, GLfloat y, GLfloat z, GLfloat px, GLfloat py, GLfloat pz, GLubyte red, GLubyte green, GLubyte blue) {
	// (x, y, z) 크기 관련 파라미터
	// (px, py, pz) 위치관련 파라미터
	// (red, green, blue) 색상 관련 파라미터

	glPushMatrix();
	glTranslatef(px, py, pz);
	glColor3ub(red, green, blue);
	// >>>>>>>>>>>>>>>
	glBegin(GL_POLYGON);
	glVertex3f(-1 * (x / 2.0), -1 * (y / 2.0), -0.1);
	glVertex3f(1 * (x / 2.0), -1 * (y / 2.0), -0.1);
	glVertex3f(-1 * (x / 2.0), 1 * (y / 2.0), -0.1);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(-1 * (x / 2.0), 1 * (y / 2.0), -0.1);
	glVertex3f(1 * (x / 2.0), -1 * (y / 2.0), -0.1);
	glVertex3f(1 * (x / 2.0), 1 * (y / 2.0), -0.1);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(-1 * (x / 2.0), -1 * (y / 2.0), -0.1);
	glVertex3f(1 * (x / 2.0), -1 * (y / 2.0), -0.1);
	glVertex3f(-1 * (x / 2.0), -1 * (y / 2.0), -1 * (z + 0.1));
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(-1 * (x / 2.0), -1 * (y / 2.0), -1 * (z + 0.1));
	glVertex3f(1 * (x / 2.0), -1 * (y / 2.0), -0.1);
	glVertex3f(1 * (x / 2.0), -1 * (y / 2.0), -1 * (z + 0.1));
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(-1 * (x / 2.0), 1 * (y / 2.0), -0.1);
	glVertex3f(1 * (x / 2.0), 1 * (y / 2.0), -0.1);
	glVertex3f(-1 * (x / 2.0), 1 * (y / 2.0), -1 * (z + 0.1));
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(-1 * (x / 2.0), 1 * (y / 2.0), -1 * (z + 0.1));
	glVertex3f(1 * (x / 2.0), 1 * (y / 2.0), -0.1);
	glVertex3f(1 * (x / 2.0), 1 * (y / 2.0), -1 * (z + 0.1));
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(1 * (x / 2.0), -1 * (y / 2.0), -1 * (z + 0.1));
	glVertex3f(1 * (x / 2.0), -1 * (y / 2.0), -0.1);
	glVertex3f(1 * (x / 2.0), 1 * (y / 2.0), -0.1);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(1 * (x / 2.0), -1 * (y / 2.0), -1 * (z + 0.1));
	glVertex3f(1 * (x / 2.0), 1 * (y / 2.0), -0.1);
	glVertex3f(1 * (x / 2.0), 1 * (y / 2.0), -1 * (z + 0.1));
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(-1 * (x / 2.0), -1 * (y / 2.0), -1 * (z + 0.1));
	glVertex3f(-1 * (x / 2.0), -1 * (y / 2.0), -0.1);
	glVertex3f(-1 * (x / 2.0), 1 * (y / 2.0), -0.1);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(-1 * (x / 2.0), -1 * (y / 2.0), -1 * (z + 0.1));
	glVertex3f(-1 * (x / 2.0), 1 * (y / 2.0), -0.1);
	glVertex3f(-1 * (x / 2.0), 1 * (y / 2.0), -1 * (z + 0.1));
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(-1 * (x / 2.0), -1 * (y / 2.0), -1 * (z + 0.1));
	glVertex3f(1 * (x / 2.0), -1 * (y / 2.0), -1 * (z + 0.1));
	glVertex3f(-1 * (x / 2.0), 1 * (y / 2.0), -1 * (z + 0.1));
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(-1 * (x / 2.0), 1 * (y / 2.0), -1 * (z + 0.1));
	glVertex3f(1 * (x / 2.0), -1 * (y / 2.0), -1 * (z + 0.1));
	glVertex3f(1 * (x / 2.0), 1 * (y / 2.0), -1 * (z + 0.1));
	glEnd();
	// <<<<<<<<<<<<<<<<<<<<<<
	glPopMatrix();
	void;
}
void display(void) {
	reshape(my_Window_width, my_Window_height);	// 줌 인/아웃을 위해 한번 더 호출함.
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glPushMatrix();
	//glRotatef(30.0, 0.0, 1.0, 1.0);
	glRotatef(spin, 0.0, 0.0, 1.0);
	glColor3ub(99, 58, 0);
	glRectf(-70.0, -40.0, 70.0, 40.0);

	drawDoor();
	// 가로 벽
	drawWall_1(12.0, 2.0, 50.0, -64.0, -21.5, 0.0, 53, 53, 53);
	drawWall_1(100.0, 2.0, 50.0, -20.0, 40.0, 0.0, 53, 53, 53);
	drawWall_1(10.0, 2.0, 50.0, -20.0, 40.0, 0.0, 53, 53, 53);
	drawWall_1(40.0, 2.0, 50.0, 50.0, 30.0, 0.0, 53, 53, 53);
	// 붙박이장쪽 천장
	drawWall_1(12.0, 62.0, 2.0, -64.0, 10.0, -50.0, 53, 53, 53);
		glPushMatrix();
		// 세로 벽
		glRotatef(90.0, 0.0, 0.0, 1.0);
		drawWall_1(62.0, 2.0, 50.0, 8.0, 70.0, 0.0, 53, 53, 53);	//붙박이장쪽 바깥벽
		drawWall_1(14.5, 2.0, 50.0, -15.0, 57.0, 0.0, 168, 130, 25);	// 붙박이장 문 1
		drawWall_1(5.0, 2.0, 50.0, -10.0, 56.5, 0.0, 250, 244, 192);		// 문에 있는 타일
		drawWall_1(0.53, 0.53, 50.0, -7.0, 56.0, 0.0, 0, 0, 0);		// 구분 선
		drawWall_1(14.5, 2.0, 50.0, 0.0, 57.0, 0.0, 168, 130, 25);		// 붙박이장 문 2
		drawWall_1(0.53, 0.53, 50.0, 10.0, 56.0, 0.0, 0, 0, 0);		// 구분 선
		drawWall_1(14.5, 2.0, 50.0, 15.0, 57.0, 0.0, 168, 130, 25);		// 붙박이장 문 3
		drawWall_1(14.5, 2.0, 50.0, 30.0, 57.0, 0.0, 168, 130, 25);		// 붙박이장 문 4
		drawWall_1(0.53, 0.53, 50.0, 27.0, 56.0, 0.0, 0, 0, 0);		// 구분 선
		drawWall_1(5.0, 2.0, 50.0, 30.0, 56.5, 0.0, 250, 244, 192);			// 문에 있는 타일
		drawWall_1(70.0, 2.0, 12.5, -5.0, -70.0, 0.0, 53, 53, 53);		//창가쪽 밑의 벽
		drawWall_1(10.0, 2.0, 50.0, 35.0, -30.0, 0.0, 53, 53, 53);
		glPopMatrix();
		// 침대 머리 부분
		glPushMatrix();
		drawWall_1(1.0, 1.0, 35.0, 68.0, -39.0, 0.0, 153, 56, 0);
		for (int i = 1; i <= 5; i++) drawWall_1(1.0, 1.0, 24.0, 68.0 - (3.0 * i), -39.0, -10.0, 153, 56, 0);
		drawWall_1(1.0, 1.0, 35.0, 50.0, -39.0, 0.0, 153, 56, 0);
			glPushMatrix();
			glRotatef(90.0, 0, 1, 0);
			drawWall_1(1.0, 1.0, 18.0, 34.2, -39.0, 68.0, 153, 56, 0);
			drawWall_1(1.0, 1.0, 18.0, 10.0, -39.0, 68.0, 153, 56, 0);
			glPopMatrix();
		// 침대 다리 부분
		drawWall_1(1.0, 1.0, 15.0, 68.0, 15.0, 0.0, 153, 56, 0);
		drawWall_1(1.0, 1.0, 15.0, 50.0, 15.0, 0.0, 153, 56, 0);
			// 침대 몸통 부분
			glPushMatrix();
			glRotatef(90.0, 0, 0, 1);
			drawWall_1(54.0, 2.0, 10.0, -11.5, -50.0, -5.0, 153, 56, 0);
			drawWall_1(54.0, 2.0, 10.0, -11.5, -68.0, -5.0, 153, 56, 0);
			glRotatef(-90.0, 0, 0, 1);
			drawWall_1(18.0, 2.0, 10.0, 59.0, -39.0, -5.0, 153, 56, 0);
			drawWall_1(18.0, 2.0, 10.0, 59.0, 15.0, -5.0, 153, 56, 0);
			glPopMatrix();
		// 매트리스
		drawWall_1(18.0, 52.0, 10.0, 59.0, -12.0, -8.0, 103, 153, 255);
		glPopMatrix();
		// 창문 프레임
		glPushMatrix();
		drawWall_1(3.0, 2.0, 39.0, 71.0, -39.0, -12.5, 255, 255, 228);
		drawWall_1(3.0, 2.0, 39.0, 71.0, 13.0, -12.5, 255, 255, 228);
		drawWall_1(3.0, 2.0, 39.0, 71.0, 29.0, -12.5, 255, 255, 228);
		drawWall_1(3.0, 70.0, 2.0, 71.0, -5.0, -12.5, 255, 255, 228);
		drawWall_1(3.0, 70.0, 2.0, 71.0, -5.0, -50.0, 255, 255, 228);
		// 창문은 퍼런색
		drawWall_1(1.0, 69.0, 37.5, 71.0, -5.0, -12.5, 178, 235, 244);
		glPopMatrix();
	glPopMatrix();

	glutSwapBuffers();
	return;
}

void spinDisplay(void) {
	spin += 0.5;
	if (spin > 360.0) {
		spin = spin - 360.0;
	}
	glutPostRedisplay();

	return;
}

void init() {
	glClearColor(0.83, 0.83, 0.83, 0.0);
	glShadeModel(GL_SMOOTH);

	glEnable(GL_DEPTH_TEST);
	return;
}

void reshape(int w, int h) {
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	my_Window_width = w;
	my_Window_height = h;

	glLoadIdentity();
	gluPerspective(60.0, (GLsizei)w / (GLsizei)h, 0.1, 1000.0);
	//gluLookAt(0.0, -30.0, -150.0, 0.0, 0.0, 0.0, 0.0, 5.0, -1.0);	// 카메라 위치
	if(camera_angle_state == 0)
		gluLookAt(0.0, zoom, zoom / 5.0, 0.0, 0.0, 0.0, 0.0, 1.0, -5.0);	// 카메라 위치
	else if (camera_angle_state == 1)
		gluLookAt(0.0, 0.0, zoom, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);	// 카메라 위치

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	return;
}

void mouse(int button, int state, int x, int y) {
	switch (button) {
	// 왼쪽 마우스 버튼 : 회전
	case GLUT_LEFT_BUTTON:
		// glutIdleFunc() : callback함수를 아무짓도 안 할때 계속 refresh한다는 뜻임.
		if (state == GLUT_DOWN && mouse_leftClick_state == 0) {
			printf("%d\n", mouse_leftClick_state);
			mouse_leftClick_state = 1;
			glutIdleFunc(NULL);
		}
		else if (state == GLUT_DOWN && mouse_leftClick_state == 1) {
			printf("%d\n", mouse_leftClick_state);
			mouse_leftClick_state = 0;
			glutIdleFunc(spinDisplay);
		}
		break;
	case GLUT_MIDDLE_BUTTON:
		if (state == GLUT_DOWN) {
			printf("가운데 버튼 눌림.\n");
			++camera_angle_state %= 2;
		}
		break;
	// 오른쪽 마우스 버튼 : 줌 인/아웃
	case GLUT_RIGHT_BUTTON:
		if (state == GLUT_DOWN && mouse_rightClick_state == 0) {	//1.5배 줌
			printf("눌림. %d\n", mouse_rightClick_state);
			++mouse_rightClick_state %= 3;
			zoom /= 1.5;
		}
		else if (state == GLUT_DOWN && mouse_rightClick_state == 1) {	//2배 줌
			printf("눌림. %d\n", mouse_rightClick_state);
			++mouse_rightClick_state %= 3;
			zoom = (zoom * 1.5) / 2.0;
		}
		else if (state == GLUT_DOWN && mouse_rightClick_state == 2) {	// 1배 줌
			printf("눌림. %d\n", mouse_rightClick_state);
			++mouse_rightClick_state %= 3;
			zoom *= 2.0;
		}
		break;
	default:
		break;
	}

	glutPostRedisplay();
	return;
}