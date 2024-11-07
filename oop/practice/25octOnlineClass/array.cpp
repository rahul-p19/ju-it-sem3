#include <iostream>
using namespace std;

template<class T>
class Array{
    T *ptr;
    int size;

    public:
    Array(T[],int);
    void print();
};

template<class T>
Array<T>::Array(T arr[],int s){
    ptr = new T[s];
    size=s;
    for(int i=0;i<size;i++) ptr[i]=arr[i];
}

template<class T>
void Array<T>::print(){
    for(int i=0;i<size;i++) cout << ptr[i] << " ";
}

int main(){
    int a[]={2,4,6,8,9};
    Array<int> ob(a,5);
    ob.print();
}