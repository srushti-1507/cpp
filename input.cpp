#include<iostream>
#include<string>
using namespace std;

int main(){

    int age;
    string fullName;
    cout<<" Please enter your age : " << endl;
    cin >> age;
    cout<<"Your are : "<< age <<" Year old " << endl;

    cout<<" Enter Your fullname : " << endl;
    cin.get();
    getline(cin, fullName);

    cout<<" Hello , " << fullName << endl;
    


    return 0;
}