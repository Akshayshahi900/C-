#include <iostream>
using namespace std;
class car
{
public:
    string brand;
    int modelyear;
    car(string b, int my)
    {
        brand = b;
        modelyear = my;

        cout << b << endl;
        cout << my << endl;
    }
};

int main()
{

    car BMW("BMW", 1998);

    return 0;
}