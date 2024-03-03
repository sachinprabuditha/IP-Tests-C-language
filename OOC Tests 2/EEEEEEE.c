#include<stdio.h>

float findRadianValue(float angleInDegrees);
void printRadianValues(void);

int main(void)
{
		printRadianValues();
return 0;	
}
 
float findRadianValue(float angleInDegrees){
 float pi;
 pi=22.0/7;
	
	return pi/180*angleInDegrees;
}
void printRadianValues(void){
 	
    int degrees;
    
	printf("%s %16s","Angle(degrees)" , "Angle(radians)\n");
	for (degrees = 100; degrees <= 200; degrees +=20) {
		printf ("%d %25.2f\n", degrees, findRadianValue(degrees));
	}
		
	
}
