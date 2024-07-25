#include <iostream>
#include <string>
#include <cstring>
using namespace std;

void printingname(string name = "Akshay")
{
    cout << name;
}
void swap(int &x, int &y)
{
    int z = x;
    x = y;
    y = z;
}
int plusfunc(int a, int b)
{
    return a + b;
}
double plusfunc(double a, double b)
{
    return a + b;
}
struct cars
{
    string brand;
    string model;
    int year;
};
enum TIMES
{
    MORNING = 800,
    AFTERNOON = 1200,
    EVENING = 1800
};
int main()
{
    int a = 15;
    string name = "Akshay";
    string surname = " Shahi";
    double b = 5.33;
    char character = 'w';
    bool myboolean = true;
    const string address = "AGRA";
    // cout <<"HEllo world";
    // cout << a+b  << "\n";
    // cout << name << "\n";
    // cout << b  << "\n";
    // cout << myboolean << "\n" ;
    // cout << address;
    // int input;
    // cin >> input;

    // cout << "The input is :" << input;
    // cout << name.append(surname) << " " ;
    // cout << surname.length();
    // cout << name[1] << "\n";
    // cout << name.at(1) << "\n";
    // cin >> name;
    // getline (cin , name);
    // cout << name;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // for(int k : arr){
    //      cout << k ;
    // }
    //   cout << sizeof(arr)/sizeof(int);
    // int muldarr[2][2][2] = {
    //     {
    //         {1, 2}, {3, 4}
    //     },
    //     {
    //     {5, 6}, {7, 8}
    //     },

    // };
    // cout << muldarr[1][1][2] ;
    struct
    {
        int id;
        string employee_name;

    } data;
    data.id = 873;
    data.employee_name = "Akshay";
    // cout << "Id is: " << data.id << "\n" << "Employee_name: " << data.employee_name;

    cars car1;
    car1.brand = "BMW";
    car1.model = "X1";
    car1.year = 2020;
    cars car2;
    car2.brand = "BMW";
    car2.model = "X3";
    car2.year = 2022;
    // cout <<car1.model;

    enum TIMES myvar = MORNING;

    // cout << myvar;

    string food = "PIZZA";
    string *ptr = &food;
    // cout << ptr <<"\n";
    // cout << *ptr <<"\n";
    // *ptr = "BURGER";
    // cout <<*ptr;
    // printingname();

    int firstNum = 10;
    int secondNum = 20;

    // cout << "Before swap: " << "\n";
    // cout << firstNum  << "\n" << secondNum << "\n";

    swap(firstNum, secondNum);

    // cout << "After swap: " << "\n";
    // cout << firstNum  << "\n" << secondNum << "\n";
    int myNum1 = plusfunc(8, 5);
    double myNum2 = plusfunc(4.3, 6.26);
    cout << "Int: " << myNum1 << "\n";
    cout << "Double: " << myNum2;

    return 0;
}