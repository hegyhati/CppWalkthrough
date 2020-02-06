#include <iostream>
int main(){

	using namespace std;

	int tab[5];
	 int j , p ,  x ;
	  bool tr=false;
	   int i=0;
   while (i<5)
    {
  	cin>> x;
  	if (i==0){
  		tab[i]=x;
        i++ ; 
	         }
	         
	         
    else if(i!=0)
	{
	  
	           for (int p=i-1 ; p >=0; p-- )
	 
  	            {
  	            	if (tab[p]== x)
					  {
  			           tr = true;
		              }
                } 
        if (tr==false)
		{
         tab[i]=x;
         i++ ; 
	    }
        else 
		{
         tr=false;
        }	  	
	}
    }

  for (j = 4; j >=0; j--)
  	{
 
    cout << tab[j] << endl;
  	}

	return 0;

}

