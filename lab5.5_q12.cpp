#include<iostream>
using namespace std;

int main(){
 int i, j;
  //print stars in rows
 for(i=5;i>=1;i--){
  //print stars in columns that decrease with the numbers of rows
   for(j=1;j<=i;j++){
  //print stars
        cout<<"*";}
  //end line
     cout<<endl;}

 return 0;
}
