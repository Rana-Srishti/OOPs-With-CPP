//write a cpp program to demostrate single inheritance amaogn 2 calsses wordker and manager adn class worker has variable age and name and derived calss manager is inherited from base calss woker.illustrate the concept.
// #include <iostream>
// using namespace std;

// class worker {
//     int age;
//     char name[10];
//     public:
//         void get();
//         void show();
// };

// void worker::get() {
//     cout<<"your name: ";cin>>name;
//     cout<<"Your age: ";cin>>age;
// }

// void worker::show() {
//     cout<<"Name: "<<name<<endl;
//     cout<<"Age: "<<age<<endl;
// }

// class manager : public worker {
//     int now;
//     public:
//         void get(){
//             worker::get(); 
//             cout << "Enter the current year: ";
//             cin >> now;
//     }

//     void show() {
//         worker::show(); 
//         cout << "Current year: " << now << endl;
//     }


// };

// int main() {
//     manager mgr;
//     mgr.get();
//     mgr.show();
//     return 0;
// }

//Write a C++ program to create multiple inheritance using base class worker with varible age and derived class manager with variable now and subderoved class derived from manager.

// #include <iostream>
// using namespace std;

// class worker {
//     int age;
//     char name[10];
//     public:
//         void get();
//         void show();
// };

// void worker::get() {
//     cout<<"your name: ";cin>>name;
//     cout<<"Your age: ";cin>>age;
// }

// void worker::show() {
//     cout<<"Name: "<<name<<endl;
//     cout<<"Age: "<<age<<endl;
// }

// class manager : public worker {
//     int now;
//     public:
//         void get(){
//             worker::get(); 
//             cout << "Enter the current year: ";
//             cin >> now;
//     }

//     void show() {
//         worker::show(); 
//         cout << "Current year: " << now << endl;
//     }


// };

// class CEO : manager {
//     int nom;
//     public:
//         void get();
//         void show();
// };
// void CEO::get() {
//     manager::get();
//     cout<<"No of managers uder you are: ";cin>>nom;
// }
// void CEO::show() {
//     cout<<"the number of manager under your are: "<<nom;
// }

// int main() {
//     CEO ceo;
//     ceo.get();
//     ceo.show();
//     return 0;
// }


//06/03/24

//Write a C++ to demostrate funciton overlaoding using class shape and create more than one funciton area to call for different no of aruguments

// #include <iostream>
// using namespace std;

// class shape {
//     public:
//         int area (int side) {
//             return side * side;
//         }

//         int area (int len,int wid) {
//             return len * wid;
//         }
// };

// int main() {
//     shape s1;
//     cout<<s1.area(5)<<endl;
//     cout<<s1.area(4,5);
//     return 0;
// }

//Write a C++ program to illustrate fucniton overlaoading using class called Rectangle and create more than one function called reclangle with and without arguments to represtnet constructor overloading.

// #include <iostream>
// using namespace std;

// class Rectangle {
//     float len;
//     float br;

//     public:
//         Rectangle() {
//             len = 2;
//             br = 2;
//         }
//         Rectangle(float x, float y) {
//             len = x;
//             br = y;
//         }
//         void get() {
//             cin>>len>>br;
//         }
//         void get(float x, float y) {
//             len = x;
//             br = y;
//         }

//         void getarea() {
//             cout<<len*br<<endl;
//         }
// };

// int main() {
//     Rectangle a;
//     a.getarea();
//     Rectangle b (2.5,4.5);
//     a.getarea();
//     Rectangle c;
//     c.getarea();
//     Rectangle d;
//     d.get(1.2,1);
//     d.getarea();
//     return 0;
// }

//Write a C++ program to demostrate operator overloading concept and overload the ++ operator using class increment

// #include <iostream>
// using namespace std;

// class increment {
//     private:
//         int count;
//     public:
//         increment():count(10) {}

//         void operator ++ () {
//             count = count + 1;
//         }

//         void display() {
//             cout<<count;
//         }
// };

// int main() {
//     increment i;
//     ++i;
//     i.display();
//     return 0;
// }

//Write a C++ operator ++ in prefeix form and post fix form increment object using the oprator oveloaded funciton

#include <iostream>
using namespace std;

class increment {
    int a;
    public:
        increment () {}
        increment (int x) {
            a = x;
        }
        void operator++ () {
            ++a;
        }
        void operator++ (int) {
            a++;
        }
        void display() {
            cout<<a<<endl;
        }
};

int main() {
    increment c(3);
    ++c;
    c.display();
    c++;
    c.display();
    return 0;
}

