#include <iostream>
using namespace std;

int main(){
    int *ptr = new int(2);
    float *fptr = new float(3.5);
    cout << ptr << " " << *ptr << " " << fptr << " " << *fptr << "\n";
    return 0;
}