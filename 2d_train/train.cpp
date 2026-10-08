#include<GL/glut.h>
#include <math.h>
#include "train.h"

float trainX = 0;

// SIMPLE WHEEL FUNCTION
void drawWheel(float x, float y)
{
    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++)
    {
        float angle = i * 3.1416 / 180;
        glVertex2f(x + 10 * cos(angle),
                   y + 10 * sin(angle));
    }
    glEnd();
}

void drawTrain()
{
    glPushMatrix();
    glTranslatef(trainX, 0, 0);

    // ENGINE
    glColor3f(1, 0, 0);
    glBegin(GL_QUADS);
    glVertex2f(100, 180);
    glVertex2f(200, 180);
    glVertex2f(200, 240);
    glVertex2f(100, 240);
    glEnd();

    // COACH
    glColor3f(0, 0, 1);
    glBegin(GL_QUADS);
    glVertex2f(210, 180);
    glVertex2f(340, 180);
    glVertex2f(340, 240);
    glVertex2f(210, 240);
    glEnd();

    // WHEELS
    drawWheel(130, 170);
    drawWheel(170, 170);
    drawWheel(250, 170);
    drawWheel(300, 170);

    glPopMatrix();
}


