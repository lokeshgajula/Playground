// C++ implementation to check whether binary 
// representation of a number is palindrome or not 
#include <bits/stdc++.h> 
using namespace std; 

// function to reverse bits of a number 
unsigned int reverseBits(unsigned int n) 
{ 
	unsigned int rev = 0; 

	// traversing bits of 'n' from the right 
	while (n > 0) { 

		// bitwise left shift 'rev' by 1 
		rev <<= 1; 

		// if current bit is '1' 
		if (n & 1 == 1) 
			rev ^= 1; 

		// bitwise right shift 'n' by 1 
		n >>= 1; 
	} 

	// required number 
	return rev; 
} 

// function to check whether binary representation 
// of a number is palindrome or not 
bool isPalindrome(unsigned int n) 
{ 
	// get the number by reversing bits in the 
	// binary representation of 'n' 
	unsigned int rev = reverseBits(n); 

	return (n == rev); 
} 

// Driver program to test above 
int main() 
{ 
	unsigned int n; 
  cin>>n;
	if (isPalindrome(n)) 
		cout << "yes"; 
	else
		cout << "no"; 
	return 0; 
} 
