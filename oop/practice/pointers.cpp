#include <iostream>
using namespace std;

class B{
    int x;
    public:
    B():x(0){}
    virtual void show(){
        cout<<"printing from b\n";
    }
};

class C: public B{
    public:
    void show(){
        cout<<"printing from c\n";
    }
};

class GC: public C{
    public: 
    void show(){
        cout << "printing from gc\n";
    }
};

int main(){
    C* ptr = new GC();
    ptr->show();
    return 0;
}