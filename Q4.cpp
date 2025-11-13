#include<stdio.h>
    int calculation(int amount,int weight) {
    	if(amount>100) {
    		   return amount;
		} else if(amount<=100) {
			if(weight<2)
			   return amount + 10;
			else if(weight>=2 && weight<=5)
			   return amount + 15;
			else return amount + 20;
		}
	}
    
 int main() {
 	int amount,weight,totalcost;
 	printf("Enter the Order Amount :");
 	scanf("%d" ,&amount);
 	printf("Enter the Weight of Package :");
 	scanf("%d" ,&weight);
 	totalcost = calculation(amount,weight);
 	
 	     printf("Your Total Cost is :%d",totalcost);
 	     
 	return 0;
 }
