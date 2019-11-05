#include<windows.h>
#include<GL/glut.h>
#include<math.h>

void rectangle();

void circle();
void Shapes();
void init(void)
{
    glClearColor(1.0,1.0,1.0,1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0,100.0,0.0,60.0,0,50);


}


void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);


    circle();
    Shapes();

    glFlush ();

}




void circle()
{

    glBegin(GL_POLYGON);
     glColor3f (0.9, 0.0, 0.0);
        for(int i=1;i<360;i++)
        {
            glVertex2f(58+9.5*cos(3.14159*i/180),27+9.5*sin(3.14159*i/180));
        }
        glEnd();

}
void Shapes()
{

    glBegin(GL_POLYGON);
     glColor3f (0.9, 0.0, 0.0);
     glVertex2f(20,46);
     glVertex2f(59,26.5);
     glVertex2f(20,38);
     glEnd();

     glBegin(GL_POLYGON);
     glColor3f (0.9, 0.0, 0.0);
     glVertex2f(20,30);
     glVertex2f(59,26.5);
     glVertex2f(20,23);
     glEnd();

     glBegin(GL_POLYGON);
     glColor3f (0.9, 0.0, 0.0);
     glVertex2f(20,7);
     glVertex2f(59,26.5);
     glVertex2f(20,16);
     glEnd();

     glBegin(GL_POLYGON);
     glColor3f (0.9, 0.0, 0.0);
     glVertex2f(30,7);
     glVertex2f(59,26.5);
     glVertex2f(38,7);
     glEnd();



     glBegin(GL_POLYGON);
     glColor3f (0.9, 0.0, 0.0);
     glVertex2f(46,7);
     glVertex2f(59,26.5);
     glVertex2f(53,7);
     glEnd();


     glBegin(GL_POLYGON);
     glColor3f (0.9, 0.0, 0.0);
     glVertex2f(60,7);
     glVertex2f(59,26.5);
     glVertex2f(66,7);
     glEnd();


     glBegin(GL_POLYGON);
     glColor3f (0.9, 0.0, 0.0);
     glVertex2f(70,7);
     glVertex2f(59,26.5);
     glVertex2f(80,7);
     glEnd();


     glBegin(GL_POLYGON);
     glColor3f (0.9, 0.0, 0.0);
     glVertex2f(80,15);
     glVertex2f(59,26.5);
     glVertex2f(80,20);
     glEnd();


     glBegin(GL_POLYGON);
     glColor3f (0.9, 0.0, 0.0);
     glVertex2f(80,23);
     glVertex2f(59,26.5);
     glVertex2f(80,28);
     glEnd();


     glBegin(GL_POLYGON);
     glColor3f (0.9, 0.0, 0.0);
     glVertex2f(80,32);
     glVertex2f(59,26.5);
     glVertex2f(80,38);
     glEnd();


     glBegin(GL_POLYGON);
     glColor3f (0.9, 0.0, 0.0);
     glVertex2f(80,46);
     glVertex2f(59,26.5);
     glVertex2f(70,46);
     glEnd();


     glBegin(GL_POLYGON);
     glColor3f (0.9, 0.0, 0.0);
     glVertex2f(36,46);
     glVertex2f(59,26.5);
     glVertex2f(44,46);
     glEnd();

     glBegin(GL_POLYGON);
     glColor3f (0.9, 0.0, 0.0);
     glVertex2f(50,46);
     glVertex2f(59,26.5);
     glVertex2f(57,46);
     glEnd();

     glBegin(GL_POLYGON);
     glColor3f (0.9, 0.0, 0.0);
     glVertex2f(61,46);
     glVertex2f(59,26.5);
     glVertex2f(66,46);
     glEnd();
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (1000, 600);
    glutInitWindowPosition (10, 10);
    glutCreateWindow ("Shazzad");

    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
