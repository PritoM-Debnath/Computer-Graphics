#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <math.h>

using namespace std;

float cloud_move1= 0.0f;
float rain_move=0.0f;

void update_cloud1(int value) ///Cloudmove
{
cloud_move1 += 2.9;
    if(cloud_move1 >800)
    {
    cloud_move1 =-450;
    }
glutPostRedisplay();
glutTimerFunc(20, update_cloud1, 0);
}

  void update_rain(int value) ///Rainmove
{
    if(rain_move < -400)
    {
    rain_move = 100;
    }
rain_move -= 6.0;
glutPostRedisplay();
glutTimerFunc(20, update_rain, 0);
}

///Aziz
GLfloat position0 = 0.0f;
GLfloat speed0 = 4.0f;
GLfloat position1 = 0.0f;
GLfloat speed1 = 4.0f;
GLfloat position7 = 0.0f;
GLfloat speed7 = 4.0f;

void update0(int value)///boat1move
{
    if(position0 >170.0)
        position0 =-0.0f;
    position0 += speed0;
    glutPostRedisplay();
    glutTimerFunc(200, update0, 0);
}

void update1(int value) ///boat2move
{
    if(position1 <-170.0)
        position1 =0.0f;
    position1 -= speed1;
    glutPostRedisplay();
    glutTimerFunc(200, update1, 0);
}

void update7(int value)///kitemove
 {
    if(position7 <-270.70)
        position7 =0.0f;
    position7 -= speed7 ;
    glutPostRedisplay();
    glutTimerFunc(200, update7, 0);
}

///Shuvo
float _move3= 0.0f;
float _move4= 0.0f;
GLfloat speed4= 0.2f;
float _move5= 0.0f;
float _move6= 0.0f;
float _move7= 0.0f;
float _move8= 0.0f;


void update_cloud(int value)  ///cloudmove54
{
_move3 += 2.9;
    if(_move3 >800)
    {
    _move3 =-450;
    }
glutPostRedisplay();
glutTimerFunc(20, update_cloud, 0);
}


void update_sun(int value)      ///sunmove55
{
_move4 -= speed4;
glutPostRedisplay();
glutTimerFunc(20, update_sun, 0);
}



void update_boat(int value)     ///boatmove56
{
    if(_move5 < -500)
    {
    _move5 = 300;
    }
_move5 -= 1.0;
glutPostRedisplay();
glutTimerFunc(20, update_boat, 0);
}

void update_wave(int value)      ///movewave57
{
    if(_move7 < -400)
    {
    _move7 = 100;
    }
_move7 -= 1.0;
glutPostRedisplay();
glutTimerFunc(20, update_wave, 0);
}

void update_wave6(int value)       ///movewave58
{
    if(_move8 < -400)
    {
    _move8 = 100;
    }
_move8 -= 2.0;
glutPostRedisplay();
glutTimerFunc(20, update_wave6, 0);
}

void update_waterflower(int value)    ///movewaterflower59
{
    if(_move6 > 500)
    {
    _move6 = -300;
    }
_move6 += 2.0;
glutPostRedisplay();
glutTimerFunc(20, update_waterflower, 0);
}

///Mehedi
float _move9= 0.0f;
float _move10= 0.0f;
GLfloat speed10 = 1.0f;
GLfloat speed11 = 0.0f;
float _move11= 0.0f;
float _move12= 0.0f;
float _move13= 0.0f;

///103
void update_cloud4(int value)
{
    if(_move9 > 800)
    {
    _move9 = -500;
    }
_move9 += 1.0;
glutPostRedisplay();
glutTimerFunc(20, update_cloud4, 0);
}

///104
void update_moon(int value)
{
    _move10 += speed10;
	glutPostRedisplay();
	glutTimerFunc(100, update_moon, 0);
}

///105
void update_airplane(int value)
{
_move11 -= speed11;
glutPostRedisplay();
glutTimerFunc(100, update_airplane, 0);
}

///106
void update_waveR(int value)
{
    if(_move12 < -400)
    {
    _move12 = 100;
    }
    _move12 -= 1.0;
	glutPostRedisplay();
	glutTimerFunc(20, update_waveR, 0);
}

///107
void update_waveL(int value)
{
    if(_move13 > 400)
    {
    _move13 = -100;
    }
    _move13 += 2.0;
	glutPostRedisplay();
	glutTimerFunc(20, update_waveL, 0);
}
///end

void init()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0,600.0,-250.0,500.0);
    glMatrixMode(GL_MODELVIEW);
}

void dis();
void cloudy_morning();


///Displays--------------------------------------------------------------------

///disback
void disback(int val)
{
    glutDisplayFunc(cloudy_morning);
}

void night()
{
///80
    ///sky
    glColor3ub(43.0f,57.0f,182.0f);
    glBegin(GL_QUADS);
    glVertex2f(0.0f,0.0f);
    glColor3ub(0.0f,0.0f,102.0f);
    glVertex2f(600.0f,0.0f);
    glVertex2f(600.0f,500.0f);
    glColor3ub(102.0f,102.0f,255.0f);
    glVertex2f(0.0f,500.0f);
    glEnd();

///81
///stars
    ///1
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(255.0,255.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=2.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+20,y+360);
        }
	glEnd();


    ///2
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(255.0,255.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=2.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+150,y+440);
        }
	glEnd();


    ///3
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(255.0,255.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=2.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+170,y+340);
        }
	glEnd();


    ///4
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(255.0,255.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=2.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+230,y+400);
        }
	glEnd();


	///5
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(255.0,255.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=2.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+270,y+450);
        }
	glEnd();


    ///6
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(255.0,255.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=2.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+300,y+350);
        }
	glEnd();


	///7
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(255.0,255.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=2.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+340,y+405);
        }
	glEnd();


    ///8
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(255.0,255.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=2.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+400,y+340);
        }
	glEnd();

	///9
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(255.0,255.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=2.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+455,y+440);
        }
	glEnd();

	///10
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(255.0,255.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=2.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+540,y+380);
        }
    glEnd();


///101
///moon
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(0.0f,_move10, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
        glColor3f(1.0,1.0,1.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=25.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+100,y+300);
        }
	glEnd();
	glPopMatrix();

///82
    ///airplane
    ///body
    glColor3ub(255.0f,255.0f,255.0f);
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(_move11, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(360.0f,360.0f);
    glVertex2f(340.0f,340.0f);
    glVertex2f(360.0f,320.0f);
    glVertex2f(450.0f,320.0f);
    glVertex2f(490.0f,350.0f);
    glVertex2f(460.0f,360.0f);
    glEnd();

    glColor3ub(200.0,200.0,200.0);
    glBegin(GL_POLYGON);
    glVertex2f(340.0f,340.0f);
    glVertex2f(350.0f,330.0f);
    glVertex2f(463.0f,329.0f);
    glVertex2f(478.0f,340.0f);
    glEnd();

    ///wings
    glColor3ub(200.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(460.0f,360.0f);
    glVertex2f(475.0f,400.0f);
    glVertex2f(455.0f,400.0f);
    glVertex2f(430.0f,360.0f);
    glEnd();

    glColor3ub(200.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(390.0f,310.0f);
    glVertex2f(420.0f,310.0f);
    glVertex2f(400.0f,340.0f);
    glVertex2f(370.0f,340.0f);
    glEnd();

    glColor3ub(200.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(450.0f,340.0f);
    glVertex2f(470.0f,320.0f);
    glVertex2f(490.0f,320.0f);
    glVertex2f(470.0f,340.0f);
    glEnd();

    ///plane_lights
    glColor3ub(255.0,255.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(385.0f,314.0f);
    glVertex2f(390.0f,314.0f);
    glVertex2f(390.0f,319.0f);
    glVertex2f(385.0f,319.0f);
    glEnd();

    glColor3ub(255.0,255.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(465.0f,323.0f);
    glVertex2f(470.0f,323.0f);
    glVertex2f(470.0f,328.0f);
    glVertex2f(465.0f,328.0f);
    glEnd();

    ///windows
    glColor3ub(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(350.0f,345.0f);
    glVertex2f(365.0f,345.0f);
    glVertex2f(365.0f,355.0f);
    glVertex2f(358.0f,355.0f);
    glEnd();


    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(0.0,0.0,0.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=5.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+375,y+350);
        }
	glEnd();

	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(0.0,0.0,0.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=5.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+390,y+350);
        }
	glEnd();

	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(0.0,0.0,0.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=5.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+405,y+350);
        }
	glEnd();

	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(0.0,0.0,0.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=5.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+420,y+350);
        }
	glEnd();

	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(0.0,0.0,0.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=5.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+435,y+350);
        }
	glEnd();

	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(0.0,0.0,0.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=5.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+450,y+350);
        }
	glEnd();

    glPopMatrix();

///83
///cloud
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(_move9, 0.0f, 0.0f);
///84
///cloud1
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(160.0,160.0,160.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=18.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+105,y+360);
        }
	glEnd();

    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(160.0,160.0,160.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=19.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+130,y+360);
        }
	glEnd();

	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(160.0,160.0,160.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=17.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+120,y+380);
        }
	glEnd();

///85
///cloud2
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(160.0,160.0,160.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=20.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+60,y+310);
        }
	glEnd();

	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(160.0,160.0,160.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=19.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+90,y+310);
        }
	glEnd();

	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(160.0,160.0,160.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=17.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+75,y+335);
        }
	glEnd();

///86
///cloud 3
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(160.0,160.0,160.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=20.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+450,y+340);
        }
	glEnd();

	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(160.0,160.0,160.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=20.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+480,y+340);
        }
	glEnd();

	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(160.0,160.0,160.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=20.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+465,y+370);
        }
	glEnd();
	glPopMatrix();

///87
///river
     glColor3ub(153.0f,153.0f,255.0f);
    glBegin(GL_QUADS);
    glColor3ub(102.0f,153.0f,255.0f);
    glVertex2f(0.0f,0.0f);
    glColor3ub(0.0f,40.0f,47.0f);
    glVertex2f(0.0f,-250.0f);
    glColor3ub(0.0f,40.0f,47.0f);
    glVertex2f(600.0f,-250.0f);
    glColor3ub(102.0f,153.0f,255.0f);
    glVertex2f(600.0f,0.0f);
    glEnd();

    glColor3ub(102.0f,153.0f,255.0f);
    glBegin(GL_POLYGON);
    glVertex2f(200.0f,0.0f);
    glColor3ub(220.0f,220.0f,220.0f);
    glVertex2f(205.0f,5.0f);
    glVertex2f(205.0f,30.0f);
    glColor3ub(220.0f,220.0f,220.0f);
    glVertex2f(0.0f,30.0f);
    glVertex2f(0.0f,0.0f);
    glEnd();

    glColor3ub(102.0f,153.0f,255.0f);
    glBegin(GL_POLYGON);
    glVertex2f(395.0f,30.0f);
    glVertex2f(395.0f,5.0f);
    glVertex2f(400.0f,0.0f);
    glVertex2f(600.0f,0.0f);
    glColor3ub(220.0f,220.0f,220.0f);
    glVertex2f(600.0f,30.0f);
    glEnd();

///99
///wave
    ///------------------------------1 line
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(_move12, 0.0f, 0.0f);
    glColor3ub(204.0f,204.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(70.0f,-20.0f);
    glVertex2f(40.0f,-15.0f);
    glVertex2f(10.0f,-20.0f);
    glEnd();

    glColor3ub(204.0f,204.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(170.0f,-20.0f);
    glVertex2f(140.0f,-15.0f);
    glVertex2f(110.0f,-20.0f);
    glEnd();

   glColor3ub(204.0f,204.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(270.0f,-20.0f);
    glVertex2f(240.0f,-15.0f);
    glVertex2f(210.0f,-20.0f);
    glEnd();

    glColor3ub(204.0f,204.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(370.0f,-20.0f);
    glVertex2f(340.0f,-15.0f);
    glVertex2f(310.0f,-20.0f);
    glEnd();

    glColor3ub(204.0f,204.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(470.0f,-20.0f);
    glVertex2f(440.0f,-15.0f);
    glVertex2f(410.0f,-20.0f);
    glEnd();

    glColor3ub(204.0f,204.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(570.0f,-20.0f);
    glVertex2f(540.0f,-15.0f);
    glVertex2f(510.0f,-20.0f);
    glEnd();
    glPopMatrix();

///89
    ///--------------------------------2 line
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(_move13, 0.0f, 0.0f);
    glColor3ub(204.0f,204.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(130.0f,-50.0f);
    glVertex2f(90.0f,-45.0f);
    glVertex2f(60.0f,-50.0f);
    glEnd();

    glColor3ub(204.0f,204.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(230.0f,-50.0f);
    glVertex2f(190.0f,-45.0f);
    glVertex2f(160.0f,-50.0f);
    glEnd();

    glColor3ub(204.0f,204.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(330.0f,-50.0f);
    glVertex2f(290.0f,-45.0f);
    glVertex2f(260.0f,-50.0f);
    glEnd();

    glColor3ub(204.0f,204.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(430.0f,-50.0f);
    glVertex2f(390.0f,-45.0f);
    glVertex2f(360.0f,-50.0f);
    glEnd();

    glColor3ub(204.0f,204.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(530.0f,-50.0f);
    glVertex2f(490.0f,-45.0f);
    glVertex2f(460.0f,-50.0f);
    glEnd();
    glPopMatrix();

///90
    ///-----------------------------------3 line
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(_move12, 0.0f, 0.0f);
    glColor3ub(204.0f,204.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(70.0f,-80.0f);
    glVertex2f(40.0f,-75.0f);
    glVertex2f(10.0f,-80.0f);
    glEnd();

    glColor3ub(204.0f,204.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(170.0f,-80.0f);
    glVertex2f(140.0f,-75.0f);
    glVertex2f(110.0f,-80.0f);
    glEnd();

    glColor3ub(204.0f,204.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(270.0f,-80.0f);
    glVertex2f(240.0f,-75.0f);
    glVertex2f(210.0f,-80.0f);
    glEnd();

    glColor3ub(204.0f,204.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(370.0f,-80.0f);
    glVertex2f(340.0f,-75.0f);
    glVertex2f(310.0f,-80.0f);
    glEnd();

    glColor3ub(204.0f,204.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(470.0f,-80.0f);
    glVertex2f(440.0f,-75.0f);
    glVertex2f(410.0f,-80.0f);
    glEnd();

    glColor3ub(204.0f,204.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(570.0f,-80.0f);
    glVertex2f(540.0f,-75.0f);
    glVertex2f(510.0f,-80.0f);
    glEnd();
    glPopMatrix();

///91
    ///-------------------------------4
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(_move13, 0.0f, 0.0f);
    glColor3ub(204.0f,204.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(130.0f,-110.0f);
    glVertex2f(90.0f,-105.0f);
    glVertex2f(60.0f,-110.0f);
    glEnd();

    glColor3ub(204.0f,204.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(230.0f,-110.0f);
    glVertex2f(190.0f,-105.0f);
    glVertex2f(160.0f,-110.0f);
    glEnd();

    glColor3ub(204.0f,204.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(330.0f,-110.0f);
    glVertex2f(290.0f,-105.0f);
    glVertex2f(260.0f,-110.0f);
    glEnd();

    glColor3ub(204.0f,204.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(430.0f,-110.0f);
    glVertex2f(390.0f,-105.0f);
    glVertex2f(360.0f,-110.0f);
    glEnd();

    glColor3ub(204.0f,204.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(530.0f,-110.0f);
    glVertex2f(490.0f,-105.0f);
    glVertex2f(460.0f,-110.0f);
    glEnd();

    glPopMatrix();

///92
    ///-----------------------------5
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(_move12, 0.0f, 0.0f);
    glColor3ub(204.0f,204.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(70.0f,-140.0f);
    glVertex2f(40.0f,-135.0f);
    glVertex2f(10.0f,-140.0f);
    glEnd();

    glColor3ub(204.0f,204.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(170.0f,-140.0f);
    glVertex2f(140.0f,-135.0f);
    glVertex2f(110.0f,-140.0f);
    glEnd();

    glColor3ub(204.0f,204.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(270.0f,-140.0f);
    glVertex2f(240.0f,-135.0f);
    glVertex2f(210.0f,-140.0f);
    glEnd();

    glColor3ub(204.0f,204.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(370.0f,-140.0f);
    glVertex2f(340.0f,-135.0f);
    glVertex2f(310.0f,-140.0f);
    glEnd();

    glColor3ub(204.0f,204.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(470.0f,-140.0f);
    glVertex2f(440.0f,-135.0f);
    glVertex2f(410.0f,-140.0f);
    glEnd();

    glColor3ub(204.0f,204.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(570.0f,-140.0f);
    glVertex2f(540.0f,-135.0f);
    glVertex2f(510.0f,-140.0f);
    glEnd();

    glPopMatrix();

///93
    ///-------------------------------6 line
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(_move13, 0.0f, 0.0f);
    glColor3ub(204.0f,204.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(130.0f,-170.0f);
    glVertex2f(90.0f,-165.0f);
    glVertex2f(60.0f,-170.0f);
    glEnd();

    glColor3ub(204.0f,204.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(230.0f,-170.0f);
    glVertex2f(190.0f,-165.0f);
    glVertex2f(160.0f,-170.0f);
    glEnd();

    glColor3ub(204.0f,204.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(330.0f,-170.0f);
    glVertex2f(290.0f,-165.0f);
    glVertex2f(260.0f,-170.0f);
    glEnd();

    glColor3ub(204.0f,204.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(430.0f,-170.0f);
    glVertex2f(390.0f,-165.0f);
    glVertex2f(360.0f,-170.0f);
    glEnd();

    glColor3ub(204.0f,204.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(530.0f,-170.0f);
    glVertex2f(490.0f,-165.0f);
    glVertex2f(460.0f,-170.0f);
    glEnd();

    glPopMatrix();

///94
    ///-----------------------------7 line
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(_move12, 0.0f, 0.0f);
    glColor3ub(204.0f,204.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(70.0f,-200.0f);
    glVertex2f(40.0f,-195.0f);
    glVertex2f(10.0f,-200.0f);
    glEnd();

    glColor3ub(204.0f,204.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(170.0f,-200.0f);
    glVertex2f(140.0f,-195.0f);
    glVertex2f(110.0f,-200.0f);
    glEnd();

    glColor3ub(255.0f,255.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(270.0f,-200.0f);
    glVertex2f(240.0f,-195.0f);
    glVertex2f(210.0f,-200.0f);
    glEnd();

    glColor3ub(204.0f,204.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(370.0f,-200.0f);
    glVertex2f(340.0f,-195.0f);
    glVertex2f(310.0f,-200.0f);
    glEnd();

    glColor3ub(204.0f,204.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(470.0f,-200.0f);
    glVertex2f(440.0f,-195.0f);
    glVertex2f(410.0f,-200.0f);
    glEnd();

    glColor3ub(204.0f,204.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(570.0f,-200.0f);
    glVertex2f(540.0f,-195.0f);
    glVertex2f(510.0f,-200.0f);
    glEnd();

    glPopMatrix();

///95
    ///mountain
    glColor3ub(0.0f,0.0f,90.0f);
    glBegin(GL_POLYGON);
    glVertex2f(0.0f,30.0f);
    glVertex2f(205.0f,30.0f);
    glVertex2f(205.0f,60.0f);
    glColor3ub(102.0f,102.0f,255.0f);
    glVertex2f(70.0f,250.0f);
    glColor3ub(0.0f,0.0f,90.0f);
    glVertex2f(0.0f,150.0f);
    glEnd();

    glColor3ub(0.0f,0.0f,90.0f);
    glBegin(GL_POLYGON);
    glVertex2f(390.0f,30.0f);
    glVertex2f(600.0f,30.0f);
    glVertex2f(600.0f,180.0f);
    glVertex2f(500.0f,330.0f);
    glColor3ub(102.0f,102.0f,255.0f);
    glVertex2f(360.0f,60.0f);
    glEnd();

    glColor3ub(0.0f,0.0f,90.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(600.0f,180.0f);
    glVertex2f(600.0f,300.0f);
    glColor3ub(102.0f,102.0f,255.0f);
    glVertex2f(560.0f,240.0f);
    glEnd();

///96
    ///fountain
    ///1
    glColor3ub(204.0f,204.0f,255.0f);
    glBegin(GL_POLYGON);
    glVertex2f(75.0f,180.0f);
    glVertex2f(65.0f,180.0f);
    glVertex2f(60.0f,30.0f);
    glVertex2f(80.0f,30.0f);
    glEnd();

    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(240.0,240.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=7.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+59,y+30);
        }
	glEnd();
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(240.0,240.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=7.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+69,y+30);
        }
	glEnd();

	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
       glColor3ub(240.0,240.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=7.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+79,y+30);
        }
	glEnd();
///97
	///fountain2
	glColor3ub(204.0f,204.0f,255.0f);
    glBegin(GL_POLYGON);
    glVertex2f(520.0f,200.0f);
    glVertex2f(510.0f,200.0f);
    glVertex2f(505.0f,30.0f);
    glVertex2f(525.0f,30.0f);
    glEnd();

    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(240.0,240.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=7.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+507,y+30);
        }
	glEnd();

    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(240.0,240.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=7.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+517,y+30);
        }
	glEnd();

	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
       glColor3ub(240.0,240.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=7.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+527,y+30);
        }
	glEnd();


///98
    ///mosque
    ///base
    glColor3ub(204.0f,105.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(200.0f,0.0f);
    glVertex2f(400.0f,0.0f);
    glVertex2f(395.0f,5.0f);
    glVertex2f(205.0f,5.0f);
    glEnd();

    ///Left pillar
    glColor3ub(255.0f,171.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(205.0f,5.0f);
    glVertex2f(220.0f,5.0f);
    glVertex2f(220.0f,100.0f);
    glVertex2f(205.0f,100.0f);
    glEnd();

    glColor3ub(255.0f,210.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(205.0f,100.0f);
    glVertex2f(220.0f,100.0f);
    glVertex2f(225.0f,110.0f);
    glVertex2f(200.0f,110.0f);
    glEnd();

    glColor3ub(204.0f,110.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(206.0f,110.0f);
    glVertex2f(219.0f,110.0f);
    glVertex2f(219.0f,140.0f);
    glVertex2f(206.0f,140.0f);
    glEnd();

    glColor3ub(255.0f,255.0f,255.0f);
    glBegin(GL_POLYGON);
    glVertex2f(212.5f,140.0f);
    glVertex2f(218.0f,160.0f);
    glVertex2f(212.5f,180.0f);
    glVertex2f(207.0f,160.0f);
    glEnd();

    ///second left pillar
    glColor3ub(255.0f,171.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(230.0f,60.0f);
    glVertex2f(240.0f,60.0f);
    glVertex2f(240.0f,90.0f);
    glVertex2f(230.0f,90.0f);
    glEnd();

    glColor3ub(255.0f,210.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(230.0f,90.0f);
    glVertex2f(240.0f,90.0f);
    glVertex2f(245.0f,95.0f);
    glVertex2f(225.0f,95.0f);
    glEnd();

    glColor3ub(204.0f,110.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(231.0f,95.0f);
    glVertex2f(239.0f,95.0f);
    glVertex2f(239.0f,125.0f);
    glVertex2f(231.0f,125.0f);
    glEnd();

    glColor3ub(255.0f,255.0f,255.0f);
    glBegin(GL_POLYGON);
    glVertex2f(235.0f,125.0f);
    glVertex2f(238.0f,135.0f);
    glVertex2f(235.0f,145.0f);
    glVertex2f(232.0f,135.0f);
    glEnd();


    ///Right pillar
    glColor3ub(255.0f,171.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(380.0f,5.0f);
    glVertex2f(395.0f,5.0f);
    glVertex2f(395.0f,100.0f);
    glVertex2f(380.0f,100.0f);
    glEnd();

    glColor3ub(255.0f,210.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(380.0f,100.0f);
    glVertex2f(395.0f,100.0f);
    glVertex2f(400.0f,110.0f);
    glVertex2f(375.0f,110.0f);
    glEnd();

    glColor3ub(204.0f,110.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(381.0f,110.0f);
    glVertex2f(394.0f,110.0f);
    glVertex2f(394.0f,140.0f);
    glVertex2f(381.0f,140.0f);
    glEnd();

    glColor3ub(255.0f,255.0f,255.0f);
    glBegin(GL_POLYGON);
    glVertex2f(387.5f,140.0f);
    glVertex2f(393.0f,160.0f);
    glVertex2f(387.5f,180.0f);
    glVertex2f(382.0f,160.0f);
    glEnd();

    ///second right pillar
    glColor3ub(255.0f,171.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(360.0f,60.0f);
    glVertex2f(370.0f,60.0f);
    glVertex2f(370.0f,90.0f);
    glVertex2f(360.0f,90.0f);
    glEnd();

    glColor3ub(255.0f,210.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(360.0f,90.0f);
    glVertex2f(370.0f,90.0f);
    glVertex2f(375.0f,95.0f);
    glVertex2f(355.0f,95.0f);
    glEnd();

    glColor3ub(204.0f,110.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(361.0f,95.0f);
    glVertex2f(369.0f,95.0f);
    glVertex2f(369.0f,125.0f);
    glVertex2f(361.0f,125.0f);
    glEnd();

    glColor3ub(255.0f,255.0f,255.0f);
    glBegin(GL_POLYGON);
    glVertex2f(365.0f,125.0f);
    glVertex2f(368.0f,135.0f);
    glVertex2f(365.0f,145.0f);
    glVertex2f(362.0f,135.0f);
    glEnd();

    ///body
    glColor3ub(255.0f,210.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(220.0f,5.0f);
    glVertex2f(285.0f,5.0f);
    glVertex2f(285.0f,60.0f);
    glVertex2f(220.0f,60.0f);
    glEnd();

    glColor3ub(255.0f,210.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(315.0f,5.0f);
    glVertex2f(380.0f,5.0f);
    glVertex2f(380.0f,60.0f);
    glVertex2f(315.0f,60.0f);
    glEnd();

    ///front door
    glColor3ub(220.0f,130.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(285.0f,0.0f);
    glVertex2f(315.0f,0.0f);
    glVertex2f(315.0f,70.0f);
    glVertex2f(285.0f,70.0f);
    glEnd();

    glColor3ub(102.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glVertex2f(290.0f,0.0f);
    glVertex2f(310.0f,0.0f);
    glVertex2f(310.0f,50.0f);
    glVertex2f(290.0f,50.0f);
    glEnd();

    glColor3ub(255.0f,255.0f,0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(290.0f,50.0f);
    glVertex2f(310.0f,50.0f);
    glVertex2f(300.0f,65.0f);
    glEnd();

    ///left doors
    glColor3ub(102.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glVertex2f(225.0f,5.0f);
    glVertex2f(240.0f,5.0f);
    glVertex2f(240.0f,40.0f);
    glVertex2f(225.0f,40.0f);
    glEnd();

    glColor3ub(220.0f,130.0f,0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(225.0f,40.0f);
    glVertex2f(240.0f,40.0f);
    glVertex2f(232.5f,50.0f);
    glEnd();

    ///2
    glColor3ub(102.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glVertex2f(245.0f,5.0f);
    glVertex2f(260.0f,5.0f);
    glVertex2f(260.0f,40.0f);
    glVertex2f(245.0f,40.0f);
    glEnd();

   glColor3ub(220.0f,130.0f,0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(245.0f,40.0f);
    glVertex2f(260.0f,40.0f);
    glVertex2f(252.5f,50.0f);
    glEnd();

    ///3
    glColor3ub(102.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glVertex2f(265.0f,5.0f);
    glVertex2f(280.0f,5.0f);
    glVertex2f(280.0f,40.0f);
    glVertex2f(265.0f,40.0f);
    glEnd();

    glColor3ub(220.0f,130.0f,0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(265.0f,40.0f);
    glVertex2f(280.0f,40.0f);
    glVertex2f(272.5f,50.0f);
    glEnd();

    ///right doors
    glColor3ub(102.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glVertex2f(320.0f,5.0f);
    glVertex2f(335.0f,5.0f);
    glVertex2f(335.0f,40.0f);
    glVertex2f(320.0f,40.0f);
    glEnd();

    glColor3ub(220.0f,130.0f,0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(320.0f,40.0f);
    glVertex2f(335.0f,40.0f);
    glVertex2f(327.5f,50.0f);
    glEnd();

    ///2
    glColor3ub(102.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glVertex2f(340.0f,5.0f);
    glVertex2f(355.0f,5.0f);
    glVertex2f(355.0f,40.0f);
    glVertex2f(340.0f,40.0f);
    glEnd();

    glColor3ub(220.0f,130.0f,0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(340.0f,40.0f);
    glVertex2f(355.0f,40.0f);
    glVertex2f(347.5f,50.0f);
    glEnd();

    ///3
    glColor3ub(102.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glVertex2f(360.0f,5.0f);
    glVertex2f(375.0f,5.0f);
    glVertex2f(375.0f,40.0f);
    glVertex2f(360.0f,40.0f);
    glEnd();

    glColor3ub(220.0f,130.0f,0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(360.0f,40.0f);
    glVertex2f(375.0f,40.0f);
    glVertex2f(367.5f,50.0f);
    glEnd();

    ///left Minar
    glColor3ub(0.0f,204.0f,204.0f);
    glBegin(GL_POLYGON);
    glVertex2f(250.0f,60.0f);
    glVertex2f(270.0f,60.0f);
    glVertex2f(275.0f,75.0f);
    glVertex2f(260.0f,90.0f);
    glVertex2f(245.0f,75.0f);
    glEnd();

    glColor3ub(255.0f,255.0f,255.0f);
    glBegin(GL_POLYGON);
    glVertex2f(260.0f,90.0f);
    glVertex2f(262.0f,97.0f);
    glVertex2f(260.0f,105.0f);
    glVertex2f(258.0f,97.0f);
    glEnd();

    ///middle minar
    glColor3ub(0.0f,204.0f,204.0f);
    glBegin(GL_POLYGON);
    glVertex2f(285.0f,70.0f);
    glVertex2f(315.0f,70.0f);
    glVertex2f(320.0f,90.0f);
    glVertex2f(300.0f,120.0f);
    glVertex2f(280.0f,90.0f);
    glEnd();

    glColor3ub(255.0f,255.0f,255.0f);
    glBegin(GL_POLYGON);
    glVertex2f(300.0f,120.0f);
    glVertex2f(302.0f,127.0f);
    glVertex2f(300.0f,135.0f);
    glVertex2f(298.0f,127.0f);
    glEnd();

    ///right  minar
    glColor3ub(0.0f,204.0f,204.0f);
    glBegin(GL_POLYGON);
    glVertex2f(330.0f,60.0f);
    glVertex2f(350.0f,60.0f);
    glVertex2f(355.0f,75.0f);
    glVertex2f(340.0f,90.0f);
    glVertex2f(325.0f,75.0f);
    glEnd();

    glColor3ub(255.0f,255.0f,255.0f);
    glBegin(GL_POLYGON);
    glVertex2f(340.0f,90.0f);
    glVertex2f(342.0f,97.0f);
    glVertex2f(340.0f,105.0f);
    glVertex2f(338.0f,97.0f);
    glEnd();

///99
    ///pathway
    glColor3ub(204.0f,105.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(315.0f,0.0f);
    glVertex2f(285.0f,0.0f);
    glVertex2f(235.0f,-250.0f);
    glVertex2f(365.0f,-250.0f);
    glEnd();

    glColor3ub(192.0f,192.0f,192.0f);
    glBegin(GL_POLYGON);
    glVertex2f(310.0f,0.0f);
    glVertex2f(290.0f,0.0f);
    glVertex2f(240.0f,-250.0f);
    glVertex2f(360.0f,-250.0f);
    glEnd();

///100
    ///lamps
    ///right_side_1
    glColor3ub(0.0f,0.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(312.0f,-10.0f);
    glVertex2f(314.0f,-10.0f);
    glVertex2f(314.0f,20.0f);
    glVertex2f(312.0f,20.0f);
    glEnd();

    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(255.0,255.0,80.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=4.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+313,y+20);
        }
	glEnd();

    ///right_side_2
    glColor3ub(0.0f,0.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(321.0f,-50.0f);
    glVertex2f(323.5f,-50.0f);
    glVertex2f(323.5f,20.0f);
    glVertex2f(321.0f,20.0f);
    glEnd();

    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(255.0,255.0,80.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=5.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+322,y+20);
        }
	glEnd();

    ///right_side_3
    glColor3ub(0.0f,0.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(330.0f,-100.0f);
    glVertex2f(334.0f,-100.0f);
    glVertex2f(334.0f,25.0f);
    glVertex2f(330.0f,25.0f);
    glEnd();

    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(255.0,255.0,80.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=6.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+332,y+25);
        }
	glEnd();

    ///right_side_4
    glColor3ub(0.0f,0.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(345.0f,-190.0f);
    glVertex2f(350.0f,-190.0f);
    glVertex2f(350.0f,30.0f);
    glVertex2f(345.0f,30.0f);
    glEnd();

    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(255.0,255.0,80.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=7.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+347,y+30);
        }
	glEnd();

	///left_side_1
    glColor3ub(0.0f,0.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(287.0f,-10.0f);
    glVertex2f(289.0f,-10.0f);
    glVertex2f(289.0f,20.0f);
    glVertex2f(287.0f,20.0f);
    glEnd();

    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(255.0,255.0,80.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=4.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+286,y+20);
        }
	glEnd();

    ///left_side_2
    glColor3ub(0.0f,0.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(280.0f,-50.0f);
    glVertex2f(277.5f,-50.0f);
    glVertex2f(277.5f,20.0f);
    glVertex2f(280.0f,20.0f);
    glEnd();

    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(255.0,255.0,80.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=5.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+280,y+20);
        }
	glEnd();

    ///left_side_3
    glColor3ub(0.0f,0.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(273.0f,-100.0f);
    glVertex2f(269.0f,-100.0f);
    glVertex2f(269.0f,25.0f);
    glVertex2f(273.0f,25.0f);
    glEnd();

    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(255.0,255.0,80.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=6.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+270,y+25);
        }
	glEnd();

    ///left_side_4
    glColor3ub(0.0f,0.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(255.0f,-190.0f);
    glVertex2f(250.0f,-190.0f);
    glVertex2f(250.0f,30.0f);
    glVertex2f(255.0f,30.0f);
    glEnd();

    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(255.0,255.0,80.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=7.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+252,y+30);
        }
	glEnd();
	glutTimerFunc(4000,disback,0);
	glFlush();
}

void d3(int val){

    glutDisplayFunc(night);

}

///Moinul Islam

void Evening()
{
///sky41
    glColor3ub(249.0f,226.0f,79.0f);
    glBegin(GL_QUADS);
    glVertex2f(0.0f,0.0f);
    glVertex2f(600.0f,0.0f);
    glColor3ub(255.0f,255.0f,51.0f);
    glVertex2f(600.0f,500.0f);
    glColor3ub(255.0f,178.0f,102.0f);
    glVertex2f(0.0f,500.0f);
    glEnd();

///sun42
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(0.0f,_move4, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
        glColor3ub(255.0,133.0,0.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=35.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+550,y+410);
        }
  glEnd();
  glPopMatrix();


///cloud143
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(_move3, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3ub(255.0,255.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=18.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+105,y+360);
        }

  glEnd();

  glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {

        glColor3ub(255.0,255.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=19.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+130,y+360);
        }
  glEnd();

  glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
       glColor3ub(255.0,255.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=17.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+120,y+380);
        }
  glEnd();
  glPopMatrix();

///cloud244
  glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(_move3, 0.0f, 0.0f);

  glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3ub(255.0,255.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=20.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+60,y+310);
        }
  glEnd();

  glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3ub(255.0,255.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=19.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+90,y+310);
        }
  glEnd();

  glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3ub(255.0,255.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=17.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+75,y+335);
        }
  glEnd();
  glPopMatrix();

///cloud345
  glLoadIdentity();
    glPushMatrix();
    glTranslatef(_move3, 0.0f, 0.0f);
  glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3ub(255.0,255.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=20.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+450,y+340);
        }
  glEnd();

  glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3ub(255.0,255.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=20.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+480,y+340);
        }
  glEnd();

  glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3ub(255.0,255.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=20.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+465,y+370);
        }
  glEnd();
  glPopMatrix();

///river46
    glColor3ub(128.0f,204.0f,255.0f);
    glBegin(GL_QUADS);
    glVertex2f(0.0f,0.0f);
    glColor3ub(255.0f,194.0f,102.0f);
    glVertex2f(0.0f,-250.0f);
    glColor3ub(255.0f,194.0f,102.0f);
    glVertex2f(600.0f,-250.0f);
    glColor3ub(26.0f,163.0f,255.0f);
    glVertex2f(600.0f,0.0f);
    glEnd();


    glColor3ub(128.0f,204.0f,255.0f);
    glBegin(GL_POLYGON);
    glVertex2f(200.0f,0.0f);
    glColor3ub(26.0f,163.0f,255.0f);
    glVertex2f(205.0f,5.0f);
    glVertex2f(205.0f,30.0f);
    glVertex2f(0.0f,30.0f);
    glVertex2f(0.0f,0.0f);
    glEnd();


    glColor3ub(128.0f,204.0f,255.0f);
    glBegin(GL_POLYGON);
    glVertex2f(395.0f,30.0f);
    glVertex2f(395.0f,5.0f);
    glVertex2f(400.0f,0.0f);
    glColor3ub(26.0f,163.0f,255.0f);
    glVertex2f(600.0f,0.0f);
    glColor3ub(220.0f,220.0f,220.0f);
    glVertex2f(600.0f,30.0f);
    glEnd();

///boat47
    glColor3ub(153.0f,51.0f,0.0f);
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(_move5, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(445.0f,-200.0f);
    glColor3ub(204.0f,68.0f,0.0f);
    glVertex2f(460.0f,-220.0f);
    glVertex2f(525.0f,-220.0f);
    glVertex2f(540.0f,-200.0f);
    glEnd();

    glColor3ub(102.0f,61.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(457.0f,-200.0f);
    glVertex2f(460.0f,-200.0f);
    glVertex2f(460.0f,-160.0f);
    glVertex2f(457.0f,-160.0f);
    //glVertex2f(457.0f,-73.0f);

    glEnd();
    glColor3ub(102.0f,61.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(520.0f,-200.0f);
    glVertex2f(523.0f,-200.0f);
    glVertex2f(523.0f,-150.0f);
    glVertex2f(520.0f,-150.0f);
    //glVertex2f(457.0f,-73.0f);

    glEnd();

    glColor3ub(0.0f,0.0f,204.0f);
    glBegin(GL_POLYGON);
    glVertex2f(450.0f,-160.0f);
    glVertex2f(530.0f,-150.0f);
    glVertex2f(530.0f,-145.0f);
    glVertex2f(450.0f,-155.0f);

    glEnd();
    glPopMatrix();

 ///waterflower48
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(_move6, 0.0f, 0.0f);


  glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3ub(0.0,153.0,0.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=10.5;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+150,y-88);
        }
        glEnd();

        glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3ub(0.0,204.0,0.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=10.5;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+110,y-50);
        }
  glEnd();
  glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3ub(0.0,204.0,0.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=10.5;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+90,y-90);
        }
  glEnd();

  glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3ub(0.0,153.0,0.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=10.5;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+250,y-88);
        }
        glEnd();

        glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3ub(0.0,204.0,0.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=10.5;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+300,y-38);
        }
        glEnd();

        glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3ub(0.0,204.0,0.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=10.5;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+310,y-98);
        }
        glEnd();


  glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3ub(0.0,204.0,0.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=10.5;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+210,y-50);
        }
  glEnd();
  glPopMatrix();


///mountain49
    glColor3ub(0.0f,102.0f,51.0f);
    glBegin(GL_POLYGON);
    glVertex2f(0.0f,30.0f);
    glVertex2f(205.0f,30.0f);
    glColor3ub(128.0f,255.0f,0.0f);
    glVertex2f(205.0f,60.0f);
    glVertex2f(70.0f,250.0f);
    glVertex2f(0.0f,150.0f);
    glEnd();

    glColor3ub(0.0f,102.0f,51.0f);
    glBegin(GL_POLYGON);
    glVertex2f(390.0f,30.0f);
    glVertex2f(600.0f,30.0f);
    glColor3ub(128.0f,255.0f,0.0f);
    glVertex2f(600.0f,180.0f);
    glVertex2f(500.0f,330.0f);
    glVertex2f(360.0f,60.0f);
    glEnd();

    glColor3ub(0.0f,102.0f,51.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(600.0f,180.0f);
    glVertex2f(600.0f,300.0f);
    glColor3ub(128.0f,255.0f,0.0f);
    glVertex2f(560.0f,240.0f);
    glEnd();

///fountain149
    ///fountain1
    glColor3ub(26.0f,163.0f,255.0f);
    glBegin(GL_POLYGON);
    glVertex2f(75.0f,180.0f);
    glVertex2f(65.0f,180.0f);
    glColor3ub(128.0f,191.0f,255.0f);
    glVertex2f(60.0f,30.0f);
    glVertex2f(80.0f,30.0f);
    glEnd();

    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(240.0,240.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=7.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+59,y+30);
        }
	glEnd();

    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(240.0,240.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=7.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+69,y+30);
        }
	glEnd();

	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
       glColor3ub(240.0,240.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=7.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+79,y+30);
        }
	glEnd();

///fountain150
	///fountain2
	glColor3ub(26.0f,163.0f,255.0f);
    glBegin(GL_POLYGON);
    glVertex2f(520.0f,200.0f);
    glVertex2f(510.0f,200.0f);
    glColor3ub(128.0f,191.0f,255.0f);
    glVertex2f(505.0f,30.0f);
    glVertex2f(525.0f,30.0f);
    glEnd();

    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(240.0,240.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=7.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+507,y+30);
        }
	glEnd();

    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(240.0,240.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=7.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+517,y+30);
        }
	glEnd();

	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
       glColor3ub(240.0,240.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=7.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+527,y+30);
        }
	glEnd();


///wave151
    ///-----------------------------------1
   glLoadIdentity();
    glPushMatrix();
    glTranslatef(_move8, 0.0f, 0.0f);
    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(70.0f,-20.0f);
    glVertex2f(40.0f,-15.0f);
    glVertex2f(10.0f,-20.0f);
    glEnd();

    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(170.0f,-20.0f);
    glVertex2f(140.0f,-15.0f);
    glVertex2f(110.0f,-20.0f);
    glEnd();

   glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(270.0f,-20.0f);
    glVertex2f(240.0f,-15.0f);
    glVertex2f(210.0f,-20.0f);
    glEnd();

    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(370.0f,-20.0f);
    glVertex2f(340.0f,-15.0f);
    glVertex2f(310.0f,-20.0f);
    glEnd();

    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(470.0f,-20.0f);
    glVertex2f(440.0f,-15.0f);
    glVertex2f(410.0f,-20.0f);
    glEnd();

    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(570.0f,-20.0f);
    glVertex2f(540.0f,-15.0f);
    glVertex2f(510.0f,-20.0f);
    glEnd();

    glPopMatrix();

///wave252
    ///-----------------------------------2
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(_move7, 0.0f, 0.0f);
    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(130.0f,-50.0f);
    glVertex2f(90.0f,-45.0f);
    glVertex2f(60.0f,-50.0f);
    glEnd();

    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(230.0f,-50.0f);
    glVertex2f(190.0f,-45.0f);
    glVertex2f(160.0f,-50.0f);
    glEnd();

    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(330.0f,-50.0f);
    glVertex2f(290.0f,-45.0f);
    glVertex2f(260.0f,-50.0f);
    glEnd();

    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(430.0f,-50.0f);
    glVertex2f(390.0f,-45.0f);
    glVertex2f(360.0f,-50.0f);
    glEnd();

    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(530.0f,-50.0f);
    glVertex2f(490.0f,-45.0f);
    glVertex2f(460.0f,-50.0f);
    glEnd();
    glPopMatrix();

///wave353
    ///--------------------------------------3
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(_move8, 0.0f, 0.0f);
    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(70.0f,-80.0f);
    glVertex2f(40.0f,-75.0f);
    glVertex2f(10.0f,-80.0f);
    glEnd();

    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(170.0f,-80.0f);
    glVertex2f(140.0f,-75.0f);
    glVertex2f(110.0f,-80.0f);
    glEnd();

    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(270.0f,-80.0f);
    glVertex2f(240.0f,-75.0f);
    glVertex2f(210.0f,-80.0f);
    glEnd();

   glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(370.0f,-80.0f);
    glVertex2f(340.0f,-75.0f);
    glVertex2f(310.0f,-80.0f);
    glEnd();

    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(470.0f,-80.0f);
    glVertex2f(440.0f,-75.0f);
    glVertex2f(410.0f,-80.0f);
    glEnd();

    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(570.0f,-80.0f);
    glVertex2f(540.0f,-75.0f);
    glVertex2f(510.0f,-80.0f);
    glEnd();

    glPopMatrix();

///wave454
    ///-------------------------------4
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(_move7, 0.0f, 0.0f);
    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(130.0f,-110.0f);
    glVertex2f(90.0f,-105.0f);
    glVertex2f(60.0f,-110.0f);
    glEnd();

    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(230.0f,-110.0f);
    glVertex2f(190.0f,-105.0f);
    glVertex2f(160.0f,-110.0f);
    glEnd();

    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(330.0f,-110.0f);
    glVertex2f(290.0f,-105.0f);
    glVertex2f(260.0f,-110.0f);
    glEnd();

    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(430.0f,-110.0f);
    glVertex2f(390.0f,-105.0f);
    glVertex2f(360.0f,-110.0f);
    glEnd();

    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(530.0f,-110.0f);
    glVertex2f(490.0f,-105.0f);
    glVertex2f(460.0f,-110.0f);
    glEnd();

    glPopMatrix();

///wave555
    ///-----------------------------5
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(_move8, 0.0f, 0.0f);
    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(70.0f,-140.0f);
    glVertex2f(40.0f,-135.0f);
    glVertex2f(10.0f,-140.0f);
    glEnd();

    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(170.0f,-140.0f);
    glVertex2f(140.0f,-135.0f);
    glVertex2f(110.0f,-140.0f);
    glEnd();

    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(270.0f,-140.0f);
    glVertex2f(240.0f,-135.0f);
    glVertex2f(210.0f,-140.0f);
    glEnd();

    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(370.0f,-140.0f);
    glVertex2f(340.0f,-135.0f);
    glVertex2f(310.0f,-140.0f);
    glEnd();

    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(470.0f,-140.0f);
    glVertex2f(440.0f,-135.0f);
    glVertex2f(410.0f,-140.0f);
    glEnd();

    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(570.0f,-140.0f);
    glVertex2f(540.0f,-135.0f);
    glVertex2f(510.0f,-140.0f);
    glEnd();

    glPopMatrix();

///wave656
    ///-------------------------------6
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(_move7, 0.0f, 0.0f);
    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(130.0f,-170.0f);
    glVertex2f(90.0f,-165.0f);
    glVertex2f(60.0f,-170.0f);
    glEnd();

    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(230.0f,-170.0f);
    glVertex2f(190.0f,-165.0f);
    glVertex2f(160.0f,-170.0f);
    glEnd();

    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(330.0f,-170.0f);
    glVertex2f(290.0f,-165.0f);
    glVertex2f(260.0f,-170.0f);
    glEnd();

    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(430.0f,-170.0f);
    glVertex2f(390.0f,-165.0f);
    glVertex2f(360.0f,-170.0f);
    glEnd();

    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(530.0f,-170.0f);
    glVertex2f(490.0f,-165.0f);
    glVertex2f(460.0f,-170.0f);
    glEnd();

    glPopMatrix();

///wave757
    ///-----------------------------7
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(_move8, 0.0f, 0.0f);
    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(70.0f,-200.0f);
    glVertex2f(40.0f,-195.0f);
    glVertex2f(10.0f,-200.0f);
    glEnd();

    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(170.0f,-200.0f);
    glVertex2f(140.0f,-195.0f);
    glVertex2f(110.0f,-200.0f);
    glEnd();

    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(270.0f,-200.0f);
    glVertex2f(240.0f,-195.0f);
    glVertex2f(210.0f,-200.0f);
    glEnd();

    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(370.0f,-200.0f);
    glVertex2f(340.0f,-195.0f);
    glVertex2f(310.0f,-200.0f);
    glEnd();

    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(470.0f,-200.0f);
    glVertex2f(440.0f,-195.0f);
    glVertex2f(410.0f,-200.0f);
    glEnd();

    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(570.0f,-200.0f);
    glVertex2f(540.0f,-195.0f);
    glVertex2f(510.0f,-200.0f);
    glEnd();

    glPopMatrix();


///mosque58
    //base
    glColor3ub(153.0f,57.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(200.0f,0.0f);
    glVertex2f(400.0f,0.0f);
    glVertex2f(395.0f,5.0f);
    glVertex2f(205.0f,5.0f);
    glEnd();

    //Left pillar
    glColor3ub(179.0f,89.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(205.0f,5.0f);
    glVertex2f(220.0f,5.0f);
    glVertex2f(220.0f,100.0f);
    glVertex2f(205.0f,100.0f);
    glEnd();

    glColor3ub(179.0f,89.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(205.0f,100.0f);
    glVertex2f(220.0f,100.0f);
    glVertex2f(225.0f,110.0f);
    glVertex2f(200.0f,110.0f);
    glEnd();

    glColor3ub(153.0f,57.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(206.0f,110.0f);
    glVertex2f(219.0f,110.0f);
    glVertex2f(219.0f,140.0f);
    glVertex2f(206.0f,140.0f);
    glEnd();

    glColor3ub(255.0f,170.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(212.5f,140.0f);
    glVertex2f(218.0f,160.0f);
    glVertex2f(212.5f,180.0f);
    glVertex2f(207.0f,160.0f);
    glEnd();

    //second left pillar
    glColor3ub(179.0f,89.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(230.0f,60.0f);
    glVertex2f(240.0f,60.0f);
    glVertex2f(240.0f,90.0f);
    glVertex2f(230.0f,90.0f);
    glEnd();

    glColor3ub(179.0f,89.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(230.0f,90.0f);
    glVertex2f(240.0f,90.0f);
    glVertex2f(245.0f,95.0f);
    glVertex2f(225.0f,95.0f);
    glEnd();

    glColor3ub(153.0f,57.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(231.0f,95.0f);
    glVertex2f(239.0f,95.0f);
    glVertex2f(239.0f,125.0f);
    glVertex2f(231.0f,125.0f);
    glEnd();

    glColor3ub(255.0f,170.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(235.0f,125.0f);
    glVertex2f(238.0f,135.0f);
    glVertex2f(235.0f,145.0f);
    glVertex2f(232.0f,135.0f);
    glEnd();


    //Right pillar
    glColor3ub(179.0f,89.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(380.0f,5.0f);
    glVertex2f(395.0f,5.0f);
    glVertex2f(395.0f,100.0f);
    glVertex2f(380.0f,100.0f);
    glEnd();

    glColor3ub(179.0f,89.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(380.0f,100.0f);
    glVertex2f(395.0f,100.0f);
    glVertex2f(400.0f,110.0f);
    glVertex2f(375.0f,110.0f);
    glEnd();

    glColor3ub(153.0f,57.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(381.0f,110.0f);
    glVertex2f(394.0f,110.0f);
    glVertex2f(394.0f,140.0f);
    glVertex2f(381.0f,140.0f);
    glEnd();

    glColor3ub(255.0f,170.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(387.5f,140.0f);
    glVertex2f(393.0f,160.0f);
    glVertex2f(387.5f,180.0f);
    glVertex2f(382.0f,160.0f);
    glEnd();

    //second right pillar
    glColor3ub(179.0f,89.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(360.0f,60.0f);
    glVertex2f(370.0f,60.0f);
    glVertex2f(370.0f,90.0f);
    glVertex2f(360.0f,90.0f);
    glEnd();

    glColor3ub(179.0f,89.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(360.0f,90.0f);
    glVertex2f(370.0f,90.0f);
    glVertex2f(375.0f,95.0f);
    glVertex2f(355.0f,95.0f);
    glEnd();


    glColor3ub(153.0f,57.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(361.0f,95.0f);
    glVertex2f(369.0f,95.0f);
    glVertex2f(369.0f,125.0f);
    glVertex2f(361.0f,125.0f);
    glEnd();

    glColor3ub(255.0f,170.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(365.0f,125.0f);
    glVertex2f(368.0f,135.0f);
    glVertex2f(365.0f,145.0f);
    glVertex2f(362.0f,135.0f);
    glEnd();

    //body
    glColor3ub(204.0f,105.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(220.0f,5.0f);
    glVertex2f(285.0f,5.0f);
    glVertex2f(285.0f,60.0f);
    glVertex2f(220.0f,60.0f);
    glEnd();

    glColor3ub(204.0f,105.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(315.0f,5.0f);
    glVertex2f(380.0f,5.0f);
    glVertex2f(380.0f,60.0f);
    glVertex2f(315.0f,60.0f);
    glEnd();

    //front door
    glColor3ub(153.0f,57.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(285.0f,0.0f);
    glVertex2f(315.0f,0.0f);
    glVertex2f(315.0f,70.0f);
    glVertex2f(285.0f,70.0f);
    glEnd();

    glColor3ub(179.0f,89.0f,0.0f);
    glBegin(GL_QUADS);
    glVertex2f(290.0f,0.0f);
    glVertex2f(310.0f,0.0f);
    glVertex2f(310.0f,50.0f);
    glVertex2f(290.0f,50.0f);
    glEnd();

    glColor3ub(179.0f,89.0f,0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(290.0f,50.0f);
    glVertex2f(310.0f,50.0f);
    glVertex2f(300.0f,65.0f);
    glEnd();

    //left doors
    glColor3ub(102.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glVertex2f(225.0f,5.0f);
    glVertex2f(240.0f,5.0f);
    glVertex2f(240.0f,40.0f);
    glVertex2f(225.0f,40.0f);
    glEnd();

    glColor3ub(255.0f,170.0f,0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(225.0f,40.0f);
    glVertex2f(240.0f,40.0f);
    glVertex2f(232.5f,50.0f);
    glEnd();

    //2
    glColor3ub(102.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glVertex2f(245.0f,5.0f);
    glVertex2f(260.0f,5.0f);
    glVertex2f(260.0f,40.0f);
    glVertex2f(245.0f,40.0f);
    glEnd();

    glColor3ub(255.0f,170.0f,0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(245.0f,40.0f);
    glVertex2f(260.0f,40.0f);
    glVertex2f(252.5f,50.0f);
    glEnd();

    //3
    glColor3ub(102.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glVertex2f(265.0f,5.0f);
    glVertex2f(280.0f,5.0f);
    glVertex2f(280.0f,40.0f);
    glVertex2f(265.0f,40.0f);
    glEnd();

    glColor3ub(255.0f,170.0f,0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(265.0f,40.0f);
    glVertex2f(280.0f,40.0f);
    glVertex2f(272.5f,50.0f);
    glEnd();

    //right doors
    glColor3ub(102.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glVertex2f(320.0f,5.0f);
    glVertex2f(335.0f,5.0f);
    glVertex2f(335.0f,40.0f);
    glVertex2f(320.0f,40.0f);
    glEnd();

    glColor3ub(255.0f,170.0f,0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(320.0f,40.0f);
    glVertex2f(335.0f,40.0f);
    glVertex2f(327.5f,50.0f);
    glEnd();

    //2
    glColor3ub(102.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glVertex2f(340.0f,5.0f);
    glVertex2f(355.0f,5.0f);
    glVertex2f(355.0f,40.0f);
    glVertex2f(340.0f,40.0f);
    glEnd();

    glColor3ub(255.0f,170.0f,0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(340.0f,40.0f);
    glVertex2f(355.0f,40.0f);
    glVertex2f(347.5f,50.0f);
    glEnd();

    //3
    glColor3ub(102.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glVertex2f(360.0f,5.0f);
    glVertex2f(375.0f,5.0f);
    glVertex2f(375.0f,40.0f);
    glVertex2f(360.0f,40.0f);
    glEnd();

    glColor3ub(255.0f,170.0f,0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(360.0f,40.0f);
    glVertex2f(375.0f,40.0f);
    glVertex2f(367.5f,50.0f);
    glEnd();

    //left Miner
    glColor3ub(0.0f,204.0f,204.0f);
    glBegin(GL_POLYGON);
    glVertex2f(250.0f,60.0f);
    glVertex2f(270.0f,60.0f);
    glVertex2f(275.0f,75.0f);
    glVertex2f(260.0f,90.0f);
    glVertex2f(245.0f,75.0f);
    glEnd();

    glColor3ub(255.0f,170.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(260.0f,90.0f);
    glVertex2f(262.0f,97.0f);
    glVertex2f(260.0f,105.0f);
    glVertex2f(258.0f,97.0f);
    glEnd();


//middle miner
    glColor3ub(0.0f,204.0f,204.0f);
    glBegin(GL_POLYGON);
    glVertex2f(285.0f,70.0f);
    glVertex2f(315.0f,70.0f);
    glVertex2f(320.0f,90.0f);
    glVertex2f(300.0f,120.0f);
    glVertex2f(280.0f,90.0f);
    glEnd();

    glColor3ub(255.0f,170.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(300.0f,120.0f);
    glVertex2f(302.0f,127.0f);
    glVertex2f(300.0f,135.0f);
    glVertex2f(298.0f,127.0f);
    glEnd();

    //right  miner
    glColor3ub(0.0f,204.0f,204.0f);
    glBegin(GL_POLYGON);
    glVertex2f(330.0f,60.0f);
    glVertex2f(350.0f,60.0f);
    glVertex2f(355.0f,75.0f);
    glVertex2f(340.0f,90.0f);
    glVertex2f(325.0f,75.0f);
    glEnd();

    glColor3ub(255.0f,170.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(340.0f,90.0f);
    glVertex2f(342.0f,97.0f);
    glVertex2f(340.0f,105.0f);
    glVertex2f(338.0f,97.0f);
    glEnd();
    glutTimerFunc(4000,d3,0);
    glFlush();
}

void d2(int val)
{
    glutDisplayFunc(Evening);
}

/// Aziz

void morning()
{

///sky

    glColor3ub(102,178,255);
    glBegin(GL_QUADS);
    glColor3ub(250, 250, 250);
    glVertex2f(0.0f,0.0f);
    glVertex2f(600.0f,0.0f);
    glColor3ub(102.0f,178.0f,255.0f);
    glVertex2f(600.0f,500.0f);
    glVertex2f(0.0f,500.0f);
    glEnd();
///kite
    glPushMatrix();
    glTranslatef(position7,0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(153, 0, 0);
    glVertex2f(500.0f,400.0f);
    glVertex2f(520.0f,400.0f);
    glVertex2f(520.0f,420.0f);
    glVertex2f(500.0f,420.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(153, 0, 0);
    glVertex2f(500.0f,400.0f);
    glVertex2f(485.0f,395.0f);
    glVertex2f(480.0f,380.0f);

    glEnd();
    glPopMatrix();

///rainbow

    ///violet
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
        glColor3ub(146.0,94.0,146.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=170.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+290,y+120);
        }
	glEnd();
    ///gray
	glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
        glColor3ub(102.0,102.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=170.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+290,y+115);
        }
	glEnd();
	///blue
	glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
        glColor3ub(102.0,178.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=170.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+290,y+110);
        }
	glEnd();
	///green
	glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
        glColor3ub(0.0,153.0,76.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=170.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+290,y+105);
        }
	glEnd();
	///orange
	glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
        glColor3ub(255.0,153.0,5.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=170.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+290,y+100);
        }
	glEnd();
	///yellow
	glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
        glColor3ub(255.0,255.0,0.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=170.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+290,y+95);
        }
	glEnd();
	///red
	glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
        glColor3ub(255.0,0.0,0.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=170.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+290,y+90);
        }
	glEnd();
	///sky_cplour
	glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
        glColor3ub(190.0,220.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=170.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+290,y+85);
        }
	glEnd();

///sun

    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
        glColor3ub(255.0,198.0,26.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=25.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+100,y+400);
        }
        glEnd();

///river

    glColor3ub(102.0f,178.0f,255.0f);
    glBegin(GL_QUADS);
    glVertex2f(0.0f,0.0f);
    glVertex2f(0.0f,-250.0f);
    glVertex2f(600.0f,-250.0f);
    glVertex2f(600.0f,0.0f);
    glEnd();

    glColor3ub(102.0f,178.0f,255.0f);
    glBegin(GL_POLYGON);
    glVertex2f(200.0f,0.0f);
    glVertex2f(205.0f,5.0f);
    glVertex2f(205.0f,30.0f);
    glVertex2f(0.0f,30.0f);
    glVertex2f(0.0f,0.0f);
    glEnd();

    glColor3ub(102.0f,178.0f,255.0f);
    glBegin(GL_POLYGON);
    glVertex2f(395.0f,30.0f);
    glVertex2f(395.0f,5.0f);
    glVertex2f(400.0f,0.0f);
    glVertex2f(600.0f,0.0f);
    glVertex2f(600.0f,30.0f);
    glEnd();
    glPushMatrix();
///boat1
    glLoadIdentity();
    glTranslatef(position0,0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(204, 136, 0);
    glVertex2f(50.0f,-20.0f);
    glVertex2f(85.0f,-20.0f);
    glVertex2f(85.0f,05.0f);
    glVertex2f(50.0f,05.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(51, 51, 0);
    glVertex2f(50.0f,-20.0f);
    glVertex2f(100.0f,-20.0f);
    glVertex2f(120.0f,-30.0f);
    glVertex2f(100.0f,-40.0f);
    glVertex2f(50.0f,-40.0f);
    glVertex2f(30.0f,-30.0f);
    glEnd();
    glPopMatrix();

///boat2
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(position1,0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(204, 136, 0);
    glVertex2f(550.0f,-20.0f);
    glVertex2f(550.0f,05.0f);
    glVertex2f(515.0f,05.0f);
    glVertex2f(515.0f,-20.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(51, 51, 0);///boat2
    glVertex2f(500.0f,-20.0f);
    glVertex2f(550.0f,-20.0f);
    glVertex2f(570.0f,-30.0f);
    glVertex2f(550.0f,-40.0f);
    glVertex2f(500.0f,-40.0f);
    glVertex2f(480.0f,-30.0f);
    glEnd();
    glPopMatrix();

///mountain

    glColor3ub(0.0f,0.0f,90.0f);
    glBegin(GL_POLYGON);
    glVertex2f(0.0f,30.0f);
    glVertex2f(205.0f,30.0f);
    glVertex2f(205.0f,60.0f);
    glVertex2f(70.0f,250.0f);
    glVertex2f(0.0f,150.0f);
    glEnd();

    glColor3ub(0.0f,0.0f,90.0f);
    glBegin(GL_POLYGON);
    glVertex2f(390.0f,30.0f);
    glVertex2f(600.0f,30.0f);
    glVertex2f(600.0f,180.0f);
    glVertex2f(500.0f,330.0f);
    glVertex2f(360.0f,60.0f);
    glEnd();

    glColor3ub(0.0f,0.0f,90.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(600.0f,180.0f);
    glVertex2f(600.0f,300.0f);
    glVertex2f(560.0f,240.0f);
    glEnd();
///mountain

    glColor3ub(0, 153, 51);
    glBegin(GL_POLYGON);
    glVertex2f(0.0f,30.0f);
    glVertex2f(205.0f,30.0f);
    glVertex2f(205.0f,60.0f);
    glVertex2f(70.0f,250.0f);
    glVertex2f(0.0f,150.0f);
    glEnd();

    glColor3ub(0, 153, 51);
    glBegin(GL_POLYGON);
    glVertex2f(390.0f,30.0f);
    glVertex2f(600.0f,30.0f);
    glVertex2f(600.0f,180.0f);
    glVertex2f(500.0f,330.0f);
    glVertex2f(360.0f,60.0f);
    glEnd();

    glColor3ub(0, 153, 51);
    glBegin(GL_TRIANGLES);
    glVertex2f(600.0f,180.0f);
    glVertex2f(600.0f,300.0f);
    glVertex2f(560.0f,240.0f);
    glEnd();

///fountain

    ///fountain1
    glColor3ub(26.0f,163.0f,255.0f);
    glBegin(GL_POLYGON);
    glVertex2f(75.0f,180.0f);
    glVertex2f(65.0f,180.0f);
    glColor3ub(128.0f,191.0f,255.0f);
    glVertex2f(60.0f,30.0f);
    glVertex2f(80.0f,30.0f);
    glEnd();
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(240.0,240.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=7.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+59,y+30);
        }
	glEnd();
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(240.0,240.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=7.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+69,y+30);
        }
	glEnd();
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
       glColor3ub(240.0,240.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=7.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+79,y+30);
        }
	glEnd();
	///fountain2
	glColor3ub(26.0f,163.0f,255.0f);
    glBegin(GL_POLYGON);
    glVertex2f(520.0f,200.0f);
    glVertex2f(510.0f,200.0f);
    glColor3ub(128.0f,191.0f,255.0f);
    glVertex2f(505.0f,30.0f);
    glVertex2f(525.0f,30.0f);
    glEnd();
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(240.0,240.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=7.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+507,y+30);
        }
	glEnd();
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(240.0,240.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=7.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+517,y+30);
        }
	glEnd();
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
       glColor3ub(240.0,240.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=7.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+527,y+30);
        }
	glEnd();

///mosque

    //base
    glColor3ub(179.0f,89.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(200.0f,0.0f);
    glVertex2f(400.0f,0.0f);
    glVertex2f(395.0f,5.0f);
    glVertex2f(205.0f,5.0f);
    glEnd();

    //Left pillar
    glColor3ub(188, 118, 46);
    glBegin(GL_POLYGON);
    glVertex2f(205.0f,5.0f);
    glVertex2f(220.0f,5.0f);
    glVertex2f(220.0f,100.0f);
    glVertex2f(205.0f,100.0f);
    glEnd();

    glColor3ub(179.0f,89.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(205.0f,100.0f);
    glVertex2f(220.0f,100.0f);
    glVertex2f(225.0f,110.0f);
    glVertex2f(200.0f,110.0f);
    glEnd();

    glColor3ub(153.0f,57.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(206.0f,110.0f);
    glVertex2f(219.0f,110.0f);
    glVertex2f(219.0f,140.0f);
    glVertex2f(206.0f,140.0f);
    glEnd();

    glColor3ub(255.0f,255.0f,102.0f);
    glBegin(GL_POLYGON);
    glVertex2f(212.5f,140.0f);
    glVertex2f(218.0f,160.0f);
    glVertex2f(212.5f,180.0f);
    glVertex2f(207.0f,160.0f);
    glEnd();

    //second left pillar
    glColor3ub(188, 118, 46);
    glBegin(GL_POLYGON);
    glVertex2f(230.0f,60.0f);
    glVertex2f(240.0f,60.0f);
    glVertex2f(240.0f,90.0f);
    glVertex2f(230.0f,90.0f);
    glEnd();

    glColor3ub(179.0f,89.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(230.0f,90.0f);
    glVertex2f(240.0f,90.0f);
    glVertex2f(245.0f,95.0f);
    glVertex2f(225.0f,95.0f);
    glEnd();

    glColor3ub(153.0f,57.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(231.0f,95.0f);
    glVertex2f(239.0f,95.0f);
    glVertex2f(239.0f,125.0f);
    glVertex2f(231.0f,125.0f);
    glEnd();

    glColor3ub(255.0f,255.0f,102.0f);
    glBegin(GL_POLYGON);
    glVertex2f(235.0f,125.0f);
    glVertex2f(238.0f,135.0f);
    glVertex2f(235.0f,145.0f);
    glVertex2f(232.0f,135.0f);
    glEnd();


    //Right pillar
    glColor3ub(188, 118, 46);
    glBegin(GL_POLYGON);
    glVertex2f(380.0f,5.0f);
    glVertex2f(395.0f,5.0f);
    glVertex2f(395.0f,100.0f);
    glVertex2f(380.0f,100.0f);
    glEnd();

    glColor3ub(179.0f,89.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(380.0f,100.0f);
    glVertex2f(395.0f,100.0f);
    glVertex2f(400.0f,110.0f);
    glVertex2f(375.0f,110.0f);
    glEnd();

    glColor3ub(153.0f,57.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(381.0f,110.0f);
    glVertex2f(394.0f,110.0f);
    glVertex2f(394.0f,140.0f);
    glVertex2f(381.0f,140.0f);
    glEnd();

    glColor3ub(255.0f,255.0f,102.0f);
    glBegin(GL_POLYGON);
    glVertex2f(387.5f,140.0f);
    glVertex2f(393.0f,160.0f);
    glVertex2f(387.5f,180.0f);
    glVertex2f(382.0f,160.0f);
    glEnd();

    //second right pillar
    glColor3ub(188, 118, 46);
    glBegin(GL_POLYGON);
    glVertex2f(360.0f,60.0f);
    glVertex2f(370.0f,60.0f);
    glVertex2f(370.0f,90.0f);
    glVertex2f(360.0f,90.0f);
    glEnd();

    glColor3ub(179.0f,89.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(360.0f,90.0f);
    glVertex2f(370.0f,90.0f);
    glVertex2f(375.0f,95.0f);
    glVertex2f(355.0f,95.0f);
    glEnd();

    glColor3ub(153.0f,57.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(361.0f,95.0f);
    glVertex2f(369.0f,95.0f);
    glVertex2f(369.0f,125.0f);
    glVertex2f(361.0f,125.0f);
    glEnd();

    glColor3ub(255.0f,255.0f,102.0f);
    glBegin(GL_POLYGON);
    glVertex2f(365.0f,125.0f);
    glVertex2f(368.0f,135.0f);
    glVertex2f(365.0f,145.0f);
    glVertex2f(362.0f,135.0f);
    glEnd();

    //body
    glColor3ub(188, 118, 46);
    glBegin(GL_POLYGON);
    glVertex2f(220.0f,5.0f);
    glVertex2f(285.0f,5.0f);
    glVertex2f(285.0f,60.0f);
    glVertex2f(220.0f,60.0f);
    glEnd();

    glColor3ub(188, 118, 46);
    glBegin(GL_POLYGON);
    glVertex2f(315.0f,5.0f);
    glVertex2f(380.0f,5.0f);
    glVertex2f(380.0f,60.0f);
    glVertex2f(315.0f,60.0f);
    glEnd();

    //front door
    glColor3ub(188, 113, 48);
    glBegin(GL_POLYGON);
    glVertex2f(285.0f,0.0f);
    glVertex2f(315.0f,0.0f);
    glVertex2f(315.0f,70.0f);
    glVertex2f(285.0f,70.0f);
    glEnd();

    glColor3ub(179.0f,89.0f,0.0f);
    glBegin(GL_QUADS);
    glVertex2f(290.0f,0.0f);
    glVertex2f(310.0f,0.0f);
    glVertex2f(310.0f,50.0f);
    glVertex2f(290.0f,50.0f);
    glEnd();

    glColor3ub(162, 93, 34);
    glBegin(GL_TRIANGLES);
    glVertex2f(290.0f,50.0f);
    glVertex2f(310.0f,50.0f);
    glVertex2f(300.0f,65.0f);
    glEnd();

    //left doors
    glColor3ub(102.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glVertex2f(225.0f,5.0f);
    glVertex2f(240.0f,5.0f);
    glVertex2f(240.0f,40.0f);
    glVertex2f(225.0f,40.0f);
    glEnd();

    glColor3ub(162, 93, 34);
    glBegin(GL_TRIANGLES);
    glVertex2f(225.0f,40.0f);
    glVertex2f(240.0f,40.0f);
    glVertex2f(232.5f,50.0f);
    glEnd();

    //2
    glColor3ub(102.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glVertex2f(245.0f,5.0f);
    glVertex2f(260.0f,5.0f);
    glVertex2f(260.0f,40.0f);
    glVertex2f(245.0f,40.0f);
    glEnd();

    glColor3ub(162, 93, 34);
    glBegin(GL_TRIANGLES);
    glVertex2f(245.0f,40.0f);
    glVertex2f(260.0f,40.0f);
    glVertex2f(252.5f,50.0f);
    glEnd();

    //3
    glColor3ub(102.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glVertex2f(265.0f,5.0f);
    glVertex2f(280.0f,5.0f);
    glVertex2f(280.0f,40.0f);
    glVertex2f(265.0f,40.0f);
    glEnd();

    glColor3ub(162, 93, 34);
    glBegin(GL_TRIANGLES);
    glVertex2f(265.0f,40.0f);
    glVertex2f(280.0f,40.0f);
    glVertex2f(272.5f,50.0f);
    glEnd();

    //right doors
    glColor3ub(102.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glVertex2f(320.0f,5.0f);
    glVertex2f(335.0f,5.0f);
    glVertex2f(335.0f,40.0f);
    glVertex2f(320.0f,40.0f);
    glEnd();

    glColor3ub(162, 93, 34);
    glBegin(GL_TRIANGLES);
    glVertex2f(320.0f,40.0f);
    glVertex2f(335.0f,40.0f);
    glVertex2f(327.5f,50.0f);
    glEnd();

    //2
    glColor3ub(102.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glVertex2f(340.0f,5.0f);
    glVertex2f(355.0f,5.0f);
    glVertex2f(355.0f,40.0f);
    glVertex2f(340.0f,40.0f);
    glEnd();

    glColor3ub(162, 93, 34);
    glBegin(GL_TRIANGLES);
    glVertex2f(340.0f,40.0f);
    glVertex2f(355.0f,40.0f);
    glVertex2f(347.5f,50.0f);
    glEnd();

    //3
    glColor3ub(102.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glVertex2f(360.0f,5.0f);
    glVertex2f(375.0f,5.0f);
    glVertex2f(375.0f,40.0f);
    glVertex2f(360.0f,40.0f);
    glEnd();

    glColor3ub(162, 93, 34);
    glBegin(GL_TRIANGLES);
    glVertex2f(360.0f,40.0f);
    glVertex2f(375.0f,40.0f);
    glVertex2f(367.5f,50.0f);
    glEnd();

    //left Miner
    glColor3ub(0.0f,230.0f,230.0f);
    glBegin(GL_POLYGON);
    glVertex2f(250.0f,60.0f);
    glVertex2f(270.0f,60.0f);
    glVertex2f(275.0f,75.0f);
    glVertex2f(260.0f,90.0f);
    glVertex2f(245.0f,75.0f);
    glEnd();

    glColor3ub(255.0f,255.0f,102.0f);
    glBegin(GL_POLYGON);
    glVertex2f(260.0f,90.0f);
    glVertex2f(262.0f,97.0f);
    glVertex2f(260.0f,105.0f);
    glVertex2f(258.0f,97.0f);
    glEnd();

    //middle minar
    glColor3ub(0.0f,230.0f,230.0f);
    glBegin(GL_POLYGON);
    glVertex2f(285.0f,70.0f);
    glVertex2f(315.0f,70.0f);
    glVertex2f(320.0f,90.0f);
    glVertex2f(300.0f,120.0f);
    glVertex2f(280.0f,90.0f);
    glEnd();

    glColor3ub(255.0f,255.0f,102.0f);
    glBegin(GL_POLYGON);
    glVertex2f(300.0f,120.0f);
    glVertex2f(302.0f,127.0f);
    glVertex2f(300.0f,135.0f);
    glVertex2f(298.0f,127.0f);
    glEnd();

    //right  minar
    glColor3ub(0.0f,230.0f,230.0f);
    glBegin(GL_POLYGON);
    glVertex2f(330.0f,60.0f);
    glVertex2f(350.0f,60.0f);
    glVertex2f(355.0f,75.0f);
    glVertex2f(340.0f,90.0f);
    glVertex2f(325.0f,75.0f);
    glEnd();

    glColor3ub(255.0f,255.0f,102.0f);
    glBegin(GL_POLYGON);
    glVertex2f(340.0f,90.0f);
    glVertex2f(342.0f,97.0f);
    glVertex2f(340.0f,105.0f);
    glVertex2f(338.0f,97.0f);
    glEnd();

///pathway
    glColor3ub(179.0f,89.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(315.0f,0.0f);
    glVertex2f(285.0f,0.0f);
    glVertex2f(235.0f,-250.0f);
    glVertex2f(365.0f,-250.0f);
    glEnd();

    glColor3ub(192.0f,192.0f,192.0f);
    glBegin(GL_POLYGON);
    glVertex2f(310.0f,0.0f);
    glVertex2f(290.0f,0.0f);
    glVertex2f(240.0f,-250.0f);
    glVertex2f(360.0f,-250.0f);
    glEnd();

///lamps
    ///right_side_1
    glColor3ub(0.0f,0.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(312.0f,-10.0f);
    glVertex2f(314.0f,-10.0f);
    glVertex2f(314.0f,20.0f);
    glVertex2f(312.0f,20.0f);
    glEnd();

    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(192.0,192.0,192.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=4.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+313,y+20);
        }
	glEnd();

    ///right_side_2
    glColor3ub(0.0f,0.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(321.0f,-50.0f);
    glVertex2f(323.5f,-50.0f);
    glVertex2f(323.5f,20.0f);
    glVertex2f(321.0f,20.0f);
    glEnd();

    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(192.0,192.0,192.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=5.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+322,y+20);
        }
	glEnd();

    ///right_side_3
    glColor3ub(0.0f,0.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(330.0f,-100.0f);
    glVertex2f(334.0f,-100.0f);
    glVertex2f(334.0f,25.0f);
    glVertex2f(330.0f,25.0f);
    glEnd();

    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
       glColor3ub(192.0,192.0,192.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=6.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+332,y+25);
        }
	glEnd();

    ///right_side_4
    glColor3ub(0.0f,0.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(345.0f,-190.0f);
    glVertex2f(350.0f,-190.0f);
    glVertex2f(350.0f,30.0f);
    glVertex2f(345.0f,30.0f);
    glEnd();

    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(192.0,192.0,192.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=7.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+347,y+30);
        }
	glEnd();

	///left_side_1
    glColor3ub(0.0f,0.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(287.0f,-10.0f);
    glVertex2f(289.0f,-10.0f);
    glVertex2f(289.0f,20.0f);
    glVertex2f(287.0f,20.0f);
    glEnd();

    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(192.0,192.0,192.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=4.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+286,y+20);
        }
	glEnd();

    ///left_side_2
    glColor3ub(0.0f,0.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(280.0f,-50.0f);
    glVertex2f(277.5f,-50.0f);
    glVertex2f(277.5f,20.0f);
    glVertex2f(280.0f,20.0f);
    glEnd();

    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(192.0,192.0,192.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=5.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+280,y+20);
        }
	glEnd();

    ///left_side_3
    glColor3ub(0.0f,0.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(273.0f,-100.0f);
    glVertex2f(269.0f,-100.0f);
    glVertex2f(269.0f,25.0f);
    glVertex2f(273.0f,25.0f);
    glEnd();

    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(192.0,192.0,192.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=6.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+270,y+25);
        }
	glEnd();

    ///left_side_4
    glColor3ub(0.0f,0.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(255.0f,-190.0f);
    glVertex2f(250.0f,-190.0f);
    glVertex2f(250.0f,30.0f);
    glVertex2f(255.0f,30.0f);
    glEnd();

    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(192.0,192.0,192.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=7.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+252,y+30);
        }
	glEnd();
	glutTimerFunc(4000, d2, 0);
    glFlush();
}

void d1(int val)
{
    glutDisplayFunc(morning);
}

///Shuvo

void cloudy_morning()
{
///Sky

    glColor3ub(194.0f,214.0f,214.0f);
    glBegin(GL_QUADS);
    glColor3ub(255.0f,255.0f,255.0f);
    glVertex2f(0.0f,0.0f);
    glColor3ub(255.0f,255.0f,255.0f);
    glVertex2f(600.0f,0.0f);
    glColor3ub(0.0f,153.0f,153.0f);
    glVertex2f(600.0f,500.0f);
    glColor3ub(0.0f,153.0f,153.0f);
    glVertex2f(0.0f,500.0f);
    glEnd();

///Cloud

    ///cloud 1
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(cloud_move1, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(96.0,96.0,96.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=18.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+105,y+360);
        }
	glEnd();


    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(96.0,96.0,96.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=19.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+130,y+360);
        }
	glEnd();

	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(96.0,96.0,96.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=17.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+120,y+380);
        }
	glEnd();

  ///cloud 2
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(96.0,96.0,96.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=20.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+60,y+310);
        }
	glEnd();

	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(96.0,96.0,96.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=19.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+90,y+310);
        }
	glEnd();

	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(96.0,96.0,96.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=17.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+75,y+335);
        }
	glEnd();

  ///cloud 3
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(96.0,96.0,96.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=20.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+450,y+340);
        }
	glEnd();

	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(96.0,96.0,96.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=20.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+480,y+340);
        }
	glEnd();

	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(96.0,96.0,96.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=20.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+465,y+370);
        }
	glEnd();
    glPopMatrix();

///river

    glColor3ub(113.0f,218.0f,218.0f);
    glBegin(GL_QUADS);
    glVertex2f(0.0f,0.0f);
    glVertex2f(0.0f,-250.0f);
    glVertex2f(600.0f,-250.0f);
    glVertex2f(600.0f,0.0f);
    glEnd();

    glColor3ub(113.0f,218.0f,218.0f);
    glBegin(GL_POLYGON);
    glVertex2f(200.0f,0.0f);
    glVertex2f(205.0f,5.0f);
    glVertex2f(205.0f,30.0f);
    glVertex2f(0.0f,30.0f);
    glVertex2f(0.0f,0.0f);
    glEnd();

    glColor3ub(113.0f,218.0f,218.0f);
    glBegin(GL_POLYGON);
    glVertex2f(395.0f,30.0f);
    glVertex2f(395.0f,5.0f);
    glVertex2f(400.0f,0.0f);
    glVertex2f(600.0f,0.0f);
    glVertex2f(600.0f,30.0f);
    glEnd();

///mountain

    glColor3ub(26.0f,51.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(0.0f,30.0f);
    glVertex2f(205.0f,30.0f);
    glVertex2f(205.0f,60.0f);
    glColor3ub(0.0f,102.0f,102.0f);
    glVertex2f(70.0f,250.0f);
    glColor3ub(0.0f,102.0f,102.0f);
    glVertex2f(0.0f,150.0f);
    glEnd();

    glColor3ub(26.0f,51.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(390.0f,30.0f);
    glVertex2f(600.0f,30.0f);
    glVertex2f(600.0f,180.0f);
    glVertex2f(500.0f,330.0f);
    glColor3ub(0.0f,102.0f,102.0f);
    glVertex2f(360.0f,60.0f);
    glEnd();

    glColor3ub(26.0f,51.0f,0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(600.0f,180.0f);
    glVertex2f(600.0f,300.0f);
    glColor3ub(0.0f,102.0f,102.0f);
    glVertex2f(560.0f,240.0f);
    glEnd();


///Fountain

    ///fountain1
    glColor3ub(153.0f,204.0f,255.0f);
    glBegin(GL_POLYGON);
    glVertex2f(75.0f,180.0f);
    glVertex2f(65.0f,180.0f);
    glVertex2f(60.0f,30.0f);
    glVertex2f(80.0f,30.0f);
    glEnd();

    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(240.0,240.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=7.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+59,y+30);
        }
	glEnd();

    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(240.0,240.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=7.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+69,y+30);
        }
	glEnd();

	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
       glColor3ub(240.0,240.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=7.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+79,y+30);
        }
	glEnd();

	///fountain2
	glColor3ub(153.0f,204.0f,255.0f);
    glBegin(GL_POLYGON);
    glVertex2f(520.0f,200.0f);
    glVertex2f(510.0f,200.0f);
    glVertex2f(505.0f,30.0f);
    glVertex2f(525.0f,30.0f);
    glEnd();

    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(240.0,240.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=7.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+507,y+30);
        }
	glEnd();

    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(240.0,240.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=7.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+517,y+30);
        }
	glEnd();

	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
       glColor3ub(240.0,240.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=7.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+527,y+30);
        }
	glEnd();


///Mosque

    //base
    glColor3ub(154, 122, 97);
    glBegin(GL_POLYGON);
    glVertex2f(200.0f,0.0f);
    glVertex2f(400.0f,0.0f);
    glVertex2f(395.0f,5.0f);
    glVertex2f(205.0f,5.0f);
    glEnd();

    //Left pillar
    glColor3ub(188, 118, 46);
    glBegin(GL_POLYGON);
    glVertex2f(205.0f,5.0f);
    glVertex2f(220.0f,5.0f);
    glVertex2f(220.0f,100.0f);
    glVertex2f(205.0f,100.0f);
    glEnd();

    glColor3ub(179.0f,89.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(205.0f,100.0f);
    glVertex2f(220.0f,100.0f);
    glVertex2f(225.0f,110.0f);
    glVertex2f(200.0f,110.0f);
    glEnd();

    glColor3ub(153.0f,57.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(206.0f,110.0f);
    glVertex2f(219.0f,110.0f);
    glVertex2f(219.0f,140.0f);
    glVertex2f(206.0f,140.0f);
    glEnd();

    glColor3ub(255.0f,255.0f,255.0f);
    glBegin(GL_POLYGON);
    glVertex2f(212.5f,140.0f);
    glVertex2f(218.0f,160.0f);
    glVertex2f(212.5f,180.0f);
    glVertex2f(207.0f,160.0f);
    glEnd();

    //second left pillar
    glColor3ub(188, 118, 46);
    glBegin(GL_POLYGON);
    glVertex2f(230.0f,60.0f);
    glVertex2f(240.0f,60.0f);
    glVertex2f(240.0f,90.0f);
    glVertex2f(230.0f,90.0f);
    glEnd();

    glColor3ub(179.0f,89.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(230.0f,90.0f);
    glVertex2f(240.0f,90.0f);
    glVertex2f(245.0f,95.0f);
    glVertex2f(225.0f,95.0f);
    glEnd();

    glColor3ub(153.0f,57.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(231.0f,95.0f);
    glVertex2f(239.0f,95.0f);
    glVertex2f(239.0f,125.0f);
    glVertex2f(231.0f,125.0f);
    glEnd();

    glColor3ub(55.0f,255.0f,255.0f);
    glBegin(GL_POLYGON);
    glVertex2f(235.0f,125.0f);
    glVertex2f(238.0f,135.0f);
    glVertex2f(235.0f,145.0f);
    glVertex2f(232.0f,135.0f);
    glEnd();


    //Right pillar
    glColor3ub(188, 118, 46);
    glBegin(GL_POLYGON);
    glVertex2f(380.0f,5.0f);
    glVertex2f(395.0f,5.0f);
    glVertex2f(395.0f,100.0f);
    glVertex2f(380.0f,100.0f);
    glEnd();

    glColor3ub(179.0f,89.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(380.0f,100.0f);
    glVertex2f(395.0f,100.0f);
    glVertex2f(400.0f,110.0f);
    glVertex2f(375.0f,110.0f);
    glEnd();

    glColor3ub(153.0f,57.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(381.0f,110.0f);
    glVertex2f(394.0f,110.0f);
    glVertex2f(394.0f,140.0f);
    glVertex2f(381.0f,140.0f);
    glEnd();

    glColor3ub(255.0f,255.0f,255.0f);
    glBegin(GL_POLYGON);
    glVertex2f(387.5f,140.0f);
    glVertex2f(393.0f,160.0f);
    glVertex2f(387.5f,180.0f);
    glVertex2f(382.0f,160.0f);
    glEnd();

    //second right pillar
    glColor3ub(188, 118, 46);
    glBegin(GL_POLYGON);
    glVertex2f(360.0f,60.0f);
    glVertex2f(370.0f,60.0f);
    glVertex2f(370.0f,90.0f);
    glVertex2f(360.0f,90.0f);
    glEnd();

    glColor3ub(179.0f,89.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(360.0f,90.0f);
    glVertex2f(370.0f,90.0f);
    glVertex2f(375.0f,95.0f);
    glVertex2f(355.0f,95.0f);
    glEnd();

    glColor3ub(153.0f,57.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(361.0f,95.0f);
    glVertex2f(369.0f,95.0f);
    glVertex2f(369.0f,125.0f);
    glVertex2f(361.0f,125.0f);
    glEnd();

    glColor3ub(255.0f,255.0f,255.0f);
    glBegin(GL_POLYGON);
    glVertex2f(365.0f,125.0f);
    glVertex2f(368.0f,135.0f);
    glVertex2f(365.0f,145.0f);
    glVertex2f(362.0f,135.0f);
    glEnd();

    //body
    glColor3ub(188, 118, 46);
    glBegin(GL_POLYGON);
    glVertex2f(220.0f,5.0f);
    glVertex2f(285.0f,5.0f);
    glVertex2f(285.0f,60.0f);
    glVertex2f(220.0f,60.0f);
    glEnd();

    glColor3ub(188, 118, 46);
    glBegin(GL_POLYGON);
    glVertex2f(315.0f,5.0f);
    glVertex2f(380.0f,5.0f);
    glVertex2f(380.0f,60.0f);
    glVertex2f(315.0f,60.0f);
    glEnd();

    //front door
    glColor3ub(188, 113, 48);
    glBegin(GL_POLYGON);
    glVertex2f(285.0f,0.0f);
    glVertex2f(315.0f,0.0f);
    glVertex2f(315.0f,70.0f);
    glVertex2f(285.0f,70.0f);
    glEnd();

    glColor3ub(179.0f,89.0f,0.0f);
    glBegin(GL_QUADS);
    glVertex2f(290.0f,0.0f);
    glVertex2f(310.0f,0.0f);
    glVertex2f(310.0f,50.0f);
    glVertex2f(290.0f,50.0f);
    glEnd();

    glColor3ub(162, 93, 34);
    glBegin(GL_TRIANGLES);
    glVertex2f(290.0f,50.0f);
    glVertex2f(310.0f,50.0f);
    glVertex2f(300.0f,65.0f);
    glEnd();

    //left doors
    glColor3ub(102.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glVertex2f(225.0f,5.0f);
    glVertex2f(240.0f,5.0f);
    glVertex2f(240.0f,40.0f);
    glVertex2f(225.0f,40.0f);
    glEnd();

    glColor3ub(162, 93, 34);
    glBegin(GL_TRIANGLES);
    glVertex2f(225.0f,40.0f);
    glVertex2f(240.0f,40.0f);
    glVertex2f(232.5f,50.0f);
    glEnd();

    //2
    glColor3ub(102.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glVertex2f(245.0f,5.0f);
    glVertex2f(260.0f,5.0f);
    glVertex2f(260.0f,40.0f);
    glVertex2f(245.0f,40.0f);
    glEnd();

    glColor3ub(162, 93, 34);
    glBegin(GL_TRIANGLES);
    glVertex2f(245.0f,40.0f);
    glVertex2f(260.0f,40.0f);
    glVertex2f(252.5f,50.0f);
    glEnd();

    //3
    glColor3ub(102.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glVertex2f(265.0f,5.0f);
    glVertex2f(280.0f,5.0f);
    glVertex2f(280.0f,40.0f);
    glVertex2f(265.0f,40.0f);
    glEnd();

    glColor3ub(162, 93, 34);
    glBegin(GL_TRIANGLES);
    glVertex2f(265.0f,40.0f);
    glVertex2f(280.0f,40.0f);
    glVertex2f(272.5f,50.0f);
    glEnd();

    //right doors
    glColor3ub(102.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glVertex2f(320.0f,5.0f);
    glVertex2f(335.0f,5.0f);
    glVertex2f(335.0f,40.0f);
    glVertex2f(320.0f,40.0f);
    glEnd();

    glColor3ub(162, 93, 34);
    glBegin(GL_TRIANGLES);
    glVertex2f(320.0f,40.0f);
    glVertex2f(335.0f,40.0f);
    glVertex2f(327.5f,50.0f);
    glEnd();

    //2
    glColor3ub(102.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glVertex2f(340.0f,5.0f);
    glVertex2f(355.0f,5.0f);
    glVertex2f(355.0f,40.0f);
    glVertex2f(340.0f,40.0f);
    glEnd();

    glColor3ub(162, 93, 34);
    glBegin(GL_TRIANGLES);
    glVertex2f(340.0f,40.0f);
    glVertex2f(355.0f,40.0f);
    glVertex2f(347.5f,50.0f);
    glEnd();

    //3
    glColor3ub(102.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glVertex2f(360.0f,5.0f);
    glVertex2f(375.0f,5.0f);
    glVertex2f(375.0f,40.0f);
    glVertex2f(360.0f,40.0f);
    glEnd();

    glColor3ub(162, 93, 34);
    glBegin(GL_TRIANGLES);
    glVertex2f(360.0f,40.0f);
    glVertex2f(375.0f,40.0f);
    glVertex2f(367.5f,50.0f);
    glEnd();

    //left Minar
    glColor3ub(0.0f,204.0f,204.0f);
    glBegin(GL_POLYGON);
    glVertex2f(250.0f,60.0f);
    glVertex2f(270.0f,60.0f);
    glVertex2f(275.0f,75.0f);
    glVertex2f(260.0f,90.0f);
    glVertex2f(245.0f,75.0f);
    glEnd();

    glColor3ub(153.0f,57.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(260.0f,90.0f);
    glVertex2f(262.0f,97.0f);
    glVertex2f(260.0f,105.0f);
    glVertex2f(258.0f,97.0f);
    glEnd();

    //middle minar
    glColor3ub(0.0f,204.0f,204.0f);
    glBegin(GL_POLYGON);
    glVertex2f(285.0f,70.0f);
    glVertex2f(315.0f,70.0f);
    glVertex2f(320.0f,90.0f);
    glVertex2f(300.0f,120.0f);
    glVertex2f(280.0f,90.0f);
    glEnd();

   glColor3ub(153.0f,57.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(300.0f,120.0f);
    glVertex2f(302.0f,127.0f);
    glVertex2f(300.0f,135.0f);
    glVertex2f(298.0f,127.0f);
    glEnd();

    //right  minar
    glColor3ub(0.0f,204.0f,204.0f);
    glBegin(GL_POLYGON);
    glVertex2f(330.0f,60.0f);
    glVertex2f(350.0f,60.0f);
    glVertex2f(355.0f,75.0f);
    glVertex2f(340.0f,90.0f);
    glVertex2f(325.0f,75.0f);
    glEnd();

    glColor3ub(153.0f,57.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(340.0f,90.0f);
    glVertex2f(342.0f,97.0f);
    glVertex2f(340.0f,105.0f);
    glVertex2f(338.0f,97.0f);
    glEnd();

    ///pathway
    glColor3ub(179.0f,89.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(315.0f,0.0f);
    glVertex2f(285.0f,0.0f);
    glVertex2f(235.0f,-250.0f);
    glVertex2f(365.0f,-250.0f);
    glEnd();

    glColor3ub(192.0f,192.0f,192.0f);
    glBegin(GL_POLYGON);
    glVertex2f(310.0f,0.0f);
    glVertex2f(290.0f,0.0f);
    glVertex2f(240.0f,-250.0f);
    glVertex2f(360.0f,-250.0f);
    glEnd();

///lamps
    ///right_side_1
    glColor3ub(0.0f,0.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(312.0f,-10.0f);
    glVertex2f(314.0f,-10.0f);
    glVertex2f(314.0f,20.0f);
    glVertex2f(312.0f,20.0f);
    glEnd();

    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(192.0,192.0,192.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=4.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+313,y+20);
        }
	glEnd();

    ///right_side_2
    glColor3ub(0.0f,0.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(321.0f,-50.0f);
    glVertex2f(323.5f,-50.0f);
    glVertex2f(323.5f,20.0f);
    glVertex2f(321.0f,20.0f);
    glEnd();

    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(192.0,192.0,192.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=5.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+322,y+20);
        }
	glEnd();

    ///right_side_3
    glColor3ub(0.0f,0.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(330.0f,-100.0f);
    glVertex2f(334.0f,-100.0f);
    glVertex2f(334.0f,25.0f);
    glVertex2f(330.0f,25.0f);
    glEnd();

    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
       glColor3ub(192.0,192.0,192.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=6.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+332,y+25);
        }
	glEnd();

    ///right_side_4
    glColor3ub(0.0f,0.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(345.0f,-190.0f);
    glVertex2f(350.0f,-190.0f);
    glVertex2f(350.0f,30.0f);
    glVertex2f(345.0f,30.0f);
    glEnd();

    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(192.0,192.0,192.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=7.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+347,y+30);
        }
	glEnd();

	///left_side_1
    glColor3ub(0.0f,0.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(287.0f,-10.0f);
    glVertex2f(289.0f,-10.0f);
    glVertex2f(289.0f,20.0f);
    glVertex2f(287.0f,20.0f);
    glEnd();

    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(192.0,192.0,192.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=4.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+286,y+20);
        }
	glEnd();

    ///left_side_2
    glColor3ub(0.0f,0.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(280.0f,-50.0f);
    glVertex2f(277.5f,-50.0f);
    glVertex2f(277.5f,20.0f);
    glVertex2f(280.0f,20.0f);
    glEnd();

    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(192.0,192.0,192.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=5.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+280,y+20);
        }
	glEnd();

    ///left_side_3
    glColor3ub(0.0f,0.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(273.0f,-100.0f);
    glVertex2f(269.0f,-100.0f);
    glVertex2f(269.0f,25.0f);
    glVertex2f(273.0f,25.0f);
    glEnd();

    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(192.0,192.0,192.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=6.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+270,y+25);
        }
	glEnd();

    ///left_side_4
    glColor3ub(0.0f,0.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(255.0f,-190.0f);
    glVertex2f(250.0f,-190.0f);
    glVertex2f(250.0f,30.0f);
    glVertex2f(255.0f,30.0f);
    glEnd();

    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(192.0,192.0,192.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=7.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+252,y+30);
        }
	glEnd();

///Rain

    //Line 1
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(0.0f, rain_move, 0.0f);
    glColor3ub(255.0f,255.0f,255.0f);
    glBegin(GL_POLYGON);
    glVertex2f(399.0f,5.0f);
    glVertex2f(400.0f,5.0f);
    glVertex2f(400.0f,30.0f);
    glVertex2f(399.0f, 30.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(399.0f,70.0f);
    glVertex2f(400.0f,70.0f);
    glVertex2f(400.0f,95.0f);
    glVertex2f(399.0f, 95.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(399.0f,135.0f);
    glVertex2f(400.0f,135.0f);
    glVertex2f(400.0f,160.0f);
    glVertex2f(399.0f, 160.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(399.0f,200.0f);
    glVertex2f(400.0f,200.0f);
    glVertex2f(400.0f,225.0f);
    glVertex2f(399.0f, 225.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(399.0f,265.0f);
    glVertex2f(400.0f,265.0f);
    glVertex2f(400.0f,290.0f);
    glVertex2f(399.0f, 290.0f);
    glEnd();

   glBegin(GL_POLYGON);
    glVertex2f(399.0f, 330.0f);
    glVertex2f(400.0f, 330.0f);
    glVertex2f(400.0f,355.0f);
    glVertex2f(399.0f, 355.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(399.0f, 395.0f);
    glVertex2f(400.0f,395.0f);
    glVertex2f(400.0f,420.0f);
    glVertex2f(399.0f, 420.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(399.0f, 460.0f);
    glVertex2f(400.0f,460.0f);
    glVertex2f(400.0f,485.0f);
    glVertex2f(399.0f, 485.0f);
    glEnd();

    //Line 2
    glBegin(GL_POLYGON);
    glVertex2f(450.0f, 5.0f);
    glVertex2f(451.0f, 5.0f);
    glVertex2f(451.0f, 30.0f);
    glVertex2f(450.0f, 30.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(450.0f,70.0f);
    glVertex2f(451.0f,70.0f);
    glVertex2f(451.0f,95.0f);
    glVertex2f(450.0f, 95.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(450.0f,135.0f);
    glVertex2f(451.0f,135.0f);
    glVertex2f(451.0f,160.0f);
    glVertex2f(450.0f, 160.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(450.0f,200.0f);
    glVertex2f(451.0f,200.0f);
    glVertex2f(451.0f,225.0f);
    glVertex2f(450.0f, 225.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(450.0f,265.0f);
    glVertex2f(451.0f,265.0f);
    glVertex2f(451.0f,290.0f);
    glVertex2f(450.0f, 290.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(450.0f, 330.0f);
    glVertex2f(451.0f, 330.0f);
    glVertex2f(451.0f,355.0f);
    glVertex2f(450.0f, 355.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(450.0f, 395.0f);
    glVertex2f(451.0f,395.0f);
    glVertex2f(451.0f,420.0f);
    glVertex2f(450.0f, 420.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(450.0f, 460.0f);
    glVertex2f(451.0f,460.0f);
    glVertex2f(451.0f,485.0f);
    glVertex2f(450.0f, 485.0f);
    glEnd();

  //Line3
    glBegin(GL_POLYGON);
    glVertex2f(500.0f, 5.0f);
    glVertex2f(501.0f, 5.0f);
    glVertex2f(501.0f,30.0f);
    glVertex2f(500.0f, 30.0f);
    glEnd();
      glBegin(GL_POLYGON);
    glVertex2f(500.0f,70.0f);
    glVertex2f(501.0f,70.0f);
    glVertex2f(501.0f,95.0f);
    glVertex2f(500.0f, 95.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(500.0f,135.0f);
    glVertex2f(501.0f,135.0f);
    glVertex2f(501.0f,160.0f);
    glVertex2f(500.0f, 160.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(500.0f,200.0f);
    glVertex2f(501.0f,200.0f);
    glVertex2f(501.0f,225.0f);
    glVertex2f(500.0f, 225.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(500.0f,265.0f);
    glVertex2f(501.0f,265.0f);
    glVertex2f(501.0f,290.0f);
    glVertex2f(500.0f, 290.0f);
    glEnd();

   glBegin(GL_POLYGON);
    glVertex2f(500.0f, 330.0f);
    glVertex2f(501.0f, 330.0f);
    glVertex2f(501.0f,355.0f);
    glVertex2f(500.0f, 355.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(500.0f, 395.0f);
    glVertex2f(501.0f,395.0f);
    glVertex2f(501.0f,420.0f);
    glVertex2f(500.0f, 420.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(500.0f, 460.0f);
    glVertex2f(501.0f,460.0f);
    glVertex2f(501.0f,485.0f);
    glVertex2f(500.0f, 485.0f);
    glEnd();

 //Line4
    glBegin(GL_POLYGON);
    glVertex2f(550.0f, 5.0f);
    glVertex2f(551.0f, 5.0f);
    glVertex2f(551.0f,30.0f);
    glVertex2f(550.0f, 30.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(550.0f,70.0f);
    glVertex2f(551.0f,70.0f);
    glVertex2f(551.0f,95.0f);
    glVertex2f(550.0f, 95.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(550.0f,135.0f);
    glVertex2f(551.0f,135.0f);
    glVertex2f(551.0f,160.0f);
    glVertex2f(550.0f, 160.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(550.0f,200.0f);
    glVertex2f(551.0f,200.0f);
    glVertex2f(551.0f,225.0f);
    glVertex2f(550.0f, 225.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(550.0f,265.0f);
    glVertex2f(551.0f,265.0f);
    glVertex2f(551.0f,290.0f);
    glVertex2f(550.0f, 290.0f);
    glEnd();

   glBegin(GL_POLYGON);
    glVertex2f(550.0f, 330.0f);
    glVertex2f(551.0f, 330.0f);
    glVertex2f(551.0f, 355.0f);
    glVertex2f(550.0f, 355.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(550.0f, 395.0f);
    glVertex2f(551.0f,395.0f);
    glVertex2f(551.0f,420.0f);
    glVertex2f(550.0f, 420.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(550.0f, 460.0f);
    glVertex2f(551.0f,460.0f);
    glVertex2f(551.0f,485.0f);
    glVertex2f(550.0f, 485.0f);
    glEnd();

    //Line5

glColor3ub(255.0f,255.0f,255.0f);
    glBegin(GL_POLYGON);
    glVertex2f(350.0f,5.0f);
    glVertex2f(351.0f,5.0f);
    glVertex2f(351.0f,30.0f);
    glVertex2f(350.0f, 30.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(350.0f,70.0f);
    glVertex2f(351.0f,70.0f);
    glVertex2f(351.0f,95.0f);
    glVertex2f(350.0f, 95.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(350.0f,135.0f);
    glVertex2f(351.0f,135.0f);
    glVertex2f(351.0f,160.0f);
    glVertex2f(350.0f, 160.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(350.0f,200.0f);
    glVertex2f(351.0f,200.0f);
    glVertex2f(351.0f,225.0f);
    glVertex2f(350.0f, 225.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(350.0f,265.0f);
    glVertex2f(351.0f,265.0f);
    glVertex2f(351.0f,290.0f);
    glVertex2f(350.0f, 290.0f);
    glEnd();

   glBegin(GL_POLYGON);
    glVertex2f(350.0f, 330.0f);
    glVertex2f(351.0f, 330.0f);
    glVertex2f(351.0f,355.0f);
    glVertex2f(350.0f, 355.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(350.0f, 395.0f);
    glVertex2f(351.0f,395.0f);
    glVertex2f(351.0f,420.0f);
    glVertex2f(350.0f, 420.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(350.0f, 460.0f);
    glVertex2f(351.0f,460.0f);
    glVertex2f(351.0f,485.0f);
    glVertex2f(350.0f, 485.0f);
    glEnd();

//Line6
    glColor3ub(255.0f,255.0f,255.0f);
    glBegin(GL_POLYGON);
    glVertex2f(300.0f,5.0f);
    glVertex2f(301.0f,5.0f);
    glVertex2f(301.0f,30.0f);
    glVertex2f(300.0f, 30.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(300.0f,70.0f);
    glVertex2f(301.0f,70.0f);
    glVertex2f(301.0f,95.0f);
    glVertex2f(300.0f, 95.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(300.0f,135.0f);
    glVertex2f(301.0f,135.0f);
    glVertex2f(301.0f,160.0f);
    glVertex2f(300.0f, 160.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(300.0f,200.0f);
    glVertex2f(301.0f,200.0f);
    glVertex2f(301.0f,225.0f);
    glVertex2f(300.0f, 225.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(300.0f,265.0f);
    glVertex2f(301.0f,265.0f);
    glVertex2f(301.0f,290.0f);
    glVertex2f(300.0f, 290.0f);
    glEnd();

   glBegin(GL_POLYGON);
    glVertex2f(300.0f, 330.0f);
    glVertex2f(301.0f, 330.0f);
    glVertex2f(301.0f,355.0f);
    glVertex2f(300.0f, 355.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(300.0f, 395.0f);
    glVertex2f(301.0f,395.0f);
    glVertex2f(301.0f,420.0f);
    glVertex2f(300.0f, 420.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(300.0f, 460.0f);
    glVertex2f(301.0f,460.0f);
    glVertex2f(301.0f,485.0f);
    glVertex2f(300.0f, 485.0f);
    glEnd();

//Line7
glColor3ub(255.0f,255.0f,255.0f);
    glBegin(GL_POLYGON);
    glVertex2f(250.0f,5.0f);
    glVertex2f(251.0f,5.0f);
    glVertex2f(251.0f,30.0f);
    glVertex2f(250.0f, 30.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(250.0f,70.0f);
    glVertex2f(251.0f,70.0f);
    glVertex2f(251.0f,95.0f);
    glVertex2f(250.0f, 95.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(250.0f,135.0f);
    glVertex2f(251.0f,135.0f);
    glVertex2f(251.0f,160.0f);
    glVertex2f(250.0f, 160.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(250.0f,200.0f);
    glVertex2f(251.0f,200.0f);
    glVertex2f(251.0f,225.0f);
    glVertex2f(250.0f, 225.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(250.0f,265.0f);
    glVertex2f(251.0f,265.0f);
    glVertex2f(251.0f,290.0f);
    glVertex2f(250.0f, 290.0f);
    glEnd();

   glBegin(GL_POLYGON);
    glVertex2f(250.0f, 330.0f);
    glVertex2f(251.0f, 330.0f);
    glVertex2f(251.0f,355.0f);
    glVertex2f(250.0f, 355.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(250.0f, 395.0f);
    glVertex2f(251.0f,395.0f);
    glVertex2f(251.0f,420.0f);
    glVertex2f(250.0f, 420.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(250.0f, 460.0f);
    glVertex2f(251.0f,460.0f);
    glVertex2f(251.0f,485.0f);
    glVertex2f(250.0f, 485.0f);
    glEnd();

    //Line8
    glColor3ub(255.0f,255.0f,255.0f);
    glBegin(GL_POLYGON);
    glVertex2f(200.0f,5.0f);
    glVertex2f(201.0f,5.0f);
    glVertex2f(201.0f,30.0f);
    glVertex2f(200.0f, 30.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(200.0f,70.0f);
    glVertex2f(201.0f,70.0f);
    glVertex2f(201.0f,95.0f);
    glVertex2f(200.0f, 95.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(200.0f,135.0f);
    glVertex2f(201.0f,135.0f);
    glVertex2f(201.0f,160.0f);
    glVertex2f(200.0f, 160.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(200.0f,200.0f);
    glVertex2f(201.0f,200.0f);
    glVertex2f(201.0f,225.0f);
    glVertex2f(200.0f, 225.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(200.0f,265.0f);
    glVertex2f(201.0f,265.0f);
    glVertex2f(201.0f,290.0f);
    glVertex2f(200.0f, 290.0f);
    glEnd();

   glBegin(GL_POLYGON);
    glVertex2f(200.0f, 330.0f);
    glVertex2f(201.0f, 330.0f);
    glVertex2f(201.0f,355.0f);
    glVertex2f(200.0f, 355.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(200.0f, 395.0f);
    glVertex2f(201.0f,395.0f);
    glVertex2f(201.0f,420.0f);
    glVertex2f(200.0f, 420.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(200.0f, 460.0f);
    glVertex2f(201.0f,460.0f);
    glVertex2f(201.0f,485.0f);
    glVertex2f(200.0f, 485.0f);
    glEnd();

    //Line9
    glColor3ub(255.0f,255.0f,255.0f);
    glBegin(GL_POLYGON);
    glVertex2f(150.0f,5.0f);
    glVertex2f(151.0f,5.0f);
    glVertex2f(151.0f,30.0f);
    glVertex2f(150.0f, 30.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(150.0f,70.0f);
    glVertex2f(151.0f,70.0f);
    glVertex2f(151.0f,95.0f);
    glVertex2f(150.0f, 95.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(150.0f,135.0f);
    glVertex2f(151.0f,135.0f);
    glVertex2f(151.0f,160.0f);
    glVertex2f(150.0f, 160.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(150.0f,200.0f);
    glVertex2f(151.0f,200.0f);
    glVertex2f(151.0f,225.0f);
    glVertex2f(150.0f, 225.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(150.0f,265.0f);
    glVertex2f(151.0f,265.0f);
    glVertex2f(151.0f,290.0f);
    glVertex2f(150.0f, 290.0f);
    glEnd();

   glBegin(GL_POLYGON);
    glVertex2f(150.0f, 330.0f);
    glVertex2f(151.0f, 330.0f);
    glVertex2f(151.0f,355.0f);
    glVertex2f(150.0f, 355.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(150.0f, 395.0f);
    glVertex2f(151.0f,395.0f);
    glVertex2f(151.0f,420.0f);
    glVertex2f(150.0f, 420.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(150.0f, 460.0f);
    glVertex2f(151.0f,460.0f);
    glVertex2f(151.0f,485.0f);
    glVertex2f(150.0f, 485.0f);
    glEnd();

 //Line10
glColor3ub(255.0f,255.0f,255.0f);
    glBegin(GL_POLYGON);
    glVertex2f(100.0f,5.0f);
    glVertex2f(101.0f,5.0f);
    glVertex2f(101.0f,30.0f);
    glVertex2f(100.0f, 30.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(100.0f,70.0f);
    glVertex2f(101.0f,70.0f);
    glVertex2f(101.0f,95.0f);
    glVertex2f(100.0f, 95.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(100.0f,135.0f);
    glVertex2f(101.0f,135.0f);
    glVertex2f(101.0f,160.0f);
    glVertex2f(100.0f, 160.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(100.0f,200.0f);
    glVertex2f(101.0f,200.0f);
    glVertex2f(101.0f,225.0f);
    glVertex2f(100.0f, 225.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(100.0f,265.0f);
    glVertex2f(101.0f,265.0f);
    glVertex2f(101.0f,290.0f);
    glVertex2f(100.0f, 290.0f);
    glEnd();

   glBegin(GL_POLYGON);
    glVertex2f(100.0f, 330.0f);
    glVertex2f(101.0f, 330.0f);
    glVertex2f(101.0f,355.0f);
    glVertex2f(100.0f, 355.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(100.0f, 395.0f);
    glVertex2f(101.0f,395.0f);
    glVertex2f(101.0f,420.0f);
    glVertex2f(100.0f, 420.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(100.0f, 460.0f);
    glVertex2f(101.0f,460.0f);
    glVertex2f(101.0f,485.0f);
    glVertex2f(100.0f, 485.0f);
    glEnd();

    //Line11
    glColor3ub(255.0f,255.0f,255.0f);
    glBegin(GL_POLYGON);
    glVertex2f(50.0f,5.0f);
    glVertex2f(51.0f,5.0f);
    glVertex2f(51.0f,30.0f);
    glVertex2f(50.0f, 30.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(50.0f,70.0f);
    glVertex2f(51.0f,70.0f);
    glVertex2f(51.0f,95.0f);
    glVertex2f(50.0f, 95.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(50.0f,135.0f);
    glVertex2f(51.0f,135.0f);
    glVertex2f(51.0f,160.0f);
    glVertex2f(50.0f, 160.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(50.0f,200.0f);
    glVertex2f(51.0f,200.0f);
    glVertex2f(51.0f,225.0f);
    glVertex2f(50.0f, 225.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(50.0f,265.0f);
    glVertex2f(51.0f,265.0f);
    glVertex2f(51.0f,290.0f);
    glVertex2f(50.0f, 290.0f);
    glEnd();

   glBegin(GL_POLYGON);
    glVertex2f(50.0f, 330.0f);
    glVertex2f(51.0f, 330.0f);
    glVertex2f(51.0f,355.0f);
    glVertex2f(50.0f, 355.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(50.0f, 395.0f);
    glVertex2f(51.0f,395.0f);
    glVertex2f(51.0f,420.0f);
    glVertex2f(50.0f, 420.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(50.0f, 460.0f);
    glVertex2f(51.0f,460.0f);
    glVertex2f(51.0f,485.0f);
    glVertex2f(50.0f, 485.0f);
    glEnd();
    glPopMatrix();
    glutTimerFunc(4000, d1,0);
    glFlush();
}
void dis()
{
    glutDisplayFunc(cloudy_morning);
}

void KeypressSun(unsigned char key, int x, int y)
{
switch (key)
  {
    case 'o':
        speed4 = 0.0f;
        break;
    case 'p':
        speed4 = 0.2f;
        break;
    glutPostRedisplay();
  }
}

///102
void KeypressAirplane(unsigned char key, int x, int y)
{
switch (key)
	{
    case 's':
        speed11 = 0.0f;
        break;
    case 'r':
        speed11 = 10.0f;
        break;
    glutPostRedisplay();
	}
}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(600, 400);
    glutCreateWindow("Project");
    glutDisplayFunc(dis);
    init();

    glutTimerFunc(20, update_cloud1, 0);
    glutTimerFunc(20, update_rain, 0);

    glutTimerFunc(200, update0, 0);
    glutTimerFunc(200, update1, 0);
    glutTimerFunc(200, update7, 0);

    glutTimerFunc(20, update_cloud, 0);
    glutTimerFunc(20, update_sun, 0);
    glutTimerFunc(20, update_boat, 0);
    glutTimerFunc(20, update_waterflower, 0);
    glutTimerFunc(20, update_wave, 0);
    glutTimerFunc(20, update_wave6, 0);
    glutKeyboardFunc(KeypressSun);

    glutTimerFunc(4000, update_moon, 0);
    glutTimerFunc(20, update_cloud4, 0);
    glutTimerFunc(20, update_airplane, 0);
    glutTimerFunc(20, update_waveR, 0);
    glutTimerFunc(20, update_waveL, 0);
    glutKeyboardFunc(KeypressAirplane);
    glutMainLoop();
    return 0;
}
