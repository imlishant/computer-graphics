#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>

void main()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "C://TC/BGI ");
	int x1, x2, y1, y2, x3, y3, O;
	printf("Enter values :: ");
	scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
	printf("\n\nAngle :: ");
	scanf("%d", &O);
	setcolor(RED);
	line(x1, y1, x2, y2);
	line(x2, y2, x3, y3);
	line(x3, y3, x1, y1);

	int x_1 = x1*cos(3.14*O/180) - y1*sin(3.14*O/180);
	int y_1 = x1*sin(3.14*O/180) + y1*cos(3.14*O/180);
	int x_2 = x2*cos(3.14*O/180) - y2*sin(3.14*O/180);
	int y_2 = x2*sin(3.14*O/180) + y2*cos(3.14*O/180);

	printf("\n\nNew Line \n");
	setcolor(BLUE);
	line(x_1, y_1, x_2, y_2);


	getch();

}