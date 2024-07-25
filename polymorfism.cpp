#include<iostream>
using namespace std;

class Animal{
    public:
    void AnimalSound(){
        cout << "This is an animal sound.";
    }
};
 
class Pig:public Animal{
    public:
    void AnimalSound(){
cout<< "Wee wee" <<endl;
    }
};
class Horse:public Animal{
    public:
    void AnimalSound(){
cout<< "HEee hee" << endl;
    }
};
int main(){
 Horse chetak;
 chetak.AnimalSound();
 Pig piggy;
 piggy.AnimalSound();
 return 0;
}