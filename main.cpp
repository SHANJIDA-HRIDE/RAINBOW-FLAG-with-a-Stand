#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
void display1()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_QUADS);
    glColor3ub(255, 0, 0);
    glVertex2f(0.5f,0.8f);
    glVertex2f(0.5f,0.9f);
    glVertex2f(-0.3f,0.9f);
    glVertex2f(-0.3f,0.8f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 165, 0);
    glVertex2f(0.5f,0.7f);
    glVertex2f(0.5f,0.8f);
    glVertex2f(-0.3f,0.8f);
    glVertex2f(-0.3f,0.7f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);
    glVertex2f(0.5f,0.6f);
    glVertex2f(0.5f,0.7f);
    glVertex2f(-0.3f,0.7f);
    glVertex2f(-0.3f,0.6f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(51, 153, 51);
    glVertex2f(0.5f,0.5f);
    glVertex2f(0.5f,0.6f);
    glVertex2f(-0.3f,0.6f);
    glVertex2f(-0.3f,0.5f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 255);
    glVertex2f(0.5f,0.4f);
    glVertex2f(0.5f,0.5f);
    glVertex2f(-0.3f,0.5f);
    glVertex2f(-0.3f,0.4f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(128, 51, 153);
    glVertex2f(0.5f,0.3f);
    glVertex2f(0.5f,0.4f);
    glVertex2f(-0.3f,0.4f);
    glVertex2f(-0.3f,0.3f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(165, 42, 42);
    glVertex2f(-0.3f,-0.7f);
    glVertex2f(-0.3f,0.92f);
    glVertex2f(-0.33f,0.92f);
    glVertex2f(-0.33f,-0.7f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(165, 42, 42);
    glVertex2f(-0.2f,-0.8f);
    glVertex2f(-0.2f,-0.7f);
    glVertex2f(-0.42f,-0.7f);
    glVertex2f(-0.42f,-0.8f);
    glEnd();





    glFlush();
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutCreateWindow("Test");
    glutInitWindowSize(320, 320);
    glutDisplayFunc(display1);
    glutMainLoop();
    return 0;
}
