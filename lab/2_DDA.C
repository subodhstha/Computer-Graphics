// To implement DDA algorithm for drawing a line segment between two given end points A(x1,y1) and B(x2,y2).#include<stdio.h>
#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
#include<dos.h>
float round(float a);
void main()
{
    int gd = DETECT, gm, k;
    int x1, y1, x2, y2, steps;
    float xinc, yinc, x, y, dx, dy;
    printf("Enter x1, y1 \n");
    scanf("%d %d",&x1, &y1);
    printf("Enter x2, y2 \n");
    scanf("%d %d",&x2, &y2);
    initgraph(&gd, &gm, "c:\\turboc3\\bgi");
    dx = x2 - x1;
    dy = y2 - y1;
    if (abs(dx) > abs(dy))
    {
	    steps = abs(dx);
    }
    else
    {
	    steps = abs(dy);
    }
    xinc = dx/steps;
    yinc = dy/steps;
    x = x1;
    y = y1;
    for (k = 1; k <= steps; k++)
    {
	    delay(100);
	    y += yinc;
	    x += xinc;
	    putpixel(round(x),round(y),WHITE);
    }
    outtextxy(50,20,"Subodh");
    outtextxy(200,20,"DDA");
    outtextxy(x1+5,y1-5, "(x1,y1)");
    outtextxy(x2+5,y2+5, "(x2,y2)");
    getch();
    closegraph();
}
float round(float a)
{
    int b = a + 0.5;
    return b;
}