#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>


GLfloat position = 0.0f;
GLfloat position1 = 0.0f;
GLfloat speed = 0.03f;

void update(int value) {

    if(position1 < -1.0)
        position1 = 0.5f;

    position1 -= speed;

	glutPostRedisplay();
	glutTimerFunc(100, update, 0);
}


void init() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON)
	{
		if (state == GLUT_DOWN)
		{
			speed += 0.1f;
			printf("clicked at (%d, %d)\n", x, y);
		}
	}

	glutPostRedisplay();
}

void handleKeypress(unsigned char key, int x, int y) {

	switch (key) {

    case 'd':
        if(position >= 1.0)
            position = 1.0f;
        else
            position+=0.03f;
        break;
    case 'a':
        if(position <= -1.0)
            position = -1.0f;
        else
            position-=0.03f;
        break;


glutPostRedisplay();
	}
}


void display() {
   glClear(GL_COLOR_BUFFER_BIT);
   glLoadIdentity();



glPushMatrix();
glTranslatef(position,0.0f, 0.0f);
   glBegin(GL_POLYGON);
      glColor3f(1.0f, 1.0f, 0.0f);
      glVertex2f(-0.2f, -1.0f);
      glVertex2f(0.2f, -1.0f);
      glVertex2f(0.2f, -0.7f);
      glVertex2f(-0.2f, -0.7f);

   glEnd();
       glBegin(GL_TRIANGLES);
       glColor3f(1.0f, 0.0f, 0.0f);
       glVertex2f(-0.1f,-0.7f);
       glVertex2f(0.1f, -0.7f);
       glVertex2f(0.0f, -0.6f);
   glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(0.0f,position1, 0.0f);
    glBegin(GL_POLYGON);
        glColor3f(1.0f, 1.0f, 1.0f);
        glVertex2f(-0.8f, 0.7f);
        glVertex2f(-0.7f, 0.9f);
        glVertex2f(-0.9f, 0.9f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(1.0f, 1.0f, 1.0f);
        glVertex2f(0.8f, 0.7f);
        glVertex2f(0.7f, 0.9f);
        glVertex2f(0.9f, 0.9f);
    glEnd();
glPopMatrix();

   glFlush();
}



int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(1080,1920);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("Basic Animation");
   glutDisplayFunc(display);
   init();
   glutKeyboardFunc(handleKeypress);
   glutMouseFunc(handleMouse);
   glutTimerFunc(1000, update, 0);
   glutMainLoop();
   return 0;
}
