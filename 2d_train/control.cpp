#include<GL/glut.h>
#include "control.h"
#include "train.h"

void keyboard(unsigned char key, int x, int y)
{
    if (key == 'd')   // move right
        trainX += 10;

    if (key == 'a')   // move left
        trainX -= 10;

    glutPostRedisplay();
}


