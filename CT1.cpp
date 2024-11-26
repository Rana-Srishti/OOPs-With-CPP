//1. Write a C++ Program to find largest element in an array of given 11 Numbers.

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[11];
//     int max = 0;
//     cout<<"Enter 11 Array Elements: ";
//     for (int i = 0; i < 11; i++) {
//         cin>>arr[i];
//     }
//     for (int j = 0; j < 11; j++) {
//         if (arr[j] > max) {
//         max = arr[j];
//         }
//     }
//     cout<<"The greatest element in the given array is: "<<max;
//     return 0;

// }

//2. Write a C++ Program to find out the cube sum of first n natural numbers.

// #include <iostream>
// #include <math.h>
// using namespace std;

// int main() {
//     int num;
//     int sum;
//     cout<<"Enter the range of numbers: ";
//     cin>>num;

//     for (int i = 1; i <= num; i++)  {
//         sum += pow(i,3);
//     }
//     cout<<"The cube sum of first "<<num<<" natural numbers is: "<<sum;
//     return 0;
// }

//3. Write a C++ program Program to accept a string in upper case and print it by lower case.

// #include <iostream>
// using namespace std;

// int main() {
//     string s;
//     cout<<"Enter a string in lower case: ";
//     cin>>s;
//     for (char x:s) {
//         cout<<(char)tolower(x);
//     }
// }

// 4. Write a C++ program to  calculate and print the sum of even and odd integers of the first n natural numbers.

// #include <iostream>
// using namespace std;

// int main() {
//     int num;
//     int even_sum = 0;
//     int odd_sum = 0;

//     cout<<"Enter the range of numbers: ";
//     cin>>num;

//     for (int i = 1; i <= num; i++) {
//         if (i%2 == 0) {
//             even_sum += i;
//         }
//         else {
//             odd_sum += i;
//         }
//     }
//     cout<<"The sum of even integers of first "<<num<<" numbers is: "<<even_sum<<endl;
//     cout<<"The sum of odd integers of first "<<num<<" numbers is: "<<odd_sum;
//     return 0;
// }

//5. Write a C++ Program to Remove Spaces From String.

// #include <iostream>
// using namespace std;

// int main() {
//     string s;
//     cout<<"Enter a string: ";
//     getline(cin,s);
//     int count = 0;
//     for (int i = 0; s[i]-1; i++){
//         if (s[i] != ' ') {
//             s[count++] = s[i];
//         }
//     }
//     cout<<s;
//     return 0;	
// }


//6. Write a C++ program to find Compound Intrest

// #include <iostream>
// #include <math.h>
// using namespace std;

// int main() {
//     float amount;
//     float principal;
//     float intrest;
//     int time;

//     cout<<"Enter principal: ";
//     cin>>principal;
//     cout<<"Enter Rate of Intrest: ";
//     cin>>intrest;
//     cout<<"Enter time: ";
//     cin>>time;

//     amount = principal * pow((1+intrest/100),time);
//     cout<<"The compound Intrest is: "<<amount-principal;
//     return 0;

// }

//7. Write a C++ Program to swap two numbers using call by reference function.

// //}

//8.Write a C++ Program to Accept Student Roll No, Marks in 3 Subjects and Calculate Total, Average and Print it.

#include <iostream>
using namespace std;

int main() {
    int roll_no[3];
    int marks[3][3];

    for (int i = 0; i < 3; i++) {
        cout<<"Enter the Roll No: ";
        cin>>roll_no[i];
        for (int j = 0; j < 3; j++) {
            cout<<"Enter marks of Subject "<<j+1<<" :";
            cin>>marks[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        cout<<"Roll No: "<<roll_no[i]<<endl;
        for (int j = 0; j < 3; j++) {
            cout<<"Marks in Subject "<<j+1<<" : "<<marks[i][j]<<endl;
        }
    }
}

//9. Write a C++ program to sort a list of numbers in ascending order

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[5] = {4,2,0,6,9};
//     for (int i = 0; i < 5; i++) {
//         for (int j = i+1; j < 5; j++) {
//             if (arr[i] > arr[j]) {
//                 swap(arr[i],arr[j]);
//             }
//         }
//     }
//     for (int b:arr) {
//         cout<<b<<" ";
//     }
//     return 0;
// }

//10. Write a C++ program to find ASCII value of a charecter.

// #include <iostream>
// using namespace std;

// int main() {
//     char a;
//     cout<<"Enter a charecter: ";
//     cin>>a;
//     cout<<"The ASCII value of the given charecter is: "<<int(a);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class A{
//     public:
//     int x;
//     float exp;
//     // private:
//     int y;
// };

// int main(){
//     class A a;
//     a.x = 10;
//     a.y = 50;
//     a.exp = a.x*a.x**a.x+a.y*a.y*a.y+a.x*a.y+a.x/a.y;
//     cout << a.exp;
// }

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
//         cout<<"Enter data: ";
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

// #include <iostream>
// using namespace std;
// struct point {
//     int x;
//     float y;
// };

// int main() {
//     struct point p ={10,20.5};
//     cout<<"point x and y coordinates: "<<p.x<<" "<<p.y<<endl;
// }
