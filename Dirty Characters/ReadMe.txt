Question:

Dirty Characters
Write a function that takes two strings as arguments and removes the characters from first string which are present in second string. Note: Treat lowercase and uppercase characters differently. And, space ‘ ‘ is also considered as a character. Function: removeDirtyChars: function(str, mask_str) This function should return the string after removing those characters from string str which are present in mask_str.

Input Format

Input is being fetched from the command line arguments. The two arguments are the two strings.

Output Format

Output will be the new string after masking.

Constraints

Length of string str>=length of string mask_str.

Length of string str is within range [1,1000].

Length of string mask_str is within range [1,100].

Refer the sample output for formatting

 Sample Input:

 “Dennis Ritchie”

 “RPD”

 (Both the input strings should be in between double quotes).

 Sample Output:

 ennis itchie

