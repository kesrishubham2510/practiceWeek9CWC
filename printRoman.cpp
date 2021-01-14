#include<iostream>

using namespace std;

void convertToRoman(int);

int main(){
 int n;
 cin>>n;
    convertToRoman(n);
    return 0;
}

void convertToRoman(int numToConvert){
 int num[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
 string appendingCharacters[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
 int i=12;    
 cout<<"Roman Representation of "<<numToConvert<<" is:- ";
 while(numToConvert>0)
    {
      int div = numToConvert/num[i];
      numToConvert = numToConvert%num[i];
      while(div--)
      {
        cout<<appendingCharacters[i];
      }
      i--;
    }
}
