#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>

void main()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "C://TC/BGI ");
	int x1, y1, x2, y2, sx, sy;
	printf("Enter values ");
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	setcolor(RED);
	line(x1, y1, x2, y2);
	sx = 10, sy = 10;
	x1 = sx * x1;
	x2 = sx * x2;
	y1 = sy * y1;
	y2 = sy * y2;
	printf("\n\n\nNew Line\n\n");
	setcolor(BLUE);
	line(x1, y1, x2, y2);
	getch();

}