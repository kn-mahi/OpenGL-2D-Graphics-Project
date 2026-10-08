#include <GL/glut.h>
#include "background.h"
#include "train.h"
#include "track.h"
#include "control.h"

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    drawBackground();
    drawTrack();
    drawTrain();

    glFlush();
}

void init()
{
    glClearColor(1, 1, 1, 1);
    gluOrtho2D(0, 800, 0, 600);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutCreateWindow("2D Train Game");

    init();
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);

    glutMainLoop();
    return 0;
}


