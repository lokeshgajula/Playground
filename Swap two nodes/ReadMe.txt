Question:

Swap two nodes
Given a linked list and two values p and q, write a function to swap nodes containing the two values (i.e., p and q). Note that nodes should be swapped by changing the links, and any change in data of the nodes is not allowed.
For example:

If the following is the given linked list.

10->20->30->40->50

And p=20, q=40. Then, the resultant linked list should be:

10->40->30->20->50

Function Specification:

void swapNodes (Node **head_ref, int p, intq);

This function should swap nodes containing two given values (i.e., p and q)

Input Format

The input is being fetched from command line arguments. First argument is the number of nodes in the linked list followed by the arguments representing values of nodes in the list, and last two arguments are p and q.

Output Format

Correct Solution will be printed if the solution is correct, otherwise Incorrect Solution will be printed.

Refer the Sample output for formatting

Sample Input:

5

10 20 30 40 50

20

40

Sample Output:

10 40 30 20 50
