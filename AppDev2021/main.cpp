#include <time.h>
#include "appdev.h"
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	rock r;
	printf("Application Developers Rock! \n");
	printf("Enter Rocker's name: ");
	scanf_s("%s", r.rname, (unsigned)_countof(r.rname));
	srand(time(NULL));	//randomize the seed
	r.max = rand() % 50 + 51;
	r.min = rand() % 50 + 1;
	send_data(r);
	printf("Rockn'Roll\n");
	return 0;
}