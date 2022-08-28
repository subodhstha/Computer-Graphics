// To implement the Ellipse Generation Algorithm for drawing an ellipse of given center (x, y) and radius rxand ry.
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
void display();
float x, y;
int xc, yc;
void main()
{
    int gd = DETECT, gm;
    int rx, ry;
    float p1, p2;
    clrscr();
    initgraph(&gd, &gm, "c:\\turboc3\\bgi");
    printf("Enter the center point ");
    scanf("%d %d", &xc, &yc);
    printf("Enter the value for Rx & Ry ");
    scanf("%d %d",&rx, &ry);
    x = 0;
    y = ry;
    display();
    p1 = (ry * ry) - (rx * rx * rx) + (rx * rx) / 4;
    while ((2 * ry * ry * x) <= (2 * rx * rx * y))
    {
        x++;
        if (p1 <= 0)
        {
            p1 = p1 + (2 * ry * ry * x) - (ry * ry);
        }
        else
        {
            y--;
            p1 = p1 + (2 * ry * ry * x) - (2 * rx * rx * y) + (ry * ry);
        }
        display();
        x = -x;
        display();
        x = -x;
    }
    x = rx;
    y = 0;
    display();
    p2 = (rx * rx) + 2 * (ry * ry * rx) + (ry * ry) / 4;
    while ((2 * ry * ry * x) > (2 * rx * rx * y))
    {
        y++;
        if (p2 > 0)
        {
            p2 = p2 + (rx * rx) - (2 * rx * rx * y);
        }
        else
        {
            x--;
            p2 = p2 + (2 * ry * ry * x) - (2 * rx * rx * y) + (rx * rx);
        }
        display();
        y = -y;
        display();
        y = -y;
    }
    getch();
    closegraph();
}
void display()
{
    delay(50);
    putpixel(xc + x, yc + y, 7);
    putpixel(xc - x, yc + y, 7);
    putpixel(xc + x, yc - y, 7);
    putpixel(xc - x, yc - y, 7);
}