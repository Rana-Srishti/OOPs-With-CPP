// #include <iostream>
// using namespace std;

// //Functions in C++
// int add (int a, int b) {
//     return a+b;
// }

// int main() {
//     int a,b;
    // cout<<"Enter a Number: ";
    // cin>>a;
    // cout<<"Enter another Number: ";
    // cin>>b;

//     cout<<a<<" + "<<b<<" = "<<add(a,b);
//     return 0;
// }


//Default Argument Function

// #include <iostream>
// using namespace std;

// int Multiply(int a, int b = 1) {
//     cout<<a<<" * "<<b<<" = "<<a*b<<endl;

// }

// int main() {
//     int a,b;
//     cout<<"Enter a Number: ";
//     cin>>a;
//     cout<<"Enter another Number: ";
//     cin>>b;
//     Multiply(a,b);
//     Multiply(a);

    
//     return 0;
// }


//Inline Function

// #include <iostream>
// using namespace std;

// inline void  POWFour(int a = 1) {
//     cout<<a<<" to the power 4 is: "<<a*a*a*a<<endl;
// }

// int main() {
//     for(int i = 1; i < 11; i++) {
//     POWFour(i);
// }
//     return 0;
// }

//Exception Handling

// #include <iostream>
// using namespace std;


// int main() {
//     int a,b;
//     cout<<"Enter a number: ";
//     cin>>a;
//     cout<<"Enter another number: ";
//     cin>>b;

//     try {
//         if (b != 0) {
//             cout<<a/b<<endl; 
//         }
//         else {
//             throw "Division by zero not possible";
//             // throw 101;
//         }
//     }
//     //String Exception
//     catch(const char * txtErr) { //const is required
//             cout<<"Exception: "<<txtErr;
//     }

//     //Int Exception
//     catch(int exCode) {
//         cout<<"Exception: "<<exCode<<endl;
//     }

//     //Default Handler
//     catch(...) {
//         cout<<"Exception..."<<endl;
//     } 
   
//     return 0;
// }


//Defining a class and their access specifier

// #include <iostream>
// using namespace std;

// class MicroComputers {
//     private: //Not accessible directly outside the funciton
//         string Name;
//         string Processor;
//         int Ram;
//         int Rom;
//         int Battery;

//     public: 
//         //Default Constructor
//         MicroComputers() {}

//         //Parameterized Constructor
//         // MicroComputers(string _Name, string _Processor, int _Ram, int _Rom, int _Battery) {
//         //     Name = _Name;
//         //     Processor = _Processor;
//         //     Ram = _Ram;
//         //     Rom = _Rom;
//         //     Battery = _Battery;
//         // }

//         // Constructor
//         MicroComputers(string _Name, string _Processor, int _Ram = 8, int _Rom = 256, int _Battery = 12000) {
//             Name = _Name;
//             Processor = _Processor;
//             Ram = _Ram;
//             Rom = _Rom;
//             Battery = _Battery;
//         }


//         //To show the Data
//         void PrintData() {
//             cout<<"Company: "<<Name<<endl;
//             cout<<"Processor: "<<Processor<<endl;
//             cout<<"RAM: "<<Ram<<endl;
//             cout<<"ROM: "<<Rom<<endl;
//             cout<<"Battery Capacity: "<<Battery<<" mah."<<endl;
//         }

//         //Defining a Destructor
//         ~MicroComputers() {
//             cout<<"Destructor has been Called"<<endl; //Will be printed automatically and is printed in the end of the code.
//         }
 
// };

// int main() {
//     //Declaring an object
//     MicroComputers M1("ASUS Vivobook","Ryzer 5600-H",16,512,21000); //Creating an object
//     M1.PrintData();

//     //Declaring an empty object
//     MicroComputers M2();
//     //M2.PrintData(); //Not possible as there is no data;

//     //Declaring object using Defuault Parameter Constructor
//     MicroComputers M3("Realme Book Slim","Intel I3 H-Series");
//     M3.PrintData();
//     return 0;
// }


//Learning about Copy Constructor and How to Use it and Delaring a member function outside the class

// #include <iostream>
// using namespace std;

// class Number {

//     int a; // If not declared under any access specifier, then by default it is private

//     public: 
//         Number() {}

//         Number(int _a) {
//             a = _a;
//         }

//         /*Creating a Copy Constructor. These are basically used when one want to create a copy of an object. If copy constructor is not created then a defualt
//         copy constructor is always provided by the compiler */

//         Number (Number &obj) {
//                 cout<<"Copy Consturctor has been called."<<endl;
//                 a = obj.a;
//         }

//         void printNum();

//         ~Number() {cout<<"Destructor has been called."<<endl;}
// };

// // Defining a member function outside its class

// void Number:: printNum() {
//     cout<<"The number is: "<<a<<endl;
// }

// int main() {
//     Number N1(69);
//     Number N2(N1);
//     Number N3 = N2;

//     N1.printNum();
//     N2.printNum();
//     N3.printNum(); // Copy constructor called twice and destructor called thrice.
//     return 0;
// }


//Array of objects

// #include <iostream>
// using namespace std;

// class Number{
//     private:    
//         int a;

//     public:
//         Number() {}

//         Number(int _a) {
//             a = _a;
//         }

//         void setNum() {
//             cout<<"Enter a Number: ";
//             cin>>a;
//         }

//         void getNum() {
//             cout<<"The number is: "<<a<<endl;
//         }
// };

// int main() {
//     //Creating an array of Number.
//     Number num[5];
    
//     //To take the input for all the objects in an array. Here by default objects are named as numbers.
//     for (int i = 0; i < 5; i++) {
//         num[i].setNum();
//     }

//     //Seperate loop to get Num
//     for (int i = 0; i < 5; i++) {
//         num[i].getNum();
//     }
//     return 0;
// }

//Dynamic Objects

//Friend Function

// #include <iostream>
// using namespace std;

// class Number{
//     int a;
//     int b;

//     public:
//         Number () {}

//         Number (int _a, int _b) {
//             a =_a;
//             b = _b;
//         } 

//         friend void sum(Number& Num);

// };

// void sum(Number& Num) {
//     cout<<Num.a + Num.b<<endl;
// }

// int main() {
//     Number N1(2,4);
//     sum(N1);
//     return 0;
// }


//Inheritance

// #include <iostream>
// using namespace std;

// class Employee {
//     private:
//         int id;
//         float salary;

//     public:
//         Employee() {cout<<"Default constructor"<<endl;}
        
//         Employee(int _id, float _salary) {
//             id = _id;
//             salary = _salary;
//             cout<<"Base class constructor called"<<endl;
//         }

//         void disp() {
//             cout<<"Employee ID: "<<id<<endl;
//             cout<<"Employee Salary: "<<salary<<endl;
//         }


// };

// class programmer : public Employee {
//     int leetcodeRank;

//     public:
//         programmer() {}

//         programmer(int i, float s, int _rank):Employee(i,s) {
//             leetcodeRank = _rank;
//             cout<<"Derived class parameter constructor is called"<<endl;
//         } 

//         void disp() {
//             Employee ::disp();
//             cout<<"Employee LeetcodeRank: "<<leetcodeRank<<endl;
//         }
// };

// int main() {
//     // Employee Kashyap(1001,20000);
//     // Employee Srishti(1002,20000000);
//     // Kashyap.disp();
//     // Srishti.disp();
//     programmer Kashyapu(1003,50000,1234);
//     Kashyapu.disp();

//     return 0;
// }


//pass by reference

// #include <iostream>
// using namespace std;

// void add(int &a) {
//     a = a + 5;
// }

// int main() {
//     int a = 5;
//     cout<<"Before passing reference a: "<<a<<endl;
//     cout<<"Address of a: "<<&a<<endl;
//     add(a);
//     cout<<"After passing reference a: "<<a<<endl;
//     cout<<"Address of a: "<<&a<<endl;
//     return 0;
// }

//function returning reference

// #include <iostream>
// using namespace std;

// int& add(int &a) {
//     a = a+10;
//     return a;
// }

// int main() {
//     int a = 100;
//     cout<<"Before reference: "<<a<<endl;
//     add(a);
//     cout<<"After reference: "<<a<<endl;
//     cout<<"Address of a: "<<&a<<endl;
//     int &x = add(a);
//     cout<<"Storing in a variable: "<<x<<endl;
//     cout<<"address of X: "<<&x<<endl;

//     return 0;
// }


//Friend class

// #include <iostream>
// using namespace std;

// class Num {
//     private:
//         int a;
    
//     public:
//         Num() {}
//         Num(int _a) {
//             a = _a;
//         }

//         friend class disp;
// };

// class disp {
//     public:
//         disp(Num &obj) { //cosntructor itself is taking the input. We can also make a member function that will take the object as an input.
//             cout<<"the number is: "<<obj.a<<endl;
//         }
// };



// int main() {
//     Num n1(5);
//     disp d1(n1);
//     return 0;
// }

//That famous swapping code usign reference

// #include <iostream>
// using namespace std;

// void swap(int &a, int &b) {
//     int temp = a;
//     a = b;
//     b = temp;
// }

// int main() {
//     int a = 5;
//     int b = 6;

//     cout<<"Before passing: a "<<a<<" b "<<b<<endl;

//     swap(a,b);
//     cout<<"After passing: a "<<a<<" b "<<b<<endl;
//     return 0;
// }

// Function overloading

// #include <iostream>
// using namespace std;

// void add (int a, int b, int c) {
//     cout<<"The sum is: "<<a+b+c<<endl;
// }

// void add (int a, int b) {
//     cout<<"The sum is: "<<a+b<<endl;
// }

// int main() {
//     add(1,2);
//     return 0;
// }


// #include <iostream>
// using namespace std;

// class Num {
//     private:    
//         int a;
    
//     public:
//         Num () {}
//         Num (int _a) {
//             a = _a;
//         }

//         void printNum() {
//             cout<<"The Number is: "<<a<<endl;
//         }

//         void add(int b) {
//             cout<<"The sum of "<<a<<" and "<<b<<" is: "<<a+b<<endl;
//         }

//         ~Num() {
//            cout<<"Destructor is being called"<<endl;
//         }

// };

// int main() {
//     Num* n1 = new Num(5);
//     n1->printNum();
//     delete(n1);
//     return 0;
// }

//Array of objects

// #include <iostream>
// using namespace std;

// class Age {
//     private:
//         int age;

//     public: 
//         Age() {}
//         Age(int _age) {
//             age = _age;
//         }

//         void setAge() {
//             int _age;
//             cout<<"Enter the age: ";
//             cin>>_age;
//             age = _age;
//         }

//         void printAge() {
//             cout<<"The age is: "<<age<<endl;
//         }

//         ~Age() {}
// };

// int main() {
//     string names[] = {"kashayp","srishti"};
//     Age a[2];

//     for (int i = 0; i < 2; i++) {
//         a[i].setAge();
//     }

//     // for (int i = 0; i < 2; i++) {
//     //     a[i].printAge();
//     // }

//     a[1].printAge();
//     return 0;
// }


//Class Template

// #include <iostream>
// using namespace std;

// template <class T>
// class Data {
//     private:    
//         T a;
//         T b;

//     public:
//         Data() {}
//         Data(T _a, T _b) {
//             a = _a;
//             b = _b;
//         }

//         void printData() {
//             cout<<"a stores: "<<a<<endl;
//             cout<<"b stores: "<<b<<endl;
//         }

//         void join() {
//             cout<<"The join is: "<<a+b<<endl;
//         }
// };

// int main() {
//     Data<int> D1(1,2);
//     D1.printData();
//     D1.join();
//     cout<<endl;
//     Data<string> D2("kashyap","srishti");
//     D2.printData();
//     D2.join();
    
//     return 0;
// }


// #include <iostream>
// using namespace std;

// template <class T>
// void sum(T a, T b) {
//     cout<<"The sum is: "<<a+b<<endl;
// }

// int main() {
//     sum(3,4);
//     string s1 = "kashyap";
//     string s2 = "Srishti";
//     sum(s1,s2);
//     return 0;
// }


// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> Nums;
//     for (int i = 0; i < 11; i++) {
//         Nums.push_back(i);
//     }

//     for (int i = 0; i < Nums.size(); i++) {
//         cout<<Nums[i]<<" ";
//     }cout<<endl;

//     cout<<"The last element is: "<<Nums.back()<<endl;
//     cout<<"The first element is: "<<Nums.front()<<endl;
//     cout<<"the capacity is: "<<Nums.capacity()<<endl;
//     cout<<"Element at index 4 is: "<<Nums.at(4)<<endl;
//     Nums.insert(Nums.begin()+4,69);
//         for (int i = 0; i < Nums.size(); i++) {
//         cout<<Nums[i]<<" ";
//     }cout<<endl;
//     return 0;
// }

//Method overriding

// #include <iostream>
// using namespace std;

// class A {
//     public:
//      void print() {
//         cout<<"Class A"<<endl;
//       }
// };

// class B : public A {
//     public:
//       void print() {
//         cout<<"Class B"<<endl;
//       }
// };

// int main() {
//     A *a;
//     a = new B;
//     a -> print();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Num {
//     private:    
//         int a;
    
//     public:
//         Num () {}
//         Num(int _a) {
//             a = _a;
//         }

//         void print() {
//             cout<<"The value of a: "<<a<<endl;
//         }

//         Num operator+(Num &obj) {
//             cout<<this->a+obj.a<<endl;
//         }
// };

// int main() {
//     Num N1(4);
//     Num N2(5);
//     Num N3 = N1+N2;
//     N3.print();
//     return 0;
// }



// #include <iostream>
// using namespace std;

// class A {
//     protected:    
//         int a;
//     public:
//         A() {}
//         A(int _a) {
//             a = _a;
//         }

//         void show() {
//             cout<<"Printing from class A."<<endl;
//             cout<<"The data stored is: "<<a<<endl;
//         }
// };

// class B {
//     protected:    
//         int b;
//     public: 
//         B() {}
//         B(int _b) {
//             b = _b;
//         }

//         void show() {
//             cout<<"Printing from class B."<<endl;
//             cout<<"The data stored is :"<<b<<endl;
//         }

// };

// class C : public A, public B {
    // private:
    //     int c;
    // public:
    //    C() {}
    //    C(int _a,int _b,int _c) : A(_a),B(_b) {
    //      c = _c;
    //    } 
    //    void show()  {
    //     A::show();
    //     cout<<endl;
    //     B::show();
    //     cout<<endl;
    //     cout<<"The value stored in Class C: "<<c<<endl;
    //    }


// };

// int main() {
//     C c1(1,2,3);
//     c1.show();
//      return 0;
// }

// #include <iostream>
// using namespace std;

// class common {
//     private:
//         int num;

//     public:
//         common() {}
//         common(int _num) {
//             num = _num;
//         }

//         void setnum(int _num) {
//             num = _num;
//         }

//         void show() {
//             cout<<"The common base value is: "<<num<<endl;
//         }
// };

// class A: virtual public common {
//     private:
//         int a;
//     public: 
//         A() {}
//         A(int _a) {
//             a = _a;
//         }
//         void show() {
//             cout<<"Showing from class A."<<endl;
//             cout<<"The data stored is: "<<a<<endl;
//         }
// };

// class B: virtual public common {
//     private:
//         int b;
//     public:
//         B() {}
//         B(int _b) {
//             b = _b;
//         }
//         void show() {
//             cout<<"Showing from class B."<<endl;
//             cout<<"The data stored is: "<<b<<endl;
//         }
// };

// class Derived: public A, public B {
//     private:
//         int c;
//     public:
//        Derived() {}
//        Derived(int _a,int _b,int _c) : A(_a),B(_b) {
//          c = _c;
//        } 
//        void show()  {
//         A::show();
//         cout<<endl;
//         B::show();
//         cout<<endl;
//         cout<<"The value stored in Class C: "<<c<<endl;
//        }

// };

// int main() {
//     Derived D1;
//     D1.setnum(5);
//     D1.common::show();
//     return 0;
// }

// #include <iostream>
// #include <stack>
// using namespace std;

// int main() {
//     stack<int> mystk;

//     mystk.push(1);
//     mystk.push(2);
//     mystk.push(3);
    
//     mystk.pop();

//     cout<<mystk.top()<<endl;
//     cout<<mystk.size()<<endl;
//     cout<<mystk.empty()<<endl;
//     return 0;
// }

// #include <iostream>
// #include <list>
// using namespace std;

// int main() {
//     list<int> l;
//     for (int i = 0; i < 6; i++) {
//         l.push_back(i);
//     }

//     cout<<"the first element in the list is: "<<l.front()<<endl;
//     cout<<"The last element in the list is: "<<l.back()<<endl;

//     cout<<"All elements in my list are: ";
//     for (int x:l) {
//         cout<<x<<" ";
//     }cout<<endl;

//     cout<<"Size of my list is: "<<l.size()<<endl;
//     l.pop_back();
//      cout<<"All elements in my list are: ";
//     for (int x:l) {
//         cout<<x<<" ";
//     }cout<<endl;

//     l.clear();
//     cout<<"Is the list empty: "<<(l.empty() ? "Yes":"No")<<endl;

//     return 0;
// }


//Maps

// #include <iostream>
// #include <map>
// using namespace std;

// int main() {
//     map<int,string> mmap;
//     mmap.insert({1,"Kashyap"});
//     mmap.insert({2,"Srishti"});
//     mmap.insert({3,"Srishti"});

//     mmap[3] = "C++";

//     for(const auto& pair:mmap) {
//         cout<<pair.first<<":"<<pair.second<<endl;
//     }

//     cout<<"the size of map is: "<<mmap.size()<<endl;

//     auto it = mmap.find(2);
//     if (it != mmap.end()) {
//         cout<<"the element with key 2 is: "<<it->first<<":"<<it->second<<endl;
//     } 
//     return 0;
// }

