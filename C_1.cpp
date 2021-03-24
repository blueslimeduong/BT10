#include <iostream>
#include <cstring>
using namespace std;
struct String
{
    int n;
    char* str;
    String(const char* s)
    {

        n = strlen(s);
        str = new char[n];
        strcpy(str,s);

    }
    ~String()
    {

        delete [] str;

    }
    void print() const
    {
        cout << str <<endl;
    }
    void append(const char* other)
    {
        int size = n + strlen(other);
        char* tmp = new char [size];
        strcpy(tmp,str);
        delete [] str;
        strcat(tmp,other);
        str = tmp;
    }
};
int main(int argc, char** agrv)
{
    String s("Hello");
    s.print();
    s.append(" World!");
    s.print();
    String greeting("Hi");
	greeting.append(" there");
	greeting.print();
    return 0;
}
