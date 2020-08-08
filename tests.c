#include <stdio.h>
#include <stdlib.h>
#include "mathOps.h"

void testAddition() {
	int firstNumber = 5;
	int secondNumber = 6;
	int expectedOutput = 11;

	int testResponse = add(firstNumber, secondNumber);

	if(expectedOutput != testResponse) {
		printf("testAddition has failed! actual %d expected %d", 
			testResponse, expectedOutput);
		exit(1);
	}
	return;
}

void testSubtraction() {
	int firstNumber = 10;
	int secondNumber = 5;
	int expectedOutput = 5;
	
	int testResponse = subtract(firstNumber, secondNumber);

	if(expectedOutput != testResponse) {
		printf("testSubtraction has failed! actual %d expected %d",
			testResponse, expectedOutput);
		exit(1);
	}
	return;
}

void testMultiply() {
	int firstNumber = 3;
	int secondNumber = 4;
	int expectedOutput = 12;

	int testResponse = multiply(firstNumber, secondNumber); 

	if(expectedOutput != testResponse) {
		printf("testMultiply has failed! actual %d expected %d",
			testResponse, expectedOutput);
		exit(1);
	}
	return;
}

void testDivide() {
	int firstNumber = 6;
	int secondNumber = 3;
	int expectedOutput = 2;

	int testResponse = divide(firstNumber, secondNumber);

	if(expectedOutput != testResponse){
		printf("testDivide has failed! actual %d expected %d",
			testResponse, expectedOutput);
		exit(1);
	}
	return;
}

void testRemainder() {
	int firstNumber = 11;
	int secondNumber = 5;
	int expectedOutput =  1;

	int testResponse = findRem(firstNumber, secondNumber);

	if(expectedOutput != testResponse) {
		printf("testRemainder has failed! actual %d expected %d",
			testResponse, expectedOutput);
		exit(1);
	}
	return;
}

void runTests() {
	printf("\nRunning tests...\n");
	testAddition();
	testSubtraction();
	testMultiply();
	testDivide();
	testRemainder();
	printf("Tests succeeded.\n\n");
	return;
}
