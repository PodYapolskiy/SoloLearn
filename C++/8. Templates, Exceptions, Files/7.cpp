// Working With Files
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    /*
            Working with Files
        ofstream - Output file stream that creates and writes information to files.
        ifstream - Input file stream that reads information from files.
        fstream - General file stream, with both ofstream and ifstream capabilities that allow it to create, read, and write information to files.

        These classes are derived directly or indirectly from the classes istream and ostream.
        Stream output operator (<<) is used to write into the file.
        If the specified file does not exist, the open function will create it automatically.
    */
    ofstream myFile;
    myFile.open("7.txt"); // Open the "test.txt" file on the file system
    // myFile("test.txt") - also can be used

    myFile << "Some text.\n";
    myFile.close();

    return 0;
}