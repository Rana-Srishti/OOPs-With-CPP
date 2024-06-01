// #include <iostream>
// using namespace std;

// void sum(int a, int b) {
//     cout<<"The sum is: "<<a+b;
// }

// int main() {

//     int a,b;
//     cin>>a;
//     cin>>b;
//     sum(a,b);
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int sum(int a, int b) {
//     return a+b;
// }

// int main() {
//     int a,b,c;
//     cin>>a;
//     cin>>b;
//     // cout<<"The sum is: "<<sum(a,b);
//     c = sum(a,b);
//     for (int i = 0; i < c; i++) {
//         cout<<"Hello world (Srishti Rana)"<<endl;
//     }
//     return 0;
// }


//Inline functions

// #include <iostream>
// using namespace std;

// inline int multiply (int a, int b) {
//     return a*b;
// }

// int main() {
//     int a, b;
//     cin>>a;
//     cin>>b;
//     cout<<multiply(a,b)<<endl;
//     return 0;
// }

//Exception handling

// #include <iostream>
// using namespace std;

// int main() {
//     string name1,name2;
//     cout<<"Who is proposing whom: ";
//     cin>>name1;
//     cin>>name2;

//     try {
//         if((name1 == "Kashyap"||name1 == "kashyap") && (name2 == "Srishti"||name2 == "srishti")) {
//             // throw "Wait for 8 years.";
//             throw "err";
//         }
//         else {
//             cout<<name1<<" proposed "<<name2<<endl;
//         }
//     }
//     catch (int err) {
//         cout<<"Error: "<<err<<" Love life not found."<<endl;
//     }
//     catch(const char *err) {
//         cout<<err;
//     }
//     catch(...) {
//         cout<<"Error Occured."<<endl;
//     }
//     return 0;
//}

//Class Defining

// #include <iostream>
// using namespace std;

// class Anime {

//     string Type;
//     string MC;
//     int Length;
//     bool Manga;

//     public:
//         Anime() {}
//         Anime (string _Type,string _MC,int _Length,bool _Manga = true) {
//             Type = _Type;
//             MC = _MC;
//             Length = _Length;
//             Manga = _Manga;
//         }

//         Anime(Anime &obj) {
//             Type = obj.Type;
//             MC = obj.MC;
//             Length = obj.Length+10;
//             Manga = obj.Manga;
//         }

//         void Print() {
//             cout<<"the Type is: "<<Type<<endl;
//             cout<<"the Main Charecter is: "<<MC<<endl;
//             cout<<"the Length is: "<<Length<<" episodes."<<endl;
//             cout<<"Manga Available: "<<Manga<<endl;
//         }

//         ~Anime() {
//             cout<<"The destructor has been called."<<endl;
//         }
// };

// int main() {
//     Anime A1("Shonen","Kaneki",48,false);
//     A1.Print();
//     Anime A2("Romcom","Usui",26);
//     A2.Print();
//     // Anime A3(A2);
//     Anime A3 = A2;
//     A3.Print();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     struct Node* next;

//     Node(int _data) {
//         data = _data;
//     }

//     void print() {
//         cout<<"Data is: "<<data<<endl;
//     }
// };

// int main() {
//     Node n1(5);
//     n1.print();
//     return 0;
// }


// #include <iostream>
// using namespace std;

// void add(int a) {
//     a = a + 10;
//     cout<<"Address of a in the funciton: "<<&a<<endl;
//     cout<<"The value of a in function: "<<a<<endl;

// }

// int main() {
//     int a = 5;
//     cout<<"Address of a that is being passed to the function: "<<&a<<endl;
//     cout<<"The value of a before passing it to funciton: "<<a<<endl;
//     add(a);
//     cout<<"The value of a after passing it ot the funciton: "<<a<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void add(int &a) {
//     a = a + 10;
//     cout<<"Address of a in the funciton: "<<&a<<endl;
//     cout<<"The value of a in function: "<<a<<endl;

// }

// int main() {
//     int a = 5;
//     cout<<"Address of a that is being passed to the function: "<<&a<<endl;
//     cout<<"The value of a before passing it to funciton: "<<a<<endl;
//     add(a);
//     cout<<"The value of a after passing it ot the funciton: "<<a<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int a = 5;
//     int &b  = a;
//     cout<<"the value of a: "<<a<<endl;
//     cout<<"The address of a: "<<&a<<endl;
//     cout<<"The value of b: "<<b<<endl;
//     cout<<"The address of b: "<<&b<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int& sum(int &a) {
//     a = a + 25;
//     return a;
// }

// int main() {
//     int a = 10;
//     cout<<"Address of a before passing to function: "<<&a<<endl;
//     cout<<"The value of a before passing it to the function: "<<a<<endl;
//     int &b = sum(a);
//     cout<<"The address of b is: "<<&b<<endl;
//     cout<<"The value of b is: "<<b<<endl;
//     cout<<"The value of a is: "<<a<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// template <class srishti>
// void Multiply(srishti a, srishti b) {
//     cout<<a*b<<endl;
// }

// int main() {
//     Multiply(2,3);
//     Multiply(2.5,3.5);
//     Multiply('a','b');
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Anime {
//     private:
//         string Name;
//         string MC;

//     public:
//         Anime() {}
//         Anime(string _Name, string _MC) {
//             Name = _Name;
//             MC = _MC;
//         }
//         friend void printData(Anime &obj);
    
// };

// void printData(Anime &obj) {
//     cout<<"The Name of Anime is: "<<obj.Name<<endl;
//     cout<<"The Main Charecter is: "<<obj.MC<<endl;
// }

// int main() {
//     Anime A1("Demon Slayer","Tanjiro");
//     printData(A1);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Anime {
//     private:
//         string Name;
//         string MC;

//     public:
//         Anime() {}
//         Anime(string _Name, string _MC) {
//             Name = _Name;
//             MC = _MC;
//         }

//         friend class printData;
    
// };

// class printData {
//     public:
//         printData(Anime &obj) {
//             cout<<"The name of anime is: "<<obj.Name<<endl;
//             cout<<"The main charecter is: "<<obj.MC<<endl;
//         }
// };



// int main() {
//     Anime A1("Jujutsu kaisen","Itadori");
//     printData p(A1);
//     return 0;
// }

//template

// #include <iostream>
// using namespace std;

// template <class kashyap>
// void Multiply(kashyap a, kashyap b) {
//     cout<<"The product is: "<<a+b<<endl;
// }

// int main() {
//     Multiply(2,4);
//     Multiply(2.2,4.5);
//     string s1 = "kashyap";
//     string s2 = "Srishti";
//     Multiply(s1,s2);
//     return 0;
// }


// #include <iostream>
// using namespace std;

// template <class Srishti>
// class Data {
//     private:
//         Srishti data;
    
//     public:
//         Data() {}

//         Data(Srishti _data) {
//             data = _data;
//         }

//         void display() {
//             cout<<"The data stored is: "<<data<<endl;
//         }
// };

// int main() {
//     Data<string> D1("Srishti");
//     D1.display();

//     Data<int> D2(9);
//     D2.display();
//     return 0;
// }


// #include <iostream>
// using namespace std;

// template <class Srishti> //Cause gonna make her perform
// class Data {
//     private:
//         Srishti data;
    
//     public:
//         Data() {}

//         Data(Srishti _data) {
//             data = _data;
//         }

//         void display();
// };

// template <class Srishti> 
// void Data<Srishti> :: display() {
//             cout<<"The data stored is: "<<data<<endl;
//         }


// int main() {
//     Data<string> D1("Srishti");
//     D1.display();

//     Data<int> D2(9);
//     D2.display();
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;


// int main() {
//     vector<int> Nums;

//     //Add an element
//     // Nums.push_back(3);

//     // cout<<Nums[0]<<endl;

//     //{3,6,9,12,15,18,21,24,27,30}

//     for(int i = 3; i<=30; i = i+3) {
//         Nums.push_back(i);
//     }

//     for(int j = 0; j<Nums.size(); j++) {
//         cout<<"3 X "<<j+1<<" = "<<Nums[j]<<endl; 
//     }

//     cout<<Nums.front()<<endl;
//     cout<<Nums.back()<<endl;
//     Nums.insert(Nums.begin()+4,36);
//     cout<<"The number at index 4 is: "<<Nums[4]<<endl;

    
//     for(int j = 0; j<Nums.size(); j++) {
//         cout<<Nums[j]<<" "; 
//     }cout<<endl;


//     return 0;
// }

//Dynamic objects
// #include <iostream>
// using namespace std;

// class Kdrama {
//     private:
//         string Name;
//         string ML;
//         string FL;
//         int ep;
    
//     public: 
//          Kdrama() {}

//          Kdrama(string _Name, string _ML, string _FL, int _ep) {
//             Name = _Name;
//             ML = _ML;
//             FL = _FL;
//             ep = _ep;
//          }

//          void Disp() {
//             cout<<"Name: "<<Name<<endl;
//             cout<<"Male Lead: "<<ML<<endl;
//             cout<<"Female Lead: "<<FL<<endl;
//             cout<<"No of Episodes: "<<ep<<endl;
//          }

//          ~Kdrama() {
//             cout<<"Niranjana is called"<<endl;
//          }

// };

// int main() {
    // Kdrama D1("Lovely Runner","Sun Jaye","Im Sol",16);
    // D1.Disp();

//     Kdrama* D1 = new Kdrama("Lovely Runner","Sun Jaye","Im Sol",16);
//     D1 -> Disp();
//     delete(D1);
//     return 0;
// }


// #include <iostream>
// using namespace std;

// class Kdrama {
//     private:
//         string Name;
//         string ML;
//         string FL;
//         int ep;
    
//     public: 
//          Kdrama() {}

//          Kdrama(string _Name, string _ML, string _FL, int _ep) {
//             Name = _Name;
//             ML = _ML;
//             FL = _FL;
//             ep = _ep;
//          }

//          void GiveData(string _Name, string _ML, string _FL, int _ep) {
//             Name = _Name;
//             ML = _ML;
//             FL = _FL;
//             ep = _ep;
//          }

//          void Disp() {
//             cout<<"Name: "<<Name<<endl;
//             cout<<"Male Lead: "<<ML<<endl;
//             cout<<"Female Lead: "<<FL<<endl;
//             cout<<"No of Episodes: "<<ep<<endl;
//          }

//          ~Kdrama() {
//             cout<<"Niranjana is called"<<endl;
//          }

// };

// int main() {
//     string _Name; string _ML; string _FL; int _ep;
//     Kdrama Dramas[5];
//     for (int i = 0; i < 5; i++) {
//         cin>>_Name;
//         cin>>_ML;
//         cin>>_FL;
//         cin>>_ep;
//         Dramas[i].GiveData(_Name,_ML,_FL,_ep);
//     }
//     for(int i =0; i < 5; i++) {
//         Dramas[i].Disp();
//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;


// class Dramas {
//     private:
//         string Name;
//         int Ep;
//         string ML;
//         string FL;

//     public:
//         Dramas() {}
//         Dramas(string _Name, int _Ep, string _ML, string _FL ) {
//             Name = _Name;
//             Ep = _Ep;
//             ML = _ML;
//             FL = _FL;
//         }

//         void print() {
//             cout<<"The Name is: "<<Name<<endl;
//             cout<<"No of Episodes: "<<Ep<<endl;
//             cout<<"The Male Lead is: "<<ML<<endl;
//             cout<<"The Female Lead is: "<<FL<<endl;
//         }
// };

// class KDramas : public Dramas {
//         private:
//             string Genre;

//         public:
//             KDramas() {}
//             KDramas(string _N,int _E,string _M, string _F,string _G) : Dramas(_N,_E,_M,_F) {
//                 Genre = _G;
//             }           

//             void disp() {
//                 Dramas :: print();
//                 cout<<"Genre: "<<Genre<<endl;
//             }

// };

// class CDramas : public KDramas {
//     private:
//         bool Amnesia;

//     public:
//         CDramas() {}

//         CDramas(string _N,int _E,string _M, string _F,string _G,bool A = 1): KDramas(_N,_E, _M,_F,_G) {
//              Amnesia = A;
//         }

//         void display() {
//             KDramas:disp();
//             cout<<"Amnesia: "<<Amnesia<<endl;

//         }
// };

// int main() {
//     CDramas c1("King of Fears",16,"Ching Chong Choo","Wohoo","Chineez",true);
//     CDramas c2("Cute Programmer",16,"Jiang Yicheng","Lu Li","Romance",true);
//     KDramas K1("Marriage Contact",16,"Han-Ji-Hoon","kang-Hie-Soo","Romance");
//     c1.display();
//     c2.display();
//     K1.disp();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class A {
//     public:
//         virtual void Print() {
//             cout<<"This is Class A"<<endl;
//         }
// };

// class B : public A{
//     public:
//         void Print() {
//             cout<<"This is Class B"<<endl;
//         }

// };

// int main() {
//     A *a;
//     a = new B();
//     a->Print();
//     return 0;
// }

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

//         void printData() {
//             cout<<"The value of a is: "<<a<<endl;
//         }

//         Num operator+ (Num &obj) {
//             return this->a+obj.a;
//         }

//         Num operator- (Num &obj) {
//             return this->a-obj.a;
//         }
// };

// int main() {
//     Num N1(5);
//     Num N2(10);
//     Num N3 = N1 + N2;
//     N3.printData();
//     return 0;
// }

// #include <iostream>
// #include <stack>
// using namespace std;
  
// int main() {
//    stack<int> stk;

//    stk.push(0);
//    stk.push(1);
//    stk.push(2);
//    stk.push(3);

//    cout<<"Top element: "<<stk.top()<<endl;
//    stk.pop();
//    cout<<"Top element: "<<stk.top()<<endl;
//    cout<<"Size of stack: "<<stk.size()<<endl;
//    cout<<"is empty: "<<(stk.empty()? "yes":"No")<<endl;

// //    for (int i = 0; i<stk.size(); i++) {
// //         cout<<stk.top()<<" ";
// //         stk.pop();
// //    }
//    return 0;
// }

// #include <iostream>
// #include <list>
// using namespace std;
  
// int main() {
//    list<char> Srishtislist;
// //    Srishtislist.push_back(0);
// //    Srishtislist.push_back(1);
// //    Srishtislist.push_back(2);
// //    Srishtislist.push_back(3);

//       for (int i = 65; i<71; i++) {
//         Srishtislist.push_back(char(i));
//       }

//       Srishtislist.insert(Srishtislist.begin(),'z');
//       Srishtislist.insert(Srishtislist.end(),'x');

//       for (auto x: Srishtislist) {
//         cout<<x<<" ";
//       }cout<<endl;

//       cout<<"First element in the list: "<<Srishtislist.front()<<endl;
//       cout<<"Last element in the list: "<<Srishtislist.back()<<endl;
//       cout<<"the size of the list: "<<Srishtislist.size()<<endl;

      

//       Srishtislist.pop_back();

//       cout<<"Last element of the list after poping it: "<<Srishtislist.back()<<endl;  
//       Srishtislist.clear();

//       cout<<"Size of list after clearing it: "<<Srishtislist.size()<<endl;

//     // for (int i = 0; i < 5; i++) {
//     //     cout<<Srishtislist[i]<<" ";
//     // }


//    return 0;
// }


// #include <iostream>
// #include <map>
// using namespace std;
  
// int main() {
//    map<int,string> mp = {{1,"Srishti"},{2,"Kashyap"}};
//    mp.insert({3,"Sun Jaye"});
//    for(const auto& pair: mp) {
//     cout<<pair.first<<" : "<<pair.second<<endl;
//    }


//    return 0;
// }


// #include <iostream>
// using namespace std;

// class A {
//     int a;

//     public:
//         A() {}
//         A(int _a) {
//             a = _a;
//         }

//         void show() {
//             cout<<"Showing the value of a: "<<a<<endl;
//         }

//         ~A() {
//             cout<<"Destuctor of a is called."<<endl;
//         }
// };

// class B {
//     int b;

//     public:
//         B() {}
//         B(int _b) {
//             b = _b;
//         }

//         void show() {
//             cout<<"Showing from class B: "<<b<<endl;
//         }

//         ~B() {
//             cout<<"Destructor of B is called."<<endl;
//         }

// };

// class C : public A,public B {
//     int c;

//     public:
//         C() {}
//         C(int _a,int _b, int _c) : A(_a),B(_b) {
//             c = _c;
//         }

//         void show() {
//             A::show();
//             B::show();
//             cout<<"Showing from class C: "<<c<<endl;
//         }

//         ~C() {
//             cout<<"Destructor of C is called."<<endl;
//         }
// };
  
// int main() {
//    C c1(1,2,3);
//    c1.show();
//    return 0;
// }

#include <iostream>
using namespace std;

class Common {
    int cmn;
      public:
        void setcmn(int _cmn) {
            cmn = _cmn;
        }
        void show() {
            cout<<"The cmn value is: "<<cmn<<endl;
        }
};

class A : virtual public Common {
    int a;

    public:
        A() {}
        A(int _a) {
            a = _a;
        }

        void show() {
            cout<<"Showing the value of a: "<<a<<endl;
        }

        ~A() {
            cout<<"Destuctor of a is called."<<endl;
        }
};

class B :virtual public Common {
    int b;

    public:
        B() {}
        B(int _b) {
            b = _b;
        }

        void show() {
            cout<<"Showing from class B: "<<b<<endl;
        }

        ~B() {
            cout<<"Destructor of B is called."<<endl;
        }

};

class C : public A,public B {
    int c;

    public:
        C() {}
        C(int _a,int _b, int _c) : A(_a),B(_b) {
            c = _c;
        }

        void show() {
            A::show();
            B::show();
            cout<<"Showing from class C: "<<c<<endl;
        }

        ~C() {
            cout<<"Destructor of C is called."<<endl;
        }
};
  
int main() {
   C c1(1,2,3);
   c1.show();
   C c2;
   c2.setcmn(4);
   c2.Common::show();
   return 0;
}