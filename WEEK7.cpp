//wrie a C++ program to illustarte virtual funciton concept using base class virtual fucniton and redesing the same funciotn in derived class call the funciton in the main program and illustrate funciton overriding.

// #include <iostream>
// using namespace std;

// class x {
//     public:
//         void f() {
//             cout<<'x';
//         }
// };

// class y: public x {
//     public:
//         void f() {cout<<'y';}
// };

// int main() {

//     x a; a.f();
//     y b; b.f();
//     x *p = &a;
//     p ->f();
//     x*q = &b;
//     q->f();

// }


// #include <iostream>
// using namespace std;

// class x {
//     public:
//         virtual void f() {
//             cout<<'x';
//         }
// };

// class y: public x {
//     public:
//         void f() override {cout<<'y';}
// };

// int main() {

//     x a; a.f();
//     y b; b.f();
//     x *p = &a;
//     p -> f();
//     p = &b;
//     p->f();
//     return 0;
// }

//Write a C++ program to illustrate run time polymorphism by creating funciton overriding concpet by having same funciton in both base and derived class using base class naimal and derived class cat and dog

// #include <iostream>
// using namespace std;

// class Animal {
//     public:
//         void animalSound() {
//             cout<<"The animal makes a sound"<<endl;
//         }
// };

// class Cat : public Animal {
//     public:
//         void animalSound() {
//             cout<<"The cat says Meowwww"<<endl;
//         }
// };

// class Dog : public Animal {
//     public:
//         void animalSound() {
//             cout<<"The dog say: bhoww woow"<<endl;
//         }
// };

// int main() {
//     Dog herdog;
//     herdog.animalSound();
//     Cat mycat;
//     mycat.animalSound();
//     return 0;
// }



// #include <iostream>
// using namespace std;

// class Base {
//     public:
//         void display() {
//             cout<<"I am base"<<endl;
//         }
// };

// class derived : public Base {
//     public:
//     void display() {
//         cout<<"I am derived"<<endl;
//     }
// };

// int main() {
//     Base b;
//     Base *p;
//     b.display();
//     derived d;
//     d.display();
//     p -> display();
//     return 0;
// }

//implement function overridign using base class car and derived class sport car by having same funcion change_gear in both base and derived class and call objects in main program

// #include <iostream>
// using namespace std;

// class car {
//     private:    
//         int gear;
//     public:
//         void change_gear(int gear) {
//             gear++;
//             cout<<"Base class gear is called: "<<gear<<endl;
//         }
// };

// class sportscar: public car {
//     public: 
//         void change_gear(int gear) {
//             if (gear > 5) {
//                 gear++;
//                 cout<<"Derived class gear is called: "<<gear<<endl;
//             }
//             car::change_gear(gear);
//         }
// };

// int main() {
//     sportscar sc;
//     sc.change_gear(4);
//     return 0;
// }

//to implement run time polymorphism using virtual funciton conccep using class base and derived

// #include <iostream>
// using namespace std;

// class Base {
// public:
//     virtual void show() {
//         cout << "Showing base class" << endl;
//     }
//     void display() {
//         cout << "Displaying base class" << endl;
//     }
// };

// class Derived: public Base {
// public:
//     void display() {
//         cout << "Displaying derived class" << endl;
//     }
//     void show() override {
//         cout << "Showing derived class" << endl;
//     }
// };

// int main() {
//     Base b;
//     Base *ptr;
//     cout << "ptr points to base";
//     ptr = &b;
//     ptr->display();
//     ptr->show();
//     cout << "ptr points to derived" << endl;
//     Derived d;
//     ptr = &d;
//     ptr->display();
//     ptr->show();
//     return 0;
// }

//difference between run time and compile time polymorphism and 

// #include <iostream>
// using namespace std;

// class x {
//     public:
//         void f1() {
//             cout<<"xf1";
//         }
//         virtual void f2() {
//             cout<<"xf2";
//         }
// };

// class y: public x {
//     public:
//         void f1() {
//                 cout<<"yf1";}
//             void f2() {cout<<"yf2";}
        
// };

// int main() {
//     x a;
//     a.f1();
//     a.f2();
//     y b;
//     b.f1();
//     b.f2();
//     x *p = &a;
//     p -> f1();
//     p ->f2();
//     x *pb = &b;
//     pb -> f1();
//     pb -> f2();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Base {
// public:
//     virtual void show() {
//         cout << "Showing base class" << endl;
//     }
// };

// class Derived : public Base {
// public:
//     void show() override {
//         cout << "Showing derived class" << endl;
//     }
// };

// int main() {
//     Base baseObj;
//     baseObj.show();

//     Derived derivedObj;
//     derivedObj.show();

//     Base *basePtr;
    
//     basePtr = &baseObj;
//     basePtr->show();

//     basePtr = &derivedObj;
//     basePtr->show();

//     return 0;
// }


// #include <iostream>
// using namespace std;

// class BaseClass {
// public:
//     virtual void Function() = 0;
// };

// class DerivedClass : public BaseClass {
// public:
//     void Function() override {
//         cout << "The Derived Class is Executed" << endl;
//     }
// };

// int main() {
//     DerivedClass o1;
//     DerivedClass* p;
//     p = &o1;
//     p->Function();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Shape {
// protected:
//     float x, y;

// public:
//     void get() {
//         cin >> x >> y;
//     }

//     virtual void area() = 0;
// };

// class Rectangle : public Shape {
// public:
//     void area() override {
//         cout << "Area of rectangle: " << x * y << endl;
//     }
// };

// int main() {
//     Rectangle r;
//     Shape* p = &r;
//     p->get();
//     p->area();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Base{
//     public:
//     virtual void print(){
//         cout << "This is base print" << endl;
//     }
//     void show(){
//         cout << "Base show function" << endl;
//     }
// };

// class Derived : public Base{
//     public:
//     virtual void print() override {
//         cout << "This is base print" << endl;
//     }
//     void show(){
//         cout << "Base show function" << endl;
//     }
// };

// int main(){
//     Base *bptr;
//     Derived der;
//     bptr = &der;
//     bptr -> print();
//     bptr -> show();

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Animal {
// public:
//     virtual void speak() {
//         cout << "This is the animal speaking." << endl;
//     }
// };

// class Dog : public Animal {
// public:
//     void speak() override {
//         cout << "The dog barks." << endl;
//     }
// };

// int main() {
//     Animal *animalPtr = new Dog();
//     animalPtr->speak();
//     delete animalPtr;
//     return 0;
// }

#include <iostream>
using namespace std;

class Shape {
public:
    Shape() {
        cout << "Shape created." << endl;
    }
};

class Colour {
public:
    Colour() {
        cout << "Colour assigned." << endl;
    }
};

class Circle : public Shape, public Colour {
public:
    Circle() {
        cout << "Circle created with shape and colour." << endl;
    }
};

int main() {
    Circle c;
    return 0;
}
