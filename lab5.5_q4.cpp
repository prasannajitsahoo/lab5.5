#include<iostream>
using namespace std;

int main(){
 for (int i=0;i<5;i++){
   //print gaps
   for( int j=5;j>i;j--){
   cout<<" ";}
   //print stars
  for (int j=0;j<5;j++){
   cout<< "*";}
  //end line
   cout<<endl;}

 return 0;}
