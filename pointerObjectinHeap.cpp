#include <iostream>
using namespace std;
class Rec
{
private:
    int l, b;

public:
    void setlength(int x)
    {
        l = x;
    }
    void setbreadth(int y)
    {
        b = y;
    }
    int area()
    {
        return (l * b);
    }
    int perimeter()
    {
        return (2 * (l + b));
    }
};

int main()
{
    Rec *ptr;
    ptr = new Rec;

    ptr->setlength(10);
    ptr->setbreadth(100);

    cout << ptr->area() << endl;
    cout << ptr->perimeter() << endl;

    delete ptr;
    return 0;
}