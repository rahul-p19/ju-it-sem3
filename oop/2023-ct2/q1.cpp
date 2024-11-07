#include <iostream>
using namespace std;

class Sample{
    int a;
    public:
    Sample(int aa=0){
        a=aa;
    }
    operator int(){
        return a;
    }
    friend ostream& operator<<(ostream &os,Sample ob){
        os << "a= " << ob.a << "\n";
        return os;
    }
    Sample operator+=(Sample ob){
        this->a = this->a + ob.a;
        return a;
    }
};

int main(){
    Sample s1(5), s2;
    s2 = s1*10; // s2.a = 50
    s2+=5; // s2.a = 55
    int x = s2; // x = 55
    Sample s3(x); // s3.a = 55
    cout << s3; // a = 55
}