#include<iostream>
using namespace std;

int main(){
//print star and gap
int i;
for(int i=0;i<5;i++)
    {
    //print star in first and last row
    if(i==0 || i==4)
        {for(int i=0;i<5;i++)
        cout<<"*";}

    //for star, gap and star
    else
    //print star
        {cout<<"*";
    //print gap
        for(int i=1;i<4;i++)	  
        cout<<" ";
    //print star
        cout<<"*";}
        
    cout<<endl;
    }
return 0;
}
