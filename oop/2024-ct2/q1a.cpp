#include <iostream>
using namespace std;

class Number{
    int n;
    public:
    Number(int nn=0){ // parameterised constructor so Number n1 = 5 will call an object using Number(5)
        n=nn;
    }
    Number operator++(int dummy){ // overloading post increment for (n3++)
        Number t;
        t.n = (this->n)++;
        return t; 
    }
    operator int(){ // converting UDT to BDT for (n3++)-2
        return n;
    }
    Number operator--(){ // overloading pre decrement for (--n1)
        this->n--;
        return *this;
    }
    friend ostream& operator<<(ostream &os, Number ob){ // overloading << for cout
        os << "n= " << ob.n << "\n";
        return os;
    }
};

int main(){
    Number n1=5, n2;
    Number n3 = n1;
    n2 = (n3++)-2;
    cout << n2 << n3;
    n2 = n3 + (--n1);
    cout << n1 << n2;
}