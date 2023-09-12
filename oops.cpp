#include<iostream>
#include<string>
using namespace std;

class Myclass {   //The class
 public:        //Acess specifier
  int myNum;      //Attribute (int variable)
  string myString; //Attribute(string variable)
};

int main() {
    MyClass myObj; //Create an object of MyClass

//Access attributes and set values
myObj.myNum=15;
myObj.myString="Some text";

//Pront values
cout<<myObj.myNum<<"/n";
cout<<myObj.myString;
return0;
}
