// To implement Bresenham’s line drawing algorithm for drawing a line segment between two given endpoints A(x1, y1) and B(x2, y2).
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
    int x, y, x1, y1, x2, y2, p, dx, dy;
    int gd = DETECT, gm;
	printf("Enter the x-coordinate of the first point \n");
	scanf("%d",&x1);
	printf("\n Enter the y-coordinate of the first point \n");
	scanf("%d",&y1);
	printf("\n Enter the x-coordinate of the second point \n");
	scanf("%d",&x2);
	printf("\n Enter the y-coordinate of the second point \n");
	scanf("%d", &y2);
    initgraph(&gd, &gm,"c:\\turboc3\\bgi");
    printf("subodh");
    dx = x2 - x1;
    dy = y2 - y1;
    x = x1;
    y = y1;
    p = (2 * dy - dx);
    while (x <= x2)
    {
        if (p < 0)
        {
            delay(100);
            putpixel(x,y,7);
            p = p + 2 * dy;
        }
        else
        {
            delay(100);
            y = y + 1;
            p = p + (2 * dy)-(2 * dx);
            putpixel(x,y,7);
        }
        x = x + 1;
    }
    outtextxy(x1+5,y1-5, "(x1,y1)");
    outtextxy(x2+5,y2+5, "(x2,y2)");
    getch();
    closegraph();
}