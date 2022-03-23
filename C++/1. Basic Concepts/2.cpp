// Variables
#include <iostream>
using namespace std; // A namespace is a declarative region that provides a scope to the identifiers (names of elements) inside it.

int main()
{
	// Inline comment
	/*
		Multi-Line Comments
	*/

	/*
			Variables
		type name; - declaration
		type name = value; - declaration and initialization
	*/
	int someInt = 69;
	float someFloat = 4.20;
	double someDouble = 3.14159;
	bool someBool = true;
	char someChar = 'A';
	string someString = "Hello world!";
	auto someAutoVar = ""; // Should be initialized at the time of its declaration
	void *someVoid;
	int *ptr;

	/*
			Modifications
		signed - let char be negative -> char(-127 ... 127)
		unsigned - doesn't let char or int be negative -> int(0 ... 65535); char(0 ... 255)
		long - range of values is twice more as the memory usage
		short - otherwise long
	*/
	signed char signedChar = '-127';
	unsigned char unsignedChar = '255';
	long int longInt = 2147483647;
	short int shortInt = -32767;

	return 0;
}