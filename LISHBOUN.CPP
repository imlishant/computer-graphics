#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>

void boundary4fill(int x, int y, int fcolor, int bcolor){
	if(getpixel(x, y) != bcolor && getpixel(x, y) != fcolor){
		putpixel(x, y, fcolor);
		boundary4fill(x, y-1, fcolor, bcolor);
		boundary4fill(x, y+1, fcolor, bcolor);
		boundary4fill(x-1, y, fcolor, bcolor);
		boundary4fill(x+1, y, fcolor, bcolor);

	}
}

int main()
{       int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:/TC/BGI");
	rectangle(50, 50, 100, 100);
	boundary4fill(55, 55, 4, 15);
	delay(10000);
	getch();
	closegraph();
	return 0;

}