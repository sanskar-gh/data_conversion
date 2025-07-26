// user defined to user defined conversion -> using type casting function
// test t1
// sample s1
// t1 = s1; 
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
    Test(int x, int y) {
        a = x;
        b = y;
    }
    void display(void) {
        cout << a << " " << b << endl;
    }
    
};
class Sample{
    int a,b;
public:
    Sample() {}
    Sample(int h) {
        a = h;
        b = h;
    }
    Sample(int x, int y) {
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
    operator Test() {
        return Test(a,b);
    }
    
};
int main()
{
    Test t1;
    Sample s1(20,30);

    t1 = s1;
    t1.display();
    s1.display(); // s1.operatorTest()
    return 0;
}