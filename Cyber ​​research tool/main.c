#include <stdio.h> // Preprocessor command: Includes the standard Input/Output library
char name[] = "Gil"; // Variable declaration: Creates a variable to hold text
double pi = 3.144859559123123123123; // Variable declaration: Creates a variable to hold a decimal number
int main() {       // The "Main" function: This is where the program starts
    printf("Hello, World!\n"); // Statement: Prints text to the screen
	printf("my name is %s\n", name); // Statement: Prints a new line to the screen
	printf("pi is %.15lf\n", pi); // Statement: Prints the value of pi
    return 0;      // Ends the function and tells the OS everything went fine
}