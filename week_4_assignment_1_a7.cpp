// Explore:
// Can the same function name be used for different functions without any conflict? NO, as per below code we will get redfination error
// ans7.cpp: In function 'int funct(int)':
// ans7.cpp:17:5: error: redefinition of 'int funct(int)'
//  int funct(int n){
//      ^~~~~
// ans7.cpp:8:5: note: 'int funct(int)' previously defined here
//  int funct(int a){
//      ^~~~~
// PS E:\Decode\week_4\week_4_ass\week_4_ass_1> ^C
// PS E:\Decode\week_4\week_4_ass\week_4_ass_1> 


// #include<iostream>
// using namespace std;

// int funct(int a){
//     int no_of_dig = 0;
//     while(a > 0){
//         a /= 10;
//         no_of_dig++;
//     }
//     return no_of_dig;
// }

// int funct(int n){
//     int sqr = funct(n)*funct(n);
//     return sqr;
// }

// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     cout<<"nos of digits in the given number are: "<<funct(n)<<" and sqr of the nmbr is "<<funct(n);
}