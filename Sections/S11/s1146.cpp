#include <iostream>

using namespace std;



struct personalData
{
    string name; 
    string surname;
    string telaphoneNumber;
    short age;

};

void test(personalData *);

int main()
{

    personalData person[3] = 
    {
        {"Babe  ","Ruthe ","123456789",109},
        {"Rocky ","Balboa","555666777",55},
        {"PeeWee","Herman","111222333",70}
    };

    cout << person[0].name <<endl;
    cout << person[0].surname << endl;
    cout << person[0].telaphoneNumber <<endl;
    cout << person[0].age << endl;

    cout << (*person).name << endl;
    cout << (*&person[0]).name << endl;
    cout << person->name << endl;
    
    cout << (person+1)->name << endl;

    for(int i = 0; i < 3; i++)
    {
        cout << "Name:  ";
        cout << (person+i)->name;
        cout << " ";
        cout << (person+i)->surname;
        cout << " Phone #: ";
        cout << (person+i)->telaphoneNumber;
        cout << " Age: ";
        cout << (person+i)->age <<endl;
    }

    test(person);

    cout << endl;
    cout << endl;


    for(int i = 0; i < 3; i++)
    {
        cout << "Name:  ";
        cout << (person+i)->name;
        cout << " ";
        cout << (person+i)->surname;
        cout << " Phone #: ";
        cout << (person+i)->telaphoneNumber;
        cout << " Age: ";
        cout << (person+i)->age <<endl;
    }




    return 0;
}

void test(personalData *person)
{
    person->name = "Jack";
}
