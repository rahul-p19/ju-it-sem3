#include <iostream>
using namespace std;

template<class T>
T square(T x){
    return x*x;
}

int main(){
    cout << square(5) << "\n";
    cout << square(5.5) << "\n";
    cout << square<int>(5.5) << "\n";
    cout << square<double>(5.5) << "\n";
}