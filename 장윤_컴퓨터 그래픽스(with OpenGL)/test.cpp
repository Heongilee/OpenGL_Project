// Default Set Up

void init() {
	glClearColor(1.0, 1.0, 1.0, 0.0);	// ���÷��� ȭ���� ���� ������� �¾�.
	glMatrixMode(GL_PROJECTION);		// ī�޶� ���� ::
	gluOrtho2D(0.0, 200.0, 0.0, 150.0);	// ???

	return;
}

void lineSegment() {
	gClear(GL_COLOR_BUFFER_BIT);		// ȭ�� ���� :: ������ ���� ����
	glColor3f(0.0, 0.0, 1.0);			// �Ķ���(R = 0, G = 0, B = 1.0)���� ������ �׸�
	glBegin(GL_LINES);					// �� ���� �̿��� ������ �׸� ����.
	//{
		glVertex2i(180, 15);			// ù ��° ��.
		glVertex2i(10, 145);			// �� ��° ��.
	//}
	glEnd();

	glFLush();							// ���ۿ� �ִ� �͵��� ȭ�鿡 �ѷ��ּ���!
}