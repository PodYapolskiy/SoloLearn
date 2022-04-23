// Class Templates
#include <iostream>
using namespace std;

template <class T> // Allowing class to have members that use template parameters as types
class Pair
{
    private:
        T first, second;

    public:
        Pair(T a, T b) : first(a), second(b) {}
        T bigger();
};

template <class T>
T Pair<T>::bigger()
{
    return (first > second ? first : second);
}

int main()
{
    /*
            Class Templates
        Specific syntax is required in case you define your member functions outside of your class.
        You need to specify the generic type in angle brackets after the class name.
        A specific syntax is required in case you define your member functions outside of your class.

        To create objects of the template class for different types, specify the data type in angle brackets.
        We can use the same class to create an object that stores any other type.
    */
    Pair<int> obj1(11, 22);
    cout << obj1.bigger() << endl;

    Pair<double> obj2(23.43, 5.68);
    cout << obj2.bigger() << endl;

    return 0;
}