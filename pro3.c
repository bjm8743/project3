#include <stdio.h>
#include "tests.h"
#include "help.h"

int add(int x, int y) {
	return x + y;
}

int multiply(int x, int y) {
	return x * y;
}

int divide(int x, int y) {
	return x / y;
}

int subtract(int x, int y) {
	return x - y;
}

int remainder(int x, int y) {
	return x % y;
} 

int main(int argc, char** argv) {

	int option;
	while ((option = getopt(argc, argv, "th")) != -1) {
		case 't':
			runTests();
			break;
		case 'h':
			showHelp();
			break;
		default:
			printf("Unknown option character '\\x%x' .\n", optopt);
			#help;
			break;
	}
	return 0;
}
