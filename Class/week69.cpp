// #include <iostream>
// using namespace std;
// #include <fstream>
// int main ()
// { 
// ifstream fsIn;//input
// ofstream fsOut; // output
// fstream both; //input & output

// //Open the files
// fsIn.open("prog1.txt"); //open the input
// fsOut.open("prog2.txt"); //open the output
// //Code for data manipulation
// //Close files
// fsIn.close();
// fsOut.close();
// return 0; }


//2
// #include <iostream>
// #include <fstream>
// using namespace std;
// int main()
// {//Declare and open a text file
// ifstream openFile("data.txt");
// char ch;
// //do until the end of file
// while( ! openFile.eof() )
// {
// openFile.get(ch); // get one character
// cout << ch; // display the character
// }
// openFile.close(); // close the file
// return 0;
// }

// #include <fstream>
// #include <iostream>

// using namespace std;

// int main()
// {
// ofstream outFile("file1.txt", ios::out);
// outFile << "That's new!\n";
// outFile.close();
// return 0;
// }

// #include <iostream>
// #include <fstream>
// using namespace std;
// int main()
// {
// ofstream outFile;
// // open an exist file fout.txt
// outFile.open("number.txt",ios::app);

// if (!outFile.is_open())
// { cout << " problem with opening the file ";}
// else
// {outFile <<200 <<endl ;
// cout << "done writing" <<endl;}

// outFile.close();

// }

// #include <iostream>
// #include<fstream>
// #include <stdlib.h>

// using namespace std;

// int main() {
//     ofstream outClientFile("clients.dat",ios::out);
//     if (!outClientFile) {
//         cerr<<"File could not be opened"<<endl;
//         exit(1);
//     }
//     cout<<"Enter the account, name and balance: \n"<<"Enter end of file ot end input.\n?";
//     int account;
//     char name[30];
//     float balance;
//     while (cin>>account>>name>>balance) {
//         outClientFile <<account<<" "<<name<<" "<<balance<<"\n";
//         cout<<"?";
//     }
//     return 0;
// }
// #include <iostream>
// #include <fstream>
// using namespace std;

// int main() {
//     fstream my_file;
//     my_file.open("data.txt",ios::out);
//     if (!my_file) {
//         cout<<"file not created";
//     }
//     else {
//         cout<<"File created successfully";
//         my_file<<"Hello World";
//         my_file.close();
//     }
//     return 0;
// }


#include <iostream>
#include  <fstream>
using namespace std;

int main() {
    fstream my_file;
    my_file.open("22BCE11282.txt", ios::in);
    if(!my_file) {
        cout<<"No such file";
    }
    else {
        char ch;
        while(1) {
            my_file>>ch;
            if (my_file.eof()) 
            break;
            cout<<ch;
        }
    }
    my_file.close();
    return 0;
}