#include<iostream>
using namespace std;
int main(){
    const int pi=3.14;
    int r,area;
    cout<<"Enter the radius :";
    cin>>r;
    area=pi*r*r;
    cout<<"the area of the circle is : "<<area<<endl;
    return 0;
}