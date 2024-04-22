#include <GL/glut.h>
void mybody(){
    glColor3f(1,0,0);
    glutWireCube(0.6);
}

void myArm(){
    glColor3f(0,1,0);
    glScalef(1.5,0.5,0.5);
    glutWireCube(0.3);
}
float angle=0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        //glTranslatef(-0.6,+0.3,0);
        mybody();
    glPopMatrix();
    glPushMatrix();
        //glTranslatef(+0.0,+0.30);
        glRotatef(angle++,0,0,1);
        myArm();
    glPopMatrix();
    glutSwapBuffers();
}



int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week09-2");
    glutDisplayFunc(display);
    glutIdleFunc(display);
    glutMainLoop();
}
