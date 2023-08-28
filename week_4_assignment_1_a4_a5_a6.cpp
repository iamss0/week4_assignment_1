// 4. Write a function to count the number of digits in a number and then print the square of this number.
#include<iostream>
using namespace std;

int funct(int a){
    int no_of_dig = 0;
    while(a > 0){
        a /= 10;
        no_of_dig++;
    }
    return no_of_dig;
}

int sqr(int n){
    int sqr = funct(n)*funct(n);
    return sqr;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"nos of digits in the given number are: "<<funct(n)<<" and sqr of the nmbr is "<<sqr(n);
}


// 5. The minimum number of functions present in any C++ program is:
// 0
// 1 correct ans: main function is always present
// 2
// Infinite

// 6: State True and False:
// A function may be called more than once from any other function:   TRUE
// It is necessary for a function to return some value.  FALSE

