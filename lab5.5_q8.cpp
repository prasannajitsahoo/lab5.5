#include<iostream>
using namespace std;

int main(){
 int i, j;
  //print stars in rows
 for(i=0;i<5;i++){
  //print stars in columns that increase with the numbers of rows
   for(j=0;j<=i;j++){
  //print stars
        cout<<"*";}
  //end line
     cout<<endl;}

 return 0;
}

