#include <iostream>
#include <vector>

using namespace std; 

/*

Exercise 1.

Create a structure of data called "book" containing three properties: title, author,
publication year. In the main function declare three variables with the "book" type.

Exercise 2.

Modify the program from exercise 1. Create a function that will set (fill) values of each
propery of every book type variable created in the exercise 1. Values should be taken from
the user input.

Exercise 3.

Modify the program from exercise 2. Create a function that will print out in the console the
values of properties of the book sent as the argument of the function.


*/




struct book 
{
    string title; 
    string author; 
    int publicationYear; 
};

void fillBook(book& b );
void printBook(const book& b);


int main()
{


    book horrorBooks[3] =
    {
        {"It", "Stephen King", 1986},
        {"Dracula", "Bram Stoker", 1897},
        {"Frankenstien", "Mary Shelly", 1818}
    };

    // Something cool that makes Marty Mcfly say "I guess you guys are ready for that yet, but your kids are going to love it."" 
    // vector<book> horrorBooks;

    // horrorBooks.push_back({"It", "Stephen King", 1986});
    // horrorBooks.push_back({"Dracula", "Bram Stoker", 1897});
    // horrorBooks.push_back({"Frankenstien", "Mary Shelly", 1818});

    // for(const auto& b: horrorBooks)
    // {
    //     cout << b.title << " by " << b.author
    //         << " (" << b.publicationYear << ")" <<endl;
    // }

    for(int i =0; i < 3; i++)
    {
        cout << horrorBooks[i].title << " by " << horrorBooks[i].author
            << " (" << horrorBooks[i].publicationYear << ")" <<endl;
    }


    /*

        - To test fillBook; 
        “NOS4A2” — Joe Hill — 2013

        “Hex” — Thomas Olde Heuvelt — 2013

        “The Ruins” — Scott Smith — 2006
    
    */
    for(int i = 0; i < 3; i++)
    {
        fillBook(horrorBooks[i]);
    }
    






    return 0;
}

// This is how we did it when we were babys time to grow up use getline() instead. 
// void fillBook(book& newBook )
// {   
//     cout << "Enter Title: "; 
//     cin >> newBook.title;

//     cout << "Enter Author:"; 
//     cin >> newBook.author;

//     cout << "Enter Publication Year:"; 
//     cin >> newBook.publicationYear;

// }


void fillBook(book& newBook )
{
    cout << "Enter Title: ";
    getline(cin, newBook.title);

    cout << "Enter Author: ";
    getline(cin, newBook.author);

    cout << "Enter Publication Year: ";
    string year;
    getline(cin, year);
    newBook.publicationYear = stoi(year);
}



void printBook(const book& b);