#include <iostream>


using namespace std;
const int size = 2;
struct Point
{
    int* p = new int [size];
    int x;
    int y;

    Point(int _x = 0, int _y = 0)
    {
        x = _x;
        y = _y;
    }

};

int main()
{
    Point a(3,4);
    Point b = a;
    Point c(3,2);


    cout << a.p << ' ' << b.p << ' ' << c.p ;

    /**
    Địa chỉ trường p của a và b giống nhau, khác c
    */
    return 0;
}
