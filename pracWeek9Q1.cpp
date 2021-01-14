#include<iostream>
#include<algorithm>

using namespace std;
int findPair(int [],int,int);

int main(){
    #ifndef INPUT
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
 #endif  
int i,size,sum;
cin>>size;
 int arr[size];
for(i=0;i<size;i++)
 cin>>arr[i];
cin>>sum;
sort(arr,arr+size);

   for(i=size-1;i>=0;i--){
    int n =   findPair(arr,i,sum-arr[i]);
    // cout<<"Sum= "<<sum-arr[i]<<" "<<n<<" "<<endl;
    if(n==1)
     {
        
         cout<<" "<<arr[i]<<")"<<endl;
         return 0;
     }
   }
   return 0;
}

int findPair(int arr[],int size,int sum){
    int l,r;
    l= 0;
        r = size-1;
   while(l<r){
       if(arr[l]+arr[r]==sum){
       cout<<"Triplets:- ("<<arr[l]<<" "<<arr[r];
       return 1;
       }
       if(arr[l]+arr[r]<sum)
        l++;
       else 
        r--;
   }
   return 0;
}

