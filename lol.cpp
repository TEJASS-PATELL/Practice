#include<iostream>
using namespace std;
int sum(int a , int b){
    int sum = a + b;
    return sum;
}

int main(){
    int a = 10;
    int b = 80;
    cout<<"Sum of a and b is : "<<sum(a,b);
}
