//In a normal approach we'll traverse through array and increase the counter as we come accross the number but imagine 
//we have 10^5 elements, then to find occurrence of each element tc would be O(10^10) which is huge, for reference O(10^8) takes approx 1 sec which means it will take 100seconds, hence we use hashing
/*
Hashing-> prestoring/fetching
//For pre-fetching we'll intialize another array as hash array, and while traversing through our og array we will update the index for 
each element in hash array itself, this way we can find occurence for each element in tc O(N) itself.
*/
//Problem: Count occurrence of each element of an array:

