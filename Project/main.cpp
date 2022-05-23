#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <math.h>
using namespace std;

float _move3= 0.0f;
float _move4= 0.0f;
GLfloat speed4= 0.2f;
float _move5= 0.0f;
float _move7= 0.0f;
float _move8= 0.0f;
float _move9= 1.0f;
float _moveM= 0.0f;
GLfloat startStop = 0;

void update_cloud(int value)  ///cloud_move
{
_move3 += 0.7;
    if(_move3 >800)
    {
    _move3 =-450;
    }
glutPostRedisplay();
glutTimerFunc(20, update_cloud, 0);
}

void update_sun(int value)      ///sun_move
{
_move4 -= speed4;
glutPostRedisplay();
glutTimerFunc(20, update_sun, 0);
}

void update_boat(int value)     ///boat_move
{
    if(_move5 < -600)
    {
    _move5 = 300;
    }
_move5 -= _move9;
glutPostRedisplay();
glutTimerFunc(20, update_boat, 0);
}

void update_wave(int value)      ///move_wave_642
{
    if(_move7 < -400)
    {
    _move7 = 100;
    }
_move7 -= 0.8;
glutPostRedisplay();
glutTimerFunc(20, update_wave, 0);
}

void update_wave6(int value)       ///move_wave_531
{
    if(_move8 < -400)
    {
    _move8 = 100;
    }
_move8 -= 1.0;
glutPostRedisplay();
glutTimerFunc(20, update_wave6, 0);
}


void init()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0,600.0,-250.0,500.0);
    glMatrixMode(GL_MODELVIEW);
}

void Evening()
{
///sky
    glColor3ub(255.0f,130.0f,130.0f);
    glBegin(GL_QUADS);
    glVertex2f(0.0f,0.0f);
    glVertex2f(600.0f,0.0f);
    glColor3ub(80.0f,110.0f,170.0f);
    glVertex2f(600.0f,500.0f);
    glVertex2f(0.0f,500.0f);
    glEnd();

///sun
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(0.0f,_move4, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
        glColor3ub(245.0f,240.0f,180.0f);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=35.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+550,y+500);
        }
  glEnd();
  glPopMatrix();


///cloud
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

///cloud
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

///cloud
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

///river
    glColor3ub(255.0f,130.0f,130.0f);
    glBegin(GL_QUADS);
    glVertex2f(0.0f,0.0f);
    glColor3ub(90.0f,130.0f,180.0f);
    glVertex2f(0.0f,-250.0f);
    glVertex2f(600.0f,-250.0f);
    glColor3ub(255.0f,130.0f,130.0f);
    glVertex2f(600.0f,0.0f);
    glEnd();

///mountain
    glColor3ub(45.0f,85.0f,125.0f);
    glBegin(GL_POLYGON);
    glVertex2f(130.0f,0.0f);
    glVertex2f(360.0f,0.0f);
    glColor3ub(175.0f,220.0f,236.0f);
    glVertex2f(390.0f,0.0f);

    glVertex2f(310.0f,260.0f);
    glColor3ub(27.0f,27.0f,60.0f);
    glVertex2f(290.0f,250.0f);
    glColor3ub(175.0f,220.0f,236.0f);
    glVertex2f(227.0f,450.0f);
    glEnd();

    glColor3ub(27.0f,27.0f,60.0f);
    glBegin(GL_POLYGON);
    glVertex2f(0.0f,0.0f);
    glVertex2f(205.0f,0.0f);
    glColor3ub(150.0f,185.0f,250.0f);
    glVertex2f(70.0f,250.0f);
    glColor3ub(27.0f,27.0f,60.0f);
    glVertex2f(0.0f,150.0f);
    glEnd();

    glColor3ub(27.0f,27.0f,60.0f);
    glBegin(GL_POLYGON);
    glVertex2f(600.0f,0.0f);
    glColor3ub(150.0f,185.0f,250.0f);
    glVertex2f(600.0f,180.0f);
    glVertex2f(500.0f,330.0f);
    glColor3ub(27.0f,27.0f,60.0f);
    glVertex2f(360.0f,0.0f);
    glEnd();


    glColor3ub(27.0f,27.0f,60.0f);
    glBegin(GL_POLYGON);
    glVertex2f(600.0f,180.0f);
    glColor3ub(150.0f,185.0f,250.0f);
    glVertex2f(600.0f,300.0f);
    glColor3ub(27.0f,27.0f,60.0f);
    glVertex2f(560.0f,240.0f);
    glEnd();

///wave
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(_move8, 0.0f, 0.0f);
    glColor3ub(243.0f,235.0f,208.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(70.0f,-20.0f);
    glVertex2f(40.0f,-15.0f);
    glVertex2f(10.0f,-20.0f);
    glEnd();

    glColor3ub(243.0f,235.0f,208.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(270.0f,-20.0f);
    glVertex2f(240.0f,-15.0f);
    glVertex2f(210.0f,-20.0f);
    glEnd();

    glColor3ub(243.0f,235.0f,208.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(470.0f,-20.0f);
    glVertex2f(440.0f,-15.0f);
    glVertex2f(410.0f,-20.0f);
    glEnd();
    glPopMatrix();

///wave2
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(_move7, 0.0f, 0.0f);
    glColor3ub(243.0f,235.0f,208.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(130.0f,-50.0f);
    glVertex2f(90.0f,-45.0f);
    glVertex2f(60.0f,-50.0f);
    glEnd();

    glColor3ub(243.0f,235.0f,208.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(330.0f,-50.0f);
    glVertex2f(290.0f,-45.0f);
    glVertex2f(260.0f,-50.0f);
    glEnd();

    glColor3ub(243.0f,235.0f,208.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(530.0f,-50.0f);
    glVertex2f(490.0f,-45.0f);
    glVertex2f(460.0f,-50.0f);
    glEnd();
    glPopMatrix();

///wave3
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(_move8, 0.0f, 0.0f);
    glColor3ub(243.0f,235.0f,208.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(70.0f,-80.0f);
    glVertex2f(40.0f,-75.0f);
    glVertex2f(10.0f,-80.0f);
    glEnd();

    glColor3ub(243.0f,235.0f,208.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(270.0f,-80.0f);
    glVertex2f(240.0f,-75.0f);
    glVertex2f(210.0f,-80.0f);
    glEnd();

    glColor3ub(243.0f,235.0f,208.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(470.0f,-80.0f);
    glVertex2f(440.0f,-75.0f);
    glVertex2f(410.0f,-80.0f);
    glEnd();

    glPopMatrix();

///wave4
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(_move7, 0.0f, 0.0f);

    glColor3ub(243.0f,235.0f,208.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(230.0f,-110.0f);
    glVertex2f(190.0f,-105.0f);
    glVertex2f(160.0f,-110.0f);
    glEnd();

    glColor3ub(243.0f,235.0f,208.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(330.0f,-110.0f);
    glVertex2f(290.0f,-105.0f);
    glVertex2f(260.0f,-110.0f);
    glEnd();

    glColor3ub(243.0f,235.0f,208.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(530.0f,-110.0f);
    glVertex2f(490.0f,-105.0f);
    glVertex2f(460.0f,-110.0f);
    glEnd();

    glPopMatrix();

///wave5
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(_move8, 0.0f, 0.0f);
    glColor3ub(243.0f,235.0f,208.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(70.0f,-140.0f);
    glVertex2f(40.0f,-135.0f);
    glVertex2f(10.0f,-140.0f);
    glEnd();

    glColor3ub(243.0f,235.0f,208.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(270.0f,-140.0f);
    glVertex2f(240.0f,-135.0f);
    glVertex2f(210.0f,-140.0f);
    glEnd();

    glColor3ub(243.0f,235.0f,208.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(570.0f,-140.0f);
    glVertex2f(540.0f,-135.0f);
    glVertex2f(510.0f,-140.0f);
    glEnd();

    glPopMatrix();

///wave6
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(_move7, 0.0f, 0.0f);
    glColor3ub(243.0f,235.0f,208.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(130.0f,-170.0f);
    glVertex2f(90.0f,-165.0f);
    glVertex2f(60.0f,-170.0f);
    glEnd();

    glColor3ub(243.0f,235.0f,208.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(330.0f,-170.0f);
    glVertex2f(290.0f,-165.0f);
    glVertex2f(260.0f,-170.0f);
    glEnd();
    glPopMatrix();

///boat
    glColor3ub(27.0f,27.0f,60.0f);
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(_move5, _moveM, 0.0f);

    glBegin(GL_POLYGON);
    glVertex2f(445.0f,-200.0f);
    glVertex2f(460.0f,-220.0f);
    glVertex2f(525.0f,-220.0f);
    glVertex2f(540.0f,-200.0f);
    glEnd();

    glColor3ub(180.0f,100.0f,30.0f);
    glBegin(GL_POLYGON);
    glVertex2f(491.0f,-200.0f);
    glVertex2f(492.0f,-50.0f);
    glVertex2f(493.0f,-200.0f);
    glEnd();

    glColor3ub(245.0f,240.0f,180.0f);
    glBegin(GL_POLYGON);
    glVertex2f(493.0f,-200.0f);
    glVertex2f(550.0f,-200.0f);
    glVertex2f(492.2f,-70.0f);
    glEnd();

    glPopMatrix();

    glFlush();

}
void Keypressboat(unsigned char key, int x, int y)
{
 if(key=='w')
    {
        if(_moveM<=175){
            _moveM+=1.0;
        }
        glutPostRedisplay();
    }
    else if(key=='s')
    {
        if(_moveM>=10)
            _moveM-=1.0;
        glutPostRedisplay();
    }
}

void mouse(int button, int state, int x, int y)
{
switch (button)
{
case GLUT_LEFT_BUTTON:

    if (state == GLUT_DOWN)
        _move9 = 1.0f;
        startStop=0;

    glutPostRedisplay();

    break;

case GLUT_RIGHT_BUTTON:

    if (state == GLUT_DOWN)
        _move9 = 0.0f;
        startStop=45;

        glutPostRedisplay();

    break;
default:
    break;
}
}
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(1200, 800);
    glutCreateWindow("Project");
    glutDisplayFunc(Evening);
    init();
    glutTimerFunc(20, update_cloud, 0);
    glutTimerFunc(20, update_sun, 0);
    glutTimerFunc(20, update_boat, 0);
    glutTimerFunc(20, update_wave, 0);
    glutTimerFunc(20, update_wave6, 0);
    glutKeyboardFunc(Keypressboat);
    glutMouseFunc(mouse);
    glutMainLoop();
    return 0;
}


