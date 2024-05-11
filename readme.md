# Programming Challenges C++
## Problem 2.1 Jolly Jumpers[^1]
### Problem description
This program determines whether a sequence of numbers is a "Jolly Jumper" or not. A sequence is a "Jolly Jumper" if the set of absolute values of each successive element contains all the numbers { 1 -> numElements - 1}.


The input consists of:
1. Line(s) containing the sequence of integers to compute
2. Terminates with an empty line


The output is either:
1. The string "Jolly" or "Not Jolly"


### Example 
>**Input**                                                                 
>4 1 4 2 3                                                          
>5 1 4 2 -1 6                                              
>                                                                                                                       

>**Output**                                         
>Jolly                                       
>Not Jolly                                                                 


### Problem solution
1. Read in the sequence of integers
2. Determine the length of the sequence
3. If length == 0 exit program
4. While (sequence not traversed)
    1. Calculate the absolute value of the pair
    2. Push_back this value to a vector
6. Sort the vector
7. While (traverse vector)
   1. If duplicate return false
8. return true
9. Print "Jolly" / "Not Jolly" based on result

**Optional:**
1. Function overloading (cout / ofstream)
2. Operator overloading (<< / >> / ++)
3. Templates


### Bug Checklist
- [1] NA

[^1]: Programming Challenges By S.Skienna and M.Revilla, page 42