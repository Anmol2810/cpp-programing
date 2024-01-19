#include<iostream>
// #include <cmath>
// #include <iomanip>
using namespace std;
int c, num;
int main(){
        cout <<"enter a number :";
        cin >> num;
        c = 2;
        // int a = sqrt(num);
        while(c*c <= num){
                if(num%c == 0){
                        cout << "number is not prime"<<endl;
                        break;
                }
                c++;
                // else{
                //     cout << "number is prime"<<endl;
                //     break;
                // }
        }
        int a = c*c;
        if(a > num){
            cout<<"number is prime";
        }
        return 0;
}