#include <iostream>
#include <string>
using namespace std;

int main() {
  std::cout << "Hello World!\t";
  std::cout << "Hello World!\\";
  std::cout << "Hello World!\"\n";

    int mynum = 15;
    std::cout << mynum;

    int mynum2;
    mynum2 = 20;
    std::cout << mynum2 << "\n";

    int myNum = 5;             
    double myFloatNum = 5.99;    
    char myLetter = 'D';        
    string myText = "Hello";  
    bool myBoolean = true; 

    std::cout << "You are " << mynum2 << " Years old\n";

    int x;
    std::cout << "Please type a number\n";
    cin >> x;

    cout << "Your number is: " << x << "\n"; 

    double d1 = 12e4;
    std::cout << d1;

    string greeting = "Hello\n";
    cout << greeting << "\n";

    string firstname = "Kai";
    string lastname = "Jenkinson";

    string fullname = firstname.append(lastname);
    cout << fullname << "\n";

    cout << fullname.size() << "\n";

    


  return 0;


}

