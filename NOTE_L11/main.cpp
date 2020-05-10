#include <stdio.h>
#include <gl/glut.h>

void mydisplay() {
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin();
	glEnd();

	return;
}
void init() {
	glEnable(GL_DEPTH_TEST);	// 깊이버퍼를 사용하겠다고 설정해주고 있다.
	//glDisable(GL_DEPTH_TEST);	// 깊이버퍼를 끄고 싶다면...?
	return;
}
void myidleFunc() {
	// 현재 작업중인 이벤트가 하나도 없다면 계속 그려서 프레임을 매끄럽게(?) 하기 위함.
	glutPostRedisplay();
	return;
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);

	glutInitWindowSize(500, 500);
	glutInitWindowPosition(0, 0);

	glutCreateWindow("15012970 / 이헌기");

	glutDisplayFunc(mydisplay);

	init();

	glutIdleFunc(myidleFunc);	// 현재 처리하는 이벤트가 하나도 없을 때 콜백함수를 호출.
	glutMainLoop();
	return 0;
}

