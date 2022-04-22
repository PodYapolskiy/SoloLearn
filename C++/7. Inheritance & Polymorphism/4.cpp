// Polymorphism
#include <iostream>
using namespace std;

class Enemy
{
    protected:
        int attackPower;

    public:
        void setAttackPower(int a)
        {
            attackPower = a;
        }
};

class Ninja : public Enemy
{
    public:
        void attack()
        {
            cout << "Ninja! - " << attackPower << endl;
        }
};

class Monster : public Enemy
{
    public:
        void attack()
        {
            cout << "Monster! - " << attackPower << endl;
        }
};

int main()
{
    /*
            Polymorphism
        Polymorphism occurs when there is a hierarchy of classes and they are related by inheritance.
        C++ polymorphism means that a call to a member function will cause a different implementation to be executed depending on the type of object that invokes the function.
    */
    // Ninja and Monster objects are Enemy objects
    Ninja n;
    Monster m;

    Enemy *e2 = &m; // The pointer demonstrates, that you can use the Enemy pointer without actually knowing that it contains an object of the subclass.

    n.setAttackPower(20);
    e2->setAttackPower(80); // It's faster and more efficient to use pointers.

    n.attack();
    m.attack();

    return 0;
}