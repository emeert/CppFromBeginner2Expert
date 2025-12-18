#include <iostream> 

using namespace std; 

int main()
{

   string text = "tralllalala";

//    for (int i = 0; i < text.length(); i++)
//    {
//         cout << text[i] << endl;
//    }

   char ch = text[0];

//    cout << ch << endl;

 char characters[] = "tralllalala";
 char *p = characters;
 cout << p[0] << endl;
 cout << *(p) << endl;
 cout << *(p+1) << endl;

 const char *text2 = text.c_str();
 cout << text2 << endl;

 char array[] = "This is a text";
 string test = array;

 cout << test << endl;

 const char *a = "this is a test 1232";

 cout << a[0] << endl;

 char b[] = "This is a test";

 cout << b << endl;

 b[0] = 'g';

  
 cout << b << endl;
 char * const dynamic_array = new char[50];

 cout << dynamic_array << endl;

 delete [] dynamic_array;


 return 0;

}