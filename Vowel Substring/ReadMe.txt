Question:

Vowel Substring
Given a string of lowercase letters in the range ascii[‘a’-‘z’], determine the number of substrings that can be created where every letter is a vowel is present at least once. The vowels are [‘a’, ‘e’, ‘i’, ‘o’, ‘u’]. A substring is a contiguous group of characters in the string. For example, string s= ‘aeioaexaeuiou’. There is a substring to the left that is made of vowels, ‘aeioae’ which is followed by an ‘x’. Since ‘x’ is not an vowel, it cannot be included in the substring and this substring does not contain all of the vowels. It is not a qualifying substring moving to the right, there are four substrings that do qualify ‘aaeuiou’, ‘aaeuio’, ‘aeuiou’ and ‘aeuio’. Function Description: Complete the function vowelSubstring in the editor below. The function must returns an integer that denotes the number of substrings which consists of vowels only [‘a’, ‘e’, ‘i’, ‘o’, ‘u’] where every vowel appears at least once. vowelSubstring has the following parameter(s): S: a string

Input Format

First line consists of a string s.

Output Format

Output is in the form of integer that denotes number of substrings which consists of vowel only.

Constraints

1<=size(s)<=105

S[i] belongs to ascii[‘a’-‘z’](where0<=i<=size_of(s))

Refer the sample output for formatting

Sample Input:

aaeiouxa

Sample Output:

2
