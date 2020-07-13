#include <graphics.h>

int main() {
	int gd = DETECT, gm;

	initgraph(&gd, &gm, "");

	line(150,150,450,150);

	getch();

	closegraph();
}
