#include <stdio.h>

void showCommands() {
        printf("\nAcceptable commands are as follows: \n-t start the program running internal tests. \n-h show this help screen.\n\n");
        return;
}

void showHelp() {
	printf("\n\nThis program allows the user to perform the basic functions\nof a calculator. The options of the calculator are portrayed\n");
	printf("in the menu, and the user has the ability to select their \noperation and input their desired numbers.\n");
	showCommands();
	return;
}
