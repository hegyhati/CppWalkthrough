#include<iostream>
using namespace std;

bool isSubset(int arr1[], int arr2[], int m, int n) 
{ 
    int i = 0; 
    int j = 0; 
    for (i = 0; i < n; i++) 
    { 
        for (j = 0; j < m; j++) 
        { 
            if(arr2[i] == arr1[j]) 
                break; 
        } 
        
        if (j == m) 
            return 0; 
    } 

    return 1; 
} 

int main(){

int n = 3;
int m = 5;
int arr1[m] ;
int arr2[n] ; 
int i , j ;

    cout << "enter the elements of  arr1 : "<<endl;
    for (i = 0; i < n; i++) 
	{
    	cin>>arr2[i];
	}
	
	cout << " enter the elements of  arr2 : "<<endl;
	for (j = 0; j < m; j++) 
	{		
    	cin>>arr1[j];
	}
  
    if(isSubset(arr1, arr2, m, n)) 
       cout <<" subset " <<endl; 
    else
       cout << "not a subset"<<endl;    
  
    return 0; 
} 
