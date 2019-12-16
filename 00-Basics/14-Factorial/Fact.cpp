#include<iostream>

using namespace std;

int main(){
	
  int Fact = 1;
  int n;
  cin>> n;
  
  for(int i = 1; i <= n; i++) {
    Fact *= i;
  }
 cout<<Fact;
}
