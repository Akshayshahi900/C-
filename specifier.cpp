#include<iostream>
using namespace std;


class car{
    public:
    string brand;
  

  void printBrand (){
     cout <<this->brand;
  }
    

};
int main(){

car BMW;
BMW.brand = "M3";
 BMW.printBrand();



     return 0;
}