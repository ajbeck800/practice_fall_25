// Create true and false constants
// Create int for correct, guess, and turn init to 0
// Create boolean keepGoing
// Create char[] for name
//
// Ask the user name, put in name
// Greet user with name
//
// Generate a random number between 1 and 100, put in correct
// 
// While keepGoing is true:
// 	Increment number of turns
// 	Ask user for guess, put in guess
// 	If guess < correct:
// 		Print "too low"
// 	If guess > correct:
// 		Print "too high"
// 	If guess is correct:
// 		Print "you got it!"
// 		Set keepGoing to false

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define TRUE -1;
#define FALSE 0;

int main(){
	printf("Hi, What is your name? ");
	scanf("%s", name);
	
	printf("Nice to meet you %s \n", name);
	printf("Let's play a game.");
	
	srand(time(NULL));
	int x = rand();
	int y = x % 100;
	printf("%d \n", y);

	int keepGoing = TRUE;
	while (keepGoing){
		tries += 1;
		printf("Turn %d \n", tries);
		printf("Please guess a number: ");
		scanf("%s", guess);
		
		if (guess < y){
			printf("Too low \n");
		}
		else if (guess > y){
			printf("Too high \n");
		}
		else {
			printf("You got it!");

	} // end while
	return 0;
} // end main
