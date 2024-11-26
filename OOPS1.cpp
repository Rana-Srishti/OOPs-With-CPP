// #include <iostream>
// using namespace std;


// inline void sum(int a, int b)  {
//     cout<<a+b<<endl;
// }

// void multiply(int a, int b = 1) {
//     cout<<a*b<<endl;
// }



// int main() {
//     int x = 2;
//     int &y = x;

//     cout<<x<<endl;
//     cout<<y<<endl;
//     //multiply(2);
//     return 0;
// }


// #include <iostream>
// using namespace std;

// class Human {
//     private:
//         string name;
//         int age;
//         int weight;

//     public:

//         Human(string n, int a, int w) {
//             name = n;
//             age = a;
//             weight = w;
//         }

//         void print(){
//             cout<<"Name is: "<<name<<endl;
//             cout<<"Age is: "<<age<<endl;
//             cout<<"Weight is: "<<weight<<endl;
//         } 
// };

// class child : public Human {
//     private:
//         int vaccines;

//     public:
//         child(string n, int a, int w,int v): Human(n,a,w) {
//             vaccines = v;
//         }

//         void print() {
//             Human::print();
//             cout<<"No.of.Vaccines: "<<vaccines<<endl;
//         }
// };

// class pet : public child {
//     private:
//         string breed;
    
//     public:
//         pet(string n,int a,int w,int v,string b): child(n,a,w,v) {
//             breed = b;
//         }

//         void print() {
//             child :: print();
//             cout<<"Breed is: "<<breed<<endl;
//         }
// };

// class Naruto : public pet,public Human {
//     private:
//         string chakra;

//     public:
//         Naruto(string n, int a, int w, int v, string b, string c):Human(n, a, w),pet(n,a,w,v,b) {
//             chakra = c;
//         }

//         void print() {
//             pet::print();
//             cout<<"Chakra level: "<<chakra;
//         }
// };

// int main() {
//     Human H1("JaneDoe",19,55);
//     Human H2("Harsh Mahajan",149,70);

//     child c1 ("Chaitanya",1,4,5);
//     c1.print();

//     pet p1("Ghost",3,65,10,"HUSKY");
//     p1.print();

//     Naruto n1("Hokage",20,75,1,"Nine_tailed_fox","High");
//     n1.print();
    
//     // cout<<H1.name<<endl;
//     // cout<<H1.age<<endl;
//     // cout<<H1.weight<<endl;
//     // H1.print();
//     // H2.print();
//     return 0;
// }


// #include <iostream>
// using namespace std;

// class Human {
//     string _name;
//     int _age;

//     public:
//         Human(string name,int age) {
//             _name = name;
//             if (age < 0) {
//                 throw "Pichle janam ki baat kar raha hain kya saale....";
//             }
//             _age = age;
//         }

//         //copy constructor
//         Human(Human &obj) {
//             _name = obj._name;
//             _age = obj._age;
//             cout<<"Copy cat"<<endl;
//         }

//         void printinfo () {
//             cout<<"The name is: "<<_name<<endl;
//             cout<<"The age is: "<<_age<<endl;

//         }

//         ~Human() {
//             cout<<"Arson."<<endl;
//         }


// };

// int main() {

//     // try {
//     //     Human H1("kashyap",3);
//     //     H1.printinfo();
//     // }
//     // catch (const char * err) {
//     //     cout<<"Excepiton: "<<err<<endl;
//     // }
//     Human H1("kashyap",19);
//     H1.printinfo();
//     Human H2(H1);
//     H2.printinfo();
//     return 0;
// }




// #include <iostream>
// using namespace std;

// int main() {
//     int a,b;
//     cin>>a>>b;


//     try {
//         if (b==0) 
//         throw "Division by zero not possible";
    
//         cout<<a/b;
//     }
//     catch (const char * err) {
//         cout<<"Exception: "<<err<<endl;
//     }
//     return 0;
// }


//

// #include <iostream>
// using namespace std;

// class num {
//     int a;
//     int b;
    
//     public:
//         num(int _a,int _b) {
//             a = _a;
//             b = _b;
//         }

//         friend void add(num &a, num &b);

//         void print() {
//             cout<<a<<" + " <<b<<"i"<<endl;
//         }

// };

// void add(num &a, num &b) {
//     cout<<a.a+b.a<<" + "<<a.b+b.b<<"i"<<endl;
// }

// int main() {
//     num n1(1,2);
//     num n2(4,5);
//     n1.print();
//     n2.print();
//     // add(n1,n2);
//     return 0;
// }


// #include <iostream>
// using namespace std;

// void sum(int a, int b) {
//     cout<<"the sum is: "<<a+b;
// }

// void sum (string a, string b) {
//     cout<<a+b;
// }

// int main() {
//     sum(2+3,4+7);
//     return 0;
// }

//friend class 

// #include <iostream>
// using namespace std;

// class name {
//     string nam;

//     public:
//         name(string _name) {
//             nam = _name;
//         }

//         friend class n;
// };

// class n {
//     public:
//         n(name &obj) {
//             cout<<"Accessing from class 2"<<endl;
//             cout<<obj.nam <<endl;
//         }
// };

// int main() {
//     name n1("JaneDoe");
//     n n2(n1);
//     return 0;
// }



// #include <iostream>
// using namespace std;

// void exchange(int &a,int &b) {//pass by reference.
//     int temp = a;
//     a = b;
//     b = temp;
// }

// int main() {
//     int a = 4;
//     int b = 2;

//     cout<<a<<" "<<b <<endl;
//     exchange(a,b);
//     cout<<a<<" "<<b <<endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;


// int main() {//independent reference
//     int a = 5;
//     int &b = a;

//     cout<<a <<endl;
//     cout<<b <<endl;

//     cout<<&a <<endl;
//     cout<<&b <<endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// class Number {
//     int a;

//     public:
//         void setnum(){
//             cin>>a;
//         }

//         void getnum() {
//             cout<<a<<endl;
//         }


// };

// int main() {

//     Number N[2];
//     for (int i = 0; i < 2; i++) {
//         cout<<"Obj No "<<i<<": ";
//         N[i].setnum();
//         N[i].getnum();
//     }

//     N[0].getnum();
//     return 0;
// }


// #include <iostream>
// using namespace std;

// class Number {
//     int a;

//     public:

//         Number(int _a) {
//             a = _a;
//         } 

//         // void setnum() {
//         //     cout<<"Enter a number: ";
//         //     cin>>a;
//         // }

//         void getnum() {
//             cout<<"The Number is: "<<a*2;
//         }
// };

// int main() {

//     Number* num = new Number(5);
//     num ->getnum();
//     delete(num);
//     return 0;
// }


// #include <iostream>
// using namespace std;

// class Complex {
//     int a,b;

//     public:
//         Complex(){}

//         Complex(int _a, int _b) {
//             a = _a;
//             b = _b;
//         }

//         void print() {
//             cout<<a<<" + "<<b<<"i"<<endl;
//         }

//         Complex operator +(Complex c) {
//             Complex temp;
//             temp.a = a + c.a;
//             temp.b = b + c.b;
//             return temp;
//         }

//         Complex operator -(Complex c) {
//             Complex temp;
//             temp.a = a - c.a;
//             temp.b = b - c.b;
//             return temp;
//         }
// };

// int main() {
//     Complex c1 (2,3);
//     Complex c2 (4,5);
//     c1.print();
//     c2.print();
//     Complex c3 = c2-c1;
//     c3.print();
//     return 0;
// }


// #include <iostream>
// using namespace std;

// class number {
//     int a;

//     public:
//         number() {}
//         number(int _a) {
//             a = _a;
//         }

//         void print() {
//             cout<<"a: "<<a;
//         }

//         number operator ++(int) {
//             a++;
//             return a;
//         }

//         number operator ++() {
//             ++a;
//             return a;
//         }

//         number operator --() {
//             --a;
//             return a;
//         }
//         number operator --(int) {
//             a--;
//             return a;
//         }
// };

// int main() {
//     number n1(5);
//     n1++;
//     --n1;
//     --n1;
//     n1.print();
//     return 0;
// }


//function pass by reference 
//checking for reference address

// #include <iostream>
// using namespace std;

// void add(int &a) {
//     a = a + 5;
//     cout<<&a<<endl;

// }

// int main() {
//     int b = 5;
//     cout<<"Before using the function: "<<b<<endl;
//     cout<<"Address of b: "<<&b<<endl;
//     add(b);
//     cout<<"After using the function: "<<b<<endl;
//     cout<<"Address of b: "<<&b<<endl;
//     return 0;
// }

//Return by reference


// #include <iostream>
// using namespace std;

// int& getref(int &x) {
//     x += 10;
//     cout<<"Address of x: "<<&x<<endl;
//     return x;
// }

// int main() {
//     int num = 5;
//     cout<<"Original number: "<<num<<endl;

//     int &ref = getref(num);
//     cout<<"After calling number: "<<num<<endl;
//     cout<<"Address of number: "<<&num<<endl;
//     cout<<"Value via reference: "<<ref<<endl;
//     cout<<"Address of reference: "<<&ref<<endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// string& change(string &n) {
//     n[0] = 'k';
//     return n;
// }

// int main() {
//     string x = "cashyap";
//     cout<<"Before calling function: "<<x<<endl;
//     change(x);
//     string &ref = x;
//     cout<<"ref = "<<ref<<endl;
//     cout<<"Address of ref = "<<&ref<<endl;
//     cout<<"Address of x = "<<&x<<endl;
//     cout<<"After calling function: "<<x<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     cout<<"kashyap"<<"JaneDoe"<<"kuchbhi"<<endl;
//     return 0;
// }