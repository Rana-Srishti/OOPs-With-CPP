// #include <iostream>
// #include <conio.h>

// using namespace std;

// template<class swap>
// void swapp(swap &i, swap &j){
// swap t;
// t=i;
// i=j;
// j=t;
// }

// int main()
// { int e,f;
// char g,r;
// float x,y;
// cout<<"\n Please insert 2 Integer Values:"; cin >> e >> f;
// swapp(e,f);
// cout<<"\n Integer values after Swapping:";
// cout<<e<<"\t"<<f<<"\n\n";
// cout<<"\n Please insert 2 Character Values:"; cin>>g>>r;
// swapp(g,r);
// cout<<"\n Character Values after Swapping:";
// cout<<g<<"\t"<<r<<"\n\n";
// cout<<"\n please insert 2 Float Values:"; cin>>x>>y;
// swapp(x,y);
// cout<<"\n The resultatnt float values after swapping:";
// cout<<x<<"\t"<<y<<"\n\n";
// }

// #include <iostream>

// using namespace std;

// template<class T>
// void bsort(T a[], int n)
// {
// for (int i=0; i<n-1; i++)
// for (int j=n-1; i<j; j--)
// if (a[j] < a[j-1])
// swap(a[j], a[j-1]);
// }
// template <class X>
// void swap( X &a, X &b)
// {
// X temp =a;
// a = b;
// b = temp;
// }

// int main() {
//     int x[5] = {10,50,30,60,40};
//     float y[5] = {3.2, 71.5, 17.3, 45.9, 92.7};
//     bsort(x,5);
//     bsort(y,5);
//     cout << "Sorted X-Array: ";
//     for (int i=0; i<5; i++)
//     cout << x[i] << " ";
//     cout << endl;

//     cout << "Sorted Y-Array: ";
//     for (int j=0; j<5; j++)
//     cout << y[j] << " ";
//     cout << endl;

//     return(0);
// }

// #include <iostream>
// using namespace std;
// // One function works for all data types. This would work
// // even for user defined types if operator '>' is overloaded
// template <typename T> T myMax(T x, T y)
// {
// return (x > y) ? x : y;
// }
// int main()
// { // Call myMax for int
// cout << myMax<int>(3, 7) << endl;
// // call myMax for double
// cout << myMax<double>(3.0, 7.0) << endl;
// // call myMax for char
// cout << myMax<char>('g', 'e') << endl;
// return 0;
// }


// #include <iostream>

// using namespace std;

// template <class T> void bubbleSort(T a[], int n)
// {
// for (int i = 0; i < n - 1; i++)
// for (int j = n - 1; i < j; j--)
// if (a[j] < a[j - 1])
// swap(a[j], a[j - 1]);
// }

// int main()
// {
// int a[5] = { 10, 50, 30, 40, 20 };
// int n = sizeof(a) / sizeof(a[0]);

// // calls template function
// bubbleSort<int>(a, n);

// cout << " Sorted array : ";
// for (int i = 0; i < n; i++)
// cout << a[i] << " ";
// cout << endl;

// return 0;
// }

// #include <iostream>
// using namespace std;

// // Class template for a generic Pair
// template<typename T>
// class Pair
// {
// private:
// T first;
// T second;
// public:
// // Constructor
// Pair(T f, T s) : first(f), second(s) {}
// // Method to get the first element
// T getFirst() const {
// return first;
// }
// // Method to get the second element
// T getSecond() const {
// return second;
// }
// };

// int main()
// {
// // Create a Pair of integers
// Pair<int> intPair(5, 10);
// cout << "First: " << intPair.getFirst() << ", Second: " << intPair.getSecond() << endl;
// // Create a Pair of doubles
// Pair<double> doublePair(3.14, 6.28);

// cout << "First: " << doublePair.getFirst() << ", Second: " << doublePair.getSecond() << endl;
// return 0;
//}

// #include <iostream>
// using namespace std;

// // Class template for a generic Pair
// template<typename T>
// class Pair
// {
// private:
// T first;
// T second;
// public:
// // Constructor
// Pair(T f, T s) : first(f), second(s) {}
// // Method to get the first element
// T getFirst() const {
// return first;
// }
// // Method to get the second element
// T getSecond() const {
// return second;
// }
// };

// int main()
// {
// // Create a Pair of integers
// Pair<int> intPair(5, 10);
// cout << "First: " << intPair.getFirst() << ", Second: " << intPair.getSecond() << endl;
// // Create a Pair of doubles
// Pair<double> doublePair(3.14, 6.28);

// cout << "First: " << doublePair.getFirst() << ", Second: " << doublePair.getSecond() << endl;
// return 0;
// }

#include <iostream>
using namespace std;
// Template base class
template<typename T>
class Base
{
protected:
T data;
public:
Base(T d) : data(d) {}
void display()
{
cout << "Data: " << data << endl;
}
};

// Derived class from Base template

class Derived : public Base<int>
{
private:
int value;
public:
Derived(int d, int v) : Base<int>(d), value(v) {}
void show()
{
cout << "Derived Data: " << data << ", Value: " << value << endl;
}
};

int main()
{
// Create objects of Base and Derived classes
Base<double> base(3.14);

base.display();

Derived derived(10, 20);

derived.display(); // Accessing base class function
derived.show(); // Accessing derived class function

return 0;
}