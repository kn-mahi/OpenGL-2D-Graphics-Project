#include<GL/glut.h>
#include "track.h"

void drawTrack()
{
    glColor3f(0.4, 0.2, 0.1);
    glBegin(GL_QUADS);
    glVertex2f(0, 160);
    glVertex2f(800, 160);
    glVertex2f(800, 170);
    glVertex2f(0, 170);
    glEnd();
}


