#include<iostream>
#include<fstream>
using namespace std;
int main(){
    // cout<<"HEllo world";
    fstream MyFile("myfile.txt");
    MyFile << "Hello this is the thing written on the file.";
    
    MyFile.close();
    return 0;
}