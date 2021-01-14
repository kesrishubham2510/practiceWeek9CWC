#include<stdio.h>
#include<string.h>
#define MAX_LENGTH 100

int isInSecondString(char ,char []);
void convertToLowerCase(char []);

int main(){
  #ifndef INPUT
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
 #endif  

  int i=0,j=0,k=0;
  char str1[MAX_LENGTH+1];
  char str2[MAX_LENGTH+1];
  char finalStr[MAX_LENGTH+1];

  scanf("%[^\n]%*c",str1);
  fflush(stdin);
  scanf("%[^\n]s",str2);

  // Converting both character arrays to lower case
   convertToLowerCase(str1);
   convertToLowerCase(str2);

   printf("%s",str1);
   printf("\n%s\n",str2);

    while(i<=strlen(str1)){
      if(str1[i]!=32){
        if(!isInSecondString(str1[i],str2)){
         finalStr[k++]=str1[i];
        }
         i++;
         }
         else
        finalStr[k++]= str1[i++];
    }
  
  
  
 finalStr[k]='\0';
 printf("\n%s \n",finalStr);


    return 0;
}

int isInSecondString(char ch,char secondString[]){
  
  int i=0;
  while(secondString[i]!='\0'){
    if(ch==secondString[i])
     return 1;
    i++; 
  }
  return 0;
}

void convertToLowerCase(char arr[]){
  int i;
  for(i=0;arr[i]!='\0';i++)
  {
    if(arr[i]>=65&&arr[i]<=87)
     arr[i]= arr[i]+32;
  }
}