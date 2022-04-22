// Virtual Functions
#include <iostream>
using namespace std;

class Enemy
{
    public:
        // It works like a template, telling that the derived class might have an attack() function of its own
        virtual void attack() {};

        // virtual void attack() = 0;
        // The = 0 tells the compiler that the function has no body
};

class Ninja : public Enemy
{
    public:
        void attack()
        {
            cout << "Ninja!" << endl;
        }
};

class Monster : public Enemy
{
    public:
        void attack()
        {
            cout << "Monster!" << endl;
        }
};

int main()
{
    /*
            Virtual Functions
        To be able to call the corresponding attack() function for each of the derived classes using Enemy pointers, we need to declare the base class function as virtual.
        Defining a virtual function in the base class allows polymorphism to use Enemy pointers to call the derived classes' functions.
        Every derived class will override the attack() function and have a separate implementation
        A class that declares or inherits a virtual function is called a polymorphic class.

            Pure Virtual Functions
        The virtual member functions without definition are known as pure virtual functions.
        A pure virtual function basically defines, that the derived classes will have that function defined on their own.
        Every derived class inheriting from a class with a pure virtual function MUST override that function.
    */
    Ninja n;
    Monster m;

    Enemy *e1 = &n;
    Enemy *e2 = &m;

    e1->attack();
    e2->attack();

    return 0;
}