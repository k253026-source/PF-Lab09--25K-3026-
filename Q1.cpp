#include<stdio.h>

   int currentlimit(int remaining,int transaction) {
	if(transaction<=remaining) {
        remaining -= transaction;
		printf("Transaction is APPROED\n");
	} else {
		printf("Transaction is DECLINED\n");
	} 
	    return remaining;
} 
 
 int main() {
 	int limit = 5000;
 	int transaction;
 	printf("User Transaction Limit is :%d\n" ,limit);
	printf("Enter Your Transaction Amount :");
	scanf("%d" ,&transaction);
	limit = currentlimit(limit,transaction);
	printf("Your Remaining Limit is :%d" ,limit);
 	return 0;
 }
