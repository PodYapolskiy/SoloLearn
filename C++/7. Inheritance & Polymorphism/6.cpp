// Abstract Classes
#include <iostream>
using namespace std;

class Enemy
{
    public:
        virtual void attack() = 0;
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
            Abstract Classes
        Classes that can only be used as base classes, and thus are allowed to have pure virtual functions are called Abstract Classes.
        In this example, objects of different but related types are referred to using a unique type of pointer (Enemy*), and the proper member function is called every time, just because they are virtual.
    */
    // Enemy e; - cause an error
    Ninja n;
    Monster m;

    Enemy *e1 = &n;
    Enemy *e2 = &m;

    e1->attack();
    e2->attack();

    return 0;
}