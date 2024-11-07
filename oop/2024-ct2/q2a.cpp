#include <iostream>
using namespace std;

class Sample{
    int s;
    public:
    Sample(int ss=0){
        s=ss;
    }
    Sample operator+(Sample &ob){
        Sample t;
        t.s = this->s + ob.s;
        return t;
    }
    operator int(){
        return s;
    }
    Sample operator++(){
        this->s++;
        return *this;
    }
    Sample operator*=(Sample ob){
        this->s = this->s * ob.s;
        return *this;
    }
    Sample* operator->(){
        return this;
    }
    void display(){
        cout << "s= " << this->s << "\n";
    }
};

int main(){
    Sample s1(10), s2(5), s3;
    int x = s3;
    cout << x << endl;
    s3 *= ++s2;
    s3->display();
    s2->display();
}