#include <iostream>
using namespace std;

class A{
    int x;
    public:
    A(){
        x=0;
    }
    // A(int xx){
    //     x=xx;
    // }
    void seta(int x){
        this->x = x;
    }
    void print(){
        cout << "x: " << x << "\n";
    }
};

int main(){
    A ob;
    ob.seta(5);
    A obj = ob;
    ob.print();
    obj.print();
    return 0;
}