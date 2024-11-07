#include <iostream>
using namespace std;

template<class T1, class T2>
class Sample{
    T1 a;
    T2 b;
    public:
    void get(){
        cout << "Enter a and b: ";
        cin >> a >> b;
    }
    void disp(){
        cout << "a: " << a << "\n";
        cout << "b: " << b << "\n";
    }
};

int main(){
    Sample<int,int> s1;
    s1.get();
    s1.disp();

    Sample<int,float> s2;
    s2.get();
    s2.disp();
}