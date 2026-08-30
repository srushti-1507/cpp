#include<iostream>
#include<string>
using namespace std;
int main(){
    int age;
    char Gender;
    cout <<"Welcome to the Retired Womens Discount Checker!"<<endl;
    cout << " Please Enter the age " <<endl;
    cin >> age;
    cout << "Please Enter Your Gender " <<endl;
    cin >> Gender;
    
    if((age >= 60) && (Gender =='F' || Gender == 'f')){
    cout <<"You are  eligible for the Retired Women's Club Discount!" << endl;  
     

    }
    else{
 cout <<"Sorry, You are not eligible for the Retired Women's Club Discount!" << endl;
    }
    return 0;
}