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
    Rec x, *ptr;
    ptr = &x;

    ptr->setlength(10);
    ptr->setbreadth(100);

    cout<<ptr->area()<<endl;
    cout<<ptr->perimeter()<<endl;
    return 0;
}