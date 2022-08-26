#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
    printf("Subodh")
    int gd = DETECT, gm;
    initgraph(&gd, &gm,"c:\\turboc3\\bgi");
    line(150,150,250,250);
    getch();
}