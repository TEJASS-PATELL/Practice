#include<iostream>
using namespace std;  
    int sum(int a,int b){
        cout<<"Sum of a and b is : " << a + b << endl;
        return a + b;
    }


    int main() { 
        int d= sum(81,96);
        cout << "The sum is: " << d << endl;
}