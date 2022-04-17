// Composition
#include <iostream>
#include <string>
using namespace std;

class Birthday
{
    public:
        Birthday(int m, int d, int y) : month(m), day(d), year(y) {}

        void printDate()
        {
            cout << month << "/" << day << "/" << year << endl;
        }

    private:
        int day, month, year;
};

class Person
{
    public:
        Person(string n, Birthday b) : name(n), bd(b) {}

        void printInfo()
        {
            cout << name << endl;
            bd.printDate();
        }

    private:
        string name;
        Birthday bd;
};

int main()
{
    /*
            Composition
        Object composition involves using classes as member variables in other classes.

        Composition is used for objects that share a has-a relationship, as in "A Person has a Birthday".

        In general, composition serves to keep each individual class relatively simple, straightforward, and focused on performing one task.
        It also enables each sub-object to be self-contained, allowing for reusability (we can use the Birthday class within various other classes).
    */
    Birthday bd(2, 21, 1985);
    Person p("David", bd);
    p.printInfo();

    return 0;
}