#include <iostream>
using namespace std;

class A{
    int a;
    const int b;
    static int c;
    public:
    A(int aa=0, int bb=10):b(bb){
        a=aa;
        c+=10;
    }
    void show(){
        cout << "a: " << a << " b: " << b << " c: " << c << "\n";
    }
};
int A::c=50;

int main(){
    A ob1, ob2(5), ob3(10,20);
    ob1.show();
    ob2.show();
    ob3.show();
    return 0;
}