#include "MyHeaders.h"
#include "MyFuncDecl.h"

// texgen.c
//int main(int argc, char** argv) {
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
//	glutInitWindowSize(256, 256);
//	glutInitWindowPosition(100, 100);
//	glutCreateWindow(argv[0]);
//	init();
//	glutDisplayFunc(display);
//	glutReshapeFunc(reshape);
//	glutKeyboardFunc(keyboard);
//	glutMainLoop();
//
//	return 0;
//}

////texbinc.cpp
//int main(int argc, char** argv) {
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
//	glutInitWindowSize(250, 250);
//	glutInitWindowPosition(100, 100);
//	glutCreateWindow(argv[0]);
//	init();
//	glutReshapeFunc(reshape);
//	glutDisplayFunc(display);
//	glutKeyboardFunc(keyboard);
//	glutMainLoop();
//
//	return 0;
//}

//texsub.cpp (s와 r을 눌러서 텍스처 변화를 줄 수 있음 - subImage checkImage이용.)
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(250, 250);
	glutInitWindowPosition(100, 100);
	glutCreateWindow(argv[0]);
	init();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutKeyboardFunc(keyboard);
	glutMainLoop();

	return 0;
}