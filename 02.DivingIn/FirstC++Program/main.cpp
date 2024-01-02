/*
    Simple Program. Prompts User to Enter Their name, stores as string in memory
    and prints 10 times to the console.
*/

#include <iostream>
//declare namespace to avoid typing std:: before every statement using the std library
using namespace std;

int main(){
    string name = "";
    cout << "Please Enter Your Name: ";
    cin >> name;
    //print name 10 times to the console
    for(int i=0; i<10; i++)
    {
        cout << i+1 << ": ";
        cout << name << endl;
    }
    return 0;
    //end program
}