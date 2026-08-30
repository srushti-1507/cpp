#include<iostream>
using namespace std;
int main(){

    double billAmount ;
    double tipPercentage;
    double tipAmount ;
    double totalAmount;


    cout << " Enter the Total bill  amount :" << endl;
    cin >> billAmount;
    cout << " please enter a tip percentage you  would like  to leave : " << endl;
    cin >> tipPercentage;

    tipAmount = billAmount * (tipPercentage / 100 );
    totalAmount = billAmount + tipAmount ;
    
    cout << "You should tip $"<< tipAmount <<endl;
    cout << "Your total with tip is $" << totalAmount << endl;
    
    return 0;
}