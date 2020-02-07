#include <iostream>  
using namespace std; 

int main(){
double org[7];

double inf[7];
double sup[7];
int i ;
int j=0;
int k=0;
double pivot ;

for (int b = 0; b < 7; b++) {
    
    	cin>>org[b];
    }
cout <<" entre pivot : ";
cin >> pivot ;

	      do{
		 
	if (org[i]>pivot)
	{
	
		sup[j]=org[i];
		j++;
		i++;
	}
	else if (org[i]<=pivot)
	{
		inf[k]=org[i];
		k++;
		i++;
	}
           }  while(i<7 && j<7 && k<7);

  

    for(int m=0 ; m<k;m++)
       {
	     cout << inf[m]<<endl; 
       }

    for(int h=0 ; h<j;h++)
       {
         cout << sup[h]<<endl;
       }

	return 0;
	
}

	

  
