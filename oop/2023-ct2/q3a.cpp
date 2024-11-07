#include <iostream>

namespace NS1{
    int a;
    void show();
}

namespace NS2{
    int a;
    void show();
}

// Sample code ends

// Answer starts below

void NS1::show(){
    std::cout << "Show from namespace 1 - a = " << a << "\n";
}

void NS2::show(){
    std::cout << "Show from namespace 2 - a = " << a << "\n";
}

int main(){
    using namespace NS1;
    a=5;
    show(); // Show from namespace 1 - a =  5
    NS2::a = 10;
    using NS2::show;
    show(); // Show from namespace 2 - a = 10
}
