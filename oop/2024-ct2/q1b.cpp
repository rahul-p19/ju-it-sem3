#include <iostream>

// <-- Sample Code just to run the program -->
namespace NS{
    void display();
}

class Sample{
    public:
    void display();
};
// <-- Sample code ends -->

// Answer starts below

void NS::display(){
    std::cout << "Displaying from namespace\n";
}

void Sample::display(){
    std::cout << "Displaying from class Sample\n";
}

int main(){
    NS::display();

    Sample ob;
    ob.display();
}
