#include<iostream>

using namespace std;

int main(){
   #ifndef PRACWEEK
     freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout);

   #endif

 int i,j,k,n;
 cin>>n;

 for(i=0;i<(n+1)/2;i++){

    for(j=0;j<n-i;j++)
     cout<<" ";

    for(j=i+1;j>0;j--)
      cout<<j;

    for(j=0;j<i;j++)
      cout<<j+2;     

     cout<<endl;     
     
 }
  
  for(i=((n+1)/2)-1;i>0;i--)
  {
    for(j=0;j<=n-i;j++)
     cout<<" ";

    for(j=i;j>0;j--)
      cout<<j;

    for(j=0;j<i-1;j++)
      cout<<j+2;     

     cout<<endl;     
    

       
  }
      
}