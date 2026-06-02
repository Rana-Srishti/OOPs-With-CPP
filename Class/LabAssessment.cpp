// #include <iostream>
// using namespace std;

// class bankAccount {
//     protected:
//         string customerName;
//         int accountNo;
//         double balance;
//         string Type;
    
//     public:
//         bankAccount() {
//         customerName = "";
//         accountNo = 0;
//         balance = 0.0;
//         Type = "";
//     }


//         void initializer (string name, int accNo, string type) {
//             customerName = name;
//             accountNo = accNo;
//             Type = type;
//         }

//         void Deposit(double amount) {
//             if (amount <= 0 ) {
//                 cout<<"Invalid Amount";
//             }
//             balance += amount;
//             cout<<"Rs. "<<amount<<" has been deposited to your account."<<endl;
//             cout<<"Account Balance: "<<balance<<endl;
//         }

//         void Withdraw(double amount) {
//             if (amount <= 0) {
//                 cout<<"Invalid Amount."<<endl;
//             }
//             balance -= amount;
//             cout<<"Amount of Rs. "<<amount<<" has been withdrawn from your account"<<endl;
//             cout<<"Your Current Balance: Rs."<<balance<<endl;
//         }
//         void checkBalance() {
//             cout<<"Your Current Balance is: Rs."<<balance<<endl;
//         }
//         void displayInfo() {
//             cout<<"Account Holder Name: "<<customerName<<endl;
//             cout<<"Account Number: "<<accountNo<<endl;
//             cout<<"Account Type: "<<Type<<endl;
//         }

// };

// int main() {
//     bankAccount acc1;
//     acc1.initializer("Kashyap",01101001,"Savings");
//     acc1.Deposit(10000);
//     acc1.Withdraw(199);
//     acc1.displayInfo();
//     return 0;
// }



// 3. 

// #include <iostream>
// using namespace std;

// class Account {
//     protected:
//         string CustomerName;
//         int AccountNo;
//         string Type;
//         double balance;

//     public:
//         void init(string name, int accNo,double bal = 0.0) {
//             CustomerName = name;
//             AccountNo = accNo;
//             balance = bal;
//         }

        
//         void displayBalance() {
//             cout<<"Your Current Balance is: Rs."<<balance<<endl;
//         }

//         void displayInfo() {
//             cout<<"Account Holder Name: "<<CustomerName<<endl;
//             cout<<"Account Number: "<<AccountNo<<endl;
//             cout<<"Account Type: "<<Type<<endl;
//             displayBalance();
//         }


//         void deposit(double amount) {
//             if (amount > 0) {
//                 balance += amount;
//                 cout<<"Rs."<<amount<<" Deposited to your account."<<endl;
//                 displayBalance();
//             }
//             else {
//                 cout<<"Invalid Deposit";
//             }
//         }

//         void withdraw(double amount) {
//             if (amount > 0 && balance > amount) {
//                 balance -= amount;
//                 cout<<"Rs."<<amount<<" withdrawn from your account."<<endl;
//                 displayBalance();
//             }
//         }
// };

// class curr_acct : public Account {
//     private:
//         double min_balance;
//     public:
//         curr_acct() {
//             Type = "Current";
//             min_balance = 1000;
//         }
//         void check_minbal() {
//             if (balance < min_balance) {
//                 double penalty = 50;
//                 balance -= penalty;
//                 cout<<"Minimum balance penalty Rs."<<penalty<<endl;
//                 displayBalance();
//             }
//         }
//         void checkbook_avail() {
//             cout<<"Check book available."<<endl;
//         }
// };


// class Sav_acct : public Account {
//     private:
//         double interest_rate;
//     public:
//         Sav_acct() {
//             Type = "Savings";
//             interest_rate = 0.05;  
//         }

//         void compute_interest() {
//             double interest = balance * interest_rate;
//             balance += interest;
//             cout << "Interest earned: Rs." << interest << ". New balance: Rs." << balance <<endl;
//         }void checkbook_avail() {
//             cout<<"Check book unavailable."<<endl;
//         }


// };

// int main() {
//     curr_acct acc1;
//     acc1.init("kashyap",216121651);
//     acc1.deposit(5000);
//     acc1.checkbook_avail();

//     Sav_acct acc2;
//     acc2.init("Srishti",21654613);
//     acc2.deposit(10000);
//     acc2.compute_interest();
    
//     return 0;
// }


//2. 

// #include <iostream>
// #include <time.h>
// using namespace std;

// class Game {
//     private:
//         int num = 1 + rand() % 1000;
//         int guess;
    
//     public:
//         bool play() {
//             cout<<"I have a number between 1 and 1000.\nCan you guess my number?\nPlease type your guess: ";
//             cin>>guess;
//                 if (num == guess) {
//                     cout<<"You guessed right."<<endl;
                    
//                 }
//                 else {
//                     if (guess > num) {
//                         cout<<"Oops! too high"<<endl;
//                     }
//                     else if (guess < num) 
//                     {
//                         cout<<"Oops! too low"<<endl;
//                     }
//                     play();
//                 }
//             }
       
// };

// int main() {
//     srand(time(NULL));
//     Game g1;
//     g1.play();
//     return 0;
// }