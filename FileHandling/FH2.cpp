// #include <iostream>
// #include <fstream>

// using namespace std;

// int main() {
//     fstream file;
//     file.open("Demo.txt",ios::out);

//     if (!file.is_open()) {
//         cout<<"Failed to open the file."<<endl;
//     }
//     else {
//         cout<<"opened the file successfully."<<endl;
//         file<<"I Love Srishti Rana."<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// #include <fstream>
// using namespace std;

// int main() {
//     fstream file;

//     file.open("text.txt",ios::in);

//     if (!file.is_open()) {
//         cout<<"Failed to open the file."<<endl;
//     }
//     else {
//        string line;
//     //    getline(file,line);
//     //    cout<<line<<endl;
//         while(file.good()) {
//                getline(file,line);
//                cout<<line<<endl;
//         }

//     }
//     return 0;
// }

// #include <iostream>
// //fstream is a library that is used to perform operation on files.
// #include <fstream>
// using namespace std;

// int main() {
//     fstream file;
//     file.open("text.txt",ios::in | ios::out);
//     // string line;
//     // getline(file,line);
//     // cout<<line<<endl;
//     // while(file.good()) {
//     //     string line;
//     //     getline(file,line);
//     //     cout<<line<<endl;
//     // }
//     file.seekg(28);//part of ifstream
//     while(!file.eof()) {
//         string line;
//         getline(file,line);
//         cout<<line<<endl;
//     }

//     // file<<"Well, this girl Srishti is the most beautiful girl that I have ever seen in this world."<<endl;
//     // file<<"don't know why she doesn't recognise it."<<endl;

//     file.seekp(28); //is a part of ofstream
//     file<<"yo yo yo wassup";

//     //tellg() and tellp()
//     return 0;
// }

//Harsh

// #include <iostream>
// #include <iomanip>
// #include <sstream>
// using namespace std;

// int main() {
//     cout<<hex<<200<<endl;
//     double pi = 3787.14158668;
//     cout<<setprecision(3)<<pi<<endl;
//     cout<<fixed<<pi<<endl;
//     cout<<"hello srishti."<<setw(20)<<"kashyap"<<endl;
//     cout<<setiosflags(ios::right)<<setw(20)<<"Srishti"<<"Kashyap"<<endl;
//     return 0;
// }

// #include <iostream>
// #include <fstream>
// using namespace std;

// int main() {
//     ofstream file("srishti.bin",ios::binary);
//     int p = 420;
//     file.write((char *)&p, sizeof(p));
//     return 0;
// }

// #include <iostream>
// #include <fstream>
// using namespace std;

// int main() {
//     ifstream file("srishti.bin",ios::binary);
//     int p;
//     file.read((char *)&p, sizeof(p));
//     cout<<p<<endl;
//     return 0;
// }

// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main() {
//     cout<<oct<<106;
//     return 0;
// }


#include <iostream>
#include <vector>
using namespace std;

template <class T>


int main() {

    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int a = 3;
    cout<<a<<endl;
    a = 7;
    cout<<a;
    return 0;
}

// #include <iostream>
// using namespace std;

// class Anime {
//     string name;

//     public:
//         void setname(string _name) {
//             this->name = name;
//         }
// };

// int main() {
//     return 0;
// }