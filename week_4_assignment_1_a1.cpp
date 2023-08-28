// Write a function to print squares of first n natural numbers, taking n as argument to the function

#include<iostream>
using namespace std;

void sqr_first_n(int n){
    int square =1;
    for(int i=1; i<=n; i++){
        square = i*i;
        cout<<square<<endl;
    }
}

int main(){
    int n;
    cout<<"nos. ";
    cin>>n;
    sqr_first_n(n);
}