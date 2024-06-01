//UNIT - 2

//1. Write a c++ to demostrate use of array of objects by creating the objects of student class.
// #include <iostream>
// using namespace std;

// class student {
//     public:
//         string name;
//         int rollno;
// };

// int main() {
//     student students[3] = {{"Anvi",001},{"Srishti",002},{"Harsh",003}};
//     for (int i = 0; i < 3; i++) {
//         cout<<students[i].name<<" "<<students[i].rollno<<endl;
//     }

//     return 0;
// }


//2. write a C++ program dispaly array of objects usign the class called book,book name and price of the book and with the member funciton get data adn put data.
// #include <iostream>
// using namespace std;

// class books{
//     public:
//         char title[30];
//         float price;
//     public:
//         void getdata();
//         void putdata();

// };
// void books::getdata() {
//     cout<<"Title: ";cin>>title;
//     cout<<"Price: ";cin>>price;
// }
// void books::putdata() {
//     cout<<" Title: "<<title<<" "<<"price: "<<price<<endl;
   
// }

// int main() {
//     books b[4];
//     for (int i = 0; i < 2; i++) {
//         cout<<"Enter details of book: "<<(i+1)<<endl;
//         b[i].getdata();
//     }
//     for (int i = 0; i < 2; i++) {
//         cout<<"Book: "<<(i+1);
//         b[i].putdata();
//     }
//     return 0;
// }


//3.Write a C++ program to create a friend funciton usign key word friend 
// #include <iostream>
// using namespace std;

// class Complex {
//     private:
//         double width;
//     public:
//         friend void printwidth(Complex complex);
//         void setwidth(double wid);
// };

// void Complex::setwidth(double wid) {
//     width = wid; 
// }
// void printwidth(Complex complex) {
//     cout<<complex.width;
// }

// int main() {
//     Complex complex;
//     complex.setwidth(14);
//     printwidth(complex);
//     return 0;
// }

//using class A create a friend function

// #include <iostream>
// using namespace std;

// class A {
// private:
//     int x;

// public:
//     A() {
//         x = 10;
//     }
//     friend int increment(A a);
// };

// int increment(A a) {
//     a.x += 1;
//     return a.x;
// }

// int main() {
//     A a;
//     cout << increment(a);
//     return 0;
// }


//demonstrate friend fucniton using class box and private member length return the length of the box usingn the friend fucntion.

// #include <iostream>
// using namespace std;

// class box {
//     private:
//         int length;

//     public:
//         box(): length(0) {}
//         friend int printLength(box);
// };

// int printLength(box b) {
//     b.length += 10;
//     return b.length;
// }

// int main() {
//     box b;
//     cout<<"Length of box: "<<printLength(b)<<endl;
//     return 0;
// }

//Write a C++ program ot illustrate friend fucnciton called maximum and friend fuciton is friend to bothe class a and class b and check if class a number is gretater or class b number is greater
// #include <iostream>
// using namespace std;

// class B; // Forward declaration

// class A {
// private:
//     int x;

// public:
//     A() {
//         x = 10;
//     }
//     void setdata(int i) {
//         x = i;
//     }
//     friend void max(A a, B b);
// };

// class B {
// private:
//     int y;

// public:
//     void setdata(int i) {
//         y = i;
//     }
//     friend void max(A a, B b);
// };

// void max(A a, B b) {
//     if (a.x > b.y) {
//         cout<< a.x;
//     } else {
//         cout << b.y;
//     }
// }

// int main() {
//     A a;
//     B b;
//     a.setdata(10);
//     b.setdata(20);
//     max(a, b);
//     return 0;
// }

//to demonstrate friend concept usign class A and Class B use class A object in class B

// #include <iostream>
// using namespace std;

// class A {
//     int x = 5;
//     friend class B;
// };

// class B {
//     public:
//         void display(A &a) {
//             cout<<"X: "<<a.x;
//         }
// };

// int main() {
//     A a;
//     B b;
//     b.display(a);
//     return 0;
// }

//write a C++ program ot demonstrsate a concept called friend classes using the class called class coutnter and class printer

// #include <iostream>
// using namespace std;

// class counter {
//     private: 
//         int count;
//     public:
//         counter(): count(0) {}
//         void increment() {count++;}
//         friend class printer;
// };

// class printer {
//     public:
//         void printcount(const counter& c) {
//             cout<<"count: "<<c.count<<endl;
//         }

// };

// int main() {
//     counter c;
//     c.increment();
//     c.increment();

//     printer p;
//     p.printcount(c);

//     return 0;
// }

//Write a c++ program to demostrate the dynamic objects using new operator and create a object during run time.
// #include <iostream>
// using namespace std;

// class greating {
//     int* ptr;
//     public:
//         greating() {
//             ptr = new int;
//             *ptr = 10;
//         }
//         void display() {
//             cout<<*ptr<<endl;
//         }
// };

// int main() {
//     greating obj1;
//     obj1.display();
//     return 0;
// }

//Write a C++ program to create objects dynamically using new and delete operator for the class book using the arrow operator to access the objects.

// #include <iostream>
// using namespace std;

// class book {
//     public:
//         string title;
//         string author;
//         book(string t,string a): title(t),author(a) {}
//         ~book() {
//             delete this;
//         }
// };

// int main() {
//     book* book1 = new book("The lord of rings","J.R.R.Tolkien");
//     cout<<"Book title: "<<book1 ->title<<endl;
//     cout<<"Book Author: "<<book1 ->author<<endl;
//     delete book1;
//     return 0;
// }

// Write a C++ program to implement container class using classes class first and class second
#include <iostream>
using namespace std;

class first {
    public:
    first() {
    cout<<"This is first class"<<endl;
    }
};

class second {
    first f;
    public:
        second() {
            cout<<"Hello from the second class"<<endl;
        }
};

int main() {
    second s;
    return 0;
}