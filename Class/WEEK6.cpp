//Write a C++ program to illustrate funciton overloading 

// #include <iostream>
// using namespace std;

// void print(int i) {
//     cout<<"Here is the integrer "<<i<<endl;
// }

// void print(double i) {
//     cout<<"Here is the float "<<i<<endl;
// }

// int main() {
//     print(10);
//     print(10.12);
//     return 0;
// }

//to overload + binary operator to add to complex objects real and imaginary part 

// #include <iostream>
// using namespace std;

// class complex{
//     public:
//         double real,imag;
//         complex (double r = 0, double i = 0): real(r),imag(i) {}

//         complex operator + (const complex& other) const {
//             return complex(real+other.real, imag + other.imag);
//         }
//         friend ostream& operator<<ostream& out, const complex & o) {
//             cout<<c.real<<" + "<<c.imag<<"i";
//         }
// };

// int main() {
//     return 0;
// }

// to create operator overloaded funciotn operatoro ++ using friend funciton
// #include <iostream>
// using namespace std;

// class increment{
//     int a;
//     public:
//          increment {} []
//          increment (int x) {
//             a = x;
//          }
//          friend void operator ++ increment(increment x);
//          friend void operator ++ (increment x, int);

//          void display() {
//             cout<<a<<endl;
//          }
// };

// void operator ++ (increment x) {
//     ++x.s;
// }


// int main() {
//     return 0;
// }

//Single inheritance among bird and canary

// #include <iostream>
// using namespace std;

// class Bird {
//     public:
//         bool hasFeathers = true;
// };

// class Canary:public Bird {
//     public:
//         string colour = "Yellow";
// };

// int main() {
//     Canary c;
//     cout<<c.hasFeathers<<endl;
//     cout<<c.colour<<endl;
//     return 0;
// }

//to represent the single inheritance under base class animal and inherited dog

// #include <iostream>
// using namespace std;

// class Animal {
//     public:
//         void eat() {
//             cout<<"Animal is eating"<<endl;
//         }
// };

// class Dog : public Animal{
//     public:
//         void bark() {
//             cout<< "Dog is barking";
//         }
// };

// int main() {
//     Dog MyDog;
//     MyDog.eat();
//     MyDog.bark();
//     return 0;
// }



// #include <iostream>
// using namespace std;

// class shape {
//     public:
//         void drawShape() {
//             cout<<"Drawing a shape"<<endl;
//         }
// };

// class colour {
//     string colour;
//     public:
//         void setColor(string s) {
//             colour = s;
//         }
//         string getcolour() {
//             return colour;
//         }
// };

// class colouredShape : public shape,public colour {
//     public:
//         void draw() {
//             drawShape();
//             cout<<"colour of the shape is:"<<getcolour()<<endl;
//         }
// };

// int main() {
//     colouredShape colouredsqr;
//     colouredsqr.setColor("Red");
//     colouredsqr.draw();

//     return 0;
// }

//create multi level inheritance using base class vehicle and derived class car and subderived class sports car

// #include <iostream>
// using namespace std;

// class vehicle {
//     public:
//         void move() {
//             cout<<"the vehicle is moving"<<endl;
//         }
// };

// class car: public vehicle {
//     public:
//         void startEngine() {
//             cout<<"The car engine is started"<<endl;
//         }
// };
// class sportscar : public car {
//     public:
//         void accelerate() {
//             cout<<"The sports car is accelerating"<<endl;
//         }
// };

// int main() {
//     sportscar hercar;
//     hercar.move();
//     hercar.startEngine();
//     hercar.accelerate();
//     return 0;
// }

//Write a cpp program to create usign base class shape and derifved class and by making use of parent and derived class create 

// #include <iostream>
// using namespace std;

// class shape {
//     public:
        
// };

// class colour {
//     public:
     
// };
// class drawable :  {
//     public:
        
// };

// class colouredcircle : public shape,public colour,public drawable {
//     public:
//         void draw() override
// }

// int main() {
   
//     return 0;
// }

//to create a derived class student usign base class person creaet ethe object of derived class single inheritance

// #include <iostream>
// using namespace std;

// class Person {
//     protected:
//         string name;
//         int age;
    
//     public:
//         Person(string name,int age): name(name),age(age) {}
//         void display() {
//             cout<<"Name: "<<name<<endl;
//             cout<<"Age: "<<age<<endl;
//         }
// };

// class student: public Person {
//     private:
//         int rollNumber;
    
//     public:
//         student(string name,int age,int rollNumber) : Person(name,age),rollNumber(rollNumber) {}
//         void displayStudent() {
//             display();
//             cout<<"roll no: "<<rollNumber<<endl;
//         }
// };

// int main() {
//     student st("John",20,101);
//     st.displayStudent();
//     return 0;
// }

//write a C++ program to create multiple inheritance using 2 base classes my class and my other class

// #include <iostream>
// using namespace std;

// class MyClass {
//     public:
//         void myfunction() {
//             cout<<"some content in parent class"<<endl;
//         }
// };

// class MyOtherClass {
//     public:
//         void myotherfunction() {
//             cout<<"some content in another class"<<endl;
//         }
// };

// class myChildClass:public MyClass,public MyOtherClass {
// };

// int main() {
//     myChildClass myob;
//     myob.myfunction();
//     myob.myotherfunction();
//     return 0;
// }
//Write a cpp program ot illustrate multiple inheritance using 2 base classes and one derived class creatae the derived class programmer using base class person and employee

// #include <iostream>
// using namespace std;

// class person {

// };

// class Employee {
//     protected:
//         int salary;
// };

// class programmer: public Employee,public person {
//     public:
//         int bonus;
//         void setsalary(int s) {
//             salary = s;
//         }
//         int getsalary() {
//             return salary;
//         }
// };


// int main() {
//     programmer myobj;
//     myobj.setsalary(50000);
//     myobj.bonus = 15000;
//     cout<<"Salary: "<<myobj.getsalary()<<endl;
//     cout<<"Bonus: "<<myobj.bonus<<endl;
//     return 0;
// }

//Write a C++ progarm to create multi level inheritance using parent class my class, derivd mychild class and sub derived class my grand child class.create object of grandchild class.

// #include <iostream>
// using namespace std;

// class myclass {
// public:
//     void myFunction() {
//         cout << "Some content in parent class" << endl;
//     }
// };

// class mychild : public virtual myclass {

// };

// class mygrandchild : public virtual myclass, public mychild {

// };

// int main() {
//     mygrandchild obj;
//     obj.myFunction(); 
//     return 0;
// }


//add one more class

// #include <iostream>
// using namespace std;

// class myclass {
// public:
//     void myFunction() {
//         cout << "Some content in parent class" << endl;
//     }
// };

// class myRelative: public virtual myclass {

// };

// class mychild : public virtual myclass {

// };

// class mygrandchild : public  myclass, public  myRelative {

// };

// int main() {
//     mygrandchild obj;
//     obj.myFunction(); 
//     return 0;
// }


//Write a C++ program to create hybrid inheritance using base classes shape,colour,draw and create derived class claslled coloured circle call base class fucntion.

// #include <iostream>
// using namespace std;

// class Shape {
//   public:
//     void drawShape() {
//         cout<<"Drawing a shape";
//     }  
// };

// class color {
//     string color = "black";
//     public:
//         void setColor(string c) {
//             color = c;
//         }
        
//         string getColor() {
//             return color;
//         }
// };

// class drawable {
//     public:
//         virtual void draw() = 0;
// };

// class coloredcircle : public Shape,public color, public drawable {
//     public:
//         void draw() override {
//             cout<<"color of the circle: "<<getColor();
//         }
// };

// int main() {
//     coloredcircle cc;
//     cc.setColor("red");
//     cc.draw();
//     return 0;
// }
