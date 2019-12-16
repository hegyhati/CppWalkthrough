#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int size;
	int a=0;
     int tab[size];
    
int n;
 cout << "Enter your numbers to check if it is positive  : " << endl;

    while(1)
         {
        cin >> n;
        if((n > 0)&&(n%2!=0))break;
         }
         
for (int i = n; i > 0; i--)
   {
        if (n % i == 0) 
		{
        	tab[i]=i;
          a=a+1;
           
    }      
 }
 if (a=2){
 	       cout<< "prime";
		 }
	else {
 	       cout <<"not prime";
         }
 }
