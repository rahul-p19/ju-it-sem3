#include<iostream>
using namespace std;

template<class T>
class XYZ{
    static T s1;
    public:
    void put();
    static T s2;
};

template<class T>
T XYZ<T>::s1=10;

template<class T>
T XYZ<T>::s2=20;

template<class T>
void XYZ<T>::put(){
    cout << ++s1 << "\n" << ++s2 << "\n";
}

int main(){
    XYZ<int> ob;
    ob.put();
    XYZ<int> ob1; // modifies the same copy of the static variables as initialised in ob
    ob1.put();

    XYZ<float>ob3; // creates a separate copy of the static variables, since the data type is different
    ob3.put();

    XYZ<int> ob4; // modifies the same copy of the static variables as initialised in ob
    ob4.put();

}