#include<iostream>
using namespace std;
int main(){
 int arr[5];
 int sum =0;
 cout<<"Enter a (5)elements of array:";
 for(int i=0; i<=4; i++){
 cin>>arr[i];
 }
 for(int i=0; i<=4; i++){
    sum=sum+arr[i];
 }
 cout<<"The sum of array element is "<<sum;
}
