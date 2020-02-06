
#include<iostream>
  
using namespace std; 



int Differarr1 (int a[], int b[], int n, int m) 
{

int i = 0, j = 0; 	

	
	 while (i < n && j < m)  
    { 
                  
        if (a[i] < b[j])  
        { 
          cout << a[i]<<" "; 
          i++;
        }  
                  
        else 
        if (b[j] < a[i])  
        { 
           cout << b[j]<<" "; 
           j++;
        }  
        else 
        { 
           i++;
           j++;
		}
	}

	

}
int Differarr2 (int a[], int b[], int n, int m) 
{

int i = 0, j = 0; 	

	
	 while (i < n && j < m)  
    { 
                  
        if (b[j] < a[i])  
        { 
         cout << b[j]<<" "; 
         j++;
        }  
                  
        else 
        if (b[j] > a[i])  
        { 
          i++;
        }  
        else 
        { 
           i++;
           j++;
		}
	}

	while (i<n)
	 cout << a[i++]<<" ";  
	while (j<m)
	 cout << b[j++]<<" ";  


}


int unionarr (int a[], int b[], int n, int m) 
{
int i = 0, j = 0; 	
	
	 while (i < n && j < m)  
    { 
                  
        if (a[i] < b[j])  
        { 
          cout << a[i++]<<" ";  
        }  
                  
        else 
        if (b[j] < a[i])  
        { 
           cout << b[j++]<<" ";  
        }  
        else 
        { 
             
            cout << b[j++] <<" ";  
            i++; 
             
        } 
    } 
    while (i<n)
	 cout << a[i++]<<" ";  
	while (j<m)
	 cout << b[j++]<<" ";  

} 

int intersection(int a[], int b[], int n, int m) 
{ 
    int i = 0, j = 0; 
      
    while (i < n && j < m)  
    { 
                  
        if (a[i] > b[j])  
        { 
            j++; 
        }  
                  
        else 
        if (b[j] > a[i])  
        { 
            i++; 
        }  
        else 
        { 
             
            cout << a[i] << " "; 
            i++; 
            j++; 
        } 
    } 
} 
  

int main() 
{ 


int n = 5;
int m = 4;
    int a[m] ; 
    int b[n] ;
    int i , j ;
    //	cout << "enter the elements of  a : "<<endl;
    for (i = 0; i < m; i++) {
    
    	cin>>a[i];
    
	}

    //	cout << " enter the elements of  b : "<<endl;
	for (j = 0; j < n; j++) {
			
    	cin>>b[j];
    
	}
  unionarr(a, b, m, n) ;
  cout<<"   "<<endl;   
  intersection(a, b, m, n);
  cout<<"   "<<endl; 
  Differarr1(a, b, m, n);
  cout<<"   "<<endl; 
  Differarr2(a, b, m, n);
  
  return 0;
    
} 
