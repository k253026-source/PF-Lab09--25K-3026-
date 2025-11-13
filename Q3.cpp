#include<stdio.h>
  int temp(int temperature) {
  	if(temperature>35) {
  		return 1;
	  } else if(temperature<10) {
	  	return 2;
	  } else if(temperature>=15 && temperature<=25) {
	  	return 3;
	  } else {
	  	return 4;
	  }
  	
  }
 
int main() {
	int temperature,code;
	printf("Enter your room Temperature in Celsius :");
	scanf("%d" ,&temperature);
	   code =  temp(temperature);
	if(code == 1) {
		printf(" Code 1: HEAT ALERT ");
	} else if(code == 2) {
		printf(" Code 2: COLD ALERT ");
	} else if(code == 3) {
		printf(" Code 3: COMFORT ZONE ");
	} else {
		printf(" Code 4:NORMAL CONDITIONS ");
	}
	return 0;
}
