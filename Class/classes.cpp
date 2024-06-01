#include <iostream>

using namespace std;

// class myname {
//     string name;
// public:
//     void printname();
// };

// void myname::printname() {
//     cout<<"Enter your name: ";
//     cin>>name;
//     cout<<"Name is: "<<name;
// }

// int main() {
//     myname n1;
//     n1.printname();
//     return 0;
// }

// class friends {
// public:
//     string name;
// public:
//     void print();
// };

// void friends::print() {
//     for (int i = 0; i < 3; i++) {
//     cout<<"Enter three names: ";
//     cin>>name;
//     }
// }

// int main() {

// }

class Counter {
    int number;
public:
    Counter() : number(0) {}  
    void increment() { ++number; }
    int getNumber() { return number; }
};

int main() {
    Counter counter;
    counter.increment();
    cout << "Number: " << counter.getNumber() <<endl;
    return 0;
}
