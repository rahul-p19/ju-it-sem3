#include <iostream>
using namespace std;

class B{
    protected:
    int x;
    public:
    B(int xx){
        x=xx;
        cout << "B constructor\n";
    }
};
class C1: virtual public B{
    public:
    C1():B(1){
        cout << "c1 constructor\n";
    }
};
class C2: virtual public B{
    public:
    C2():B(2){
        cout << "c2 constructor\n";
        cout << "in c2, x: "<<x<<"\n";
    }
};
class GC: public C1, public C2{
    public:
    GC():B(5){
        cout << "gc constructor\n";
        cout << "x: " << x << "\n";
        // can't access x due to ambiguity. fixed by virtual inheritance
    }
};

int main(){
    GC ob1;
    // C1 ob2;
    C2 ob3;
    // B ob4(100);
    return 0;
}