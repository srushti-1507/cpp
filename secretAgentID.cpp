#include<iostream>
#include<string>
using namespace std;
int main(){
    string fullName;
    string alias;
    int age;
    string gadget;

    cout << " Enter Your full name : "<< endl;
    getline(cin,fullName);
    cout << " Enter Your alias : " << endl;
    getline(cin,alias);

    cout << " Enter Your age : " <<endl;
    cin >> age;

    cout <<" enter Your Favorite gadget : "<<endl;
    cin.get();
    getline(cin,gadget);

    cout<<" name : " << fullName <<endl;
    cout <<" alias :"<< alias << endl;
    cout << " age " << age << endl;
    cout <<" favorite  gadget " << gadget <<endl;

     return 0;

}