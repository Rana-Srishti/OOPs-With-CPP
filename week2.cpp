//12th feb

// 1. C++ program using Classes and objects,myname class to read and display your name using object n1 and member function printname():
// #include <iostream>
// using namespace std;

// class myname {   
// public:  
//     string name;
   
//     void printname() {
//             cout<<"Hello! "<<name;
//         }
// };
// int main() {
//     myname n1;
//     n1.name = "Kashyap";
//     n1.printname();
//     return 0;
// }


// 2. C++ program to illustrate Classes and objects, using friends class to get your 3 friends name and display using multiple objects.
// #include <iostream>
// using namespace std;

// class friends {
// public:
//     string name;

//     void get_info() {
//         cout<<"Enter the name of friend: ";
//         cin>>name;
//     }

//     void show_info() {
//         cout<<"Name of a friend is: "<<name<<endl;
//     }
// };

// int main() {
//     friends f1;
//     friends f2;
//     friends f3;
//     f1.get_info();
//     f2.get_info();
//     f3.get_info();
//     f1.show_info();
//     f2.show_info();
//     f3.show_info();
//     return 0;
// }

// 3. C++ program to demonstrate the use of Classes and objects,Using Circle class, with radius as public variable,And compute area(): function to read and display radius data member and area function.
// #include <iostream>
// using namespace std;

// class circle {
//     public:
//     int radius;

//     void Area() {
//         cout<<"Enter the radius: ";
//         cin>>radius;
//         int ar = 3.14*radius*radius;
//         cout<<"The area of the circle with radius "<<radius<<" is: "<<ar;
//     }
// };

// int main() {
//     circle c1;
//     c1.Area();

//     return 0;
// }

// 5. C++ program to illustrate Classes and objects using counter class with member function declared and defined with the class and display count
// #include <iostream>
// using namespace std;

// class counter {
//     int count = 0;
//     public:
//         void increment() {
//             count++;
//         }
//         int disp_count() {
//             return count;
//         }
// };

// int main() {
//     counter c1;
//     cout<<"Counter value at start: "<<c1.disp_count()<<endl;;
//     c1.increment();
//     cout<<"Counter value after an increment: "<<c1.disp_count()<<endl;
//     c1.increment();
//     cout<<"Counter value after two increments: "<<c1.disp_count()<<endl;
//     return 0;
// }

// 6. C++ program to illustrate Classes and objects 0f Employee class, set empid, emp name, emp department, and salary using ACCESS SPECIFIERS Private public and protected data members and functions.
// #include <iostream>
// using namespace std;

// class Employee {
//     public:
//         int Emp_ID;
//         string Emp_Name;

//     private:
//         int Emp_Salary;
        
    
//     protected:
//         string Emp_Dept;

//     public:
//         void SetSalary(int sal) {
//             Emp_Salary = sal;
//         }

//         int GetSalary() {
//             return Emp_Salary;
//         }
// };

// int main() {
//     Employee emp1;
//     emp1.Emp_ID = 1001;
//     emp1.Emp_Name = "Kashyap";
//     emp1.SetSalary(100000);
//     cout<<emp1.Emp_ID<<" \nName: "<<emp1.Emp_Name<<" \nSalary: "<<emp1.GetSalary();
//     return 0;
// }

// 7. C++ program to illustrate Test Classes and objects with display member function declared inside class and defined outside the class.
// #include<iostream>
// using namespace std;

// class Test {
//     public:
//         int x;
//         void display();
// };

// void Test::display() {
//     cout << "Value of x: " << x << endl;
// }

// int main() {
//     Test obj;
//     obj.x = 5;
//     obj.display();
//     return 0;
// }

// 8. C++ program to illustrate macro function #define pi 3.14 To fInd out the area of circle
// #include <iostream>
// #define pi 3.14
// #define area(x) (pi*x*x)
// using namespace std;

// int main() {
//     int radius = 7;
//     int ar = area(radius);
//     cout<<"The area of the circle is: "<<ar;
//     return 0;
// }

// 9. C++ program to illustrate access SPECIFIERS of Classes private public and protected Using rectangle class , to setvalues() function and return area() functions.
// #include <iostream>
// #include<iostream>
// using namespace std;

// class Rectangle {
//     private:
//         int length;
//         int width;
//     protected:
//         void setValues(int a, int b) {
//             length = a;
//             width = b;
//         }
//     public:
//         void setDimensions(int a, int b) {
//             setValues(a, b);
//         }
//         int area() {
//             return length * width;
//         }
// };

// int main() {
//     Rectangle rect;
//     rect.setDimensions(5, 6);
//     cout << "Area of rectangle: " << rect.area() << endl;
//     return 0;
// }

// 10.C++ program to illustrate access SPECIFIERS of Classes private public and protected data members X Y Z , Using Class A and with object a and evaluate the Expression. Exp = X3+Y2+XYZ+X-Y+Z/Y;
// #include <iostream>
// #include <math.h>
// using namespace std;

// class A{
//     public:
//         int x;
//         int z = 1;
//         float exp;
//     private:
//         int y;
//     public:
//         void sety(int a) {
//             y = a;
//         }
//         int gety() {
//             int b = y;
//             return b;
//         }
// };

// int main(){
//     A a;
//     a.x = 10;
//     a.sety(50);
//     int c = a.gety();
//     a.exp = pow(a.x,3)+pow(c,2)+(a.x*c*a.z)+(a.x-c+a.z/c);
//     cout << a.exp;
//     return 0;
// }

// 11. C++ program to illustrate access SPECIFIERS of Classes private public and protected Using Sample class To getinteger(), getfloat() member functions assign values to data_1 and data_2.

// #include <iostream>
// using namespace std;

// class sample {
//     private:
//     int data_1;
//     float data_2;

//     public:
//     void getInteger(int d_1) {
//         data_1 = d_1;
//         cout<<"number: "<<data_1;
//     }
//     float getfloat() {
//         cout<<"\nEnter data: ";
//         cin>>data_2;
//         return data_2;
//     }
// };
// int main() {
//     sample obj1,obj2;
//     float f;
//     obj1.getInteger(15);
//     f = obj2.getfloat();
//     cout<<"You entered: "<<f;
//     return 0;
// }
// 12 C++ program to illustrate access SPECIFIERS of Classes private public and protected Using swap class, with private a,b variables and public member functions getvale(), swapvalues(), and display() functions.
// #include <iostream>
// #include <conio.h>
// using namespace std;

// class swp {
//     private:
//     int a,b;
//     public:
//     void getdata();
//     void swapvalue();
//     void display();
// };

// void swp::getdata() {
//     cout<<"Enter two numbers: ";
//     cin>>a>>b;
// }

// void swp::swapvalue() {
//     a = a+b;
//     b = a-b;
//     a = a-b;
// }

// void swp::display() {
//     cout<<"a = "<<a<<endl;
//     cout<<"b = "<<b<<endl;
// }

// int main() {
//     swp s;
//     s.getdata();
//     cout<<"Before swap"<<endl;
//     s.display();
//     s.swapvalue();
//     cout<<"After swap: "<<endl;
//     s.display();
//     getch();
//     return 0;
// }
//C++ program to create structure called point with int x and float y variable and assign the values.
// #include <iostream>
// using namespace std;
// struct point {
//     int x;
//     float y;
// };

// int main() {
//     struct point p ={10,20.5};
//     cout<<"point x and y coordinates: "<<p.x<<" "<<p.y<<endl;
//     return 0;
// }





