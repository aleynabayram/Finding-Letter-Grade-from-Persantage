/* This code finds the letter equivalent of the note entered.*/

#include<stdio.h>

int main(){
	float score;
	
	printf("Please enter your percent grade:");
	scanf("%f",&score);
	
	if(score<=100 && score>=90){
		printf("Your letter grade :AA");
	}
	if(score<=89 && score>=85){
		printf("Your letter grade :BA");
	}
	if(score<=84 && score>=80){
		printf("Your letter grade :BB");
	}
	if(score<=79 && score>=75){
		printf("Your letter grade :CB");
	}
	if(score<=74 && score>=70){
		printf("Your letter grade :CC");
	}
	if(score<=69 && score>=65){
		printf("Your letter grade :DC");
	}
	if(score<=64 && score>=60){
		printf("Your letter grade :DD");
	}
	if(score<=59 && score>=50){
		printf("Your letter grade :FD");
	}
	if(score<=49 ){
		printf("Your letter grade :FF");
	}
	if(score>100){
		printf("Please enter your grade out of 100.");
	}
	return 0;
}
