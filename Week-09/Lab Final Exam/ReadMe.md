#WOW Pattern's Again
Problem
Submissions
Leaderboard
Discussions
Problem Statement

Write a C program that will take an integer N and creates this pattern for the corresponding inputs.

For example,

If N=3, the pattern look like this,
image

If N=6, the pattern look like this,
image

Input Format

You will be given a positive integer N as input.
Constraints

1 <= N <= 20
Output Format

Output the pattern
Sample Input 0

1
Sample Output 0

^
Sample Input 1

3
Sample Output 1

  ^
 ***
^^^^^
Sample Input 2

6
Sample Output 2

     ^
    ***
   ^^^^^
  *******
 ^^^^^^^^^
***********

#Sort and Difference
Problem
Submissions
Leaderboard
Discussions
Problem Statement

You will be given the size of two arrays is N. Then you have taken two arrays as input. Now you have to sort the First array in ascending order and sort the second array in descending order. After that, your task is to print the difference of every elements between the first array and the second array from left to right.

Input Format

The first line contains a single positive integer N.
The second line will contain N positive integers A1,A2,A3,A4…..An
The third line will contain N positive integers B1,B2,B3,B4…..Bn
Constraints

1 <= N <= 100
1 <= A[i] <= 100 where (0 <= i < N)
1 <= B[i] <= 100 where (0 <= i < N)
Output Format

Print the difference between the first array and the second array from left to right.
Sample Input 0

5
2 3 1 4 5
1 5 3 7 8
Sample Output 0

-7 -5 -2 1 4
Explanation 0

In First Array A after sorting in ascending order it will look like this,

1 2 3 4 5

In Second Array B after sorting in descending order it will look like this,

8 7 5 3 1

Now we find the difference of every elements between First Array A and Second Array B

A[0] - B[0] = 1 - 8 = -7

A[1] - B[1] = 2 - 7 = -5

A[2] - B[2] = 3 - 5 = -2

A[3] - B[3] = 4 - 3 = 1

A[4] - B[4] = 5 - 1 = 4

Sample Input 1

6
8 4 10 1 6 9 
6 10 10 2 7 4 
Sample Output 1

-9 -6 -1 2 5 8 

#FIFA Year
Problem Statement

We are very enjoining this year FIFA world 2022, Qatar.

We know that the FIFA world cup comes every 4 years. As same Leap year comes in every 4 years. For this problem, we consider that if a year is a Leap year then it can be called a FIFA year. You have been given a year 'X'. Now your task is to find out if that year is FIFA year or Not.

Note: A leap year is exactly divisible by 4 except for century years (years ending with 00). The century year is a leap year only if it is perfectly divisible by 400.

Input Format

You will be given the Year X.
Constraints

1900 <= X <= 5000
Output Format

If the year is FIFA Year than print Yes otherwise print No.
Sample Input 0

1900
Sample Output 0

No
Sample Input 1

2000
Sample Output 1

Yes
Sample Input 2

2022
Sample Output 2

No

#Reverse Code
Problem Statement

Riyad found a note written in code word which is integer numbers. Here each number [1 – 9] represent [A – I].But if the number is more than one digit it reverse itself.

Riyad wants to make a program that automatic read the numbers and turn it into alphabets.Can you help please?

Input Format

First line contain T,Number of test cases.
For every test case,the Input file contains a single integer number.
Constraints

1 <= T <= 5
1 <= N <= 99999
1 <= Digit of N <= 9
Output Format

For each line of input output print the alphabets(must be uppercase) against the number in a separate line.
Sample Input 0

5
12345
12
21
9999
54321
Sample Output 0

EDCBA
BA
AB
IIII
ABCDE
Explanation 0

Example: 12345 = ABCDE

Reverse--> EDCBA

The result is EDCBA

Sample Input 1

1
88888
Sample Output 1

HHHHH
#Twin Number
Problem
Submissions
Leaderboard
Discussions
Problem Statement

If N is added to twice a number, the sum will be S. What is the number?

Input Format

The input contains two integer numbers N and S.
Note: N and S contain even number only.

Constraints

0 < N <= 200
0 < S <=500
Output Format

Output will show the one integer numbers in a separate line.
Sample Input 0

8 20
Sample Output 0

6
Explanation 0

if N = 8  and S = 20 then
Twin Number--> 6.
8+6+6 = 20
Sample Input 1

200 500
Sample Output 1

150
#L to R
Problem Statement

You are given two positive integers L and R. Now print the prime numbers between L to R.

Note: Assume that 1 is a prime number

Input Format

The first line will contain T, the number of test cases.
Each test case contains two positive integer L and R
Constraints

0 < T <= 20
1 <= L,R <= 100 and where L < R
Output Format

Print the prime numbers between L to R.
Sample Input 0

4
2 7
1 9
10 17
5 18
Sample Output 0

2 3 5 7
1 2 3 5 7
11 13 17
5 7 11 13 17

#Unique Unique
Problem
Submissions
Leaderboard
Discussions
Problem Statement

You are given a string S of small letters. Count the total unique characters from the string and print them.

Note: Here unique means that occured exactly once.

Input Format

The first line of the input will contain a positive integer N. (Length of the string)
The second line will contain a string S, consisting of small letters(a-z)
Constraints

0 < N <= 100
a <= S[i] <=z
Output Format

Print the total number of unique characters.
Sample Input 0

12
iuuasdbddqzu
Sample Output 0

6
Sample Input 1

10
acckyppomp
Sample Output 1

5


#Hexa pairs

Problem Statement
Yo are given an array of n positive integers. Now count the total HEXA pairs. Two numbers are said to be HEXA numbers if their Greatest Common Divisor(GCD) is 1. Here pairs means two different index values, means if A[i] and A[j] are the two values and that time i!=j. And the range of i and j -> 1 <= i,j <= n.

See the sample input-output for more clarification.

Input Format

The first line will contain T, the number of test cases.
The first line of each test case contains a single positive integer N (size of the array).
The second line will contain N positive integers A1,A2,A3,A4…..An (values of the array).
Constraints

0 < T <= 20
2 <= N <= 100
1 <= Ai <= 1000
Output Format

Print the count of total HEXA pairs.
Sample Input 0

2
4
2 1 6 7
2
1 5
Sample Output 0

10
2
Explanation 0

In the first test case, total possible pairs are-
i=1,j=2 -> A1=2,A2=1 -> gcd(A1,A2)=1
i=1,j=4 -> A1=2,A4=7 -> gcd(A1,A4)=1
i=2,j=1 -> A2=1,A1=2 -> gcd(A2,A1)=1
i=2,j=3 -> A2=1,A3=6 -> gcd(A2,A3)=1
i=2,j=4 -> A2=1,A4=7 -> gcd(A2,A4)=1
i=3,j=2 -> A3=6,A2=1 -> gcd(A3,A2)=1
i=3,j=4 -> A3=6,A4=7 -> gcd(A3,A4)=1
i=4,j=1 -> A4=7,A1=2 -> gcd(A4,A1)=1
i=4,j=2 -> A4=7,A2=1 -> gcd(A4,A2)=1
i=4,j=3 -> A4=7,A3=6 -> gcd(A4,A3)=1