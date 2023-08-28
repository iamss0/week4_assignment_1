// Given two numbers a and b, write a function to print all odd numbers between them.
#include<iostream>
using namespace std;
void all_odd_nos(int a, int b){
    for(int i =a; i<=b; i++){
        if(i%2 != 0) cout<<i<<" ";
    }
}

int main(){
    int a,b;
    cout<<"Enter lower limit: ";
    cin>>a;
    cout<<"Enter upper limit: ";
    cin>>b;
    cout<<"All odd nos. b/w "<<a<<" and "<<b<<" are: ";
    all_odd_nos(a,b);
}