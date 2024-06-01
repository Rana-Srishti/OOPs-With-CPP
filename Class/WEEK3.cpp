//Write a C++ program to create a structure called complex with variables real part and imaginary part

// #include <iostream>
// #include <math.h>
// using namespace std;

// struct complex {
//     float real;
//     float imaginary;
// }s1,s2;

// int main() {
//     float a,b;
//     cout<<"Enter real and imaginary part of 1st complex number: ";
//     cin>>s1.real>>s1.imaginary;
//     cout<<"Enter real and imaginary part of 2nd complex number: ";
//     cin>>s2.real>>s2.imaginary;

//     a = (s1.real) + (s2.real);
//     b = (s1.imaginary) + (s2.imaginary);

//     cout<<"sum of real part is: "<<a<<endl;
//     cout<<"sum of imaginary part is: "<<b;
//     return 0;
// }

//2.Write a C++ program to create a structure called complex with variables real part and imaginary part and
// #include <iostream>
// #include <math.h>
// using namespace std;

// struct complex {
//     float real;
//     float imaginary;
// }s1,s2;

// int main() {
//     float a,b;
//     cout<<"Enter real and imaginary part of 1st complex number: ";
//     cin>>s1.real>>s1.imaginary;
//     cout<<"Enter real and imaginary part of 2nd complex number: ";
//     cin>>s2.real>>s2.imaginary;

//     a = (s1.real) - (s2.real);
//     b = (s1.imaginary) - (s2.imaginary);

//     cout<<"difference of real part is: "<<a<<endl;
//     cout<<"difference of imaginary part is: "<<b;
//     return 0;
// }

//3. Write a cpp program to write a employee structure to store name,id, salary and department.

// #include <iostream>
// using namespace std;

// struct Employee {
//     string name;
//     int id;
//     int salary;
//     string dept;
// }e1;

// int main() {
//     cout<<"Employee Name, ID, Department, Salary: ";
//     cin>>e1.name>>e1.id>>e1.dept>>e1.salary;

//     cout<<e1.name<<" "<<e1.id<<" "<<e1.dept<<" "<<e1.salary;
//     return 0;
// }

//4.
// #include <iostream>
// using namespace std;

// struct Student {
//     string name;
//     int id;
//     string sub_1,sub_2,sub_3;
//     string dept;
// }e1;

// int main() {
//     cin>>e1.name>>e1.id>>e1.dept>>e1.salary;

//     cout<<e1.name<" "<<<e1.id<<" "<<e1.dept<<" "<<e1.salary;
//     return 0;
// }

//write a c++ program to create a class called car with variables brand model and year of manufacture

// #include <iostream>
// using namespace std;

// class car {
//     public:
//         string name,model;
//         int year;
// };

// int main() {
//     car c1;
//     car c2;
//     c1.name = "Suzuki";
//     c1.model = "Swift";
//     c1.year = 2020;

//     c2.name = "Tata";
//     c2.model = "punch";
//     c2.year = 2021;

//     cout<<c1.name<<" "<<c1.model<<" "<<c1.year<<endl;
//     cout<<c2.name<<" "<<c2.model<<" "<<c2.year;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class wall {
//     private:
//         double length;
//         double height;

//     public:
//     wall(double len,double hgt) {
//         length  = len;
//         height =  hgt;
//     }
//     double area() {
//         return length*height;
//     }
//     ~wall() {
//         cout<<"the Destructor has been called."<<endl;
//     }

// };

// int main() {
//    wall wall1(10.5,8.6);
//    wall wall2(8.5,6.3);
//    cout<<wall1.area()<<endl;
//    cout<<wall2.area()<<endl;
//     return 0;
// }

//write a c++ program to overlaod the constructor funciton and illustrate default constructor, parametiezed constructor, and copy cunstrucotr using a  class called cube and variable side and .

// #include <iostream>
// using namespace std;

// class cube {
//     public: 
//         int side;
    
//     cube() {
//         side = 0;
//         cout<<side<<endl;
//         cout<<"default constructor"<<endl;
//     }

//     cube (int x) {
//         side = x;
//         cout<<side<<endl;
//         cout<<"parameterised constructor"<<endl;
//     }

//     cube(const cube &c) {
//         side = c.side;
//         cout<<side<<endl;
//         cout<<"copy constructor"<<endl;
//     }
// };

// int main() {
//     cube cube1(4);
//     cube cube2 = cube1;
//     return 0;
// }

//illsutrate cons and des of a class using class called file.

// #include<iostream>
// using namespace std;

// class File {
//     string filename;

// public:
//     // Constructor
//     File(string name) {
//         filename = name;
//         cout << "File '" << filename << "' is opened." <<endl;
//     }

//     // Destructor
//     ~File() {
//         cout << "File '" << filename << "' is closed." <<endl;
//     }

//     void display() {
//         cout << "The file name is: " << filename <<endl;
//     }
// };

// int main() {
//     // Create an object of the class File
//     File myFile("Demo.txt");
//     myFile.display();

//     return 0;
// }

//write a cpp program ot illustrate constructors and distructors using student class.

// #include <iostream>
// using namespace std;

// class student {
//  public:
//     string name;
//     int rollno;

//     student(string n,int r): name(n),rollno(r){
//         cout<<"The constructor function is executed"<<endl;
//     }

//     ~student() {
//         cout<<"\n the destructor function is executed"<<endl;
//     }
// };

// int main() {
//     student s1("Alice",101);
//     student s2("Srishti",102);
//     return 0;
// }

//write a cpp program to demostrate the role of copy constructors using an class called bank account.

#include <iostream>
using namespace std;

class BankAccount {
    public:
        int accountNumber;
        double balance;

        BankAccount(int accountNumber, double balance) : 
        accountNumber(accountNumber), 
        balance(balance) {}

        BankAccount(const BankAccount& other) : 
        accountNumber(other.accountNumber), 
        balance(other.balance) {}
};
int main() {
    BankAccount a1(100,1000);
    BankAccount a2(a1);
    a1.balance = 500;

    cout<<"a2 balance: "<<a2.balance<<endl;
    return 0;
}
