#include <iostream>
#include "vector.h"
using namespace std;

int main()
{
    Vector<int> vect;
    vect.push_back(22);
    vect.push_back(33);
    vect.push_back(44);
    vect.push_back(55);
    vect.insert(0, 11);
    vect.insert(5, 66);
    vect.insert(2, 100);
    vect.erase(2);
    vect.resize(4);

    cout << " Tamaño vect   : " << vect.size() << endl
         << " Capacidad vect: " << vect.capacity() << endl << endl;

    for (size_t i = 0; i < vect.size(); i++)
        cout << " vect[" << i << "]: " << vect.at(i) << endl;
    cout << endl;

    Vector<int> vect2;
    vect2 = vect;
    vect.clear();

    cout << " Tamaño vect   : " << vect.size() << endl
         << " Capacidad vect: " << vect.capacity() << endl
         << endl;

    for (size_t i = 0; i < vect.size(); i++)
        cout << " vect[" << i << "]: " << vect.at(i) << endl;
    cout << endl;

    cout << " Tamaño vec2   : " << vect2.size() << endl
         << " Capacidad vec2: " << vect2.capacity() << endl
         << endl;

    for (size_t i = 0; i < vect2.size(); i++)
        cout << " vect2[" << i << "]: " << vect2.at(i) << endl;
    cout << endl;

    return 0;
}
