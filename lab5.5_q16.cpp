#include<iostream>
using namespace std;

int main(){
 for(int i=0; i<5; i++){
   //print gaps
     for (int j=0; j<5-i;j++){
   cout<<" ";}
  //print stars
  for (int j=0; j<=2*i;j++){
   cout<<"*";}
  //end line
   cout<<endl;}

return 0;}
