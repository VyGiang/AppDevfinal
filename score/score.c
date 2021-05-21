#include"score.h"

int main(void) {
	int scores[MAX], marks[MAX]; //local variable
	int statistics[6] = { 0 }; // initialize counters

	input_scores(scores);
	evaluation(scores, marks);
	classification(marks, statistics);
	output_results(marks, statistics);
}