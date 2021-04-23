#include <iostream>

using namespace std;

class point
{
    public:
        int x;
        int y;
    point(int ox, int oy)
    {
        x=ox;
        y=oy;
        cout << "(" << x << ";" << y << ")";
    }
};

int main()
{
    int a,b;
    cin >> a >> b;
    point point1(a,b);
    return 0;
}
