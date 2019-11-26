#include<iostream>
using namespace std;

int main(){
	
    
int x, n;

         cout << "Enter your numbers to check if it is positive  : " << endl;

while(1)
{

         cin >> n;

 if(n > 0) 
 {
         x=n;
         break; 
 }

}

do
{
  if(x%2==0)
  {
	   	 x=x/2;
	   	 cout << x<<endl;
  }
  else
  {
		x=x*3+1;
		cout << x<<endl;
  }
} while ( x!=1 );
	


return 0;

          }


