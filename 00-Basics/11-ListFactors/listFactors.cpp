#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int j=0;
     int tab[j];
    
int n;
 cout << "Enter your numbers to check if it is positive  : " << endl;

    while(1)
         {
        cin >> n;
        if(n > 0) break;
         }
         
for (int i = n; i > 0; i--)
   {
        if (n % i == 0) 
		{
        	tab[i]=i;
            cout << tab[i] <<endl;
           
    }      
 }
 
}
