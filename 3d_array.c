/* 
3d Array Program
Nam Vuong

3 dimensional array calculator 
sums totals for 
all three dimensions
2nd dimension values 1-5
3rd dimension values for specified Lane number

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "myData.h"

//array size hard coded
//function prototypes
int menu(const float item[12][7][10]);
void sumTotal(const float item[12][7][10]);
void sumWeekday(const float item[12][7][10]);
void sumlane(const float item[12][7][10]);

int main(void){

	//calls menu function 
	menu(cashIn);
	return 0;
}

int menu(const float cashIn[12][7][10]){

	char sel;
	char buf[32];	
	
	//loop until user inputs quit option
	while (1){ 

		printf("\nMENU\n");
	        printf("=====\n");
	        printf("Enter selection :\n 1: sum total array\n 2: Sum 2nd dimension for values 1-5\n 3: Sum 3rd dimension for passed lane #\n 4: Quit\n");
	
		//reads line as string and puts it in buffer
		if(fgets(buf,sizeof(buf),stdin) == NULL){
			perror("Error: Input exceeds buffer");
		}
		//convert buffer to int
		sel = atoi(buf);

		//menu options 
		switch(sel){
			case 1:sumTotal(cashIn);
				break;
			case 2:sumWeekday(cashIn);
				break;
			case 3:sumlane(cashIn);
				break;
			case 4:fprintf(stderr,"quitting\n");
				return 0;
			default: fprintf(stderr,"Please input a valid number\n\n");
				break;
			
		}//switch
		
	    }//while

}

void sumTotal(const float cashIn[12][7][10]){//Option 1

	float sTotal = 0;
	
	//iterate through 3d array
	for (int i = 0; i < 12; ++i){ 
		for (int j = 0; j < 7; ++j){ 
	        	for (int k = 0; k < 10; ++k){
				//add current array element to total
				sTotal+=cashIn[i][j][k]; 
            	    	} 
        	} 
    	} 
	fprintf(stderr,"Total for the entire year = %.2f\n",sTotal);

}

void sumWeekday(const float cashIn[12][7][10]){

	float sWeekday = 0;
	for (int i = 0; i < 12; ++i){ 
		for (int j = 1; j < 6; ++j){//loop starts at 1 ends at 5  
	        	for (int k = 0; k < 10; ++k){
				sWeekday+=cashIn[i][j][k];// adds values             	    	
			} 
        	} 
    	} 
	fprintf(stderr,"Weekday totals for the year = %.2f\n",sWeekday);

}

void sumlane(const float cashIn[12][7][10]){

	float sLane = 0;
	int lane = 0;	
	char buf[32];

	while(1){

		printf("Please enter lane number (1-10)\n");
		//reads line as string and puts it in buffer
		if(fgets(buf,sizeof(buf),stdin) == NULL){
			perror("Error: Input exceeds buffer");
		}
		//convert buffer to int
		lane = atoi(buf);
		
		if(lane > 0  && lane < 11){
			//adjust to match actual lane in array 
			lane = lane-1;//	
			for (int i = 0; i < 12; ++i){ 
				for (int j = 0; j < 7; ++j){ 
	        			for (int k = 0; k < 10; ++k){
						//add current lane value to total if it matches input value
						if(k==lane){
							sLane+=cashIn[i][j][k];
						}else{ 
							continue;
						}     
            	    			}	 
       			 	} 
    			}//for 
			fprintf(stderr,"Lane totals for the year = %.2f\n", sLane);
			break;
		}else{
			fprintf(stderr,"Please enter a valid Lane number\n");	
		}//if lane param check
	
	}//while	

}


