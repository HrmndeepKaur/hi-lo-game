#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define MAX 100
#define MIN 1

int main() {

	int a = (rand() % 100 + 1);
	//	int b = (a % 100) + 1;
		//int x = b + 1;
	int guess;
	int tries = 0;

	//	printf("%d", a);
	printf("Enter your guess from %d to %d: ", MIN, MAX);
	scanf_s("%d", &guess);
	tries++;

	if (guess<MIN || guess>MAX) {
		printf("ERROR! %d must be a number between %d and %d.\n", guess, MIN, MAX);
	}

	while (guess != a) {
		//int tries;
		if (guess > a) {
			printf("Too High");
			//	a = guess;
		}
		else {
			printf("Too Low");
			//	a = guess;
		}
		printf("\nEnter another guess from %d to %d: ", MIN, MAX);
		scanf_s("%d", &guess);
		tries++;
		if (guess<MIN || guess>MAX) {
			printf("ERROR! %d must be a number between %d and %d.\n", guess, MIN, MAX);
		}

	}
	printf("\nGreat! You guessed the number in %d tries.\n", tries);

	return 0;
}