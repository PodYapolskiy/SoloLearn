// Input & Output
#include <iostream>
using namespace std;

int main()
{
    cout << "Enter some int: ";
    int num;
    cin >> num; // Extraction operator (>>)

    cout << "Enter 2 strings separated by space: ";
    char s1[100], s2[100];
    cin >> s1 >> s2; // Two inputs in one line
    cout << s1 << " " << s2 << endl;

    return 0;
}