#include<iostream>
using namespace std;

int main(){
    bool isRaining = true;
    bool isWarm = true;

    cout << boolalpha;
    cout << "israining AND isWarm " << (isRaining && isWarm ) << endl;
    cout << "israining OR isWarm " << (isRaining || isWarm ) << endl;
    cout << "israining NOT isWarm " << (!isRaining ) << endl;
    
    
    return 0;
}
    