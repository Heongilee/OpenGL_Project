#ifndef MYHEADERS_H
#include <gl/glut.h>
#include <stdlib.h>
#include <stdio.h>

//texgen.cpp
//#ifdef GL_VERSION_1_1
//static GLuint texName;	// �ؽ�ó ������ ������ ��. (grass, cloud, sky...)
//#endif // GL_VERSION_1_1

//#ifdef GL_VERSION_1_1
//// üĿ���� �ؽ�ó�� ������
//#define checkImageWidth 64
//#define checkImageHeight 64
//static GLubyte checkImage[checkImageHeight][checkImageWidth][4];
//static GLubyte otherImage[checkImageHeight][checkImageWidth][4];
//
//static GLuint texName[2];
//#endif // GL_VERSION_1_1

#ifdef GL_VERSION_1_1
// üĿ���� �ؽ�ó�� ������
#define checkImageWidth 64
#define checkImageHeight 64
#define subImageWidth 16
#define subImageHeight 16
static GLubyte checkImage[checkImageHeight][checkImageWidth][4];
static GLubyte subImage[subImageHeight][subImageWidth][4];
static GLuint texName;
#endif // GL_VERSION_1_1


#endif // !MYHEADERS_H
