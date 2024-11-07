#include <iostream>
using namespace std;

template<class T>
class Student{
    T marks1;
    T marks2;

    public:
    Student(T m1, T m2){
        marks1 = m1;
        marks2 = m2;
    }
    T totalMarks(){
        return (marks1+marks2);
    }
};

int main(){
    Student<int> s1(90,96);
    Student<float> s2(95.6,23.9);
    cout << s1.totalMarks()<<"\n";
    cout << s2.totalMarks()<<"\n";
}