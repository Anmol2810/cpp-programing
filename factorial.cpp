#include<iostream>
using namespace std;
int main(){
    int i; 
    int fact = 1;
    cout << "enter no. to find factorial :"<< endl;
    cin >> i;
    for(int n = 1; n<=i ; n++){
        fact = fact*n;
    }
    cout<<"factorial of the number is: "<< fact <<endl;
    return 0;
}
