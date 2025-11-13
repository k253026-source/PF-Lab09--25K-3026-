#include<stdio.h>
   float calculateaverage(int mark1,int mark2,int mark3) {
   	 float average = (mark1+mark2+mark3)/3.0;
   	if(average >= 50 && mark1 >=40 && mark2>=40 && mark3>=40) {
   		printf("PASSED\n");
	   } else {
	   	printf("Failed\n");
	   	if(average < 50) {
	   		printf("Average is below 50\n");
		   }
	    if(mark1 < 40 || mark2 < 40 || mark3 < 40) {
	    	printf("One or more subject are below 40");
		}
	   }  return average;
   }
int main() {
	int mark1,mark2,mark3;
		printf("Enter the Marks of First Subject :");
		scanf("%d",&mark1);
		printf("Enter the Marks of Second Subject :");
		scanf("%d",&mark2);
		printf("Enter the Marks of Third Subject :");
		scanf("%d",&mark3);
		
	float average = calculateaverage(mark1,mark2,mark3);
	    printf("\nAverage is :%f" ,average);
	return 0;
}
