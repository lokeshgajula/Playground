Question:

Infix to Prefix conversion
Write a program which takes string as input containing infix expression and returns the corresponding prefix expression.
Note:

1. The string contains operator (+ ,- ,/ ,*), parenthesis and operands(digits).

2. Each digit is a separate operand.

The Operator precedence is as follows:

1. [divide(/) and multiply(*) operator] > [addition(+) and subtraction(-) operator]

2. If you encounter operators with same precedence like(divide and multiply) or (addition and subtraction), then evaluate the operators from left to right.

Input Format

The first line is a string which contains infix expression.

Output Format

Output is a string which contains prefix expression.

Refer the sample output for formatting

Sample Input:

(5-6)*7

Sample Output:

*-567
