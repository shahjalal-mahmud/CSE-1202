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
    Rec R1, R2;
    R1.setlength(10);
    R1.setbreadth(100);

    R2.setlength(100);
    R2.setbreadth(500);

    cout << R1.area() << endl;
    cout << R1.perimeter() << endl;
    cout << R2.area() << endl;
    cout << R2.perimeter() << endl;
    return 0;
}