#include <iostream>
//declare namespace to avoid typing std:: before every statement using the std library
using namespace std;

int main(){
    //init string variable
    string name = "";
    //prompt user for input
    cout << "Please Enter Your Name: ";
    //store user input in string called name
    cin >> name;
    //print name 10 times to the console
    for(int i=0; i<10; i++)
    {
        cout << i+1 << ": ";
        cout << name << endl;
    }
    return 0; // if return 0 program ran successfully
}