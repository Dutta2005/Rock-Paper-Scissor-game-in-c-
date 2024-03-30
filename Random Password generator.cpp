#include <bits/stdc++.h>
using namespace std;
int main() { 
  int num_chars, seed_value; 
  cout<<"Enter the number of characters in the password: "; 
  cin>>num_chars; 
  cout<<"Enter a seed value for the random number generator: "; 
  cin>>seed_value;
  srand(seed_value); 
  cout<<"Random Password: "; 
  for (int i=0; i<num_chars; i++) { 
    char c=(char)((rand()%94) + 33); 
    cout<<c;
  } 

cout<<endl;
  return 0; 
}
