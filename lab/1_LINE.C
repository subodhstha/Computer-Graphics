// program to draw a line by using build in function line().
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
    int x1, y1, x2, y2;
    int gd = DETECT, gm;
    printf("Enter the the initial coordinate\n");
    scanf("%d %d",&x1, &y1);
    printf("Enter the the final coordinate\n");
    scanf("%d %d",&x2, &y2);
    initgraph(&gd, &gm,"c:\\turboc3\\bgi");
    printf("Subodh");
    line(x1, y1, x2, y2);
    outtextxy(x1+5,y1-5, "(x1,y1)");
    outtextxy(x2+5,y2+5, "(x2,y2)");
    getch();
}