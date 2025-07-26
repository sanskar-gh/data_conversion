// user defined to basic conversion -> type casting operator
// int x;
// Test t1;
// x = t1;

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
    // typecasting function
    // operator datatype() {
    // return (datatype value)
    // }
    operator int() {
        return (a + b);
    }
};
int main()
{
    Test t1;
    t1.getdata(20,30);
    // t1.display();
    int x;
    x = t1; // user defined to basic; compiler reads it as t1.operatorint()
    cout << x;
    return 0;
}