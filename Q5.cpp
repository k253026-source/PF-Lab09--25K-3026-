#include<stdio.h>
   float Bill(int foodcost,int number) {
   	float tax,tip,service=0; 
   	    tax = foodcost * 0.08;
   	    if(foodcost>50) {
   	    	tip = foodcost * 0.15;
		   } else {
		   	tip = foodcost * 0.1;
		   } 
   	    if(number>6) {
   	    service = foodcost * 0.05;	
		   } 
		   return tax+tip+service+foodcost;
   } 
   
int main() {
	int foodcost,number,toalbill;
	printf("Enter the Food Cost :");
	scanf("%d" ,&foodcost);
	printf("Enter the Number of People :");
	scanf("%d" ,&number);
	float totalbill =  Bill(foodcost,number);
	 printf("Your Total Bill is :%f", totalbill);
	return 0;
}
