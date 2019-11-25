#include <iostream>
using namespace std;

int min_of_four( int a,int b,int c, int d)
{
	int min = a;
	
     if (min>b)
	 {
  	    min=b;
     }
     else
	 {
	       if (min>c) 
	       {
        	min=c;	
           }	
           else if (min>d)
	       {
  	        min=d;
           }
	 }
    return min;
}
int main()
{
    int x, y, z,f;
    
    cout << "Enter the four  numbers : ";
    cin >> x >> y >> z >> f ;
    
    int smallest=min_of_four(x,y,z,f);
    cout << smallest;
	return 0;
}

