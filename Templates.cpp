#include <iostream>
using namespace std;

//templates also called as parameterized classes

template <class T> T sum(T a, T b) { // gives generic function
    cout<<"Total is: "<<a+b;
}

int main() {
    sum(2.2,5.5);
    return 0;
}


// #include <iostream>
// using namespace std;

// //Class Templates

// template <class T> 
// class Great {
//     private:
//         T a;
//         T b;

//     public:
//         Great(T x, T y) {
//             a = x;
//             b = y;
//         }

//         void check() {
//             if (a>b) {
//                 cout<<a<<" is greater than "<<b<<endl;
//             }
//             else {
//                 cout<<b<<" is greater than "<<a<<endl;
//             }
//         }
// };

// int main() {
//     Great <int> g1(2,3);
//     g1.check();

//     Great <float> g2(2.5,3.7);
//     g2.check();

//     return 0;
// }

