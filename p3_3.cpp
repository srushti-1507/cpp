#include <iostream>
using namespace std;
int main(){
    char grade;

     cout << "Enter your letter grade  ( A-F): ";
     cin >>grade;

     switch (grade)
     {
    case 'A':
        cout << "Grate Job!" << endl;
        /* code */
        break;
    case 'B':   
       cout <<"Grate Job!"<< endl;
    
        break;
    case 'C':
     cout <<"You can do better" <<endl;

        break;
    case 'D':
    cout <<"You're getting pretty close to failing "<< endl;
        break;
     case 'F':
     cout << "You're are failing the course!"<<endl;
        break;
    default:
    cout << "You have  entered an invalide Grade . try again "<<endl;

    }

    return 0;

}