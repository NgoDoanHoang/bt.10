#include <iostream>

using namespace std;

struct point
{
    int x;
    int y;
};

int main()
{
    int a,b;
    cin >> a >> b;
    point point1;
    point1.x=a;
    point1.y=b;

    cout << &point1.x;
    cout << endl << &a;
    cout << endl;
    cout << &point1.y;
    cout << endl << &b;
}       // dia chi cach nhau 1 khoang bang kieu gia tri x, y

