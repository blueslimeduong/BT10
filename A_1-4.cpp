#include <iostream>
using namespace std;
struct Point{
    double x;
    double y;

    Point(double _x = 0, double _y = 0)
    {
        x = _x;
        y = _y;
    }
    ~Point()
    {
        ;
    }

};
void print(const Point p)
{
    cout << '(' << p.x << ',' << p.y << ")\n";
}
void truyen(const Point &p)
{
    cout << "dia chi tham chieu: " << &p << endl;
    return;
}
Point mid_point(Point a, Point b)
{
    return Point((a.x+b.x)/2,(a.y+b.y)/2);
}
int main(int agrc, int** agrv)
{
    /** A1*/
    Point p(6,3);
    print(p);

    /** A2*/
    cout << "dia chi p: " << &p << endl;
    truyen(p);

    /** A3*/
    Point p2(4,4);
    Point mid = mid_point(p,p2);
    print(mid);

    /** A4*/
    cout << "cau truc bo nho :" <<&p << ' ' << &(p.x) << ' ' << &(p.y) << endl;
    // Địa chỉ biến Point trùng với địa chỉ trường x, địa chỉ x và y cách nhau 8byte (double)


    return 0;
}
