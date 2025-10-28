#include <iostream>

using namespace std; 

/*
    Just practicing arrays demonstrating a use case (Not the best use case  I know) and demonstrating how arrays store 4 bytes apart. 

*/


int main()
{

    int arr[100];

    for (int i = 0; i < 100 ; i++)
    {
        arr[i] = i+1;
        arr[i] *= arr[i];
        cout << arr[i] << endl;
        cout << &arr[i] << endl;
        
    }

}