// Write a function that takes the radius of a circle as an argument and returns its area.
#include<iostream>
using namespace std;
float area_cir(float radius){
    float area = 3.14*radius*radius;
    return area;
}

int main(){
    int rad;
    cout<<" Enter radius: ";
    cin>>rad;
    cout<<"The area of circle is "<<area_cir(rad);
}