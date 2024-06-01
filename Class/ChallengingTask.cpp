#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

class StudentDetails {
    string name;
    string RegNo;

    public:
        StudentDetails() {}
        StudentDetails(string _name,string _regno) {
            name = _name;
            RegNo = _regno;
        }

        void setdata() {
        cout << "Enter Student Name: ";
        getline(cin, name);  
        cout << "Enter Student RegNo: ";
        getline(cin, RegNo);
    }

        void showdata() {
            cout<<"Name: "<<name<<endl;
            cout<<"RegNo: "<<RegNo<<endl;
        }
};

class GradeView {
    string CourseCode;
    string CourseTitle;
    string CourseType;
    int Credits;
    int GrandTotal;
    string Grade;
    static bool printedHeadings; 

    public:

        GradeView() {}

        GradeView(string _CourseCode, string _CourseTitle,string _CourseType,int _Credits,int _GrandTotal,char _Grade) {
                CourseCode = _CourseCode;
                CourseTitle = _CourseTitle;
                CourseType = _CourseType;
                Credits = _Credits;
                GrandTotal = _GrandTotal;
                Grade = _Grade;
        }
        void SetVal() {
            cout << "Enter Course Code: ";
            getline(cin, CourseCode);
            cout << "Enter Course Title: ";
            getline(cin, CourseTitle);
            cout << "Enter Course Type: ";
            getline(cin, CourseType);
            cout << "Enter Credits: ";
            cin >> Credits;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Enter Grand Total: ";
            cin >> GrandTotal;
            cout << "Enter Grade: ";
            cin >> Grade; // Instead of Grade[0] = getchar();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void showdata() {
        if (!printedHeadings) {
            cout << left << setw(12) << "Course Code  | " << setw(45) << "Course Title " << setw(12) << " | Course Type"
                 << setw(8) << " |Credits" << setw(12) << " | Grand Total" << setw(8) << " | Grade" << endl;
            printedHeadings = true; 
        }
        cout << left << setw(12) << CourseCode << " | " << setw(45) << CourseTitle << " | " << setw(11) << CourseType
             << setw(8) << " |" << Credits << setw(12) << " |" << GrandTotal << setw(4) << " |" << Grade << endl;
    }
};

bool GradeView::printedHeadings = false; 

        

int main() {

    StudentDetails student;

    student.setdata();

    GradeView grades[7];

    cout << "\nEnter marks for student:" << endl;
    for (int j = 0; j < 5; j++) {
        cout << "\nSubject " << j + 1 << ":" << endl;
        grades[j].SetVal();
    }

    int cgpa;
    cout<<"Enter CGPA: ";
    cin>>cgpa;

    cout << "\nDetails of student:" << endl;
    student.showdata();

    cout << "\nMarks for student:" << endl;
    for (int j = 0; j < 5; j++) {
        grades[j].showdata();
    }

    cout<<"\n";

    cout<<cgpa;

    return 0;

}

// //5.
// #include <iostream>
// using namespace std;

// int main() {
//     string s = "STRING";
//     for (int i = 0; i < s.length(); i++) {
//         for (int j = 0; j < s.length()-1; j++)  {
//         string temp;
//         if ((int(s[i]) < int(s[j]))) {
//             swap(s[i],s[j]);
//         }
//     }
// }
//     cout<<"The changed string is: "<<s;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// class SpoiltBallot {
//     static int SB;

// public:
//     SpoiltBallot() {
//         SB++;
//     }
//     static void show() {
//         cout << "The number of Spoiled Ballot is: " << SB << endl;
//     }
// };
// int SpoiltBallot::SB = 0;

// class Candidate {
//     int votes;

// public:
//     Candidate(int ID) {
//         votes = 0;
//     }

//     void Vote() {
//         votes++;
//     }

//     int show_votes() {
//         return votes;
//     }
// };

// int main() {
//     Candidate* candidates = new Candidate[5]{1, 2, 3, 4, 5};
//     int ID;
//     while (ID != 0) {
//     cout << "To Vote, Enter the candidate ID (To exit enter 0 ): ";
//     cin >> ID;
//     if (ID < 0 || ID > 5) {
//         SpoiltBallot sb;
//     } else {
//         candidates[ID - 1].Vote();
//     }
// }
//     SpoiltBallot::show();
//     for (int i = 0; i < 5; i++) {
//         cout << "The no of votes received for Candidate " << i + 1 << " is: " << candidates[i].show_votes() << endl;
//     }
//     delete[] candidates;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// class Date {
// private:
//     int day;
//     int month;
//     int year;

// public:
//     Date(int d, int m, int y) : day(d), month(m), year(y) {}

//     void showdate() {
//     cout << day << "/" << month << "/" << year << endl;
//    }

//     bool operator<(const Date& other) const {
//         if (year != other.year) return year < other.year;
//         if (month != other.month) return month < other.month;
//         return day < other.day;
//     }

//     bool operator<=(const Date& other) const {
//         return (*this < other) || (*this == other);
//     }

//     bool operator>(const Date& other) const {
//         return !(*this <= other);
//     }

//     bool operator>=(const Date& other) const {
//         return !(*this < other);
//     }

//     bool operator==(const Date& other) const {
//         return (day == other.day) && (month == other.month) && (year == other.year);
//     }

//     bool operator!=(const Date& other) const {
//         return !(*this == other);
//     }

//     Date& operator++() {
//         day++;
//         month++;
//         year++;
//         return *this;
//     }

//     Date operator+(int days) const {
//         Date result(*this);
//         result.day += days;
//         while (result.day > 30) {
//             result.day -= 30;
//             result.month++;
//             if (result.month > 12) {
//                 result.month = 1;
//                 result.year++;
//             }
//         }
//         return result;
//     }

//     operator int() const {
//         return 0;
//     }

   

// };

// int main() {
//     Date today(11, 4, 2024);
//     Date tomorrow = today + 1;
//     cout << "Tomorrow's date: " ;
//     tomorrow.showdate();
    

//     Date date1(10, 4, 2024);
//     Date date2(12, 4, 2024);
//     if (date1 < date2) {
//         cout << "Date1 is earlier than Date2." << endl;
//     } else {
//         cout << "Date1 is not earlier than Date2." << endl;
//     }

//     int days = static_cast<int>(today);
//     cout << "Days elapsed in current year: " << days << endl;

//     return 0;
// }
