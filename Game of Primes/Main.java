#include <bits/stdc++.h>
#include<cmath>
using namespace std;
int numSquareSum(int n); 
bool isPrime(long);
bool isHappy(long);
int main(){

            long lower,upper,n;
            cin>>lower;
            cin>>upper;
            cin>>n;
        

   if(lower>upper || lower<=0 || n<=0)
       { 
           cout<<"Invalid Input";
           return 0;  
       }      
        int count=0;
        int i=0;
        for (i=lower; i<=upper; i++) {
            if(isPrime(i)  && (isHappy(i)==1))
            {
                count++;
                // cout << i <<  " ";
                if(count==n)
                {   
                    cout << i;
                    break;
                }
            }
         }
        if(i>upper)
        {
           cout<<("No number is present at this index");
        }
    }   
bool isPrime(long num) {
   
        bool flag = false;
        if (num < 2) {
            return flag;
        }
        if (num == 2) {
            return true;
        }
        if (num % 2 == 0) {
            return flag;
        }
        int i = 3;
        int rootn = (int) sqrt(num);
        for (; i <= rootn; i += 2) {
            if (num % i == 0) {
                break;
            }

        }
        if (i > rootn) {
            flag = true;
        }
        return flag;
    }

    int numSquareSum(int n) 
    { 
    int squareSum = 0; 
    while (n) 
    { 
        squareSum += (n % 10) * (n % 10); 
        n /= 10; 
    } 
    return squareSum; 
    }
bool isHappy(long n)
    {
        int slow, fast; 
  
    //    initialize slow and fast by n 
    slow = fast = n; 
    do
    { 
        //    move slow number by one iteration 
        slow = numSquareSum(slow); 
  
        //    move fast number by two iteration 
        fast = numSquareSum(numSquareSum(fast)); 
  
    } 
    while (slow != fast); 
  
    //    if both number meet at 1, then return true 
    return (slow == 1); 
    }