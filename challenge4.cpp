#include<iostream>
#include<string>
using namespace std;
int main(){
    string fullName;
    string location;
    int initialScore ;

    cout<< "Please Enter Your Fullname " << endl;
    getline(cin, fullName);
    cout<< "Please Enter Your location" << endl;
    getline(cin, location);

   cout<<"Enter Your intial score : " << endl;
   cin >> initialScore;

   cout <<" Hello, "<< fullName << endl;
   cout << " we are heard  from : "<< location <<endl;
   cout << "Your intial Score is : "<< initialScore <<" but there is 5 marks are added in your score . therefore your score is : "<< (initialScore + 5) << endl;

   

    return 0;
}