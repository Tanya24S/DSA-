//DP parent problem is recursion, wherever overlapping Recursion, we'll apply DP
//Why called Dynamic? Because at every stage we take a decision to either keep or eliminate the element.
//How to identify problem:
//1. Choice given in question to keep or eliminate the element
//2. To optimize in problem(either maximize or minimize)

//Approach: Recursive solution-> Memoization-> Top Down Dp
//1. Knapsack Problem(Bag)
// 3 types-> Fractional Knapsack(not part of DP, comes under greedy algorithm), 0/1 Knapsack, Unbounded Knapsack
/*Fractional:We can break the element or fraction it to add it to bag, 0/1 Knapsack: Either the whole element goes in the bag or none
Unbounded Knapsack: We can add the same element repetitively to the bag(Unlike other knapsack problems)*/

//DP recurive code
//You'll be given two arrays, one with weight of each element, one with value/cost of each element and total weight capacity of a Knapsack.

int knapsack(int wt, int val, int W, int n){
  if(n==0 || W==0) return 0;
if( wt[n-1]>=
//DP memoization
//DP Top down approach
