// #include <iostream>
// #include <fstream>

// using namespace std;


// int main() {
//     fstream file;

//     file.open("text.txt", ios::in | ios::out) ; //opens in both read and write mode

//     // //for read mode
//     // file.open("text.txt",ios::in);

//     // //for write mode
//     // file.open("text.txt",ios::out); //trunk mode to remove all existing data and create a new file. 

//     if (file.is_open()) {
//         cout<<"File opened successfully.";
//     }
//     else {
//         cout<<"Failed to open the file";
//     }

//     file.close(); 


//     return 0;
// }



// #include <iostream>
// #include <fstream>
// using namespace std;    

// int main() {

//     ofstream file ("text.txt");
//     if (!file.is_open()) {
//         cout<<"Failed to open the file."<<endl;
//     }

//     file<<"Hi this is kashyap rayabagi."<<endl;
//     file<<"I know all the letters in my name are small. That's cause I have not achieved anything big in my life."<<endl;
//     file.close();
//     return 0;
// }


//Reading from a file

// #include <iostream>
// #include <fstream>
// using namespace std;

// int main() {

//     ifstream file;
//     file.open("text.txt");

//     if (!file.is_open()) {
//         cout<<"Operation Failed."<<endl;
//     }
//     else {
//         string line;
//         cout<<"Reading from the file."<<endl;
//         while (file.good()) {
//         getline(file,line);
//         cout<<line<<endl;
//         }
//     }
//     return 0;
// }


//Appending into a file

// #include <iostream>
// #include <fstream>
// using namespace std;

// int main() {

//     fstream file("text.txt",ios::in|ios::out|ios::app); //if file does not exist and we try to open it in append mode then a new file will be created.

//     if (!file.is_open()) {
//         cout<<"Failed to open the file"<<endl;
//     }
//     else {
//         cout<<"Opened successfully."<<endl;
//         file<<"Some one I know tell me that I live in the world of Delulu."<<endl;
//         file<<"I really hope all my delulu become trululu."<<endl;
//     }

//     return 0;
// }


//writing user input in file 

// #include <iostream>
// #include <string>
// #include <fstream>

// using namespace std;

// int main() {

//     fstream file;

//     file.open("text.txt",ios::in|ios::out|ios::app);

//     if (!file.is_open()) {
//         cout<<"Failed to open the file."<<endl;
//     }
//     else {
//         cout<<"File opened successfully."<<endl;
//         string line;
//         cout<<"Enter a line: ";
//         getline(cin,line);
//         file<<line<<endl;
        
//         cout<<"Reading from the file."<<endl;
//         file.seekg(0);
//         string lin;
//         while (file.good()) {
//             getline(file,lin);
//             cout<<lin<<endl;
//         }
//         file.close();
//     }


//     return 0;
// }


// #include <iostream>
// #include <fstream>

// using namespace std;

// int main() {

//     fstream file("text.txt",ios::in|ios::app);

//     if (!file.is_open()) {
//         cout<<"File could not be opened."<<endl;
//     } 
//     else {
//         cout<<file.tellp()<<endl;
//         file<<"What the hell"<<endl;
//         cout<<file.tellp()<<endl;
//     }


//     return 0;
// }


//Binary files

// #include <iostream>
// #include <fstream>
// using namespace std;

// int main() {
//     ofstream file ("test.bin",ios::binary);

//     int p = 1028;
//     file.write((char *) &p, sizeof(p));
//     return 0;
// }

// #include <iostream>
// #include <fstream>
// using namespace std;

// int main() {
//     ifstream file("test.bin",ios::binary);
//         int p;
//         file.read((char *)&p, sizeof(p));
//         file.close();
//         cout<<"the value of p is: "<<p<<endl;
//     return 0;
// }


// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main() {
//     int num = 123456;
//     double pi = 3.14159;
//     float pie = 3.141598098098;

//     cout<<pie<<endl;
//     cout<<fixed<<pie<<endl;

//     cout<<fixed<<pie<<endl;
    
//     cout<<num<<setw(5);
//     cout<<setprecision(3)<<pi<<endl;
//     cout<<scientific<<pi<<endl;
//     cout<<boolalpha<<true;
//     return 0;
// }

// #include <iostream>
// #include <fstream>
// using namespace std;

// int main() {
//     fstream f("text.txt",ios::in|ios::out);
//     f.seekg(25); //Belongs to ifstream
//     // while(f.good()) {
//     //     string line;
//     //     getline(f,line);
//     //     cout<<line<<endl;
//     // }
//     // f.seekg(30);

//     streampos pos = f.tellg();
//     cout<<pos<<endl;

//     // f.seekp(25); //Belongs to ofstream
//     // f<<"Well rayabagi is a weird sir name."<<endl;

//     return 0;
// }

// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main() {
//     cout<<setiosflags(ios::left)<<"hello"<<endl;
//     return 0;
// }

//Reading from a binary file

// #include <iostream>
// #include <fstream>
// using namespace std;

// int main() {
//     fstream file("test2.bin",ios::binary);
//     int p = 123465;
//     file.write((char *) &p, sizeof(p));
//     return 0;
// }

// #include <iostream>
// #include <fstream>
// using namespace std;

// int main() {
//     ifstream file("test.bin",ios::binary);
//     int p;
//     file.read((char *) &p, sizeof(p));
//     cout<<p;
//     return 0;
// }