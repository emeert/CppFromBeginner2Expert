#include <iostream>

using namespace std; 


//void  multiplyBy (int *, int);  uses a pointer

int * multiplyBy (int *, int);  //uses a pointer

void multiplyArrayBy(int [], int ,int);


int main()
{


    int a = 10; 

    cout << a << endl;

    int *b  = multiplyBy(&a,5);

    cout << a << endl;

    *b = 999;

    
    cout << a << endl;
    cout << *b << endl;

    int array[10]; 

    int arraySizer = sizeof(array)/sizeof(array[0]);

    for (int i = 0; i < 10; i++)
    {
        array[i] = i;
        cout << "array["<< i << "] = " << array[i] << endl;
    }

    multiplyArrayBy(array,30,arraySizer);

    for (int i = 0; i < arraySizer; i++)
    {
        cout << "array["<< i << "] = " << array[i] << endl;
    }
    
    return 0;
}

int * multiplyBy(int *var, int amount)
{
    *var = *var * amount;

    return var;
}

void multiplyArrayBy(int arr[], int amount, int sizeofArray)
{
    for (int i = 0; i < sizeofArray; i++)
    {
        arr[i] = arr[i] * amount;
    }
}
