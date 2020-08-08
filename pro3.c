#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "tests.h"
#include "help.h"
#include "mathOps.h"

int getInput();

int main(int argc, char** argv) {

	int option;
	while ((option = getopt(argc, argv, "th")) != -1) {
		switch(option) {
			case 't':
				runTests();
				break;
			case 'h':
				showHelp();
				break;
			default:
				printf("Unknown option character '-%c' .\n", optopt);
				showCommands();
				break;
		}
	}
	
	int running = 1;
	while(running == 1)
	{
		printf("\nWhat would you like to do?\n1) Addition\n2) Subtraction\n3) Multiplication\n4) Division\n5) Find Remainder\n6) Quit\n");
		int input = getInput();
		
		switch(input) {
			case 1:
				printf("Addition selected. \n\n");
				printf("The sum: %d\n", add(getInput(), getInput()));
				break;
			case 2:
				printf("Subtraction selected. \n\n");
				printf("The difference: %d\n", subtract(getInput(), getInput()));
				break;
			case 3:
				printf("Multiplication selected. \n\n");
				printf("The product: %d\n", multiply(getInput(), getInput()));
				break;
			case 4:
				printf("Division selected. \n\n");
				printf("The quotient: %d\n", divide(getInput(), getInput()));
				break;
			case 5: 
				printf("Remainder selected. \n\n");
				printf("The remainder: %d\n", findRem(getInput(), getInput()));
				break;
			case 6:
				printf("Ending program. Goodbye.\n");
				running = 0;
				break;
			default:
				printf("The input was invalid.\n");
				break;
		}
	}
	return 0;
}

int getInput() {
        int input;
	printf("Please enter an integer: \n");
        while(!scanf("%d", &input)) {
                scanf("%*[^\n]");
                printf("Could not read integer value!\n Please enter new value:\n");
        }
        return input;
}

