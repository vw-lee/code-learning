#include <stdio.h>

int main(int argc, char *argv[]) {
	int distance = 100;
	float power = 2.345f;
	double super_power = 56789.4532;
	char initial = 'A'; //why use ''??
	char first_name[] = "Zed"; //[] indicate an array?
	char last_name[] = "Shaw";

	printf("You are %d miles away.\n", distance);
	printf("You have %f levels of power.\n", power);
	printf("You have %f levels of super power.\n", super_power);
	printf("I have an initial %c.\n", initial);
	printf("My first name is %s.\n", first_name);
	printf("My last name is %s.\n", last_name);
	printf("My full name is %s %c. %s.\n", first_name, initial, last_name);

	return 0;
}