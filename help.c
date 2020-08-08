#include <stdio.h>

void showHelp() {
	printf("This program allows the user to perform the basic functions\n
		of a calculator. The options of the calculator are portrayed\n
		in the menu, and the user has the ability to select their \n
		operation and input their desired numbers.\n ");
	showCommands();
	return;
}

void showCommands() {
	printf("Acceptable commands are as follows: \n
		-t start the program running internal tests. \n 
		-h show this help screen.");
	return;
}
