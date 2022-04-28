// More On Files
#include <iostream>
#include <fstream>
#include <string> // For getline
using namespace std;

int main()
{
    ofstream myFile("8.txt");

    if (myFile.is_open()) // Checks whether the file is open and ready to be accessed
    {
        myFile << "This is Awesome!" << endl;
        myFile.close();
    }
    else
        cout << "Something went wrong!" << endl;

    /*
            File Opening Modes
        ios::app    - append to end of file
        ios::ate    - go to the end of file opening
        ios::binary - file open in binary mode
        ios::in     - open file for reading only
        ios::out    - open file for writing only
        ios::trunc  - delete the content of the file if it exists

        All these flags can be combined using the bitwise operator OR (|)
    */
    ofstream outfile;
    outfile.open("8.dat", ios::out | ios::trunc);

    /*
            Reading from a File
        The getline function reads characters from an input stream and places them into a string.
    */
    string line;
    ifstream myfile("8.txt");
    while (getline(myfile, line)) // While loop uses the getline function to read the file line by line
        cout << line << endl;

    myfile.close();

    return 0;
}