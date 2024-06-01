// #include <iostream>

// class Vector {
//     private:
//         int x, y;
//         public:
//         Vector(int x = 0, int y = 0) : x(x), y(y) {}

//         Vector operator+(const Vector& other) const {
//         return Vector(x + other.x, y + other.y);
//     }
//         void display() const {
//         std::cout << "(" << x << ", " << y << ")\n";
//     }
// };

// int main() {
//     Vector v1(2, 3);
//     Vector v2(4, 5);

//     Vector result = v1 + v2;

//     std::cout << "Resultant vector: ";
//     result.display();

//     return 0;
// }

//2

// #include <iostream>

// class Complex {
//     private:
//         double real, imag;
//     public:
//         Complex(double real = 0, double imag = 0) : real(real), imag(imag) {}

//         Complex operator+(const Complex& other) const {
//         return Complex(real + other.real, imag + other.imag);
//         }

//         void display() const {
//         std::cout << real << " + " << imag << "i\n";
//         }
// };

// int main() {
//     Complex c1(2.5, 3.2);
//     Complex c2(1.4, 4.6);

//     Complex result = c1 + c2;

//     std::cout << "Resultant complex number: ";
//     result.display();

//     return 0;
// }

//3.

// //NAME: R.SRIKRISHNA KASHYAP
// //REG NO: 22BCE11282
// //SLOT: B11+B12+B13
// #include <iostream>

// class MyNumber {
// private:
// int value;

// public:
// MyNumber(int val) : value(val) {}

// // Overloading the binary - operator
// MyNumber operator-(const MyNumber& other) const {
// return MyNumber(value - other.value);
// }

// int getValue() const {
// return value;
// }
// };

// int main() {
// MyNumber num1(10);
// MyNumber num2(5);

// MyNumber result = num1 - num2;

// std::cout << "num1 - num2 = " << result.getValue() << std::endl;

// return 0;
// }

//4.

// #include <iostream>

// class Number
// {
//     private:
//         int value;

//     public:
//         Number(int val) : value(val) {}

//         bool operator>(const Number& other) const {
//         return value > other.value;
//         }
// };

// int main()
// {
// Number num1(5);
// Number num2(3);

// if (num1 > num2) {
// std::cout << "num1 is greater than num2" << std::endl;
// } else {
// std::cout << "num1 is not greater than num2" << std::endl;
// }

// return 0;
// }

//5.

// #include <iostream>

// class MyNumber {
//     private:
//         int value;

//     public:
//         MyNumber(int val) : value(val) {}

//         // Overloading the ~ operator
//         MyNumber operator~() const {
//         return MyNumber(~value);
//      }

//         int getValue() const {
//         return value;
//      }
// };

// int main() {
//     MyNumber num(5);
//     MyNumber result = ~num;

//     std::cout << "Original value: " << num.getValue() << std::endl;
//     std::cout << "Bitwise NOT value: " << result.getValue() << std::endl;

//     return 0;
// }

//6

// #include <iostream>

//     int add(int a, int b) {
//     return a + b;
//     }

//     float add(float a, float b) {
//     return a + b;
// }

// int main() {
//     std::cout << "Integer addition: " << add(3, 5) << std::endl;
//     std::cout << "Float addition: " << add(3.5f, 2.7f) << std::endl;
//     return 0;
// }


//7.

// #include <iostream>

// int max(int a, int b) {
// return (a > b) ? a : b;
// }

// int max(int a, int b, int c) {
// return max(max(a, b), c);
// }

// int main() {
//     std::cout << "Maximum of 5 and 8: " << max(5, 8) << std::endl;
//     std::cout << "Maximum of 3, 9, and 6: " << max(3, 9, 6) << std::endl;
// return 0;
// }

//8.

// #include <iostream>

// int volume(int length, int width, int height) {
//     return length * width * height;
// }

// float volume(float radius) {
//     return (4.0f / 3.0f) * 3.14f * radius * radius * radius;
// }

// int main() {
//     std::cout << "Volume of a cube (2x2x2): " << volume(2, 2, 2) << std::endl;
//     std::cout << "Volume of a sphere (radius 3): " << volume(3.0f) << std::endl;
//     return 0;
// }

//9.
// #include <iostream>

// class Calculator {
//     public:
//         // Function to add two integers
//         int add(int a, int b) {
//         return a + b;
//         }

//         // Function to add three integers
//         int add(int a, int b, int c) {
//         return a + b + c;
//         }

//         // Function to add two doubles
//         double add(double a, double b) {
//         return a + b;
//         }
// };

// int main() {
//     Calculator calc;

//     int sum1 = calc.add(5, 10);
//     int sum2 = calc.add(5, 10, 15);
//     double sum3 = calc.add(3.5, 2.5);

//     std::cout << "Sum 1: " << sum1 << std::endl;
//     std::cout << "Sum 2: " << sum2 << std::endl;
//     std::cout << "Sum 3: " << sum3 << std::endl;

//     return 0;
// }

//10.

// #include <iostream>
// #include <string>

// class Student {
//     private:
//         std::string name;
//         int age;
//         double gpa;

//     public:
//         // Constructors
//         Student() : name(""), age(0), gpa(0.0) {}
//         Student(std::string name, int age, double gpa) : name(name), age(age), gpa(gpa) {}

//         // Function to display student information
//         void display() {
//             std::cout << "Name: " << name << std::endl;
//             std::cout << "Age: " << age << std::endl;
//             std::cout << "GPA: " << gpa << std::endl;
//         }

//         // Function to update student information (overloaded)
//         void update(std::string newName) {
//             name = newName;
//         }

//         void update(int newAge) {
//             age = newAge;
//         }

//         void update(double newGpa) {
//             gpa = newGpa;
//         }
// };

// int main() {
//     // Creating a student object
//     Student student("Alice", 20, 3.5);

//     // Displaying initial student information
//     std::cout << "Initial Student Information:" << std::endl;
//     student.display();
//     std::cout << std::endl;

//     // Updating student information
//     student.update("Bob");
//     student.update(21);
//     student.update(3.8);

//     // Displaying updated student information
//     std::cout << "Updated Student Information:" << std::endl;
//     student.display();

//     return 0;
// }


