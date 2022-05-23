#include <GL/gl.h>
#include <GL/glut.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float x,y,i;
float counter=0.0;
float counter1=0.0;
float counter2=0.0;
void init(void)
{
	//gluOrtho2D(0,800,400,0);
	//glOrtho(0,800,500,0,1,-1);
}
void fan(void)
{
	glClearColor(0.0,0.0,0.0,0.0);
	glClear(GL_COLOR_BUFFER_BIT);

    glPushMatrix();
    glLoadIdentity();
	glRotatef(counter,0.0,0.0,-1.0);
	counter+=0.6;
	glBegin(GL_POLYGON);
		glColor3ub(255,255,0);
		glVertex2f(-0.01,0);
		glVertex2f(0,0.9);
		glVertex2f(0.01,0);
	glEnd();
    glPopMatrix();
    ////////
    glPushMatrix();
    glLoadIdentity();
	glRotatef(counter1,0.0,0.0,-1.0);
	counter1+=0.4;
	glBegin(GL_POLYGON);
		glColor3ub(0,250,250);
		glVertex2f(-0.015,0);
		glVertex2f(0,0.7);
		glVertex2f(0.015,0);
	glEnd();
    glPopMatrix();
    /////
    glPushMatrix();
    glLoadIdentity();
	glRotatef(counter2,0.0,0.0,-1.0);
	counter2+=0.2;
	glBegin(GL_POLYGON);
		glColor3ub(192,192,192);
		glVertex2f(-0.02,0);
		glVertex2f(0,0.5);
		glVertex2f(0.02,0);
	glEnd();
    glPopMatrix();

	glBegin(GL_TRIANGLE_FAN);
		glColor3ub(255,0,0);
		for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.05*sin(i);
			y=0.05*cos(i);
			glVertex2f(x,y);
		}
	glEnd();

	glutSwapBuffers();
}
int main(int argc,char** argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE);
	glutInitWindowPosition(-1,-1);
	glutInitWindowSize(640,480);
	glutCreateWindow("Fan");
	init();
	glutDisplayFunc(fan);
	glutIdleFunc(fan);
	glutMainLoop();
	return 0;
}
