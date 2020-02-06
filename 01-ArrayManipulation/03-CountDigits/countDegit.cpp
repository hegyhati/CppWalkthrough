#include<iostream>
using namespace std;
int tab[10]={0,0,0,0,0,0,0,0,0,0};
int n;
    
int NbDigits(int n, int d) 
{   
    int count = 0; 
      
    
    while (n > 0) 
	{ 
          
       
        if (n % 10 == d) 
            count++; 
            n = n / 10; 
    } 
      
    return count; 
} 
  
int main()
{
	while (1)
	{
	  cin>> n;

      for(int i = 0; i < 10; i++) 
	   {
         tab[i]= tab[i]+ NbDigits(n,i) ; 
       }
    if(n == 0) break;       	
	}
			
    for(int i = 0; i < 10; i++) 
	{
    cout << i << ": " << tab[i] << "\n";
    }


 return 0;
}

