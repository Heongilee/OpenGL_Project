// Default Set Up

void init() {
	glClearColor(1.0, 1.0, 1.0, 0.0);	// 디스플레이 화면을 전부 흰색으로 셋업.
	glMatrixMode(GL_PROJECTION);		// 카메라 셋팅 ::
	gluOrtho2D(0.0, 200.0, 0.0, 150.0);	// ???

	return;
}

void lineSegment() {
	gClear(GL_COLOR_BUFFER_BIT);		// 화면 정리 :: 프레임 버퍼 정리
	glColor3f(0.0, 0.0, 1.0);			// 파랑색(R = 0, G = 0, B = 1.0)으로 라인을 그림
	glBegin(GL_LINES);					// 두 점을 이용해 라인을 그릴 것임.
	//{
		glVertex2i(180, 15);			// 첫 번째 점.
		glVertex2i(10, 145);			// 두 번째 점.
	//}
	glEnd();

	glFLush();							// 버퍼에 있는 것들을 화면에 뿌려주세요!
}