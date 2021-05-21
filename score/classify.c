#include"score.h"
//define the function input_score()

void input_scores(int s[]) {
	// get user input by using a sentinel-controled loop
	int i, input = 0;
	printf("enter score, -1 to end: \n");
	for (i = 0; i < MAX && input != -1;) {
		scanf_s("%d", &input);
		if ((input >= 0 && input <= 100) || input == -1) {
			s[i] = input;
			i++;
		}
	}
	printf("%d score are given \n", i - 1);
}