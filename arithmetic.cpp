#include<iostream>
using namespace std;
int main(){
    // + addition 
    // -subtraction
    // * multiplication
    // / division
    // % modulus

    int a = 10;
    int b = 3;
     
    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    int division = a / b;
    int modulus = a % b;
    

    int result = 10;
    result += 15; // reult = result + 15
    cout << " result = " << result <<endl;
    cout <<" a + b = " <<  sum  << endl;
    cout <<" a - b = " << difference << endl;
    cout <<" a * b =  "<< product << endl;
    cout << "a / b = "<< division <<endl;
    cout << " a % b = "<< modulus <<endl;

    int myInt = 5;
    myInt++;
    cout << myInt <<endl;

    myInt--;
    cout << myInt <<endl;


    return 0;
}