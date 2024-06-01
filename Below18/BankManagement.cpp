#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

void ModifyBalance(int _accNo, float amt) {
  int accNo;
  float newBalance;
  bool found = false;

  string filename = "Accounts.txt";

  ifstream infile(filename);
  ofstream outfile("TempAccounts.txt"); // Temporary file for storing updates

  if (infile.is_open() && outfile.is_open()) {
    accNo = _accNo;

    string line;
    while (getline(infile, line)) {
      vector<string> tokens;
      stringstream ss(line);
      string token;
      while (getline(ss, token, '|')) {
        tokens.push_back(token);
      }

      if (stoi(tokens[0]) == accNo) {
        found = true;
        cin.ignore(); // Consume newline character
        newBalance = stoi(tokens[2]) + amt;
        tokens[2] = to_string(newBalance);
      }

      outfile << tokens[0] << "|" << tokens[1] << "|" << tokens[2] <<"|"<<tokens[3]<<"|"<<tokens[4]<<"|"<<tokens[5]<<endl;
    }
    infile.close();
    outfile.close();

    if (found) {
      remove(filename.c_str()); // Delete original file
      rename("TempAccounts.txt", filename.c_str()); // Rename temporary file
    } else {
      cout << "Account not found!" << endl;
      remove("TempAccounts.txt"); // Delete temporary file if account not found
    }
  }
}

double ReadAccountBalance(int accountNumber) {
  string filename = "Accounts.txt";
  double balance;
  ifstream infile(filename);

  if (infile.is_open()) {
    string line;

    while (getline(infile, line)) {
      vector<string> tokens;
      stringstream ss(line);
      string token;

      while (getline(ss, token, '|')) {
        tokens.push_back(token);
      }

      // Check if there are at least 3 tokens (account number, name, and balance)
      if (tokens.size() >= 3) {
        int fileAccountNumber = stoi(tokens[0]);

        // Check if account number matches
        if (fileAccountNumber == accountNumber) {
          balance = stod(tokens[2]);
          infile.close();
          return balance; // Account found and balance retrieved, exit loop
        }
      }
    }

    infile.close();
  } else {
    cerr << "Error opening file: " << filename << endl;
  }

  return false; // Account not found or error reading file
}

string DisplayDepositSchemes() {
  cout<<"Please Take A Look at our Deposit Schemes: "<<endl;
  cout<<"+-------------------------+-------------+----------------------+"<<endl;
  cout<<"| SNo | Name                   | IntrestRate | Minimum_Deposit |"<<endl;
  cout<<"+-------------------------+-------------+----------------------+"<<endl;
  cout<<"|  1  |Savings                 |           2 |             100 |"<<endl;
  cout<<"|  2  |Fixed Deposit(1 year)   |           3 |             500 |"<<endl;
  cout<<"|  3  |Fixed Deposit(2 years)  |           5 |             500 |"<<endl;
  cout<<"|  4  |Fixed Deposit(5 years)  |           7 |             500 |"<<endl;
  cout<<"|  5  |Fixed Deposit(7 years)  |           9 |             500 |"<<endl;
  cout<<"+-------------------------+-------------+----------------------+"<<endl;

  int num;
  cout<<"Enter the Number of Scheme You Want To Choose: ";
  cin>>num;

  switch (num)
  {
  case 1:
    return "Savings";
    break;
  
  case 2:
    return "Fixed Deposit(1 year) ";
    break;

  case 3:
    return "Fixed Deposit(2 years)";
    break;

  case 4:
    return "Fixed Deposit(5 years)";
    break;
  
  case 5:
    return "Fixed Deposit(7 years)";
    break;

  default:
    return "NULL";
    break;
  }


}

class Accounts {
private:
  int AccNo;
  string AccHolder;
  int Balance;
  string sch;
  string PhoneNo;
  string Branch;
  static bool printedHeadings; 

public:
  Accounts() {}

  void CreateAccount() {
    cout << "Enter Account No: ";
    cin >> AccNo;
    cin.ignore();
    cout << "Enter Account Holder Name: ";
    getline(cin, AccHolder);
    sch = DisplayDepositSchemes();
    cout << "Enter Amount To Be Deposited: ";
    cin >> Balance;
    cout << "Enter Phone No: ";
    cin >> PhoneNo;
    cin.ignore();
    cout << "Enter Branch: ";
    getline(cin, Branch);

    ofstream outfile("Accounts.txt", ios::app);

    if (outfile.is_open()) {
      if (Balance >= 100) {
        outfile << AccNo << "|" << AccHolder << "|" << Balance << "|" << sch << "|" << PhoneNo << "|" << Branch << endl;
        cout<<"Account created Successfully"<<endl;
      } else {
        cout << "Minimum Balance is Rs.100" << endl;
      }
    } else {
      cerr << "Error opening file for appending!" << endl;
    }
    outfile.close();
  }

   Accounts(int _AccNo, const string& _AccHolder, int _Balance,string _sch, const string& _PhoneNo, const string& _Branch) {
    AccNo = _AccNo;
    AccHolder = _AccHolder;
    Balance = _Balance;
    sch = _sch;
    PhoneNo = _PhoneNo;
    Branch = _Branch;
  }

  void DisplayDetails() {
        if (!printedHeadings) {
            printedHeadings = true;
            cout << left << setw(13) << "Account No  | " << setw(25) << "Account Holder " << setw(14) << " | Balance"
                 << setw(30) << " |Deposit Type" << setw(12) << " | Phone Number" << setw(12) << "   | Branch" << endl;
            printedHeadings = true; 
        }
        cout << left << setw(11) << AccNo << " | " << setw(25) << AccHolder << " | " << setw(11) << Balance
             << setw(2) << " |" << setw(28)<< sch << " | " <<setw(14)<< PhoneNo <<" | "<< setw(7)<< Branch << endl;

  }

  void Deposit(int _accNo,float _Amount) {
    if (_Amount == 0) {
      cout << "Enter Valid Amount." << endl;
    } else {

      cout << "Amount " << _Amount << " deposited to your account." << endl;
      ModifyBalance(_accNo,_Amount);
      cout << "Balance is: Rs." << ReadAccountBalance(_accNo) << endl;
      
    }
  }

  void Withdrawal(int _accNo,float _Amount) {
    if (ReadAccountBalance(_accNo) < _Amount) {
      cout << "Insufficient balance." << endl;
    } else {
      ModifyBalance(_accNo,-(_Amount));
      cout << "Amount Rs." << _Amount << " debited from your account." << endl;
      cout << "Balance is: Rs." << ReadAccountBalance(_accNo) << endl;

    }
  }

  bool Eligibility(int _accNo, string Loan_Type) {
    if (Loan_Type == "Car Loan") {
      return ReadAccountBalance(_accNo) > 50000;
    } else if (Loan_Type == "Home Loan") {
      return ReadAccountBalance(_accNo) > 200000;
    } else if (Loan_Type == "Education Loan") {
      return ReadAccountBalance(_accNo) > 1000000;
    } else {
      return false;
    }
  }

  void MoneyTransfer(int faccNo, int taccNo, double amt) {
    Withdrawal(faccNo, amt);
    Deposit(taccNo, amt);

  }

  ~Accounts() {
    // No need to close file here, OS will handle on program exit
  }
};
bool Accounts::printedHeadings = false; 

void DisplayAllDetails() {
  ifstream infile("Accounts.txt");

  if (infile.is_open()) {
    cout << "All Account Details:" << endl;

    string line;
    while (getline(infile, line)) {
      vector<string> tokens;
      size_t pos = 0;
      string token;
      while ((pos = line.find("|")) != string::npos) {
        token = line.substr(0, pos);
        tokens.push_back(token);
        line.erase(0, pos + 1);
      }
      tokens.push_back(line);

      Accounts acc(stoi(tokens[0]), tokens[1], stoi(tokens[2]), tokens[3], tokens[4],tokens[5]);

      acc.DisplayDetails();
    }
  } else {
    cerr << "Error opening file for reading!" << endl;
  }

  infile.close();
}  



int main() {
  while (true) {
  cout << "Welcome to AKASH Bank\n1.Create Account\n2.Show Accounts\n3.Deposit Money\n4.Withdraw Money\n5.Check Loan Eligibility\n6.Money Transfer\n7.Exit\nChoose an option: ";
  Accounts acc;
  int option;
  cin >> option;

  switch (option) {
  case 1: {
    acc.CreateAccount();
    break;
  }
  case 2:
    DisplayAllDetails();
    break;
  case 3: {
    int accNo, amount;
    cout << "Enter Account Number: ";
    cin >> accNo;
    cout << "Enter Amount to Deposit: ";
    cin >> amount;
    acc.Deposit(accNo,amount);
    break;
  }
  case 4: {
    int accNo, amount;
    cout << "Enter Account Number: ";
    cin >> accNo;
    cout << "Enter Amount to Withdraw: ";
    cin >> amount;
    acc.Withdrawal(accNo,amount);
    break;
  }
  case 5: {
    int accNo;
    string loanType;
    cout << "Enter Account Number: ";
    cin >> accNo; cin.ignore();
    cout << "Enter Loan Type (Car Loan, Home Loan, Education Loan): ";
    getline(cin,loanType);
    if (acc.Eligibility(accNo,loanType) == 1) {
      cout << "Congratulations! You are eligible for " << loanType << endl;
    } else {
      cout << "Sorry, you are not currently eligible for " << loanType << endl;
    }
    break;
  }
  case 6: {
    int faccNo,taccNo;
    float amt;
    cout<<"Enter Your Account No: ";
    cin>>faccNo;
    cout<<"Enter The Account No You Want To Trasnfer Amount To: ";
    cin>>taccNo;
    cout<<"Enter Amount: Rs.";
    cin>>amt;
    Accounts acc;
    acc.MoneyTransfer(faccNo,taccNo,amt);
  }
  case 7: {
    return false;
  }
  default:
    cout << "Invalid Option" << endl;
  }}
}


// +-----------------------------------------------------+
// |                     Accounts                        |
// +-----------------------------------------------------+
// | - AccNo: int                                        |
// | - AccHolder: string                                 |
// | - Balance: int                                      |
// | - sch: string                                       |
// | - PhoneNo: string                                   |
// | - Branch: string                                    |
// +-----------------------------------------------------+
// | + Accounts()                                        |
// | + Accounts(int, string, int, string, string, string)|
// | + void CreateAccount()                              |
// | + void DisplayDetails()                             |
// | + void Deposit(int, float)                          |
// | + void Withdrawal(int, float)                       |
// | + bool Eligibility(int, string)                     |
// | + void MoneyTransfer(int, int, double)              |
// +-----------------------------------------------------+
