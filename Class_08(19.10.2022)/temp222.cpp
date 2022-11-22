#include <iostream>
using namespace std;

void swap(int &p, int &q)
{
    int temp = p;
    p = q;
    q = temp;
}

int main()
{
    int a = 10, b = 20;
    cout << "adrs A= " << &a << " adrs b= " << &b << endl;
    cout << "data A= " << a << " data b= " << b << endl;

    swap(a, b);
    cout << "\n\nadrs A= " << &a << " adrs b= " << &b << endl;
    cout << "data A= " << a << " data b= " << b << endl;

    return 0;
}
