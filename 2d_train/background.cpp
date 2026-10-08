#include <GL/glut.h>
#include "background.h"

void drawBackground()
{
    // SKY
    glColor3f(0.5, 0.8, 1.0);
    glBegin(GL_QUADS);
    glVertex2f(0, 400);
    glVertex2f(800, 400);
    glVertex2f(800, 600);
    glVertex2f(0, 600);
    glEnd();

    // GROUND
    glColor3f(0.2, 0.7, 0.2);
    glBegin(GL_QUADS);
    glVertex2f(0, 0);
    glVertex2f(800, 0);
    glVertex2f(800, 400);
    glVertex2f(0, 400);
    glEnd();

    // HOUSE
    glColor3f(0.8, 0.5, 0.3);
    glBegin(GL_QUADS);
    glVertex2f(500, 250);
    glVertex2f(650, 250);
    glVertex2f(650, 350);
    glVertex2f(500, 350);
    glEnd();

    // ROOF
    glColor3f(0.9, 0.2, 0.2);
    glBegin(GL_TRIANGLES);
    glVertex2f(480, 350);
    glVertex2f(670, 350);
    glVertex2f(575, 420);
    glEnd();
}


