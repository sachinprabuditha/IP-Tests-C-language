#include<stdio.h>
int main(void){
	
	int courseNo, aptMarks;
	float discount, fee;
	
	printf("Course no: ");
	scanf("%d", &courseNo);

    if (courseNo==1){	
	    printf("Aptitude test marks: ");
	    scanf("%d", &aptMarks);
	     
	    if(aptMarks>80 && aptMarks<100){
		 
		printf("Discount: %.2f\n", discount = 150000 * (7.5/100));
		printf("Course fee: %.2f", fee = 150000-discount);	
	    }
	    else {
	    	discount==0;
	    	printf("Discount: %.2f\n", discount = 0);
		    printf("Course fee: %.2f", fee = 150000-discount);
	   	}
	   }
	else if(courseNo==2){	
	    printf("Aptitude test marks: ");
	    scanf("%d", &aptMarks);
	     
	     if(aptMarks>80 && aptMarks<100){
		 
		printf("Discount: %.2f\n", discount = 175000 * (7.5/100));
		printf("Course fee: %.2f", fee = 175000-discount);	
	    }
	    else {
	    	discount==0;
	    	printf("Discount: %.2f\n", discount = 0);
		    printf("Course fee: %.2f", fee = 175000-discount);
	   	}		
    }
    else {
    	printf("Invalid Course");
	}
return 0;	
}
