#include<iostream>
using namespace std;
int main(){
    int age = 15;
    cout<< "Your age is : "<< age <<endl;
        if (age>=16){
        cout << "You can Drive "<< endl;
    }
    else{
        cout << "You cannot Drive "<< endl;
    }
    for (int i =1 ; i <= age ; i++ ){
        cout << "Happy Birthday"<< endl;
    }

    return 0;
}