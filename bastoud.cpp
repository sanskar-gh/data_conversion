// basicc to user defined conversion : with the help of parameterized constructors

#include<iostream>
using namespace std;
class Test{
    int a,b;
public:
    Test() {}
    Test(int h) {
        a = h;
        b = h;
    }
    void getdata(int x, int y) {
        a = x;
        b = y;
    }
    void display(void) {
        cout << a << " " << b << endl;
    }
};
int main()
{
    Test t1;
    int x = 5;
    t1 = x; // basic to user defined -> is done with the help of constructors
    // compiler understood it as t1(x) and called parameterized constructor!
    t1.display();
    return 0;
}