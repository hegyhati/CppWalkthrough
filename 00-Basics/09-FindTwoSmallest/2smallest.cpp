#include<iostream>
using namespace std;

int main(){
	
    
int n ,x,y;
int min1 , min2 , temp ;

     cout << "Enter your numbers   : " << endl;
     cin>>x;
     cin>>y;
  
    min1=x;
	min2=y; 
	if (min2<min1)
	{
		temp=min1;
		min1=min2;
		min2=temp;
	}

	
while(1)
{

     cin >> n;
     
if(n == 0) break;

else if (n < min2)
{
 if (n <= min1) 
 {
     min2 = min1;
     min1 = n;
 }
 else
 {
     min2 = n;
 }
}  
}   
   	 cout << min1 << " , " << min2 << endl;



  
return 0;
   
        }


