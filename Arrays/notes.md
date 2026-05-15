# **ALGORITHMS AND CONCEPT**




#  Boyer-Moore Voting Algorithm
Core Idea

Think of it like voting.

Same elements support each other
Different elements cancel each other

Since the majority element appears more than half the time, it survives all cancellations.
Algorithm Steps

We maintain:

candidate
count

Rules:

1. If count becomes 0

Choose current element as new candidate.

2. If current element equals candidate

Increase count.

3. Otherwise

Decrease count.

Problem based on this algo is majority element.




# Kadane’s Algorithm

Kadane’s Algorithm is used to find:

Maximum Sum Subarray

in:

O(n) time
O(1) space
Problem Example

Given:

nums = [-2,1,-3,4,-1,2,1,-5,4]

Find the contiguous subarray with maximum sum.

Answer:

[4,-1,2,1]

Sum:

6
Main Idea

At every index, we decide:

Should I continue the current subarray
OR
start a new subarray?

If current sum becomes negative:

it will only hurt future sums

So we discard it.
