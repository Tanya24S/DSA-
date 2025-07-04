//Practicing Time and Sapce Complexity

/*Revision:


*/

//Ques1:
int a = 0, b = 0;
for (i = 0; i < N; i++) {
    a = a + rand();
}
for (j = 0; j < M; j++) {
    b = b + rand();
}
//Ans: O(N+M), O(1)   (Time and space complexty respt)

//Ques2:
int a = 0;
for (i = 0; i < N; i++) {
    for (j = N; j > i; j--) {
        a = a + i + j;
    }
}
//And: O(N*N), O(1)

//Ques3:
int i, j, k = 0;
for (i = n / 2; i <= n; i++) {
    for (j = 2; j <= n; j = j * 2) {
        k = k + n / 2;
    }
}
//Ans: O(NlogN), 
