// #include <iostream>
// using namespace std;

// class Human {
//     private:
//         string _name;
//         int _age;
    
//     public:
//         Human(string n,int a) {
//             _name = n;
//             if (a < 0) {
//                 throw "Get to the rapist";
//             }
//             _age = a;

             

            
//         }

    

//         void print() {
//             cout<<"The name is: "<<_name<<endl;
//             cout<<"The age is: "<<_age<<endl;
//         }
// };

// int main() {

//     try {
//     Human H1("Srisht Rana",-19);
//     H1.print();
//     }
//     catch (const char * err) {
//         cout<<"Exception: "<<err<<endl;
//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;

// class number {
//     private:
//         int _a;
    
//     public:
//         number(int a) {
//             _a = a;
//         }

//         number(number &obj) {
//             _a = obj._a;
//             cout<<"Copy CAT...meow!!!"<<endl;
//         }

//         void print() {
//             cout<<"The number is: "<<_a<<endl;
//         }
// };

// int main() {
//     number N1(19);
//     N1.print();
//     number N2(N1);
//     return 0;
// }


// #include <iostream>
// using namespace std;

// class Number {
//     int a;
//     int b;

//     public:
//         Number(int _a,int _b) {
//             a = _a;
//             b = _b;
//         }

//         // friend void sum(Number &obj1, Number &obj2);
//         friend class show;

//         ~Number(){
//             cout<<"Arson"<<endl;
//         }

// };

// class show {
//     public:
//         show(Number &obj) {
//             cout<<obj.a<<" + "<<obj.b<<"i"<<endl;
        
//         }
// };

// void sum(Number &obj1, Number &obj2) {
//     cout<<obj1.a + obj2.a<<" + "<<obj1.b+obj2.b<<"i"<<endl;
// }



// int main() {
//     Number N1(5,2);
//     Number N2(4,2);
//     show S1(N1);
//     // sum(N1,N2);
//     return 0;
// }


// #include <iostream>
// using namespace std;

// void sum(int a, int b) {
//     cout<<a+b;
// }

// void sum(int a, int b,int c) {
//     cout<<a+b+c;
// }

// int main() {
//     sum(1,2,3);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int a = 5;
//     cout<<"a: "<<a <<endl;
//     int &b = a;
//     cout<<"b: "<<b <<endl;

//     cout<<"Address of a: "<<&a <<endl;
//     cout<<"Address of b: "<<&b <<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void srishti(int &x, int &y) {
//     int temp = x;
//     x = y;
//     y = temp;
// }

// int main() {
//     int a = 5;
//     int b = 9;
//     cout<<a<<" "<<b <<endl;
//     srishti(a,b);
//     cout<<a<<" "<<b <<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Number{
//     int a;

//     public:
//         void setval() {
//             cout<<"Enter the value of number: ";
//             cin>>a;
//         }
//         void getval() {
//             cout<<a<<endl;
//         }
// };

// int main() {
//     Number N[10];
//     for (int i = 0; i < 10; i++) {
//         N[i].setval();
//     }
//     for (int i = 0; i < 10; i++) {
//         cout<<"Number "<<i<<": ";
//         N[i].getval();
//         cout<<endl;
//     } 
//     return 0;
// }


// #include <iostream>
// using namespace std;

// struct Human {
//     string name;
//     int age;

//     Human(string _name,int _age) {
//         name = _name;
//         age = _age;
//     }

//     void print() {
//         cout<<"Name: "<<name<<endl;
//         cout<<"Age: "<<age;
//     }
// };

// int main() {
//     Human H1("kashyap",19);
//     H1.print();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Number {
//     int a;
    
//     public:
//         Number(){}

//         Number(int _a) {
//             a = _a;
//         }

//         void print() {
//             cout<<"a : "<<a<<endl;
//         }

//         Number operator +(Number n) {
//             a = a + n.a;//a.add(n)
//             return a;
//         }
// };

// int main() {
//     Number N1(5);
//     Number N2(6);
//     Number N3;
//     N3 = N1 + N2;
//     N3.print();


//     return 0;
// }

// #include <iostream>
// #include <typeinfo>
// using namespace std;

// int main() {
//     int x = 5;
//     cout<<typeid(x).name();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int& num(int &n) {
//     n = n + 10;
//     cout<<"n address: "<<&n<<endl;
//     return n;
// }

// int main() {
//     int x = 5;
//     cout<<"X before calling: "<<x<<endl;
//     int &y = num(x);
//     cout<<"Y: "<<y<<endl;
//     cout<<"address of Y:"<<&y<<endl;
//     cout<<"X after calling: "<<x<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Number {
//     int a;
    
//     public:
//         Number(){}

//         Number(int _a) {
//             a = _a;
//         }

//         void getdata() {
//             cout<<"Enter a number: ";
//             cin>>a;
//         }

//         void print() {
//             cout<<"a : "<<a<<endl;
//         }

//         Number operator +(Number n) {
//             a = a + n.a;
//             return a;
//         }
// };

// int main() {
//     // Number N1(5);
//     Number* N1 = new Number();
//     N1 -> getdata();
//     N1 -> print();
//     delete(N1);

//     return 0;
// }


// #include <iostream>
// using namespace std;

// class Number {
//     private:
//         int a;
    
//     public:
//         Number(int _a) {
//             a = _a;
//         }

//         void print();

// };

// void Number::print() {
//     cout<<a<<endl;
// }

// int main() {
//     Number N(5);
//     N.print();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void psr(int *_a) {
//     *_a = *_a+10;
//     cout<<*_a;

// }

// int main() {
//     int x = 5;
//     cout<<x<<endl;
//     psr(&x);
//     cout<<"After function calling: "<<x;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// inline int sqr(int a) {
//     cout<<a*a;
// }

// int main() {
//     sqr(5);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void sqr(int a) {
//     cout<<a*a;
// }

// int main() {
//     sqr(5);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Friends {
//     string name;

//     public:
//         Friends(string _name) {
//             name = _name;
//         }

//         void setname() {
//             cout<<"Enter the name: ";
//             cin>>name;
          
//         }

//         void print() {
//             cout<<name<<endl;
//         }

//         ~Friends() {
//             cout<<"Destructor called."<<endl;
//         }
// };

// int main() {
//     Friends f[3] = {{"kashyap"},{"srishti"},{"Harsh"}};
//     // for (int i = 0; i < 3; i++) {
//     //     f[i].setname();
//     // }
//     for (int i = 0; i < 3; i++) {
//         f[i].print();
//     }

    // Friends* F1 = new Friends();
    // F1->setname();
    // F1 -> print();
    // delete(F1);
    // return 0;
// }

// #include <iostream>
// using namespace std;

// struct name {
//     string name;

//     void getname() {
//         cout<<"Enter your name: ";
//         cin>>name;
//     }

//     void printname();
// };

// void name::printname() {
//     cout<<"The name is: "<<name<<endl;
// }

// int main() {
//     name n1;
//     n1.getname();
//     n1.printname();
//     return 0;
// }

// #include <iostream>
// #define num 5
// using namespace std;


// int main() {
//     for (int i = 0; i < num; i++) {
//         cout<<i<<endl;
//     }
//     return 0;
// }


#include <iostream>
using namespace std;

class A {
    protected:
        int num;
        friend void add(A &obj1, A &obj2);

    public:
        A(int _a) {
            num = _a;
        }

        void print() {
            cout<<num<<endl;
        }

        
};

void add(A &obj1, A &obj2) {
    cout<<obj1.num + obj2.num<<endl;

}

int main() {
    A a1(5);
    A a2(10);
    add(a1,a2);
    return 0;
}