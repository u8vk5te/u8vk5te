#include <stdio.h>
#include <string.h>

typedef int yogurt;

struct person {
	char name [20];
	char phone_number[20]; 
	yogurt height;
	yogurt weight;
};

typedef struct person person;

yogurt main () {

	person p1;

	yogurt y1;

	y1 = 230;

	strcpy(p1.name ,"kyoungho koo");
	strcpy(p1.phone_number ,"010-4199-0323");
	p1.height = 176;
	p1.weight = 86;


	printf("name: %s\nphone number:%s\nheight:%d\n"
			"weight:%d\n",
			p1.name,
			p1.phone_number,
			p1.height,
			p1.weight);

}
