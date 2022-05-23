#include <iostream>
#include <stdlib.h>
#include<stdio.h>
#include <math.h>
#include<windows.h>
#include <GL/gl.h>
#include <GL/glut.h>

float _angle = 0.0;
float _cameraAngle = 0.0;
float _ang_tri = 0.0;
float _shipmove = 0.0;
float _boatmove = 0.0;
float _lightrotate = 0.0;
float _cloudsmove = 0.0;
float _cloudsmove2 = 0.0;

/*void Rainfall(void)
{


glutSwapBuffers();
glFlush();
}*/
void displayDay(void)
{
    float theta;
/* clear all pixels */
glClear(GL_COLOR_BUFFER_BIT);
glClearColor(0.529, 0.808, 0.980,0);
	/*glMatrixMode(GL_MODELVIEW); //Switch to the drawing perspective
	glLoadIdentity(); //Reset the drawing perspective
	glRotatef(-_cameraAngle, 0.0, 1.0, 0.0); //Rotate the camera
	glTranslatef(0.0, 0.0, -7.0); //Move forward 5 units*/

///sun
    glPushMatrix();
    glTranslatef(200, 0, 0.000);
   glColor3f(1.000, 0.843, 0.000);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(-300+70*cos(theta), 400+70*sin(theta));
   }
    glEnd();
    glPopMatrix();
///Clouds
glPushMatrix();
glTranslatef(_cloudsmove,0, 0.000);
    glPushMatrix();
    glTranslatef(200,500, 0.000);
   glColor3f(1,1,1);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(0+70*cos(theta), 0+30*sin(theta));
   }
    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(220,470, 0.000);
   glColor3f(1,1,1);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(0+70*cos(theta), 0+30*sin(theta));
   }
    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(240,530, 0.000);
   glColor3f(1,1,1);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(0+70*cos(theta), 0+30*sin(theta));
   }
    glEnd();
    glPopMatrix();
    glPopMatrix();

///Clouds 2
glPushMatrix();
//glTranslatef(-500,500, 0.000);
glTranslatef(_cloudsmove2,0, 0.000);
    glPushMatrix();
    glTranslatef(200,500, 0.000);
   glColor3f(1,1,1);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(0+70*cos(theta), 0+30*sin(theta));
   }
    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(220,470, 0.000);
   glColor3f(1,1,1);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(0+70*cos(theta), 0+30*sin(theta));
   }
    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(240,530, 0.000);
   glColor3f(1,1,1);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(0+70*cos(theta), 0+30*sin(theta));
   }
    glEnd();
    glPopMatrix();
    glPopMatrix();
///Clouds 4
glPushMatrix();
//glTranslatef(-500,500, 0.000);
glTranslatef(_cloudsmove,0, 0.000);
    glPushMatrix();
    glTranslatef(-200,350, 0.000);
   glColor3f(1,1,1);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(0+70*cos(theta), 0+30*sin(theta));
   }
    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(-220,370, 0.000);
   glColor3f(1,1,1);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(0+70*cos(theta), 0+30*sin(theta));
   }
    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(-260,370, 0.000);
   glColor3f(1,1,1);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(0+70*cos(theta), 0+30*sin(theta));
   }
    glEnd();
    glPopMatrix();
    glPopMatrix();
///Clouds 3
glPushMatrix();
glTranslatef(_cloudsmove,0, 0.000);

    glPushMatrix();
    glTranslatef(-520,370, 0.000);
   glColor3f(1,1,1);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(0+70*cos(theta), 0+30*sin(theta));
   }
    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(-460,330, 0.000);
   glColor3f(1,1,1);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(0+70*cos(theta), 0+30*sin(theta));
   }
    glEnd();
    glPopMatrix();
    glPopMatrix();
///Clouds 4
glPushMatrix();
glTranslatef(_cloudsmove2,0, 0.000);

    glPushMatrix();
    glTranslatef(-520,570, 0.000);
   glColor3f(1,1,1);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(0+70*cos(theta), 0+30*sin(theta));
   }
    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(-460,530, 0.000);
   glColor3f(1,1,1);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(0+70*cos(theta), 0+30*sin(theta));
   }
    glEnd();
    glPopMatrix();
    glPopMatrix();

///Clouds 5
glPushMatrix();
glTranslatef(_cloudsmove2,0, 0.000);

    glPushMatrix();
    glTranslatef(-520,570, 0.000);
   glColor3f(1,1,1);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(0+70*cos(theta), 0+30*sin(theta));
   }
    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(-460,530, 0.000);
   glColor3f(1,1,1);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(0+70*cos(theta), 0+30*sin(theta));
   }
    glEnd();
    glPopMatrix();
    glPopMatrix();
///land
glBegin(GL_POLYGON);
glColor3f(0.196, 0.804, 0.196);
glVertex2i(-800,-200);
glColor3f(0.486, 0.988, 0.000);
glVertex2i(800,-200);
glColor3f(0.000, 0.392, 0.000);
glVertex2i(800,0);
glVertex2i(-800,0);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.196, 0.804, 0.196);
glVertex2i(430,0);
glColor3f(0.486, 0.988, 0.000);
glVertex2i(800,0);
glColor3f(0.000, 0.392, 0.000);
glVertex2i(800,330);
//glVertex2i(-800,0);
glEnd();
///tree-1
   glPushMatrix();
   glTranslatef(100,0,0);
   glPushMatrix();
    glColor3f(0.196, 0.804, 0.196);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(-100+50*cos(theta), 220+50*sin(theta));
   }
    glEnd();
   glPopMatrix();


    glPushMatrix();
    glColor3f(0.000, 1.000, 0.000);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(0+110*cos(theta), 250+70*sin(theta));
   }
    glEnd();
glPopMatrix();


    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.627, 0.322, 0.176);
    glVertex2i(0, 250);
    glVertex2i(-20, 0);
    glVertex2i(20, 0);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glColor3f(0.196, 0.804, 0.196);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
    theta=i*3.142/180;
    glVertex2f(100+80*cos(theta), 170+70*sin(theta));
   }
    glEnd();
   glPopMatrix();
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.627, 0.322, 0.176);
    glVertex2i(0, 100);
    glVertex2i(0, 70);
    glVertex2i(70, 158);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.627, 0.322, 0.176);
    glVertex2i(-70, 200);
    glVertex2i(0, 140);
    glVertex2i(0, 158);
    glEnd();
    glPopMatrix();
    glPopMatrix();
    ///tree-2
   glPushMatrix();
   glTranslatef(130,0,0);
    glScalef(0.5,0.5,0);
   glPushMatrix();
    glColor3f(0.196, 0.804, 0.196);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(-100+80*cos(theta), 220+70*sin(theta));
   }
    glEnd();
   glPopMatrix();


    glPushMatrix();
    glColor3f(0.000, 1.000, 0.000);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(0+110*cos(theta), 250+70*sin(theta));
   }
    glEnd();
glPopMatrix();


    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.627, 0.322, 0.176);
    glVertex2i(0, 250);
    glVertex2i(-20, 0);
    glVertex2i(20, 0);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glColor3f(0.196, 0.804, 0.196);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
    theta=i*3.142/180;
    glVertex2f(100+80*cos(theta), 170+70*sin(theta));
   }
    glEnd();
   glPopMatrix();
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.627, 0.322, 0.176);
    glVertex2i(0, 100);
    glVertex2i(0, 70);
    glVertex2i(70, 158);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.627, 0.322, 0.176);
    glVertex2i(-70, 200);
    glVertex2i(0, 140);
    glVertex2i(0, 158);
    glEnd();
    glPopMatrix();
    glPopMatrix();
     ///tree-3
   glPushMatrix();
   glTranslatef(800,0,0);
    glScalef(0.9,0.9,0);
   glPushMatrix();
    glColor3f(0.196, 0.804, 0.196);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(-100+80*cos(theta), 220+70*sin(theta));
   }
    glEnd();
   glPopMatrix();
    glPushMatrix();
    glColor3f(0.000, 1.000, 0.000);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(0+110*cos(theta), 250+70*sin(theta));
   }
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.627, 0.322, 0.176);
    glVertex2i(0, 250);
    glVertex2i(-20, 0);
    glVertex2i(20, 0);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glColor3f(0.196, 0.804, 0.196);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
    theta=i*3.142/180;
    glVertex2f(100+80*cos(theta), 170+70*sin(theta));
   }
    glEnd();
   glPopMatrix();
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.627, 0.322, 0.176);
    glVertex2i(0, 100);
    glVertex2i(0, 70);
    glVertex2i(70, 158);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.627, 0.322, 0.176);
    glVertex2i(-70, 200);
    glVertex2i(0, 140);
    glVertex2i(0, 158);
    glEnd();
    glPopMatrix();
    glPopMatrix();
      ///tree-4
   glPushMatrix();
   glTranslatef(750,50,0);
    glScalef(0.5,0.5,0);
   glPushMatrix();
    glColor3f(0.196, 0.804, 0.196);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(-100+80*cos(theta), 220+70*sin(theta));
   }
    glEnd();
   glPopMatrix();
    glPushMatrix();
    glColor3f(0.000, 1.000, 0.000);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(0+110*cos(theta), 250+70*sin(theta));
   }
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.627, 0.322, 0.176);
    glVertex2i(0, 250);
    glVertex2i(-20, 0);
    glVertex2i(20, 0);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glColor3f(0.196, 0.804, 0.196);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
    theta=i*3.142/180;
    glVertex2f(100+80*cos(theta), 170+70*sin(theta));
   }
    glEnd();
   glPopMatrix();
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.627, 0.322, 0.176);
    glVertex2i(0, 100);
    glVertex2i(0, 70);
    glVertex2i(70, 158);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.627, 0.322, 0.176);
    glVertex2i(-70, 200);
    glVertex2i(0, 140);
    glVertex2i(0, 158);
    glEnd();
    glPopMatrix();
    glPopMatrix();
    ///tree-5
   glPushMatrix();
   glTranslatef(-300,0,0);
    glScalef(0.5,0.5,0);
   glPushMatrix();
    glColor3f(0.196, 0.804, 0.196);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(-100+80*cos(theta), 220+70*sin(theta));
   }
    glEnd();
   glPopMatrix();
    glPushMatrix();
    glColor3f(0.000, 1.000, 0.000);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(0+110*cos(theta), 250+70*sin(theta));
   }
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.627, 0.322, 0.176);
    glVertex2i(0, 250);
    glVertex2i(-20, 0);
    glVertex2i(20, 0);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glColor3f(0.196, 0.804, 0.196);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
    theta=i*3.142/180;
    glVertex2f(100+80*cos(theta), 170+70*sin(theta));
   }
    glEnd();
   glPopMatrix();
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.627, 0.322, 0.176);
    glVertex2i(0, 100);
    glVertex2i(0, 70);
    glVertex2i(70, 158);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.627, 0.322, 0.176);
    glVertex2i(-70, 200);
    glVertex2i(0, 140);
    glVertex2i(0, 158);
    glEnd();
    glPopMatrix();
    glPopMatrix();


///Houses
glPushMatrix();///Roof
glColor3f(0.855, 0.647, 0.125);
glBegin(GL_POLYGON);
glVertex2i(220,320);
glVertex2i(460,320);
glVertex2i(540,200);
glColor3f(0.824, 0.412, 0.118);
glVertex2i(320,200);
glEnd();
glPopMatrix();

glPushMatrix();///window wall
glColor3f(1.000, 0.498, 0.314);
glBegin(GL_POLYGON);
glVertex2i(240,300);
glVertex2i(320,200);
glVertex2i(320,0);
glColor3f(0.545, 0.271, 0.075);
glVertex2i(180,0);
glVertex2i(180,180);
glEnd();

///Day windows
glColor3f(0.878, 1.000, 1.000);///window
glBegin(GL_POLYGON);
glVertex2i(220,140);
glVertex2i(280,140);
glVertex2i(280,80);
glVertex2i(220,80);
glEnd();

glColor3f(1.000, 0.973, 0.863);///window
glLineWidth(3);
glBegin(GL_LINES);
glVertex2i(220,140);
glVertex2i(280,140);
glVertex2i(280,80);
glVertex2i(220,80);
glVertex2i(220,140);
glVertex2i(220,80);
glVertex2i(280,140);
glVertex2i(280,80);

glEnd();
glPopMatrix();

glPushMatrix();///Roof PIPE
glColor3f(1.000, 0.271, 0.000);
glBegin(GL_POLYGON);
glVertex2i(220,320);
glVertex2i(240,300);
glColor3f(0.824, 0.412, 0.118);
glVertex2i(180,180);
glVertex2i(140,180);
glVertex2i(220,320);
glEnd();

glColor3f(1.000, 1.000, 1.000);
glLineWidth(3);
glBegin(GL_LINES);
glVertex2i(150,200);
glVertex2i(190,200);
glVertex2i(170,240);
glVertex2i(210,240);
glVertex2i(195,280);
glVertex2i(230,280);
glEnd();
glPopMatrix();


glPushMatrix();
glColor3f(0.722, 0.525, 0.043);///second roof
glBegin(GL_POLYGON);
glVertex2i(320,200);
glVertex2i(540,200);
glColor3f(0.855, 0.647, 0.125);
glVertex2i(620,100);
glVertex2i(400,100);
glEnd();

glColor3f(1.000, 0.498, 0.314);///Door right side wall
glBegin(GL_POLYGON);
glVertex2i(400,100);
glVertex2i(540,100);
glColor3f(0.502, 0.000, 0.000);
glVertex2i(540,0);
glVertex2i(400,0);
glEnd();

glColor3f(1.000, 0.973, 0.863);///Door right window
glBegin(GL_POLYGON);
glVertex2i(420,60);
glVertex2i(520,60);
glVertex2i(520,20);
glVertex2i(420,20);
glEnd();

glColor3f(0.878, 1.000, 1.000);///Door right window
glBegin(GL_TRIANGLES);
glVertex2i(420,60);
glVertex2i(520,20);
glVertex2i(420,20);

glEnd();

glColor3f(0.412, 0.412, 0.412);///floor
glBegin(GL_POLYGON);
glVertex2i(400,0);
glVertex2i(540,0);
glColor3f(0.184, 0.310, 0.310);
glVertex2i(620,-60);
glVertex2i(460,-60);
glEnd();

glPushMatrix();
glColor3f(0.545, 0.000, 0.000);
glLineWidth(4);
glBegin(GL_LINES);
glVertex2i(545,60);
glVertex2i(800,60);
glVertex2i(545,30);
glVertex2i(800,30);
glEnd();
glPopMatrix();


glColor3f(0.333, 0.420, 0.184);///home stand
glLineWidth(5);
glBegin(GL_LINES);
glVertex2i(620,100);
glVertex2i(620,-60);
glVertex2i(540,100);
glVertex2i(540,0);
glVertex2i(460,100);
glVertex2i(460,-60);
glVertex2i(400,100);
glVertex2i(400,0);
glEnd();
glPopMatrix();

glPushMatrix();
glColor3f(0.824, 0.412, 0.118);///Door Wall
glBegin(GL_POLYGON);
glVertex2i(320,200);
glVertex2i(400,100);
glVertex2i(400,0);

glVertex2i(380,0);
glVertex2i(380,100);
glVertex2i(340,100);
glColor3f(0.698, 0.133, 0.133);
glVertex2i(340,0);
glVertex2i(320,0);
glEnd();

glColor3f(0.000, 0.392, 0.000);///Door Side wall stand
glLineWidth(3);
glBegin(GL_LINES);
glVertex2i(320,200);
glVertex2i(320,0);
glEnd();

glColor3f(0.878, 1.000, 1.000);///Door
glBegin(GL_POLYGON);
glVertex2i(340,100);
glVertex2i(380,100);
glColor3f(0.690, 0.878, 0.902);
glVertex2i(380,0);
glVertex2i(340,0);

glEnd();
glPopMatrix();

glColor3f(0.502, 0.000, 0.000);
glBegin(GL_POLYGON);
glVertex2i(180,0);
glVertex2i(400,0);
glColor3f(0.545, 0.271, 0.075);
glVertex2i(400,-20);
glVertex2i(160,-20);
glEnd();

glColor3f(0.502, 0.000, 0.000);
glBegin(GL_POLYGON);
glVertex2i(400,0);
glVertex2i(460,-60);
glColor3f(0.545, 0.271, 0.075);
glVertex2i(460,-80);
glVertex2i(400,-20);
glEnd();

glColor3f(0.502, 0.000, 0.000);
glBegin(GL_POLYGON);
glVertex2i(460,-60);
glVertex2i(620,-60);
glColor3f(0.545, 0.271, 0.075);
glVertex2i(640,-80);
glVertex2i(460,-80);
glEnd();

glPushMatrix();
glColor3f(0.545, 0.000, 0.000);
glLineWidth(6);
glBegin(GL_LINES);
glVertex2i(650,80);
glVertex2i(650,0);
glVertex2i(690,80);
glVertex2i(690,0);
glVertex2i(730,80);
glVertex2i(730,0);
glVertex2i(770,80);
glVertex2i(770,0);
glVertex2i(570,80);
glVertex2i(570,0);
glVertex2i(605,80);
glVertex2i(605,0);

glEnd();
glPopMatrix();


glPushMatrix();
glColor3f(0.545, 0.271, 0.075);//2nd house roof
glBegin(GL_POLYGON);
glVertex2i(472,300);
glVertex2i(660,300);
glColor3f(0.722, 0.525, 0.043);
glVertex2i(600,200);
glVertex2i(540,200);
glEnd();

glColor3f(0.502, 0.000, 0.000);//bagan bera
glLineWidth(6);
glBegin(GL_LINES);

glVertex2i(720,300);
glVertex2i(720,240);
glVertex2i(740,320);
glVertex2i(740,260);
glVertex2i(760,340);
glVertex2i(760,280);
glVertex2i(780,360);
glVertex2i(780,300);

glVertex2i(700,260);
glVertex2i(800,360);

glColor3f(0.722, 0.525, 0.043);
glVertex2i(720,240);
glVertex2i(800,320);


glEnd();



glColor3f(0.502, 0.000, 0.000);
glBegin(GL_POLYGON);
glVertex2i(660,300);
glVertex2i(740,200);
glVertex2i(700,200);
glVertex2i(648,280);
glEnd();

glPopMatrix();

glPushMatrix();
///2nd house door wall
glColor3f(0.627, 0.322, 0.176);
glBegin(GL_POLYGON);
glVertex2i(648,280);
glVertex2i(700,200);
glVertex2i(700,120);
glVertex2i(605,120);
glVertex2i(600,125);
glVertex2i(600,200);
glEnd();

glColor3f(0.957, 0.643, 0.376);
glBegin(GL_TRIANGLES);
glVertex2i(540,200);
glVertex2i(600,200);
glVertex2i(600,125);
glEnd();
glPopMatrix();

glPushMatrix();///2nd house door
glColor3f(0.753, 0.753, 0.753);
glBegin(GL_POLYGON);
glVertex2i(630,200);
glVertex2i(680,200);
glVertex2i(680,120);
glVertex2i(630,120);
glEnd();

glColor3f(0.000, 0.000, 0.000);
glBegin(GL_POLYGON);
glVertex2i(680,200);
glVertex2i(680,120);
glVertex2i(660,120);
glVertex2i(660,180);
glEnd();

glColor3f(0.300, 0.220, 0.060);
glBegin(GL_POLYGON);///2nd door front side
glVertex2i(600,120);
glVertex2i(720,120);
glVertex2i(720,100);
glVertex2i(620,100);
glEnd();

glColor3f(0.753, 0.753, 0.753);///2nd door window
glBegin(GL_TRIANGLES);
glVertex2i(559,180);
glVertex2i(580,180);
glVertex2i(580,155);
glEnd();

glPopMatrix();
glPushMatrix();
//glColor3f(0.647, 0.165, 0.165);
  ///Windmill-1
    glPushMatrix();
    glTranslatef(-600,-50,0);
    glScalef(0.2,1.3,0);
    glBegin(GL_POLYGON);
    glColor3f(0.863, 0.863, 0.863);
    glVertex2i(0, 0);
    glVertex2i(-100, 0);
    glColor3f(0.467, 0.533, 0.600);
    glVertex2i(100, 0);
    glVertex2i(50,300);
    glVertex2i(-50,300);
    glEnd();
    glPopMatrix();
    glTranslatef(-550,-50,0);///windmill-2
    glScalef(0.2,1.0,0);
    glBegin(GL_POLYGON);
    glColor3f(0.863, 0.863, 0.863);
    glVertex2i(0, 0);
    glVertex2i(-100, 0);
    glColor3f(0.467, 0.533, 0.600);
    glVertex2i(100, 0);
    glVertex2i(50,300);
    glVertex2i(-50,300);
    glEnd();
    glPopMatrix();
///Hils
 glPushMatrix();
 glTranslatef(-850,-50,0);
  glScalef(1.0,1.5,0);
    glBegin(GL_POLYGON);
    glColor3f(0.502, 0.000, 0.000);
    glVertex2i(0, 0);
    glVertex2i(450, 0);
    glVertex2i(200, 200);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.824, 0.412, 0.118);
    glVertex2i(0, 0);
    glVertex2i(150, 0);
    glVertex2i(200, 200);
    glEnd();
    glPushMatrix();
    glTranslatef(200, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glColor3f(0.502, 0.000, 0.000);
    glVertex2i(0, 0);
    glVertex2i(400, 0);
    glVertex2i(200, 250);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.824, 0.412, 0.118);
    glVertex2i(0, 0);
    glVertex2i(150, 0);
    glVertex2i(200, 250);
    glEnd();
glPopMatrix();
glPopMatrix();

///Wind
    glPushMatrix();
    glTranslatef(-600,300,0);
    glRotatef(_angle, 0.0, 0.0, 1.0);
    glScalef(0.5,0.5,0);
    glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(1.000, 0.000, 0.000);
    glVertex2i(0, 0);
    glVertex2i(150, 0);
    glVertex2i(140, 50);
    //glVertex2i(20, 350);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(1.000, 0.000, 0.000);
    glVertex2i(0, 0);
    glVertex2i(0, 150);
    glVertex2i(-50, 140);
    //glVertex2i(20, 350);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    //glTranslatef(0.0, 0.0, 0.0);
    //glRotatef(_angle, 0.0, 0.0, 0.0); //Rotate about the y-axis
    //glScalef(0.0,0.0,0); //Move to the center of the trapezoid
    glBegin(GL_POLYGON);
    glColor3f(1.000, 0.000, 0.000);
    glVertex2i(-150, 0);
    glVertex2i(-140, -50);
    glVertex2i(0, 0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(1.000, 0.000, 0.000);
    glVertex2i(0, 0);
    glVertex2i(0, -150);
    glVertex2i(50, -140);
    //glVertex2i(20, 350);
    glEnd();
    glPopMatrix();


    glPushMatrix();
//    float theta;
    glColor3f(1,1,1);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(0+20*cos(theta), 0+20*sin(theta));
   }
    glEnd();
    glPopMatrix();
    glPopMatrix();
///wind 2
    glPushMatrix();
    glTranslatef(-550,230,0);
    glRotatef(_angle, 0.0, 0.0,-1.0);
    glScalef(0.3,0.3,0);
    glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(1.000, 0.000, 0.000);
    glVertex2i(0, 0);
    glVertex2i(150, 0);
    glVertex2i(140, 50);
    //glVertex2i(20, 350);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(1.000, 0.000, 0.000);
    glVertex2i(0, 0);
    glVertex2i(0, 150);
    glVertex2i(-50, 140);
    //glVertex2i(20, 350);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    //glTranslatef(0.0, 0.0, 0.0);
    //glRotatef(_angle, 0.0, 0.0, 0.0); //Rotate about the y-axis
    //glScalef(0.0,0.0,0); //Move to the center of the trapezoid
    glBegin(GL_POLYGON);
    glColor3f(1.000, 0.000, 0.000);
    glVertex2i(-150, 0);
    glVertex2i(-140, -50);
    glVertex2i(0, 0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(1.000, 0.000, 0.000);
    glVertex2i(0, 0);
    glVertex2i(0, -150);
    glVertex2i(50, -140);
    //glVertex2i(20, 350);
    glEnd();
    glPopMatrix();


    glPushMatrix();
//    float theta;
    glColor3f(1,1,1);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(0+20*cos(theta), 0+20*sin(theta));
   }
    glEnd();
    glPopMatrix();
    ///

    glPopMatrix();
///tree-6
   glPushMatrix();
  /// glTranslatef(-600,0,0);(windmill posi)
   glTranslatef(-600,-100,0);
    glScalef(0.5,0.5,0);
   glPushMatrix();
    glColor3f(0.196, 0.804, 0.196);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(-100+80*cos(theta), 220+70*sin(theta));
   }
    glEnd();
   glPopMatrix();
    glPushMatrix();
    glColor3f(0.000, 1.000, 0.000);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(0+110*cos(theta), 250+70*sin(theta));
   }
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.627, 0.322, 0.176);
    glVertex2i(0, 250);
    glVertex2i(-20, 0);
    glVertex2i(20, 0);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glColor3f(0.196, 0.804, 0.196);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
    theta=i*3.142/180;
    glVertex2f(100+80*cos(theta), 170+70*sin(theta));
   }
    glEnd();
   glPopMatrix();
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.627, 0.322, 0.176);
    glVertex2i(0, 100);
    glVertex2i(0, 70);
    glVertex2i(70, 158);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.627, 0.322, 0.176);
    glVertex2i(-70, 200);
    glVertex2i(0, 140);
    glVertex2i(0, 158);
    glEnd();
    glPopMatrix();
    glPopMatrix();


///river
glBegin(GL_POLYGON);//river


glColor3f(0.255, 0.412, 0.882);
//glColor3f(0.678, 1.000, 0.184);
glVertex2i(800,-600);
glColor3f(0.576, 0.439, 0.859);
//glColor3f(	0.000, 0.749, 1.000);
glVertex2i(-800,-600);
glColor3f(0.098, 0.098, 0.439);
glVertex2i(-800,-200);
glColor3f(0.678, 1.000, 0.184);
glVertex2i(800,-200);
glEnd();

///mud
glPushMatrix();
glBegin(GL_POLYGON);

glColor3f(0.627, 0.322, 0.176);
glVertex2i(-800,-200);
glColor3f(0.804, 0.522, 0.247);
glVertex2i(800,-200);
glColor3f(0.627, 0.322, 0.176);
glVertex2i(800,-250);
glVertex2i(-800,-250);
glEnd();
glBegin(GL_LINES);
glColor3f(0.502, 0.000, 0.000);
glVertex2i(-800,-200);
glVertex2i(800,-200);
glEnd();
glPopMatrix();
///fenches
glColor3f(0.502, 0.000, 0.000);
glLineWidth(6);
glBegin(GL_LINES);
glVertex2i(-800,-100);
glVertex2i(-800,-200);
glVertex2i(-750,-100);
glVertex2i(-750,-200);
glVertex2i(-700,-100);
glVertex2i(-700,-200);
glVertex2i(-650,-100);
glVertex2i(-650,-200);
glVertex2i(-600,-100);
glVertex2i(-600,-200);
glVertex2i(-550,-100);
glVertex2i(-550,-200);
glVertex2i(-500,-100);
glVertex2i(-500,-200);
glVertex2i(-450,-100);
glVertex2i(-450,-200);
glVertex2i(-400,-100);
glVertex2i(-400,-200);
glVertex2i(-350,-100);
glVertex2i(-350,-200);
glVertex2i(-300,-100);
glVertex2i(-300,-200);
glVertex2i(-250,-100);
glVertex2i(-250,-200);

glColor3f(0.647, 0.165, 0.165);
glVertex2i(-800,-130);
glVertex2i(-230,-130);
glVertex2i(-800,-170);
glVertex2i(-230,-170);
glEnd();
glColor3f(0.502, 0.000, 0.000);
glLineWidth(6);
glBegin(GL_LINES);
glVertex2i(800,-100);
glVertex2i(800,-200);
glVertex2i(750,-100);
glVertex2i(750,-200);
glVertex2i(700,-100);
glVertex2i(700,-200);
glVertex2i(650,-100);
glVertex2i(650,-200);
glVertex2i(600,-100);
glVertex2i(600,-200);
glVertex2i(550,-100);
glVertex2i(550,-200);
glVertex2i(500,-100);
glVertex2i(500,-200);
glVertex2i(450,-100);
glVertex2i(450,-200);
glVertex2i(400,-100);
glVertex2i(400,-200);
glVertex2i(350,-100);
glVertex2i(350,-200);
glVertex2i(300,-100);
glVertex2i(300,-200);
glVertex2i(250,-100);
glVertex2i(250,-200);
glColor3f(0.647, 0.165, 0.165);
glVertex2i(800,-130);
glVertex2i(230,-130);
glVertex2i(800,-170);
glVertex2i(230,-170);
glEnd();
///Sand fences end
glPushMatrix();///Boat start
glTranslatef(1000,0.0,0.0);
glTranslatef(-_boatmove,0.0,0.0);

glColor3f(0.545, 0.271, 0.075);
glBegin(GL_POLYGON);
glVertex2i(-360,-280);
glVertex2i(-20,-280);
glColor3f(0.502, 0.000, 0.000);
glVertex2i(-20,-360);
glVertex2i(-360,-360);
glEnd();

glColor3f(0.502, 0.000, 0.000);
glBegin(GL_TRIANGLES);
glVertex2i(-500,-200);
glVertex2i(-360,-280);
glColor3f(0.545, 0.271, 0.075);
glVertex2i(-360,-360);
glEnd();

glBegin(GL_TRIANGLES);
glColor3f(0.502, 0.000, 0.000);
glVertex2i(-20,-280);
glColor3f(0.545, 0.271, 0.075);
glVertex2i(110,-200);
glVertex2i(-20,-360);
glEnd();


glColor3f(0.824, 0.412, 0.118);
glBegin(GL_TRIANGLES);
glVertex2i(-320,-180);
glVertex2i(-240,-280);
glVertex2i(-360,-280);
glEnd();

glColor3f(0.855, 0.647, 0.125);
glBegin(GL_POLYGON);
glVertex2i(-320,-180);
glVertex2i(-100,-180);
glColor3f(0.627, 0.322, 0.176);
glVertex2i(-40,-280);
glVertex2i(-240,-280);
glEnd();
glPopMatrix();///BOat end
///updated Ship
glPushMatrix();///lower part
//glTranslatef(-108, 0.0, 0.0);
glTranslatef(_shipmove, 0.0, 0.0);
glBegin(GL_POLYGON);
glColor3f(0,0,0);
glVertex2i(-500,-500);
glColor3f(0.282, 0.239, 0.545);
glVertex2i(0,-500);
glColor3f(0,0,0);
glVertex2i(200,-350);
glColor3f(0.282, 0.239, 0.545);
glVertex2i(-700,-350);
glEnd();
glPushMatrix();///box right
glTranslatef(-100,-300, 0.0);
glBegin(GL_POLYGON);
glColor3f(1,1,1);
glVertex2i(-100,-50);
glVertex2i(200,-50);
glVertex2i(200,50);
glVertex2i(-100,50);
glEnd();
glBegin(GL_LINES);///Blue 1
glColor3f(0,0,1);
glVertex2i(-100,-50);
glVertex2i(200,-50);

glEnd();
glBegin(GL_LINES);///Blue 2
glColor3f(0,0,1);
glVertex2i(-100,50);
glVertex2i(200,50);

glEnd();
glBegin(GL_POLYGON);///Right upper
glColor3f(1,0,0);
glVertex2i(-100,55);
glVertex2i(200,55);
glVertex2i(150,150);
glVertex2i(-50,150);
glEnd();
glBegin(GL_LINES);///ship lines
glColor3f(1,0,0);
glVertex2i(-100,0);
glVertex2i(200,0);
glEnd();
glPushMatrix();
glTranslatef(100,30, 0.0);
glScalef(0.25,0.25,0);
glBegin(GL_POLYGON);
glColor3f(0,0,0);
glVertex2i(-100,-50);
glVertex2i(100,-50);
glVertex2i(100,50);
glVertex2i(-100,50);
glEnd();
glTranslatef(0,-220, 0.0);
glBegin(GL_POLYGON);
glColor3f(0,0,0);
glVertex2i(-100,-50);
glVertex2i(100,-50);
glVertex2i(100,50);
glVertex2i(-100,50);
glEnd();
glTranslatef(-400,0, 0.0);
glBegin(GL_POLYGON);
glColor3f(0,0,0);
glVertex2i(-100,-50);
glVertex2i(100,-50);
glVertex2i(100,50);
glVertex2i(-100,50);
glEnd();
glTranslatef(0,220, 0.0);
glBegin(GL_POLYGON);
glColor3f(0,0,0);
glVertex2i(-100,-50);
glVertex2i(100,-50);
glVertex2i(100,50);
glVertex2i(-100,50);
glEnd();
glPopMatrix();
glPushMatrix();///box2 left
glTranslatef(-500,-300, 0.0);
glBegin(GL_POLYGON);
glColor3f(1,1,1);
glVertex2i(-100,-50);
glVertex2i(100,-50);
glVertex2i(100,50);
glVertex2i(-100,50);
glEnd();
glPopMatrix();
glPushMatrix();///box2 left
glTranslatef(-530,-300, 0.0);
glScalef(0.25,0.25,0);
glBegin(GL_POLYGON);
glColor3f(0,0,0);
glVertex2i(-100,-50);
glVertex2i(100,-50);
glVertex2i(100,50);
glVertex2i(-100,50);
glEnd();
glTranslatef(250,0, 0.0);
glBegin(GL_POLYGON);
glColor3f(0,0,0);
glVertex2i(-100,-50);
glVertex2i(100,-50);
glVertex2i(100,50);
glVertex2i(-100,50);
glEnd();
glPushMatrix();
glTranslatef(-300,250, 0.0);///Ship Red part
glBegin(GL_POLYGON);
glColor3f(1,0,0);
glVertex2i(-100,-50);
glVertex2i(100,-50);
glVertex2i(100,500);
glVertex2i(-100,500);
glEnd();
glTranslatef(300,0, 0.0);///Ship Red part
glBegin(GL_POLYGON);
glColor3f(1,0,0);
glVertex2i(-100,-50);
glVertex2i(100,-50);
glVertex2i(100,500);
glVertex2i(-100,500);
glEnd();
glPopMatrix();
glPopMatrix();
///Sand
glPushMatrix();
glBegin(GL_POLYGON);
glColor3f(0.545, 0.271, 0.075);
glVertex2i(-800,-600);
glVertex2i(-250,-600);
glColor3f(	0.824, 0.412, 0.118);
glVertex2i(-100,-550);
glVertex2i(-100,-400);
glVertex2i(-250,-500);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.502, 0.000, 0.000);
glVertex2i(-300,-600);
glVertex2i(-150,-600);
glColor3f(0.545, 0.271, 0.075);
glVertex2i(0,-500);
glVertex2i(-100,-400);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.824, 0.706, 0.549);
glVertex2i(-800,-600);
glColor3f(0.804, 0.522, 0.247);
glVertex2i(-100,-400);
glVertex2i(-800,-400);
//glVertex2i(-100,-400);
glEnd();
glPopMatrix();
    ///Day

    ///Light House
    glPushMatrix();
    glScalef(1.0,1.75, 0.0);
    glTranslatef(-500, -350, 0.0);
    glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(1.000, 1.000, 0.878);
    glVertex2i(0, 0);
    glVertex2i(150, 0);
    glVertex2i(130, 350);
    glVertex2i(20, 350);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(1.000, 0.000, 0.000);
    glVertex2i(4, 3);
    glVertex2i(149, 3);
    glVertex2i(148, 60);
    glVertex2i(5, 60);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(1.000, 0.000, 0.000);
    glVertex2i(10,175 );
    glVertex2i(7, 120);
    glVertex2i(145, 120);
    glVertex2i(140, 175);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1, 210, 0.0);
    glBegin(GL_POLYGON);
    glColor3f(0.663, 0.663, 0.663);
    glVertex2i(40, 0);
    glVertex2i(110, 0);
    glVertex2i(110, 50);
    glVertex2i(40, 50);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(1, 210, 0.0);
    glBegin(GL_POLYGON);
    glColor3f(0.412, 0.412, 0.412);
    glVertex2i(47, 0);
    glVertex2i(105, 0);
    glVertex2i(105, 47);
    glVertex2i(47, 47);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(1, 400, 0.0);
    glBegin(GL_POLYGON);
    glColor3f(0.412, 0.412, 0.412);
    glVertex2i(0, 0);
    glVertex2i(145, 0);
    glVertex2i(120, 50);
    glVertex2i(25, 50);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1, 400, 0.0);
    glBegin(GL_POLYGON);
    glColor3f(0.663, 0.663, 0.663);
    glVertex2i(9, 0);
    glVertex2i(136, 0);
    glVertex2i(120, 50);
    glVertex2i(25, 50);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(00, 50, 0.0);
    glBegin(GL_POLYGON);
    glColor3f(1.000, 0.843, 0.000);
    glVertex2i(30, 300);
    glVertex2i(120, 300);
    glVertex2i(120, 350);
    glVertex2i(30, 350);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(30, 350, 0.0);
    glBegin(GL_POLYGON);
    glColor3f(0.412, 0.412, 0.412);
    glVertex2i(0, 0);
    glVertex2i(10, 0);
    glVertex2i(10, 50);
    glVertex2i(0, 50);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(110, 350, 0.0);
    glBegin(GL_POLYGON);
    glColor3f(0.412, 0.412, 0.412);
    glVertex2i(0, 0);
    glVertex2i(10, 0);
    glVertex2i(10, 50);
    glVertex2i(0, 50);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(1.000, 0.000, 0.000);
    glVertex2i(15, 300);
    glVertex2i(135, 300);
    glVertex2i(130, 350);
    glVertex2i(20, 350);
    glEnd();
    glPopMatrix();
    glPopMatrix();

glutSwapBuffers();
}

void Rainfall(void)
{
    float theta;
glClear(GL_COLOR_BUFFER_BIT);
glClearColor(0.000, 0.000, 0.502,0);

///Clouds
glPushMatrix();
glTranslatef(_cloudsmove,0, 0.000);
    glPushMatrix();
    glTranslatef(200,500, 0.000);
   glColor3f(0.412, 0.412, 0.412);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(0+70*cos(theta), 0+30*sin(theta));
   }
    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(220,470, 0.000);
   glColor3f(0.439, 0.502, 0.565);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(0+70*cos(theta), 0+30*sin(theta));
   }
    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(240,530, 0.000);
   glColor3f(0.663, 0.663, 0.663);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(0+70*cos(theta), 0+30*sin(theta));
   }
    glEnd();
    glPopMatrix();
    glPopMatrix();

///Clouds 2
glPushMatrix();
//glTranslatef(-500,500, 0.000);
glTranslatef(_cloudsmove2,0, 0.000);
    glPushMatrix();
    glTranslatef(200,500, 0.000);
   glColor3f(0.663, 0.663, 0.663);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(0+70*cos(theta), 0+30*sin(theta));
   }
    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(220,470, 0.000);
   glColor3f(0.663, 0.663, 0.663);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(0+70*cos(theta), 0+30*sin(theta));
   }
    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(240,530, 0.000);
   glColor3f(0.439, 0.502, 0.565);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(0+70*cos(theta), 0+30*sin(theta));
   }
    glEnd();
    glPopMatrix();
    glPopMatrix();
///Clouds 4
glPushMatrix();
//glTranslatef(-500,500, 0.000);
glTranslatef(_cloudsmove,0, 0.000);
    glPushMatrix();
    glTranslatef(-200,350, 0.000);
   glColor3f(0.412, 0.412, 0.412);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(0+70*cos(theta), 0+30*sin(theta));
   }
    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(-220,370, 0.000);
   glColor3f(0.439, 0.502, 0.565);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(0+70*cos(theta), 0+30*sin(theta));
   }
    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(-260,370, 0.000);
   glColor3f(0.412, 0.412, 0.412);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(0+70*cos(theta), 0+30*sin(theta));
   }
    glEnd();
    glPopMatrix();
    glPopMatrix();
///Clouds 3
glPushMatrix();
glTranslatef(_cloudsmove,0, 0.000);

    glPushMatrix();
    glTranslatef(-520,370, 0.000);
   glColor3f(0.439, 0.502, 0.565);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(0+70*cos(theta), 0+30*sin(theta));
   }
    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(-460,330, 0.000);
   glColor3f(0.439, 0.502, 0.565);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(0+70*cos(theta), 0+30*sin(theta));
   }
    glEnd();
    glPopMatrix();
    glPopMatrix();
///Clouds 4
glPushMatrix();
glTranslatef(_cloudsmove2,0, 0.000);

    glPushMatrix();
    glTranslatef(-520,570, 0.000);
   glColor3f(0.439, 0.502, 0.565);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(0+70*cos(theta), 0+30*sin(theta));
   }
    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(-460,530, 0.000);
   glColor3f(0.412, 0.412, 0.412);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(0+70*cos(theta), 0+30*sin(theta));
   }
    glEnd();
    glPopMatrix();
    glPopMatrix();

///Clouds 5
glPushMatrix();
glTranslatef(_cloudsmove2,0, 0.000);

    glPushMatrix();
    glTranslatef(-520,570, 0.000);
   glColor3f(0.412, 0.412, 0.412);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(0+70*cos(theta), 0+30*sin(theta));
   }
    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(-460,530, 0.000);
   glColor3f(0.412, 0.412, 0.412);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(0+70*cos(theta), 0+30*sin(theta));
   }
    glEnd();
    glPopMatrix();
    glPopMatrix();
///land
glBegin(GL_POLYGON);
glColor3f(0.196, 0.804, 0.196);
glVertex2i(-800,-200);
glColor3f(0.486, 0.988, 0.000);
glVertex2i(800,-200);
glColor3f(0.000, 0.392, 0.000);
glVertex2i(800,0);
glVertex2i(-800,0);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.196, 0.804, 0.196);
glVertex2i(430,0);
glColor3f(0.486, 0.988, 0.000);
glVertex2i(800,0);
glColor3f(0.000, 0.392, 0.000);
glVertex2i(800,330);
//glVertex2i(-800,0);
glEnd();
///tree-1
   glPushMatrix();
   glTranslatef(100,0,0);
   glPushMatrix();
    glColor3f(0.196, 0.804, 0.196);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(-100+50*cos(theta), 220+50*sin(theta));
   }
    glEnd();
   glPopMatrix();


    glPushMatrix();
    glColor3f(0.000, 1.000, 0.000);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(0+110*cos(theta), 250+70*sin(theta));
   }
    glEnd();
glPopMatrix();


    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.627, 0.322, 0.176);
    glVertex2i(0, 250);
    glVertex2i(-20, 0);
    glVertex2i(20, 0);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glColor3f(0.196, 0.804, 0.196);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
    theta=i*3.142/180;
    glVertex2f(100+80*cos(theta), 170+70*sin(theta));
   }
    glEnd();
   glPopMatrix();
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.627, 0.322, 0.176);
    glVertex2i(0, 100);
    glVertex2i(0, 70);
    glVertex2i(70, 158);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.627, 0.322, 0.176);
    glVertex2i(-70, 200);
    glVertex2i(0, 140);
    glVertex2i(0, 158);
    glEnd();
    glPopMatrix();
    glPopMatrix();
    ///tree-2
   glPushMatrix();
   glTranslatef(130,0,0);
    glScalef(0.5,0.5,0);
   glPushMatrix();
    glColor3f(0.196, 0.804, 0.196);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(-100+80*cos(theta), 220+70*sin(theta));
   }
    glEnd();
   glPopMatrix();


    glPushMatrix();
    glColor3f(0.000, 1.000, 0.000);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(0+110*cos(theta), 250+70*sin(theta));
   }
    glEnd();
glPopMatrix();


    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.627, 0.322, 0.176);
    glVertex2i(0, 250);
    glVertex2i(-20, 0);
    glVertex2i(20, 0);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glColor3f(0.196, 0.804, 0.196);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
    theta=i*3.142/180;
    glVertex2f(100+80*cos(theta), 170+70*sin(theta));
   }
    glEnd();
   glPopMatrix();
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.627, 0.322, 0.176);
    glVertex2i(0, 100);
    glVertex2i(0, 70);
    glVertex2i(70, 158);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.627, 0.322, 0.176);
    glVertex2i(-70, 200);
    glVertex2i(0, 140);
    glVertex2i(0, 158);
    glEnd();
    glPopMatrix();
    glPopMatrix();
     ///tree-3
   glPushMatrix();
   glTranslatef(800,0,0);
    glScalef(0.9,0.9,0);
   glPushMatrix();
    glColor3f(0.196, 0.804, 0.196);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(-100+80*cos(theta), 220+70*sin(theta));
   }
    glEnd();
   glPopMatrix();
    glPushMatrix();
    glColor3f(0.000, 1.000, 0.000);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(0+110*cos(theta), 250+70*sin(theta));
   }
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.627, 0.322, 0.176);
    glVertex2i(0, 250);
    glVertex2i(-20, 0);
    glVertex2i(20, 0);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glColor3f(0.196, 0.804, 0.196);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
    theta=i*3.142/180;
    glVertex2f(100+80*cos(theta), 170+70*sin(theta));
   }
    glEnd();
   glPopMatrix();
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.627, 0.322, 0.176);
    glVertex2i(0, 100);
    glVertex2i(0, 70);
    glVertex2i(70, 158);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.627, 0.322, 0.176);
    glVertex2i(-70, 200);
    glVertex2i(0, 140);
    glVertex2i(0, 158);
    glEnd();
    glPopMatrix();
    glPopMatrix();
      ///tree-4
   glPushMatrix();
   glTranslatef(750,50,0);
    glScalef(0.5,0.5,0);
   glPushMatrix();
    glColor3f(0.196, 0.804, 0.196);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(-100+80*cos(theta), 220+70*sin(theta));
   }
    glEnd();
   glPopMatrix();
    glPushMatrix();
    glColor3f(0.000, 1.000, 0.000);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(0+110*cos(theta), 250+70*sin(theta));
   }
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.627, 0.322, 0.176);
    glVertex2i(0, 250);
    glVertex2i(-20, 0);
    glVertex2i(20, 0);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glColor3f(0.196, 0.804, 0.196);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
    theta=i*3.142/180;
    glVertex2f(100+80*cos(theta), 170+70*sin(theta));
   }
    glEnd();
   glPopMatrix();
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.627, 0.322, 0.176);
    glVertex2i(0, 100);
    glVertex2i(0, 70);
    glVertex2i(70, 158);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.627, 0.322, 0.176);
    glVertex2i(-70, 200);
    glVertex2i(0, 140);
    glVertex2i(0, 158);
    glEnd();
    glPopMatrix();
    glPopMatrix();
    ///tree-5
   glPushMatrix();
   glTranslatef(-300,0,0);
    glScalef(0.5,0.5,0);
   glPushMatrix();
    glColor3f(0.196, 0.804, 0.196);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(-100+80*cos(theta), 220+70*sin(theta));
   }
    glEnd();
   glPopMatrix();
    glPushMatrix();
    glColor3f(0.000, 1.000, 0.000);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(0+110*cos(theta), 250+70*sin(theta));
   }
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.627, 0.322, 0.176);
    glVertex2i(0, 250);
    glVertex2i(-20, 0);
    glVertex2i(20, 0);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glColor3f(0.196, 0.804, 0.196);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
    theta=i*3.142/180;
    glVertex2f(100+80*cos(theta), 170+70*sin(theta));
   }
    glEnd();
   glPopMatrix();
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.627, 0.322, 0.176);
    glVertex2i(0, 100);
    glVertex2i(0, 70);
    glVertex2i(70, 158);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.627, 0.322, 0.176);
    glVertex2i(-70, 200);
    glVertex2i(0, 140);
    glVertex2i(0, 158);
    glEnd();
    glPopMatrix();
    glPopMatrix();


///Houses
glPushMatrix();///Roof
glColor3f(0.855, 0.647, 0.125);
glBegin(GL_POLYGON);
glVertex2i(220,320);
glVertex2i(460,320);
glVertex2i(540,200);
glColor3f(0.824, 0.412, 0.118);
glVertex2i(320,200);
glEnd();
glPopMatrix();

glPushMatrix();///window wall
glColor3f(1.000, 0.498, 0.314);
glBegin(GL_POLYGON);
glVertex2i(240,300);
glVertex2i(320,200);
glVertex2i(320,0);
glColor3f(0.545, 0.271, 0.075);
glVertex2i(180,0);
glVertex2i(180,180);
glEnd();

///Rain windows
glColor3f(1.000, 1.000, 0.000);///window
glBegin(GL_POLYGON);
glVertex2i(220,140);
glVertex2i(280,140);
glVertex2i(280,80);
glVertex2i(220,80);
glEnd();

glColor3f(0.545, 0.000, 0.000);///window
glLineWidth(3);
glBegin(GL_LINES);
glVertex2i(220,140);
glVertex2i(280,140);
glVertex2i(280,80);
glVertex2i(220,80);
glVertex2i(220,140);
glVertex2i(220,80);
glVertex2i(280,140);
glVertex2i(280,80);

glEnd();
glPopMatrix();

glPushMatrix();///Roof PIPE
glColor3f(1.000, 0.271, 0.000);
glBegin(GL_POLYGON);
glVertex2i(220,320);
glVertex2i(240,300);
glColor3f(0.824, 0.412, 0.118);
glVertex2i(180,180);
glVertex2i(140,180);
glVertex2i(220,320);
glEnd();

glColor3f(1.000, 1.000, 1.000);
glLineWidth(3);
glBegin(GL_LINES);
glVertex2i(150,200);
glVertex2i(190,200);
glVertex2i(170,240);
glVertex2i(210,240);
glVertex2i(195,280);
glVertex2i(230,280);
glEnd();
glPopMatrix();


glPushMatrix();
glColor3f(0.722, 0.525, 0.043);///second roof
glBegin(GL_POLYGON);
glVertex2i(320,200);
glVertex2i(540,200);
glColor3f(0.855, 0.647, 0.125);
glVertex2i(620,100);
glVertex2i(400,100);
glEnd();

glColor3f(1.000, 0.498, 0.314);///Door right side wall
glBegin(GL_POLYGON);
glVertex2i(400,100);
glVertex2i(540,100);
glColor3f(0.502, 0.000, 0.000);
glVertex2i(540,0);
glVertex2i(400,0);
glEnd();

glColor3f(1.000, 0.549, 0.000);///Door right window
glBegin(GL_POLYGON);
glVertex2i(420,60);
glVertex2i(520,60);
glVertex2i(520,20);
glVertex2i(420,20);
glEnd();

glColor3f(1.000, 0.647, 0.000);///Door right window
glBegin(GL_TRIANGLES);
glVertex2i(420,60);
glVertex2i(520,20);
glVertex2i(420,20);

glEnd();

glColor3f(0.412, 0.412, 0.412);///floor
glBegin(GL_POLYGON);
glVertex2i(400,0);
glVertex2i(540,0);
glColor3f(0.184, 0.310, 0.310);
glVertex2i(620,-60);
glVertex2i(460,-60);
glEnd();

glPushMatrix();
glColor3f(0.545, 0.000, 0.000);
glLineWidth(4);
glBegin(GL_LINES);
glVertex2i(545,60);
glVertex2i(800,60);
glVertex2i(545,30);
glVertex2i(800,30);
glEnd();
glPopMatrix();


glColor3f(0.333, 0.420, 0.184);///home stand
glLineWidth(5);
glBegin(GL_LINES);
glVertex2i(620,100);
glVertex2i(620,-60);
glVertex2i(540,100);
glVertex2i(540,0);
glVertex2i(460,100);
glVertex2i(460,-60);
glVertex2i(400,100);
glVertex2i(400,0);
glEnd();
glPopMatrix();

glPushMatrix();
glColor3f(0.824, 0.412, 0.118);///Door Wall
glBegin(GL_POLYGON);
glVertex2i(320,200);
glVertex2i(400,100);
glVertex2i(400,0);

glVertex2i(380,0);
glVertex2i(380,100);
glVertex2i(340,100);
glColor3f(0.698, 0.133, 0.133);
glVertex2i(340,0);
glVertex2i(320,0);
glEnd();

glColor3f(0.000, 0.392, 0.000);///Door Side wall stand
glLineWidth(3);
glBegin(GL_LINES);
glVertex2i(320,200);
glVertex2i(320,0);
glEnd();

glColor3f(1.000, 1.000, 0.000);///Door
glBegin(GL_POLYGON);
glVertex2i(340,100);
glVertex2i(380,100);
glColor3f(1.000, 0.549, 0.000);
glVertex2i(380,0);
glVertex2i(340,0);

glEnd();
glPopMatrix();

glColor3f(0.502, 0.000, 0.000);
glBegin(GL_POLYGON);
glVertex2i(180,0);
glVertex2i(400,0);
glColor3f(0.545, 0.271, 0.075);
glVertex2i(400,-20);
glVertex2i(160,-20);
glEnd();

glColor3f(0.502, 0.000, 0.000);
glBegin(GL_POLYGON);
glVertex2i(400,0);
glVertex2i(460,-60);
glColor3f(0.545, 0.271, 0.075);
glVertex2i(460,-80);
glVertex2i(400,-20);
glEnd();

glColor3f(0.502, 0.000, 0.000);
glBegin(GL_POLYGON);
glVertex2i(460,-60);
glVertex2i(620,-60);
glColor3f(0.545, 0.271, 0.075);
glVertex2i(640,-80);
glVertex2i(460,-80);
glEnd();

glPushMatrix();
glColor3f(0.545, 0.000, 0.000);
glLineWidth(6);
glBegin(GL_LINES);
glVertex2i(650,80);
glVertex2i(650,0);
glVertex2i(690,80);
glVertex2i(690,0);
glVertex2i(730,80);
glVertex2i(730,0);
glVertex2i(770,80);
glVertex2i(770,0);
glVertex2i(570,80);
glVertex2i(570,0);
glVertex2i(605,80);
glVertex2i(605,0);

glEnd();
glPopMatrix();


glPushMatrix();
glColor3f(0.545, 0.271, 0.075);//2nd house roof
glBegin(GL_POLYGON);
glVertex2i(472,300);
glVertex2i(660,300);
glColor3f(0.722, 0.525, 0.043);
glVertex2i(600,200);
glVertex2i(540,200);
glEnd();

glColor3f(0.502, 0.000, 0.000);//bagan bera
glLineWidth(6);
glBegin(GL_LINES);

glVertex2i(720,300);
glVertex2i(720,240);
glVertex2i(740,320);
glVertex2i(740,260);
glVertex2i(760,340);
glVertex2i(760,280);
glVertex2i(780,360);
glVertex2i(780,300);

glVertex2i(700,260);
glVertex2i(800,360);

glColor3f(0.722, 0.525, 0.043);
glVertex2i(720,240);
glVertex2i(800,320);


glEnd();



glColor3f(0.502, 0.000, 0.000);
glBegin(GL_POLYGON);
glVertex2i(660,300);
glVertex2i(740,200);
glVertex2i(700,200);
glVertex2i(648,280);
glEnd();

glPopMatrix();

glPushMatrix();
///2nd house door wall
glColor3f(0.627, 0.322, 0.176);
glBegin(GL_POLYGON);
glVertex2i(648,280);
glVertex2i(700,200);
glVertex2i(700,120);
glVertex2i(605,120);
glVertex2i(600,125);
glVertex2i(600,200);
glEnd();

glColor3f(0.957, 0.643, 0.376);
glBegin(GL_TRIANGLES);
glVertex2i(540,200);
glVertex2i(600,200);
glVertex2i(600,125);
glEnd();
glPopMatrix();

glPushMatrix();///2nd house door
glColor3f(0.753, 0.753, 0.753);
glBegin(GL_POLYGON);
glVertex2i(630,200);
glVertex2i(680,200);
glVertex2i(680,120);
glVertex2i(630,120);
glEnd();

glColor3f(0.000, 0.000, 0.000);
glBegin(GL_POLYGON);
glVertex2i(680,200);
glVertex2i(680,120);
glVertex2i(660,120);
glVertex2i(660,180);
glEnd();

glColor3f(0.300, 0.220, 0.060);
glBegin(GL_POLYGON);///2nd door front side
glVertex2i(600,120);
glVertex2i(720,120);
glVertex2i(720,100);
glVertex2i(620,100);
glEnd();

glColor3f(0.753, 0.753, 0.753);///2nd door window
glBegin(GL_TRIANGLES);
glVertex2i(559,180);
glVertex2i(580,180);
glVertex2i(580,155);
glEnd();

glPopMatrix();
glPushMatrix();
//glColor3f(0.647, 0.165, 0.165);
  ///Windmill-1
    glPushMatrix();
    glTranslatef(-600,-50,0);
    glScalef(0.2,1.3,0);
    glBegin(GL_POLYGON);
    glColor3f(0.863, 0.863, 0.863);
    glVertex2i(0, 0);
    glVertex2i(-100, 0);
    glColor3f(0.467, 0.533, 0.600);
    glVertex2i(100, 0);
    glVertex2i(50,300);
    glVertex2i(-50,300);
    glEnd();
    glPopMatrix();
    glTranslatef(-550,-50,0);///windmill-2
    glScalef(0.2,1.0,0);
    glBegin(GL_POLYGON);
    glColor3f(0.863, 0.863, 0.863);
    glVertex2i(0, 0);
    glVertex2i(-100, 0);
    glColor3f(0.467, 0.533, 0.600);
    glVertex2i(100, 0);
    glVertex2i(50,300);
    glVertex2i(-50,300);
    glEnd();
    glPopMatrix();
///Hils
 glPushMatrix();
 glTranslatef(-850,-50,0);
  glScalef(1.0,1.5,0);
    glBegin(GL_POLYGON);
    glColor3f(0.502, 0.000, 0.000);
    glVertex2i(0, 0);
    glVertex2i(450, 0);
    glVertex2i(200, 200);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.824, 0.412, 0.118);
    glVertex2i(0, 0);
    glVertex2i(150, 0);
    glVertex2i(200, 200);
    glEnd();
    glPushMatrix();
    glTranslatef(200, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glColor3f(0.502, 0.000, 0.000);
    glVertex2i(0, 0);
    glVertex2i(400, 0);
    glVertex2i(200, 250);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.824, 0.412, 0.118);
    glVertex2i(0, 0);
    glVertex2i(150, 0);
    glVertex2i(200, 250);
    glEnd();
glPopMatrix();
glPopMatrix();

///Wind
    glPushMatrix();
    glTranslatef(-600,300,0);
    glRotatef(_angle, 0.0, 0.0, 1.0);
    glScalef(0.5,0.5,0);
    glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(1.000, 0.000, 0.000);
    glVertex2i(0, 0);
    glVertex2i(150, 0);
    glVertex2i(140, 50);
    //glVertex2i(20, 350);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(1.000, 0.000, 0.000);
    glVertex2i(0, 0);
    glVertex2i(0, 150);
    glVertex2i(-50, 140);
    //glVertex2i(20, 350);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    //glTranslatef(0.0, 0.0, 0.0);
    //glRotatef(_angle, 0.0, 0.0, 0.0); //Rotate about the y-axis
    //glScalef(0.0,0.0,0); //Move to the center of the trapezoid
    glBegin(GL_POLYGON);
    glColor3f(1.000, 0.000, 0.000);
    glVertex2i(-150, 0);
    glVertex2i(-140, -50);
    glVertex2i(0, 0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(1.000, 0.000, 0.000);
    glVertex2i(0, 0);
    glVertex2i(0, -150);
    glVertex2i(50, -140);
    //glVertex2i(20, 350);
    glEnd();
    glPopMatrix();


    glPushMatrix();
//    float theta;
    glColor3f(1,1,1);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(0+20*cos(theta), 0+20*sin(theta));
   }
    glEnd();
    glPopMatrix();
    glPopMatrix();
///wind 2
    glPushMatrix();
    glTranslatef(-550,230,0);
    glRotatef(_angle, 0.0, 0.0,-1.0);
    glScalef(0.3,0.3,0);
    glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(1.000, 0.000, 0.000);
    glVertex2i(0, 0);
    glVertex2i(150, 0);
    glVertex2i(140, 50);
    //glVertex2i(20, 350);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(1.000, 0.000, 0.000);
    glVertex2i(0, 0);
    glVertex2i(0, 150);
    glVertex2i(-50, 140);
    //glVertex2i(20, 350);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    //glTranslatef(0.0, 0.0, 0.0);
    //glRotatef(_angle, 0.0, 0.0, 0.0); //Rotate about the y-axis
    //glScalef(0.0,0.0,0); //Move to the center of the trapezoid
    glBegin(GL_POLYGON);
    glColor3f(1.000, 0.000, 0.000);
    glVertex2i(-150, 0);
    glVertex2i(-140, -50);
    glVertex2i(0, 0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(1.000, 0.000, 0.000);
    glVertex2i(0, 0);
    glVertex2i(0, -150);
    glVertex2i(50, -140);
    //glVertex2i(20, 350);
    glEnd();
    glPopMatrix();


    glPushMatrix();
//    float theta;
    glColor3f(1,1,1);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(0+20*cos(theta), 0+20*sin(theta));
   }
    glEnd();
    glPopMatrix();
    ///

    glPopMatrix();
///tree-6
   glPushMatrix();
  /// glTranslatef(-600,0,0);(windmill posi)
   glTranslatef(-600,-100,0);
    glScalef(0.5,0.5,0);
   glPushMatrix();
    glColor3f(0.196, 0.804, 0.196);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(-100+80*cos(theta), 220+70*sin(theta));
   }
    glEnd();
   glPopMatrix();
    glPushMatrix();
    glColor3f(0.000, 1.000, 0.000);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(0+110*cos(theta), 250+70*sin(theta));
   }
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.627, 0.322, 0.176);
    glVertex2i(0, 250);
    glVertex2i(-20, 0);
    glVertex2i(20, 0);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glColor3f(0.196, 0.804, 0.196);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
    theta=i*3.142/180;
    glVertex2f(100+80*cos(theta), 170+70*sin(theta));
   }
    glEnd();
   glPopMatrix();
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.627, 0.322, 0.176);
    glVertex2i(0, 100);
    glVertex2i(0, 70);
    glVertex2i(70, 158);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.627, 0.322, 0.176);
    glVertex2i(-70, 200);
    glVertex2i(0, 140);
    glVertex2i(0, 158);
    glEnd();
    glPopMatrix();
    glPopMatrix();


///river
glBegin(GL_POLYGON);//river
glColor3f(0.255, 0.412, 0.882);
glVertex2i(800,-600);
glColor3f(	0.000, 0.749, 1.000);
glVertex2i(-800,-600);
glColor3f(0.098, 0.098, 0.439);
glVertex2i(-800,-200);
glVertex2i(800,-200);
glEnd();

///mud
glPushMatrix();
glBegin(GL_POLYGON);
glColor3f(0.627, 0.322, 0.176);
glVertex2i(-800,-200);
glColor3f(0.804, 0.522, 0.247);
glVertex2i(800,-200);
glColor3f(0.627, 0.322, 0.176);
glVertex2i(800,-250);
glVertex2i(-800,-250);
glEnd();
glBegin(GL_LINES);
glColor3f(0.502, 0.000, 0.000);
glVertex2i(-800,-200);
glVertex2i(800,-200);
glEnd();
glPopMatrix();
///fenches
glColor3f(0.502, 0.000, 0.000);
glLineWidth(6);
glBegin(GL_LINES);
glVertex2i(-800,-100);
glVertex2i(-800,-200);
glVertex2i(-750,-100);
glVertex2i(-750,-200);
glVertex2i(-700,-100);
glVertex2i(-700,-200);
glVertex2i(-650,-100);
glVertex2i(-650,-200);
glVertex2i(-600,-100);
glVertex2i(-600,-200);
glVertex2i(-550,-100);
glVertex2i(-550,-200);
glVertex2i(-500,-100);
glVertex2i(-500,-200);
glVertex2i(-450,-100);
glVertex2i(-450,-200);
glVertex2i(-400,-100);
glVertex2i(-400,-200);
glVertex2i(-350,-100);
glVertex2i(-350,-200);
glVertex2i(-300,-100);
glVertex2i(-300,-200);
glVertex2i(-250,-100);
glVertex2i(-250,-200);

glColor3f(0.647, 0.165, 0.165);
glVertex2i(-800,-130);
glVertex2i(-230,-130);
glVertex2i(-800,-170);
glVertex2i(-230,-170);
glEnd();
glColor3f(0.502, 0.000, 0.000);
glLineWidth(6);
glBegin(GL_LINES);
glVertex2i(800,-100);
glVertex2i(800,-200);
glVertex2i(750,-100);
glVertex2i(750,-200);
glVertex2i(700,-100);
glVertex2i(700,-200);
glVertex2i(650,-100);
glVertex2i(650,-200);
glVertex2i(600,-100);
glVertex2i(600,-200);
glVertex2i(550,-100);
glVertex2i(550,-200);
glVertex2i(500,-100);
glVertex2i(500,-200);
glVertex2i(450,-100);
glVertex2i(450,-200);
glVertex2i(400,-100);
glVertex2i(400,-200);
glVertex2i(350,-100);
glVertex2i(350,-200);
glVertex2i(300,-100);
glVertex2i(300,-200);
glVertex2i(250,-100);
glVertex2i(250,-200);
glColor3f(0.647, 0.165, 0.165);
glVertex2i(800,-130);
glVertex2i(230,-130);
glVertex2i(800,-170);
glVertex2i(230,-170);
glEnd();
///Sand fences end
/*glPushMatrix();///Boat start
glTranslatef(1000,0.0,0.0);
glTranslatef(-_boatmove,0.0,0.0);

glColor3f(0.545, 0.271, 0.075);
glBegin(GL_POLYGON);
glVertex2i(-360,-280);
glVertex2i(-20,-280);
glColor3f(0.502, 0.000, 0.000);
glVertex2i(-20,-360);
glVertex2i(-360,-360);
glEnd();

glColor3f(0.502, 0.000, 0.000);
glBegin(GL_TRIANGLES);
glVertex2i(-500,-200);
glVertex2i(-360,-280);
glColor3f(0.545, 0.271, 0.075);
glVertex2i(-360,-360);
glEnd();

glBegin(GL_TRIANGLES);
glColor3f(0.502, 0.000, 0.000);
glVertex2i(-20,-280);
glColor3f(0.545, 0.271, 0.075);
glVertex2i(110,-200);
glVertex2i(-20,-360);
glEnd();


glColor3f(0.824, 0.412, 0.118);
glBegin(GL_TRIANGLES);
glVertex2i(-320,-180);
glVertex2i(-240,-280);
glVertex2i(-360,-280);
glEnd();

glColor3f(0.855, 0.647, 0.125);
glBegin(GL_POLYGON);
glVertex2i(-320,-180);
glVertex2i(-100,-180);
glColor3f(0.627, 0.322, 0.176);
glVertex2i(-40,-280);
glVertex2i(-240,-280);
glEnd();
glPopMatrix();///BOat end*/
///updated Ship
glPushMatrix();///lower part
//glTranslatef(-108, 0.0, 0.0);
glTranslatef(_shipmove, 0.0, 0.0);
glBegin(GL_POLYGON);
glColor3f(0,0,0);
glVertex2i(-500,-500);
glColor3f(0.282, 0.239, 0.545);
glVertex2i(0,-500);
glColor3f(0,0,0);
glVertex2i(200,-350);
glColor3f(0.282, 0.239, 0.545);
glVertex2i(-700,-350);
glEnd();
glPushMatrix();///box right
glTranslatef(-100,-300, 0.0);
glBegin(GL_POLYGON);
glColor3f(1,1,1);
glVertex2i(-100,-50);
glVertex2i(200,-50);
glVertex2i(200,50);
glVertex2i(-100,50);
glEnd();
glBegin(GL_LINES);///Blue 1
glColor3f(0,0,1);
glVertex2i(-100,-50);
glVertex2i(200,-50);

glEnd();
glBegin(GL_LINES);///Blue 2
glColor3f(0,0,1);
glVertex2i(-100,50);
glVertex2i(200,50);

glEnd();
glBegin(GL_POLYGON);///Right upper
glColor3f(1,0,0);
glVertex2i(-100,55);
glVertex2i(200,55);
glVertex2i(150,150);
glVertex2i(-50,150);
glEnd();
glBegin(GL_LINES);///ship lines
glColor3f(1,0,0);
glVertex2i(-100,0);
glVertex2i(200,0);
glEnd();
glPushMatrix();
glTranslatef(100,30, 0.0);
glScalef(0.25,0.25,0);
glBegin(GL_POLYGON);
glColor3f(0,0,0);
glVertex2i(-100,-50);
glVertex2i(100,-50);
glVertex2i(100,50);
glVertex2i(-100,50);
glEnd();
glTranslatef(0,-220, 0.0);
glBegin(GL_POLYGON);
glColor3f(0,0,0);
glVertex2i(-100,-50);
glVertex2i(100,-50);
glVertex2i(100,50);
glVertex2i(-100,50);
glEnd();
glTranslatef(-400,0, 0.0);
glBegin(GL_POLYGON);
glColor3f(0,0,0);
glVertex2i(-100,-50);
glVertex2i(100,-50);
glVertex2i(100,50);
glVertex2i(-100,50);
glEnd();
glTranslatef(0,220, 0.0);
glBegin(GL_POLYGON);
glColor3f(0,0,0);
glVertex2i(-100,-50);
glVertex2i(100,-50);
glVertex2i(100,50);
glVertex2i(-100,50);
glEnd();
glPopMatrix();
glPushMatrix();///box2 left
glTranslatef(-500,-300, 0.0);
glBegin(GL_POLYGON);
glColor3f(1,1,1);
glVertex2i(-100,-50);
glVertex2i(100,-50);
glVertex2i(100,50);
glVertex2i(-100,50);
glEnd();
glPopMatrix();
glPushMatrix();///box2 left
glTranslatef(-530,-300, 0.0);
glScalef(0.25,0.25,0);
glBegin(GL_POLYGON);
glColor3f(0,0,0);
glVertex2i(-100,-50);
glVertex2i(100,-50);
glVertex2i(100,50);
glVertex2i(-100,50);
glEnd();
glTranslatef(250,0, 0.0);
glBegin(GL_POLYGON);
glColor3f(0,0,0);
glVertex2i(-100,-50);
glVertex2i(100,-50);
glVertex2i(100,50);
glVertex2i(-100,50);
glEnd();
glPushMatrix();
glTranslatef(-300,250, 0.0);///Ship Red part
glBegin(GL_POLYGON);
glColor3f(1,0,0);
glVertex2i(-100,-50);
glVertex2i(100,-50);
glVertex2i(100,500);
glVertex2i(-100,500);
glEnd();
glTranslatef(300,0, 0.0);///Ship Red part
glBegin(GL_POLYGON);
glColor3f(1,0,0);
glVertex2i(-100,-50);
glVertex2i(100,-50);
glVertex2i(100,500);
glVertex2i(-100,500);
glEnd();
glPopMatrix();
glPopMatrix();
///Sand
glPushMatrix();
glBegin(GL_POLYGON);
glColor3f(0.545, 0.271, 0.075);
glVertex2i(-800,-600);
glVertex2i(-250,-600);
glColor3f(	0.824, 0.412, 0.118);
glVertex2i(-100,-550);
glVertex2i(-100,-400);
glVertex2i(-250,-500);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.502, 0.000, 0.000);
glVertex2i(-300,-600);
glVertex2i(-150,-600);
glColor3f(0.545, 0.271, 0.075);
glVertex2i(0,-500);
glVertex2i(-100,-400);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.824, 0.706, 0.549);
glVertex2i(-800,-600);
glColor3f(0.804, 0.522, 0.247);
glVertex2i(-100,-400);
glVertex2i(-800,-400);
//glVertex2i(-100,-400);
glEnd();
glPopMatrix();
///Siren Light
    glPushMatrix();
    glTranslatef(-400,50, 0.0);
    glScalef(2.5,3.0,0); //Move to the center of the trapezoid
    glRotatef(_lightrotate, 0.0, 1.0, 0.0); //Rotate about the y-axis
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.980, 0.980, 0.824);
    glVertex2i(0, 0);
    glVertex2i(200, -50);
    glVertex2i(200, 50);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.980, 0.980, 0.824);
    glVertex2i(-200, 50);
    glVertex2i(-200, -50);
    glVertex2i(0, 0);
    glEnd();
    glPopMatrix();

    glPopMatrix();
    ///Light House
    glPushMatrix();
    glScalef(1.0,1.75, 0.0);
    glTranslatef(-500, -350, 0.0);
    glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(1.000, 1.000, 0.878);
    glVertex2i(0, 0);
    glVertex2i(150, 0);
    glVertex2i(130, 350);
    glVertex2i(20, 350);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(1.000, 0.000, 0.000);
    glVertex2i(4, 3);
    glVertex2i(149, 3);
    glVertex2i(148, 60);
    glVertex2i(5, 60);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(1.000, 0.000, 0.000);
    glVertex2i(10,175 );
    glVertex2i(7, 120);
    glVertex2i(145, 120);
    glVertex2i(140, 175);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1, 210, 0.0);
    glBegin(GL_POLYGON);
    glColor3f(0.663, 0.663, 0.663);
    glVertex2i(40, 0);
    glVertex2i(110, 0);
    glVertex2i(110, 50);
    glVertex2i(40, 50);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(1, 210, 0.0);
    glBegin(GL_POLYGON);
    glColor3f(0.412, 0.412, 0.412);
    glVertex2i(47, 0);
    glVertex2i(105, 0);
    glVertex2i(105, 47);
    glVertex2i(47, 47);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(1, 400, 0.0);
    glBegin(GL_POLYGON);
    glColor3f(0.412, 0.412, 0.412);
    glVertex2i(0, 0);
    glVertex2i(145, 0);
    glVertex2i(120, 50);
    glVertex2i(25, 50);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1, 400, 0.0);
    glBegin(GL_POLYGON);
    glColor3f(0.663, 0.663, 0.663);
    glVertex2i(9, 0);
    glVertex2i(136, 0);
    glVertex2i(120, 50);
    glVertex2i(25, 50);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(00, 50, 0.0);
    glBegin(GL_POLYGON);
    glColor3f(1.000, 0.843, 0.000);
    glVertex2i(30, 300);
    glVertex2i(120, 300);
    glVertex2i(120, 350);
    glVertex2i(30, 350);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(30, 350, 0.0);
    glBegin(GL_POLYGON);
    glColor3f(0.412, 0.412, 0.412);
    glVertex2i(0, 0);
    glVertex2i(10, 0);
    glVertex2i(10, 50);
    glVertex2i(0, 50);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(110, 350, 0.0);
    glBegin(GL_POLYGON);
    glColor3f(0.412, 0.412, 0.412);
    glVertex2i(0, 0);
    glVertex2i(10, 0);
    glVertex2i(10, 50);
    glVertex2i(0, 50);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(1.000, 0.000, 0.000);
    glVertex2i(15, 300);
    glVertex2i(135, 300);
    glVertex2i(130, 350);
    glVertex2i(20, 350);
    glEnd();
    glPopMatrix();
    glPopMatrix();
///Rain rain
 glPushMatrix();
 glColor3f(1.000, 1.000, 1.000);
 glTranslatef(-800,-600,0);
 glLineWidth(2);
    for(int i=0;i<500;i++)
    {
    int x=rand()%2080;
    int y=rand()%2000;
    glBegin(GL_LINES);
    glVertex2i(x,y);
    glVertex2i(x+10,y-20);
    glEnd();
    }
 glPopMatrix();
glutSwapBuffers();
}

void displayNight(void)
{
/* clear all pixels */
glClear(GL_COLOR_BUFFER_BIT);
glClearColor(0.000, 0.000, 0.000,0);
	/*glMatrixMode(GL_MODELVIEW); //Switch to the drawing perspective
	glLoadIdentity(); //Reset the drawing perspective
	glRotatef(-_cameraAngle, 0.0, 1.0, 0.0); //Rotate the camera
	glTranslatef(0.0, 0.0, -7.0); //Move forward 5 units*/

///land
glBegin(GL_POLYGON);
glColor3f(0.196, 0.804, 0.196);
glVertex2i(-800,-200);
glColor3f(0.486, 0.988, 0.000);
glVertex2i(800,-200);
glColor3f(0.000, 0.392, 0.000);
glVertex2i(800,0);
glVertex2i(-800,0);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.196, 0.804, 0.196);
glVertex2i(430,0);
glColor3f(0.486, 0.988, 0.000);
glVertex2i(800,0);
glColor3f(0.000, 0.392, 0.000);
glVertex2i(800,330);
//glVertex2i(-800,0);
glEnd();
///tree-1
   glPushMatrix();
   glTranslatef(100,0,0);
   glPushMatrix();
    float theta;
    glColor3f(0.196, 0.804, 0.196);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(-100+80*cos(theta), 220+70*sin(theta));
   }
    glEnd();
   glPopMatrix();


    glPushMatrix();
    glColor3f(0.000, 1.000, 0.000);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(0+110*cos(theta), 250+70*sin(theta));
   }
    glEnd();
glPopMatrix();


    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.627, 0.322, 0.176);
    glVertex2i(0, 250);
    glVertex2i(-20, 0);
    glVertex2i(20, 0);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glColor3f(0.196, 0.804, 0.196);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
    theta=i*3.142/180;
    glVertex2f(100+80*cos(theta), 170+70*sin(theta));
   }
    glEnd();
   glPopMatrix();
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.627, 0.322, 0.176);
    glVertex2i(0, 100);
    glVertex2i(0, 70);
    glVertex2i(70, 158);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.627, 0.322, 0.176);
    glVertex2i(-70, 200);
    glVertex2i(0, 140);
    glVertex2i(0, 158);
    glEnd();
    glPopMatrix();
    glPopMatrix();
    ///tree-2
   glPushMatrix();
   glTranslatef(130,0,0);
    glScalef(0.5,0.5,0);
   glPushMatrix();
    glColor3f(0.196, 0.804, 0.196);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(-100+80*cos(theta), 220+70*sin(theta));
   }
    glEnd();
   glPopMatrix();


    glPushMatrix();
    glColor3f(0.000, 1.000, 0.000);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(0+110*cos(theta), 250+70*sin(theta));
   }
    glEnd();
glPopMatrix();


    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.627, 0.322, 0.176);
    glVertex2i(0, 250);
    glVertex2i(-20, 0);
    glVertex2i(20, 0);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glColor3f(0.196, 0.804, 0.196);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
    theta=i*3.142/180;
    glVertex2f(100+80*cos(theta), 170+70*sin(theta));
   }
    glEnd();
   glPopMatrix();
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.627, 0.322, 0.176);
    glVertex2i(0, 100);
    glVertex2i(0, 70);
    glVertex2i(70, 158);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.627, 0.322, 0.176);
    glVertex2i(-70, 200);
    glVertex2i(0, 140);
    glVertex2i(0, 158);
    glEnd();
    glPopMatrix();
    glPopMatrix();
     ///tree-3
   glPushMatrix();
   glTranslatef(800,0,0);
    glScalef(0.9,0.9,0);
   glPushMatrix();
    glColor3f(0.196, 0.804, 0.196);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(-100+80*cos(theta), 220+70*sin(theta));
   }
    glEnd();
   glPopMatrix();
    glPushMatrix();
    glColor3f(0.000, 1.000, 0.000);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(0+110*cos(theta), 250+70*sin(theta));
   }
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.627, 0.322, 0.176);
    glVertex2i(0, 250);
    glVertex2i(-20, 0);
    glVertex2i(20, 0);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glColor3f(0.196, 0.804, 0.196);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
    theta=i*3.142/180;
    glVertex2f(100+80*cos(theta), 170+70*sin(theta));
   }
    glEnd();
   glPopMatrix();
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.627, 0.322, 0.176);
    glVertex2i(0, 100);
    glVertex2i(0, 70);
    glVertex2i(70, 158);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.627, 0.322, 0.176);
    glVertex2i(-70, 200);
    glVertex2i(0, 140);
    glVertex2i(0, 158);
    glEnd();
    glPopMatrix();
    glPopMatrix();
      ///tree-4
   glPushMatrix();
   glTranslatef(750,50,0);
    glScalef(0.5,0.5,0);
   glPushMatrix();
    glColor3f(0.196, 0.804, 0.196);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(-100+80*cos(theta), 220+70*sin(theta));
   }
    glEnd();
   glPopMatrix();
    glPushMatrix();
    glColor3f(0.000, 1.000, 0.000);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(0+110*cos(theta), 250+70*sin(theta));
   }
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.627, 0.322, 0.176);
    glVertex2i(0, 250);
    glVertex2i(-20, 0);
    glVertex2i(20, 0);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glColor3f(0.196, 0.804, 0.196);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
    theta=i*3.142/180;
    glVertex2f(100+80*cos(theta), 170+70*sin(theta));
   }
    glEnd();
   glPopMatrix();
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.627, 0.322, 0.176);
    glVertex2i(0, 100);
    glVertex2i(0, 70);
    glVertex2i(70, 158);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.627, 0.322, 0.176);
    glVertex2i(-70, 200);
    glVertex2i(0, 140);
    glVertex2i(0, 158);
    glEnd();
    glPopMatrix();
    glPopMatrix();
    ///tree-5
   glPushMatrix();
   glTranslatef(-300,0,0);
    glScalef(0.5,0.5,0);
   glPushMatrix();
    glColor3f(0.196, 0.804, 0.196);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(-100+80*cos(theta), 220+70*sin(theta));
   }
    glEnd();
   glPopMatrix();
    glPushMatrix();
    glColor3f(0.000, 1.000, 0.000);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(0+110*cos(theta), 250+70*sin(theta));
   }
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.627, 0.322, 0.176);
    glVertex2i(0, 250);
    glVertex2i(-20, 0);
    glVertex2i(20, 0);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glColor3f(0.196, 0.804, 0.196);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
    theta=i*3.142/180;
    glVertex2f(100+80*cos(theta), 170+70*sin(theta));
   }
    glEnd();
   glPopMatrix();
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.627, 0.322, 0.176);
    glVertex2i(0, 100);
    glVertex2i(0, 70);
    glVertex2i(70, 158);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.627, 0.322, 0.176);
    glVertex2i(-70, 200);
    glVertex2i(0, 140);
    glVertex2i(0, 158);
    glEnd();
    glPopMatrix();
    glPopMatrix();


///vertex
/*glPushMatrix();
glColor3ub(255,255,0);
glLineWidth(2);
glBegin(GL_LINES);
glVertex3i(-800,0,0);
glVertex3i(800,0,0);
glVertex3i(0,-600,0);
glVertex3i(0,600,0);
glEnd();
glPopMatrix();*/

///Houses
glPushMatrix();///Roof
glColor3f(0.855, 0.647, 0.125);
glBegin(GL_POLYGON);
glVertex2i(220,320);
glVertex2i(460,320);
glVertex2i(540,200);
glColor3f(0.824, 0.412, 0.118);
glVertex2i(320,200);
glEnd();
glPopMatrix();

glPushMatrix();///window wall
glColor3f(1.000, 0.498, 0.314);
glBegin(GL_POLYGON);
glVertex2i(240,300);
glVertex2i(320,200);
glVertex2i(320,0);
glColor3f(0.545, 0.271, 0.075);
glVertex2i(180,0);
glVertex2i(180,180);
glEnd();

///Night windows
glColor3f(1.000, 1.000, 0.000);///window
glBegin(GL_POLYGON);
glVertex2i(220,140);
glVertex2i(280,140);
glVertex2i(280,80);
glVertex2i(220,80);
glEnd();

glColor3f(0.545, 0.000, 0.000);///window
glLineWidth(3);
glBegin(GL_LINES);
glVertex2i(220,140);
glVertex2i(280,140);
glVertex2i(280,80);
glVertex2i(220,80);
glVertex2i(220,140);
glVertex2i(220,80);
glVertex2i(280,140);
glVertex2i(280,80);

glEnd();
glPopMatrix();

glPushMatrix();///Roof PIPE
glColor3f(1.000, 0.271, 0.000);
glBegin(GL_POLYGON);
glVertex2i(220,320);
glVertex2i(240,300);
glColor3f(0.824, 0.412, 0.118);
glVertex2i(180,180);
glVertex2i(140,180);
glVertex2i(220,320);
glEnd();

glColor3f(1.000, 1.000, 1.000);
glLineWidth(3);
glBegin(GL_LINES);
glVertex2i(150,200);
glVertex2i(190,200);
glVertex2i(170,240);
glVertex2i(210,240);
glVertex2i(195,280);
glVertex2i(230,280);
glEnd();
glPopMatrix();


glPushMatrix();
glColor3f(0.722, 0.525, 0.043);///second roof
glBegin(GL_POLYGON);
glVertex2i(320,200);
glVertex2i(540,200);
glColor3f(0.855, 0.647, 0.125);
glVertex2i(620,100);
glVertex2i(400,100);
glEnd();

glColor3f(1.000, 0.498, 0.314);///Door right side wall
glBegin(GL_POLYGON);
glVertex2i(400,100);
glVertex2i(540,100);
glColor3f(0.502, 0.000, 0.000);
glVertex2i(540,0);
glVertex2i(400,0);
glEnd();

glColor3f(1.000, 0.647, 0.000);///Door right window
glBegin(GL_POLYGON);
glVertex2i(420,60);
glVertex2i(520,60);
glVertex2i(520,20);
glVertex2i(420,20);
glEnd();

glColor3f(1.000, 0.549, 0.000);///Door right window
glBegin(GL_TRIANGLES);
glVertex2i(420,60);
glVertex2i(520,20);
glVertex2i(420,20);

glEnd();

glColor3f(0.412, 0.412, 0.412);///floor
glBegin(GL_POLYGON);
glVertex2i(400,0);
glVertex2i(540,0);
glColor3f(0.184, 0.310, 0.310);
glVertex2i(620,-60);
glVertex2i(460,-60);
glEnd();

glPushMatrix();
glColor3f(0.545, 0.000, 0.000);
glLineWidth(4);
glBegin(GL_LINES);
glVertex2i(545,60);
glVertex2i(800,60);
glVertex2i(545,30);
glVertex2i(800,30);
glEnd();
glPopMatrix();


glColor3f(0.333, 0.420, 0.184);///home stand
glLineWidth(5);
glBegin(GL_LINES);
glVertex2i(620,100);
glVertex2i(620,-60);
glVertex2i(540,100);
glVertex2i(540,0);
glVertex2i(460,100);
glVertex2i(460,-60);
glVertex2i(400,100);
glVertex2i(400,0);
glEnd();
glPopMatrix();

glPushMatrix();
glColor3f(0.824, 0.412, 0.118);///Door Wall
glBegin(GL_POLYGON);
glVertex2i(320,200);
glVertex2i(400,100);
glVertex2i(400,0);

glVertex2i(380,0);
glVertex2i(380,100);
glVertex2i(340,100);
glColor3f(0.698, 0.133, 0.133);
glVertex2i(340,0);
glVertex2i(320,0);
glEnd();

glColor3f(0.000, 0.392, 0.000);///Door Side wall stand
glLineWidth(3);
glBegin(GL_LINES);
glVertex2i(320,200);
glVertex2i(320,0);
glEnd();

glColor3f(1.000, 1.000, 0.000);///Door
glBegin(GL_POLYGON);
glVertex2i(340,100);
glVertex2i(380,100);
glColor3f(1.000, 0.549, 0.000);
glVertex2i(380,0);
glVertex2i(340,0);

glEnd();
glPopMatrix();

glColor3f(0.502, 0.000, 0.000);
glBegin(GL_POLYGON);
glVertex2i(180,0);
glVertex2i(400,0);
glColor3f(0.545, 0.271, 0.075);
glVertex2i(400,-20);
glVertex2i(160,-20);
glEnd();

glColor3f(0.502, 0.000, 0.000);
glBegin(GL_POLYGON);
glVertex2i(400,0);
glVertex2i(460,-60);
glColor3f(0.545, 0.271, 0.075);
glVertex2i(460,-80);
glVertex2i(400,-20);
glEnd();

glColor3f(0.502, 0.000, 0.000);
glBegin(GL_POLYGON);
glVertex2i(460,-60);
glVertex2i(620,-60);
glColor3f(0.545, 0.271, 0.075);
glVertex2i(640,-80);
glVertex2i(460,-80);
glEnd();

glPushMatrix();
glColor3f(0.545, 0.000, 0.000);
glLineWidth(6);
glBegin(GL_LINES);
glVertex2i(650,80);
glVertex2i(650,0);
glVertex2i(690,80);
glVertex2i(690,0);
glVertex2i(730,80);
glVertex2i(730,0);
glVertex2i(770,80);
glVertex2i(770,0);
glVertex2i(570,80);
glVertex2i(570,0);
glVertex2i(605,80);
glVertex2i(605,0);

glEnd();
glPopMatrix();


glPushMatrix();
glColor3f(0.545, 0.271, 0.075);//2nd house roof
glBegin(GL_POLYGON);
glVertex2i(472,300);
glVertex2i(660,300);
glColor3f(0.722, 0.525, 0.043);
glVertex2i(600,200);
glVertex2i(540,200);
glEnd();

glColor3f(0.502, 0.000, 0.000);//bagan bera
glLineWidth(6);
glBegin(GL_LINES);

glVertex2i(720,300);
glVertex2i(720,240);
glVertex2i(740,320);
glVertex2i(740,260);
glVertex2i(760,340);
glVertex2i(760,280);
glVertex2i(780,360);
glVertex2i(780,300);

glVertex2i(700,260);
glVertex2i(800,360);

glColor3f(0.722, 0.525, 0.043);
glVertex2i(720,240);
glVertex2i(800,320);


glEnd();



glColor3f(0.502, 0.000, 0.000);
glBegin(GL_POLYGON);
glVertex2i(660,300);
glVertex2i(740,200);
glVertex2i(700,200);
glVertex2i(648,280);
glEnd();

glPopMatrix();

glPushMatrix();
///2nd house door wall
glColor3f(0.627, 0.322, 0.176);
glBegin(GL_POLYGON);
glVertex2i(648,280);
glVertex2i(700,200);
glVertex2i(700,120);
glVertex2i(605,120);
glVertex2i(600,125);
glVertex2i(600,200);
glEnd();

glColor3f(0.957, 0.643, 0.376);
glBegin(GL_TRIANGLES);
glVertex2i(540,200);
glVertex2i(600,200);
glVertex2i(600,125);
glEnd();
glPopMatrix();

glPushMatrix();///2nd house door
glColor3f(0.753, 0.753, 0.753);
glBegin(GL_POLYGON);
glVertex2i(630,200);
glVertex2i(680,200);
glVertex2i(680,120);
glVertex2i(630,120);
glEnd();

glColor3f(0.000, 0.000, 0.000);
glBegin(GL_POLYGON);
glVertex2i(680,200);
glVertex2i(680,120);
glVertex2i(660,120);
glVertex2i(660,180);
glEnd();

glColor3f(0.300, 0.220, 0.060);
glBegin(GL_POLYGON);///2nd door front side
glVertex2i(600,120);
glVertex2i(720,120);
glVertex2i(720,100);
glVertex2i(620,100);
glEnd();

glColor3f(0.753, 0.753, 0.753);///2nd door window
glBegin(GL_TRIANGLES);
glVertex2i(559,180);
glVertex2i(580,180);
glVertex2i(580,155);
glEnd();

glPopMatrix();
glPushMatrix();
//glColor3f(0.647, 0.165, 0.165);
  ///Windmill-1
    glPushMatrix();
    glTranslatef(-600,-50,0);
    glScalef(0.2,1.3,0);
    glBegin(GL_POLYGON);
    glColor3f(0.863, 0.863, 0.863);
    glVertex2i(0, 0);
    glVertex2i(-100, 0);
    glColor3f(0.467, 0.533, 0.600);
    glVertex2i(100, 0);
    glVertex2i(50,300);
    glVertex2i(-50,300);
    glEnd();
    glPopMatrix();
    glTranslatef(-550,-50,0);///windmill-2
    glScalef(0.2,1.0,0);
    glBegin(GL_POLYGON);
    glColor3f(0.863, 0.863, 0.863);
    glVertex2i(0, 0);
    glVertex2i(-100, 0);
    glColor3f(0.467, 0.533, 0.600);
    glVertex2i(100, 0);
    glVertex2i(50,300);
    glVertex2i(-50,300);
    glEnd();
    glPopMatrix();
///Hils
 glPushMatrix();
 glTranslatef(-850,-50,0);
  glScalef(1.0,1.5,0);
    glBegin(GL_POLYGON);
    glColor3f(0.502, 0.000, 0.000);
    glVertex2i(0, 0);
    glVertex2i(450, 0);
    glVertex2i(200, 200);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.824, 0.412, 0.118);
    glVertex2i(0, 0);
    glVertex2i(150, 0);
    glVertex2i(200, 200);
    glEnd();
    glPushMatrix();
    glTranslatef(200, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glColor3f(0.502, 0.000, 0.000);
    glVertex2i(0, 0);
    glVertex2i(400, 0);
    glVertex2i(200, 250);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.824, 0.412, 0.118);
    glVertex2i(0, 0);
    glVertex2i(150, 0);
    glVertex2i(200, 250);
    glEnd();
glPopMatrix();
glPopMatrix();

///Wind
    glPushMatrix();
    glTranslatef(-600,300,0);
    glRotatef(_angle, 0.0, 0.0, 1.0);
    glScalef(0.5,0.5,0);
    glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(1.000, 0.000, 0.000);
    glVertex2i(0, 0);
    glVertex2i(150, 0);
    glVertex2i(140, 50);
    //glVertex2i(20, 350);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(1.000, 0.000, 0.000);
    glVertex2i(0, 0);
    glVertex2i(0, 150);
    glVertex2i(-50, 140);
    //glVertex2i(20, 350);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    //glTranslatef(0.0, 0.0, 0.0);
    //glRotatef(_angle, 0.0, 0.0, 0.0); //Rotate about the y-axis
    //glScalef(0.0,0.0,0); //Move to the center of the trapezoid
    glBegin(GL_POLYGON);
    glColor3f(1.000, 0.000, 0.000);
    glVertex2i(-150, 0);
    glVertex2i(-140, -50);
    glVertex2i(0, 0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(1.000, 0.000, 0.000);
    glVertex2i(0, 0);
    glVertex2i(0, -150);
    glVertex2i(50, -140);
    //glVertex2i(20, 350);
    glEnd();
    glPopMatrix();


    glPushMatrix();
//    float theta;
    glColor3f(1,1,1);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(0+20*cos(theta), 0+20*sin(theta));
   }
    glEnd();
    glPopMatrix();
    glPopMatrix();
///wind 2
    glPushMatrix();
    glTranslatef(-550,230,0);
    glRotatef(_angle, 0.0, 0.0, -1.0);
    glScalef(0.3,0.3,0);
    glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(1.000, 0.000, 0.000);
    glVertex2i(0, 0);
    glVertex2i(150, 0);
    glVertex2i(140, 50);
    //glVertex2i(20, 350);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(1.000, 0.000, 0.000);
    glVertex2i(0, 0);
    glVertex2i(0, 150);
    glVertex2i(-50, 140);
    //glVertex2i(20, 350);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    //glTranslatef(0.0, 0.0, 0.0);
    //glRotatef(_angle, 0.0, 0.0, 0.0); //Rotate about the y-axis
    //glScalef(0.0,0.0,0); //Move to the center of the trapezoid
    glBegin(GL_POLYGON);
    glColor3f(1.000, 0.000, 0.000);
    glVertex2i(-150, 0);
    glVertex2i(-140, -50);
    glVertex2i(0, 0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(1.000, 0.000, 0.000);
    glVertex2i(0, 0);
    glVertex2i(0, -150);
    glVertex2i(50, -140);
    //glVertex2i(20, 350);
    glEnd();
    glPopMatrix();


    glPushMatrix();
//    float theta;
    glColor3f(1,1,1);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(0+20*cos(theta), 0+20*sin(theta));
   }
    glEnd();
    glPopMatrix();
    ///

    glPopMatrix();
///tree-6
   glPushMatrix();
  /// glTranslatef(-600,0,0);(windmill posi)
   glTranslatef(-600,-100,0);
    glScalef(0.5,0.5,0);
   glPushMatrix();
    glColor3f(0.196, 0.804, 0.196);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(-100+80*cos(theta), 220+70*sin(theta));
   }
    glEnd();
   glPopMatrix();
    glPushMatrix();
    glColor3f(0.000, 1.000, 0.000);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(0+110*cos(theta), 250+70*sin(theta));
   }
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.627, 0.322, 0.176);
    glVertex2i(0, 250);
    glVertex2i(-20, 0);
    glVertex2i(20, 0);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glColor3f(0.196, 0.804, 0.196);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
    theta=i*3.142/180;
    glVertex2f(100+80*cos(theta), 170+70*sin(theta));
   }
    glEnd();
   glPopMatrix();
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.627, 0.322, 0.176);
    glVertex2i(0, 100);
    glVertex2i(0, 70);
    glVertex2i(70, 158);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.627, 0.322, 0.176);
    glVertex2i(-70, 200);
    glVertex2i(0, 140);
    glVertex2i(0, 158);
    glEnd();
    glPopMatrix();
    glPopMatrix();


///river
glBegin(GL_POLYGON);//river
glColor3f(0.255, 0.412, 0.882);
glVertex2i(800,-600);
glColor3f(	0.000, 0.749, 1.000);
glVertex2i(-800,-600);
glColor3f(0.098, 0.098, 0.439);
glVertex2i(-800,-200);
glVertex2i(800,-200);
glEnd();

///mud
glPushMatrix();
glBegin(GL_POLYGON);
glColor3f(0.627, 0.322, 0.176);
glVertex2i(-800,-200);
glColor3f(0.804, 0.522, 0.247);
glVertex2i(800,-200);
glColor3f(0.627, 0.322, 0.176);
glVertex2i(800,-250);
glVertex2i(-800,-250);
glEnd();
glBegin(GL_LINES);
glColor3f(0.502, 0.000, 0.000);
glVertex2i(-800,-200);
glVertex2i(800,-200);
glEnd();
glPopMatrix();
///Fenches
glColor3f(0.502, 0.000, 0.000);
glLineWidth(6);
glBegin(GL_LINES);
glVertex2i(-800,-100);
glVertex2i(-800,-200);
glVertex2i(-750,-100);
glVertex2i(-750,-200);
glVertex2i(-700,-100);
glVertex2i(-700,-200);
glVertex2i(-650,-100);
glVertex2i(-650,-200);
glVertex2i(-600,-100);
glVertex2i(-600,-200);
glVertex2i(-550,-100);
glVertex2i(-550,-200);
glVertex2i(-500,-100);
glVertex2i(-500,-200);
glVertex2i(-450,-100);
glVertex2i(-450,-200);
glVertex2i(-400,-100);
glVertex2i(-400,-200);
glVertex2i(-350,-100);
glVertex2i(-350,-200);
glVertex2i(-300,-100);
glVertex2i(-300,-200);
glVertex2i(-250,-100);
glVertex2i(-250,-200);

glColor3f(0.647, 0.165, 0.165);
glVertex2i(-800,-130);
glVertex2i(-230,-130);
glVertex2i(-800,-170);
glVertex2i(-230,-170);
glEnd();
glColor3f(0.502, 0.000, 0.000);
glLineWidth(6);
glBegin(GL_LINES);
glVertex2i(800,-100);
glVertex2i(800,-200);
glVertex2i(750,-100);
glVertex2i(750,-200);
glVertex2i(700,-100);
glVertex2i(700,-200);
glVertex2i(650,-100);
glVertex2i(650,-200);
glVertex2i(600,-100);
glVertex2i(600,-200);
glVertex2i(550,-100);
glVertex2i(550,-200);
glVertex2i(500,-100);
glVertex2i(500,-200);
glVertex2i(450,-100);
glVertex2i(450,-200);
glVertex2i(400,-100);
glVertex2i(400,-200);
glVertex2i(350,-100);
glVertex2i(350,-200);
glVertex2i(300,-100);
glVertex2i(300,-200);
glVertex2i(250,-100);
glVertex2i(250,-200);
glColor3f(0.647, 0.165, 0.165);
glVertex2i(800,-130);
glVertex2i(230,-130);
glVertex2i(800,-170);
glVertex2i(230,-170);
glEnd();
///Sand fences end
glPushMatrix();///Boat start
glTranslatef(1000,0.0,0.0);
glTranslatef(-_boatmove,0.0,0.0);

glColor3f(0.545, 0.271, 0.075);
glBegin(GL_POLYGON);
glVertex2i(-360,-280);
glVertex2i(-20,-280);
glColor3f(0.502, 0.000, 0.000);
glVertex2i(-20,-360);
glVertex2i(-360,-360);
glEnd();

glColor3f(0.502, 0.000, 0.000);
glBegin(GL_TRIANGLES);
glVertex2i(-500,-200);
glVertex2i(-360,-280);
glColor3f(0.545, 0.271, 0.075);
glVertex2i(-360,-360);
glEnd();

glBegin(GL_TRIANGLES);
glColor3f(0.502, 0.000, 0.000);
glVertex2i(-20,-280);
glColor3f(0.545, 0.271, 0.075);
glVertex2i(110,-200);
glVertex2i(-20,-360);
glEnd();


glColor3f(0.824, 0.412, 0.118);
glBegin(GL_TRIANGLES);
glVertex2i(-320,-180);
glVertex2i(-240,-280);
glVertex2i(-360,-280);
glEnd();

glColor3f(0.855, 0.647, 0.125);
glBegin(GL_POLYGON);
glVertex2i(-320,-180);
glVertex2i(-100,-180);
glColor3f(0.627, 0.322, 0.176);
glVertex2i(-40,-280);
glVertex2i(-240,-280);
glEnd();
glPopMatrix();///BOat end

///updated Ship
glPushMatrix();///lower part
//glTranslatef(-108, 0.0, 0.0);
glTranslatef(_shipmove, 0.0, 0.0);
glBegin(GL_POLYGON);
glColor3f(0,0,0);
glVertex2i(-500,-500);
glColor3f(0.282, 0.239, 0.545);
glVertex2i(0,-500);
glColor3f(0,0,0);
glVertex2i(200,-350);
glColor3f(0.282, 0.239, 0.545);
glVertex2i(-700,-350);
glEnd();
glPushMatrix();///box right
glTranslatef(-100,-300, 0.0);
glBegin(GL_POLYGON);
glColor3f(1,1,1);
glVertex2i(-100,-50);
glVertex2i(200,-50);
glVertex2i(200,50);
glVertex2i(-100,50);
glEnd();
glBegin(GL_LINES);///Blue 1
glColor3f(0,0,1);
glVertex2i(-100,-50);
glVertex2i(200,-50);

glEnd();
glBegin(GL_LINES);///Blue 2
glColor3f(0,0,1);
glVertex2i(-100,50);
glVertex2i(200,50);

glEnd();
glBegin(GL_POLYGON);///Right upper
glColor3f(1,0,0);
glVertex2i(-100,55);
glVertex2i(200,55);
glVertex2i(150,150);
glVertex2i(-50,150);
glEnd();
glBegin(GL_LINES);///ship lines
glColor3f(1,0,0);
glVertex2i(-100,0);
glVertex2i(200,0);
glEnd();
glPushMatrix();
glTranslatef(100,30, 0.0);
glScalef(0.25,0.25,0);
glBegin(GL_POLYGON);///window
glColor3f(0,0,0);
glVertex2i(-100,-50);
glVertex2i(100,-50);
glColor3f(	0.275, 0.510, 0.706);
glVertex2i(100,50);
glVertex2i(-100,50);
glEnd();
glTranslatef(0,-220, 0.0);
glBegin(GL_POLYGON);
glColor3f(0,0,0);
glVertex2i(-100,-50);
glVertex2i(100,-50);
glColor3f(	0.275, 0.510, 0.706);
glVertex2i(100,50);
glVertex2i(-100,50);
glEnd();
glTranslatef(-400,0, 0.0);
glBegin(GL_POLYGON);
glColor3f(0,0,0);
glVertex2i(-100,-50);
glVertex2i(100,-50);
glColor3f(	0.275, 0.510, 0.706);
glVertex2i(100,50);
glVertex2i(-100,50);
glEnd();
glTranslatef(0,220, 0.0);
glBegin(GL_POLYGON);
glColor3f(0,0,0);
glVertex2i(-100,-50);
glVertex2i(100,-50);
glColor3f(	0.275, 0.510, 0.706);
glVertex2i(100,50);
glVertex2i(-100,50);
glEnd();
glPopMatrix();
glPushMatrix();///box2 left
glTranslatef(-500,-300, 0.0);
glBegin(GL_POLYGON);
glColor3f(1,1,1);
glVertex2i(-100,-50);
glVertex2i(100,-50);
glVertex2i(100,50);
glVertex2i(-100,50);
glEnd();
glPopMatrix();
glPushMatrix();///box2 left
glTranslatef(-530,-300, 0.0);
glScalef(0.25,0.25,0);
glBegin(GL_POLYGON);
glColor3f(0,0,0);
glVertex2i(-100,-50);
glVertex2i(100,-50);
glColor3f(	0.275, 0.510, 0.706);
glVertex2i(100,50);
glVertex2i(-100,50);
glEnd();
glTranslatef(250,0, 0.0);
glBegin(GL_POLYGON);
glColor3f(0,0,0);
glVertex2i(-100,-50);
glVertex2i(100,-50);
glColor3f(	0.275, 0.510, 0.706);
glVertex2i(100,50);
glVertex2i(-100,50);
glEnd();
glPushMatrix();
glTranslatef(-300,250, 0.0);///Ship Red part
glBegin(GL_POLYGON);
glColor3f(1,0,0);
glVertex2i(-100,-50);
glVertex2i(100,-50);
glVertex2i(100,500);
glVertex2i(-100,500);
glEnd();
glTranslatef(300,0, 0.0);///Ship Red part
glBegin(GL_POLYGON);
glColor3f(1,0,0);
glVertex2i(-100,-50);
glVertex2i(100,-50);
glVertex2i(100,500);
glVertex2i(-100,500);
glEnd();
glPopMatrix();
glPopMatrix();
///Sand
glPushMatrix();
glBegin(GL_POLYGON);
glColor3f(0.545, 0.271, 0.075);
glVertex2i(-800,-600);
glVertex2i(-250,-600);
glColor3f(	0.824, 0.412, 0.118);
glVertex2i(-100,-550);
glVertex2i(-100,-400);
glVertex2i(-250,-500);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.502, 0.000, 0.000);
glVertex2i(-300,-600);
glVertex2i(-150,-600);
glColor3f(0.545, 0.271, 0.075);
glVertex2i(0,-500);
glVertex2i(-100,-400);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.824, 0.706, 0.549);
glVertex2i(-800,-600);
glColor3f(0.804, 0.522, 0.247);
glVertex2i(-100,-400);
glVertex2i(-800,-400);
//glVertex2i(-100,-400);
glEnd();
glPopMatrix();
    ///Light--
    glPushMatrix();
    glTranslatef(-400, 50, 0.0);
    glScalef(2.5,3.0,0); //Move to the center of the trapezoid
    glRotatef(_lightrotate, 0.0, 1.0, 0.0); //Rotate about the y-axis

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.980, 0.980, 0.824);
    glVertex2i(0, 0);
    glVertex2i(200, -50);
    glVertex2i(200, 50);
    glEnd();
    glPopMatrix();

    glPopMatrix();
    ///Light House
    glPushMatrix();
    glScalef(1.0,1.75, 0.0);
    glTranslatef(-500, -350, 0.0);
    glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(1.000, 1.000, 0.878);
    glVertex2i(0, 0);
    glVertex2i(150, 0);
    glVertex2i(130, 350);
    glVertex2i(20, 350);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(1.000, 0.000, 0.000);
    glVertex2i(4, 3);
    glVertex2i(149, 3);
    glVertex2i(148, 60);
    glVertex2i(5, 60);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(1.000, 0.000, 0.000);
    glVertex2i(10,175 );
    glVertex2i(7, 120);
    glVertex2i(145, 120);
    glVertex2i(140, 175);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1, 210, 0.0);
    glBegin(GL_POLYGON);
    glColor3f(0.663, 0.663, 0.663);
    glVertex2i(40, 0);
    glVertex2i(110, 0);
    glVertex2i(110, 50);
    glVertex2i(40, 50);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(1, 210, 0.0);
    glBegin(GL_POLYGON);
    glColor3f(0.412, 0.412, 0.412);
    glVertex2i(47, 0);
    glVertex2i(105, 0);
    glVertex2i(105, 47);
    glVertex2i(47, 47);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(1, 400, 0.0);
    glBegin(GL_POLYGON);
    glColor3f(0.412, 0.412, 0.412);
    glVertex2i(0, 0);
    glVertex2i(145, 0);
    glVertex2i(120, 50);
    glVertex2i(25, 50);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1, 400, 0.0);
    glBegin(GL_POLYGON);
    glColor3f(0.663, 0.663, 0.663);
    glVertex2i(9, 0);
    glVertex2i(136, 0);
    glVertex2i(120, 50);
    glVertex2i(25, 50);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(00, 50, 0.0);
    glBegin(GL_POLYGON);
    glColor3f(1.000, 0.843, 0.000);
    glVertex2i(30, 300);
    glVertex2i(120, 300);
    glVertex2i(120, 350);
    glVertex2i(30, 350);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(30, 350, 0.0);
    glBegin(GL_POLYGON);
    glColor3f(0.412, 0.412, 0.412);
    glVertex2i(0, 0);
    glVertex2i(10, 0);
    glVertex2i(10, 50);
    glVertex2i(0, 50);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(110, 350, 0.0);
    glBegin(GL_POLYGON);
    glColor3f(0.412, 0.412, 0.412);
    glVertex2i(0, 0);
    glVertex2i(10, 0);
    glVertex2i(10, 50);
    glVertex2i(0, 50);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(1.000, 0.000, 0.000);
    glVertex2i(15, 300);
    glVertex2i(135, 300);
    glVertex2i(130, 350);
    glVertex2i(20, 350);
    glEnd();
    glPopMatrix();
    glPopMatrix();
///Moon
    glPushMatrix();
    glColor3f(1,1,1);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(-300+70*cos(theta), 400+95*sin(theta));
   }
    glEnd();
glPopMatrix();
glPushMatrix();
    //float theta;
    glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
       theta=i*3.142/180;
       glVertex2f(-270+70*cos(theta),400+80*sin(theta));
   }
    glEnd();
glPopMatrix();

///Stars
glPushMatrix();//1 star
glTranslatef(-500.0, 500.0, 0.0);
glScalef(0.5,0.5, 0.0);
//glRotatef(_ang_tri, 0.0, 0.0, 0.0);
glBegin(GL_LINES);
glColor3f(1,1,1);
glVertex2i(50,0);
glVertex2i(-50,0);
glVertex2i(0,50);
glVertex2i(0,-50);
glVertex2i(20,20);
glVertex2i(-20,-20);
glVertex2i(-20,20);
glVertex2i(20,-20);
glEnd();
glPopMatrix();

glPushMatrix();///2 star
glTranslatef(-550.0, 400.0, 0.0);
glScalef(0.25,0.25, 0.0);
glRotatef(_angle, 0.0, 0.0, 0.0);
glBegin(GL_LINES);
glColor3f(1,1,1);
glVertex2i(50,0);
glVertex2i(-50,0);
glVertex2i(0,50);
glVertex2i(0,-50);
glVertex2i(20,20);
glVertex2i(-20,-20);
glVertex2i(-20,20);
glVertex2i(20,-20);
glEnd();
glPopMatrix();

glPushMatrix();///3rd star
glTranslatef(-100.0, 350.0, 0.0);
glScalef(0.5,0.5, 0.0);
//glRotatef(_ang_tri, 0.0, 0.0, 0.0);
glBegin(GL_LINES);
glColor3f(1,1,1);
glVertex2i(50,0);
glVertex2i(-50,0);
glVertex2i(0,50);
glVertex2i(0,-50);
glVertex2i(20,20);
glVertex2i(-20,-20);
glVertex2i(-20,20);
glVertex2i(20,-20);
glEnd();
glPopMatrix();

glPushMatrix();///4 star
glTranslatef(-700.0, 500.0, 0.0);
glScalef(0.5,0.5, 0.0);
glRotatef(_angle, 0.0, 0.0, 0.0);
glBegin(GL_LINES);
glColor3f(1,1,1);
glVertex2i(50,0);
glVertex2i(-50,0);
glVertex2i(0,50);
glVertex2i(0,-50);
glVertex2i(20,20);
glVertex2i(-20,-20);
glVertex2i(-20,20);
glVertex2i(20,-20);
glEnd();
glPopMatrix();

glPushMatrix();///5 star
glTranslatef(-700.0, 250.0, 0.0);
glScalef(0.5,0.5, 0.0);
glRotatef(_ang_tri, 0.0, 0.0, 0.0);
glBegin(GL_LINES);
glColor3f(1,1,1);
glVertex2i(50,0);
glVertex2i(-50,0);
glVertex2i(0,50);
glVertex2i(0,-50);
glVertex2i(20,20);
glVertex2i(-20,-20);
glVertex2i(-20,20);
glVertex2i(20,-20);
glEnd();
glPopMatrix();

glPushMatrix();///6 star
glTranslatef(600.0, 350.0, 0.0);
glScalef(0.25,0.25, 0.0);
glRotatef(_angle, 0.0, 0.0, 0.0);
glBegin(GL_LINES);
glColor3f(1,1,1);
glVertex2i(50,0);
glVertex2i(-50,0);
glVertex2i(0,50);
glVertex2i(0,-50);
glVertex2i(20,20);
glVertex2i(-20,-20);
glVertex2i(-20,20);
glVertex2i(20,-20);
glEnd();
glPopMatrix();

glPushMatrix();///7 star
glTranslatef(-550.0,650.0, 0.0);
glScalef(0.5,0.5, 0.0);
glRotatef(_ang_tri, 0.0, 0.0, 0.0);
glBegin(GL_LINES);
glColor3f(1,1,1);
glVertex2i(50,0);
glVertex2i(-50,0);
glVertex2i(0,50);
glVertex2i(0,-50);
glVertex2i(20,20);
glVertex2i(-20,-20);
glVertex2i(-20,20);
glVertex2i(20,-20);
glEnd();
glPopMatrix();

glPushMatrix();///8 star
glTranslatef(-100.0,500.0, 0.0);
glScalef(0.5,0.5, 0.0);
glRotatef(_angle, 0.0, 0.0, 0.0);
glBegin(GL_LINES);
glColor3f(1,1,1);
glVertex2i(50,0);
glVertex2i(-50,0);
glVertex2i(0,50);
glVertex2i(0,-50);
glVertex2i(20,20);
glVertex2i(-20,-20);
glVertex2i(-20,20);
glVertex2i(20,-20);
glEnd();
glPopMatrix();

glPushMatrix();///9 star
glTranslatef(300.0,400.0, 0.0);
//glScalef(0.5,0.5, 0.0);
glRotatef(_angle, 0.0, 0.0, 0.0);
glBegin(GL_LINES);
glColor3f(1,1,1);
glVertex2i(50,0);
glVertex2i(-50,0);
glVertex2i(0,50);
glVertex2i(0,-50);
glVertex2i(20,20);
glVertex2i(-20,-20);
glVertex2i(-20,20);
glVertex2i(20,-20);
glEnd();
glPopMatrix();

glPushMatrix();///10 star
glTranslatef(700.0,400.0, 0.0);
glScalef(0.5,0.5, 0.0);
glRotatef(_ang_tri, 0.0, 0.0, 0.0);
glBegin(GL_LINES);
glColor3f(1,1,1);
glVertex2i(50,0);
glVertex2i(-50,0);
glVertex2i(0,50);
glVertex2i(0,-50);
glVertex2i(20,20);
glVertex2i(-20,-20);
glVertex2i(-20,20);
glVertex2i(20,-20);
glEnd();
glPopMatrix();
glPushMatrix();
glTranslatef(500.0, 500.0, 0.0);
//glRotatef(_angle, 0.0, 0.0, 0.0);
glBegin(GL_LINES);
glColor3f(1,1,1);
glVertex2i(50,0);
glVertex2i(-50,0);
glVertex2i(0,50);
glVertex2i(0,-50);
glVertex2i(20,20);
glVertex2i(-20,-20);
glVertex2i(-20,20);
glVertex2i(20,-20);
glEnd();
glPopMatrix();
glPushMatrix();
glTranslatef(100.0,500.0, 0.0);
glScalef(0.5,0.5, 0.0);
glRotatef(_ang_tri, 0.0, 0.0, 0.0);
glBegin(GL_LINES);
glColor3f(1,1,1);
glVertex2i(50,0);
glVertex2i(-50,0);
glVertex2i(0,50);
glVertex2i(0,-50);
glVertex2i(20,20);
glVertex2i(-20,-20);
glVertex2i(-20,20);
glVertex2i(20,-20);
glEnd();
glPopMatrix();
glPushMatrix();
glTranslatef(-750.0,400.0, 0.0);
glScalef(0.7, 0.7, 0.0);
//glRotatef(_angle, 0.0, 0.0, 0.0);
glBegin(GL_LINES);
glColor3f(1,1,1);
glVertex2i(50,0);
glVertex2i(-50,0);
glVertex2i(0,50);
glVertex2i(0,-50);
glVertex2i(20,20);
glVertex2i(-20,-20);
glVertex2i(-20,20);
glVertex2i(20,-20);
glEnd();
glPopMatrix();
glutSwapBuffers();
}



void handleKeypress(unsigned char key, int x, int y){

	switch (key) {
    case 'e':
        exit(0);
      break;
    case 'd':
        glutDisplayFunc(displayDay);
      break;
    case 'n':
        glutDisplayFunc(displayNight);
      break;
      case 'r':
        glutDisplayFunc(Rainfall);
      break;
      default:
     glutPostRedisplay();
      break;
	}
}


void update(int value) {
	_angle += 0.5f;
	if (_angle > 360) {
		_angle -= 360;
	}
	_ang_tri += 1.5f;
	if (_ang_tri > 360) {
		_ang_tri -= 360;
	}
      _shipmove +=2;
	if (_shipmove >1800) {
		_shipmove -=1800;
	}
	    _boatmove +=1;
	if (_boatmove >1800) {
		_boatmove -=1800;
	}

	    _cloudsmove +=2;
	if (_cloudsmove >1300) {
		_cloudsmove -=1300;
	}

	    _cloudsmove2 +=2.5;
	if (_cloudsmove2 >1300) {
		_cloudsmove2 -=1300;
	}

	_lightrotate +=2;
	if (_lightrotate >360)
        {
		_lightrotate -=360;
        }
	glutPostRedisplay();

	//Tell GLUT to call update again in 25 milliseconds
	glutTimerFunc(25, update, 0);
}
void init(void)
{
glClearColor(0, 0, 0,0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(-800.0,800, -600.0,600);
}

int main(int argc, char** argv)
{


    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB| GLUT_DEPTH);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(800, 600);
    glutCreateWindow("The Riverside Village");
    init();
    glutDisplayFunc(displayDay);
   // glutIdleFunc(displayNight);
    glutKeyboardFunc(handleKeypress);
    glutTimerFunc(25, update, 0);
    glutFullScreen();
    printf("\nPress 'd' for day view.");
    printf("\nPress 'n' for night view.");
    printf("\nPress 'r' for rainfall");
    printf("\nPress 'e' to exit.");
    glutMainLoop();
    return 0;
}

