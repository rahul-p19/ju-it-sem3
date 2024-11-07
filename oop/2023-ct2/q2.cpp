#include <iostream>
using namespace std;

class Sample{
    int s;
    public:
    Sample(int ss=0){
        s=ss;
    }
    Sample operator++(int dummy){
        Sample t;
        t.s = s++;
        return t;
    }
    operator int(){
        return s;
    }
    friend void swap(Sample &ob1, Sample &ob2){
        int temp = ob1.s;
        ob1.s = ob2.s;
        ob2.s = temp;
    }
    Sample* operator->(){
        return this;
    }
    void display(){
        cout << "s = " << s << "\n";
    }
};

int main(){
    Sample s1(10), s2(5); // s1.s = 10, s2.s = 5
    Sample s3 = (s1++)+(3+s2); // s3.s = 10 + 3 + 5 = 18, s1.s = 11
    swap(s1,s3); // s1.s = 18, s3.s = 11
    s1->display(); // s = 18
    s3->display(); // s = 11
}