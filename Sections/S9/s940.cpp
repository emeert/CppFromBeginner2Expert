#include <iostream> 

using namespace std; 

int main()
{

    double var = 5.6; 


    int a = 5;
    int b = 7; 

    cout << (double)a/b << endl;

    cout << (int)var << endl; //explicit way C

    cout << int(var) << endl; //explicit way C

    int x = 564345664; 
    short y = x;  //implicit way

    cout << x << endl;
    cout << y << endl; 

    cout << static_cast <int> (var) << endl; // explicit cast C++

    char ch = 'k';

    cout << (int)ch << endl;


    return 0;
}