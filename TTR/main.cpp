#include<iostream>
#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>
#include<math.h>

using namespace std;

double a,xx1,xx2,xx3,xx4,yy1,yy2,yy3,yy4, xt,yt,angle;
double x,y,X1,X2,X3,X4,Y1,Y2,Y3,Y4;

void Translation()
{
        glClear (GL_COLOR_BUFFER_BIT);
        glColor3ub (128, 128, 128);
        glBegin(GL_POLYGON);
        glVertex2i(xx1, yy1);
        glVertex2i(xx2, yy2);
        glVertex2i(xx3, yy3);
        glVertex2i(xx4, yy4);

        glEnd();
        glFlush ();

        glColor3ub (255, 0, 0);
        glBegin(GL_POLYGON);
        glVertex2i(xx1+xt, yy1+yt);
        glVertex2i(xx2+xt, yy2+yt);
        glVertex2i(xx3+xt, yy3+yt);
        glVertex2i(xx4+xt, yy4+yt);

        glEnd();
        glFlush ();
}

void Scaling()
{
        glClear (GL_COLOR_BUFFER_BIT);
        glColor3ub (128, 128, 128);
        glBegin(GL_POLYGON);
        glVertex2i(xx1, yy1);
        glVertex2i(xx2, yy2);
        glVertex2i(xx3, yy3);
        glVertex2i(xx4, yy4);

        glEnd();
        glFlush ();

        glColor3ub (255, 0, 0);
        glBegin(GL_POLYGON);
        glVertex2i(xx1*xt, yy1*yt);
        glVertex2i(xx2*xt, yy2*yt);
        glVertex2i(xx3*xt, yy3*yt);
        glVertex2i(xx4*xt, yy4*yt);

        glEnd();
        glFlush ();
}
void Sub(){
    x=xx1;
    y=yy1;

    xx1-=xx1;
    xx2-=xx1;
    xx3-=xx1;
    xx4-=xx1;

    yy1-=yy1;
    yy2-=yy1;
    yy3-=yy1;
    yy4-=yy1;

    X1=xx1*cos(angle) - yy1*sin(angle);
    X2=xx2*cos(angle) - yy2*sin(angle);
    X3=xx3*cos(angle) - yy3*sin(angle);
    X4=xx4*cos(angle) - yy4*sin(angle);

    Y1=xx1*sin(angle) + yy1*cos(angle);
    Y2=xx2*sin(angle) + yy2*cos(angle);
    Y3=xx3*sin(angle) + yy3*cos(angle);
    Y4=xx4*sin(angle) + yy4*cos(angle);

    X1+=x;
    X2+=x;
    X3+=x;
    X4+=x;

    Y1+=y;
    Y2+=y;
    Y3+=y;
    Y4+=y;


}



void Rotation()
{

        glColor3ub (128, 128, 128);
        glBegin(GL_POLYGON);
        glVertex2i(xx1, yy1);
        glVertex2i(xx2, yy2);
        glVertex2i(xx3, yy3);
        glVertex2i(xx4, yy4);

        glEnd();


        glColor3ub (255, 0, 0);
        glBegin(GL_POLYGON);
        Sub();
        glVertex2i(X1, Y1);
        glVertex2i(X2, Y2);
        glVertex2i(X3, Y3);
        glVertex2i(X4, Y4);

        glEnd();
        glFlush ();
}


void myDisplay(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    if(a==1){
        Translation();
    }
    else if(a==2){
        Scaling();
    }
    else if(a==3){
        Rotation();
    }

}

void myInit (void)
{
glClearColor(0.0, 0.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}





int main(int argc, char** argv)
{
    cout<<"What do you want to do?\n1.Translation\n2.Scaling\n3.Rotation"<<endl;
    cin>>a;
     cout<<"Enter 4 coordinate :";
        cin>>xx1>>yy1;
        cin>>xx2>>yy2;
        cin>>xx3>>yy3;
        cin>>xx4>>yy4;
    if(a==1){
        cout<<"Enter translation point :";
        cin>>xt>>yt;
    }
    else if(a==2){
        cout<<"Enter scale point :";
        cin>>xt>>yt;
    }
    else if(a==3){
        cout<<"Enter angle :";
        cin>>angle;
        angle=(3.1416*angle)/180;
    }
    else{
        cout<<"Error"<<endl;
    }
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (640, 480);
glutInitWindowPosition (100, 150);
glutCreateWindow ("");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
