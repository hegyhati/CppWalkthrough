#include <iostream>
using namespace std ;
const int N=5;

int tri( int tab[], int n)                                            
{                                                                              
  int i=0;                                                                     
  int tmp=0;                                                                     
  int j=0;                                                                     
                                                                                 
  for(i = 0; i < n; i++)                                   
    {                                                                          
      for(j = 0; j < n-1; j++)                      
        {                                                     
          if(tab[j] > tab[j+1])                                                        
            {                                                                  
              tmp = tab[j+1];             
              tab[j+1] = tab[j];                                                       
              tab[j] = tmp;                                                    
            }                                                                  
        }                                                                      
    }                                                                 
}
int main()
{
	 int a[N], x, p , tem;
	
	int i=0;
	cout << "enter the nb  " << endl;
   while (i<5)
    {
  	cin >> x;
  	if (i==0)
	  {
  		a[i]=x;
  		cout<<a[i]<<endl;
        i++ ; 
	  }
	 else if (i==1)
	  {
  		a[i]=x;
  		if (a[i]<a[i-1])
		  {
  		      tem=a[i];
				a[i]=a[i-1];
				a[i-1]=tem	;
				cout<<a[i-1]<<" ";
				cout<<a[i]<<endl;
                i++ ;
		  }
		  else {
		  	cout<<a[i-1]<<" ";
				cout<<a[i]<<endl;
                i++ ;
		  }
	  }
	else if(i>1)
	 {
	 	
	 	a[i]=x;
  		if (a[i]<a[i-1])
		  {
		  	tri(a,i+1);
  		    
				for(p=0; p<i+1 ; p++)
				{
				cout<<a[p]<<" ";
				}
                i++ ;
          }
		  else {
		  	for(p=0; p<i+1 ; p++)
				{
				cout<<a[p]<<" ";
               
		       }
		       i++;
		      }
	 	
    }
   }
    return 0;
}
