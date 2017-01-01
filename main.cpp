/*============================================================================
Name        : Basics - Hello World.cpp
Author      : Matt Murphy
Contact		: mqm5507@gmail.com
Created		: 31 December 2016
Version     : 1.0
Description : Hello World in C++, Ansi-style. Code taken from Eclipse
	tutorial. No modifications have been made to the source code outside of
	documentation.
Known Issues: None
	- Note: Application has been developed on a Linux operating system. There
		are no apparent problems executing the code on other operating
		systems, but if an issue does arise in regards to compiling, please
		contact me and let me know.
============================================================================*/
#include <iostream>
using namespace std;

int main () {

	/* Begin a for loop that prints "Hello World!" a number of times equal	*
	 * to the variable 'index'.												*/
	for (int index = 0; index < 5; ++index) {

		cout << "Hello World!" << endl;
	}

	/* Create a default input variable for allowing the user to terminate	*
	 * the program after it has finished printing its lines. 				*/
	char input = 'i';

	/* Prompt the user to make an input to exit the program, then read that	*
	 * input and assign its value to the variable 'input'.					*/
	cout << "To exit, press 'm', then press the 'Enter' key." << endl;
	cin >> input;

	/* Begin a while loop that will continue to iterate if the user presses	*
	 * the incorrect key. The exit function is determined by the character	*
	 * assigned to the variable 'input'. As long as 'input' is not 'm', the	*
	 * while loop will continue to iterate, prompting the user for new		*
	 * input.																*/
	while (input != 'm') {

		/* Print a prompt informing the user has entered an incorrect input	and	*
		 * wait for a new input.												*/
		cout << "You just entered '" << input << "'. "
				<< "You must enter the 'm' key to exit." << endl;
		cin >> input;
	}

	/* Print a closing statement to the user, then return 0, terminating	*
	 * the program.															*/
	cout << "Thank you for trying. Exiting." << endl;
	return 0;
}
