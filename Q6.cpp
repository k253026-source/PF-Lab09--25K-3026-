#include<stdio.h>
float netincome(float gross,float *tax) {

	if(gross<=20000) {
		*tax = gross * 0;
	} 
	   else if(gross<=50000) {
		*tax = (gross - 20000) * 0.1;
	} 
	   else  {
		*tax = (50000 - 20000) * 0.10 + (gross - 50000) * 0.2;
	} 
	    return  gross - *tax;
}
int main() {
	
	float gross,tax;
	
	printf("Enter the Gross income :");
	scanf("%f" ,&gross);
	
	float net = netincome(gross,&tax);
	
	printf("Tax Amount = %f\n" ,tax);
	printf("Net Income = %f" ,net);
	return 0;
}
