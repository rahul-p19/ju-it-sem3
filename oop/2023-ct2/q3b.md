### Namespace Extension

Namespace extension allows us to split the definition of a namespace over several parts in the same unit. If we have declared a namespace, we can extend the original definition by adding declarations.

```
    namespace ns1{
        int a;
    }

    namespace ns2{
        int b;
    }

    namespace ns1{
        void show(){
            cout << "Show from ns1\n";
        }
    }
```

### Unnamed Namespace

An unnamed namespace is a namespace without any name. Once created, it's members can be accessed from any part of the program without any qualifications. It is used to protect the global data.

```
    namespace{
        void show(){
            cout << "show function";
        }
    }

    int main(){
        show();
    }
```

### Using declaration

Using declaration allows us to use/import a certain member variable or function from a namespace directly, instead of importing the entire namespace.

Priority of using declaration is higher than using directive, so it can be used to override previous namespace directives.

```
    namespace ns1{
        int a = 5;
        void show(){
            cout << "show 1";
        }
    }

    namespace ns2{
        int a = 10;
        void show(){
            cout << "show 2";
        }
    }

    int main(){
        using namespace ns1;
        
        cout << a; // 5
        show() // show 1

        using ns2::a;
        cout << a; // 10

        show(); // show 1

        using ns2::show;
        show();
    }
```
