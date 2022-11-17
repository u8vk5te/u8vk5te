#include<stdio.h>

typedef struct {
	int xpos;
	int ypos;
} Point;

Point getScale2xPoint (const Point* pp);

int main () {
	Point p1, p2;

	scanf("%d %d",&p1.xpos,&p1.ypos);

	p2 = getScale2xPoint (&p1);

	printf("%d %d\n", p2.xpos, p2.ypos);
	
    
}

Point getScale2xPoint (const Point* pp) {
	Point ret;

	//ret.xpos = 2*(*pp).xpos;
	// *pp.xpos  == pp->xpos
	ret.xpos = 2 * pp->xpos;
	
	//ret.ypos = 2*(*pp).ypos;
	ret.ypos = 2* pp->ypos;

	return ret;
}


