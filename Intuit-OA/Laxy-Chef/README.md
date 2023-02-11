## Question:

LAZY CHEF
Chef enters the kitchen which consists of N linear
blocks where each block contains only 1 ingredient
from a list of ingredients.
Chef has to prepare the dish using one ingredient I.
To prepare the dish D, the first task for chef is to
group blocks of all I ingredients together.
Chef needs to achieve this task by only swapping
adjacent blocks with one another. One swap is
equivalent to one valid move. Since the chef is lazy,
can you help him determine the minimum number
of moves in which he can complete this task.
Constraints
O
LeetCode
1 ≤ N≤ 100,000
There is at-least one occurrence of I on the shelf.
One swap is equivalent to one valid move.
Input Format
The first line contains N, denoting the number of
blocks in the kitchen.
The second line contains N space-separated
characters, where the ith character represents
ingredient on ith block.
The third line contains character I, denoting
ingredients required to prepare dish D.
Output Format
Print the minimum number of moves in which chef
can complete this task.

## Example
INPUT: 
7

H D H S A H S

H

OUTPUT:
3
