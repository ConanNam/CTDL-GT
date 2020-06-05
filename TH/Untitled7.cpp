#include<bits/stdc++.h>
using namespace std;

int countdig(int m) 
{ 
    if (m == 0) 
        return 0; 
    else
        return 1 + countdig(m / 10); 
} 

int lastNum(int x){ 
    int last = x; 
    while (last) { 
  
        int digits = countdig(last); 
  
        digits -= 1; 
  
        int divisor = pow(10, digits); 
  
        int first = last / divisor; 
        
        int lastnumber = first * divisor;
    }
