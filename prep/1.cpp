//Basic code for defining a class and then an object
// #include <iostream>
// using namespace std;

// class laptop { // Class is a user defined data type
//     public:
//         string procesesor;
//         string colour;
//         double cost;
//         int ram;
//         int rom;

// };

// int main() {
//     laptop l1;
//     l1.colour = "Black";
//     l1.cost = 50000;
//     l1.procesesor = "i5";
//     l1.ram = 16;
//     l1.rom = 512;

//     cout<<l1.colour<<" "<<l1.cost<<" "<<l1.procesesor<<" "<<l1.ram<<" "<<l1.rom;
//     return 0;
// }


//What are constructors
// #include <iostream>
// using namespace std;

// class laptop {
//     public:
//         string procesesor;
//         string colour;
//         double cost;
//         int ram;
//         int rom;

//     //repeating code for every object in main function..! Say NO MORE. USE CONSTRUCTORS'
//     //constructor has same name as class
//     laptop(string PName,string clr,double cst,int ram, int rom) {
//         procesesor = PName;
//         colour = clr;
//         cost = cst;
//         ram = ram;
//         rom = rom;
//     }

//     //Make a method to print these things once and for all
//     public:
//         void getinfo() {
//              cout<<"Colour: "<<colour<<" "<<"Cost: Rs: "<<cost<<" "<<"Processor: "<<procesesor<<" "<<"Ram: "<<ram<<" "<<"Rom: "<<rom<<endl;
//         }


// };

// int main() {
//     laptop l1("i5","Black",50000,16,512);
//     l1.getinfo();
//     laptop l2("i3","Grey",25000,8,256);
//     l2.getinfo();
//     // l1.colour = "Black";
//     // l1.cost = 50000;
//     // l1.procesesor = "i5";
//     // l1.ram = 16;
//     // l1.rom = 512;

   
//     return 0;
// }


//lets introduce a new attributes of this laptop lets say no of orders placed until now. However if i am able to set it from main funciton i can set any value and this will be cheating.
//so we encapsulate these variable and set defined rules through methods to access them

// #include <iostream>
// using namespace std;

// class laptop {
//       private:
//         int ordersplaced; //this is encapsulated...every other variable should also be encapsulated

//       public:
//         string procesesor;
//         string colour;
//         double cost;
//         int ram;
//         int rom;
    
  

//     //repeating code for every object in main function..! Say NO MORE. USE CONSTRUCTORS'
//     //constructor has same name as class
//     laptop(string PName,string clr,double cst,int lram, int lrom) {
//         procesesor = PName;
//         colour = clr;
//         cost = cst;
//         ram = lram;
//         rom = lrom;
//         ordersplaced = 0;
//     }

//     //Make a method to print these things once and for all
//     public:

//         void placeOrder() { // Creating a method for accessing private variable and the rules are defined clearly
//             ordersplaced++;
//         }
//         void getinfo() {
//              cout<<"Colour: "<<colour<<" "<<"Cost: Rs: "<<cost<<" "<<"Processor: "<<procesesor<<" "<<"Ram: "<<ram<<" "<<"Rom: "<<rom<<" "<<"Orders Placed: "<<ordersplaced<<endl;
//         }


// };

// int main() {
//     laptop l1("i5","Black",50000,16,512);
//     l1.placeOrder();
//     l1.placeOrder();
//     l1.getinfo();
//     return 0;
// }


#include <iostream>
using namespace std;

class laptop {
      private:
        int ordersplaced; //this is encapsulated...every other variable should also be encapsulated

      public:
        string procesesor;
        string colour;
        double cost;
        int ram;
        int rom;
    
  
    laptop(string PName,string clr,double cst,int lram, int lrom) {
        procesesor = PName;
        colour = clr;
        cost = cst;
        ram = lram;
        rom = lrom;
        ordersplaced = 0;
    }
        void placeOrder() { 
            ordersplaced++;
        }
        void getinfo() {
             cout<<"Colour: "<<colour<<" "<<"Cost: Rs: "<<cost<<" "<<"Processor: "<<procesesor<<" "<<"Ram: "<<ram<<" "<<"Rom: "<<rom<<" "<<"Orders Placed: "<<ordersplaced<<endl;
        }

};

   //Now i want to create a class mobile phone but it has all same variable as a laptop....so why write code again...inherit them
   class Mobile: public laptop {
     //create a constructor
     public: 
       Mobile(int Mram,int Mrom): laptop(ram,rom) {
                    ram = Mram;
                    rom = Mrom;
     }
     
   };

int main() {
    laptop l1("i5","Black",50000,16,512);
    l1.placeOrder();
    l1.placeOrder();
    l1.getinfo();
    Mobile m1(16,256);
    m1.getinfo();
    return 0;
}