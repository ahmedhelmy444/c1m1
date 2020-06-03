/**Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 ** Redistribution, modification or use of this software in source or binary
 **forms is permitted as long as the files maintain this copyright. Users are 
 **permitted to modify this and use it to learn about the field of embedded
 ** software. Alex Fosdick and the University of Colorado are not liable for any
 ** misuse of this material. 
 **
 ******************************************************************************/
 /**
  **@file <stats.c> 
  **@brief <implementation of stats report >
  **
  ** <In this File we are going to implement some function to preform some operation on array of characters like mean , median , maximum,minimum>
  **
  ** @author <Ahmed Helmy>
  ** @date <1/06/2020 >
  **
  **/



#include <stdio.h>
#include "stats.h"

 unsigned char find_median (unsigned char * arr , unsigned int size );
 unsigned char find_mean (unsigned char * arr , unsigned int size );
 unsigned char find_maximum (unsigned char * arr , unsigned int size );
 unsigned char find_minimum (unsigned char * arr , unsigned int size );
 void sort_array (unsigned char * arr , unsigned int size);
 void print_statistics (unsigned char * arr , unsigned int size);
 void print_array (unsigned char * arr , unsigned int size);

 /*Size of the Data Set */
#define SIZE (40)

void main() {
	unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
/* Other Variable Declarations Go Here */
unsigned int size = SIZE ;
/* Statistics and Printing Functions Go Here */
print_statistics ( test, size);
//sort_array ( test, size);
//print_array(test,size);
 }

/* Add other Implementation File Code Here */
unsigned char find_median (unsigned char * arr , unsigned int size ){
	unsigned char median=0;
	
	sort_array ( arr ,  size);
	if (size %2==0){
		median = arr[size/2]+arr[(size/2)+1];
		median/=2;	
			}
        else 
		median=arr[size/2];
	return median ; 	


}
unsigned char  find_mean (unsigned char * arr , unsigned int size ){
	float mean=0;
	int i=0;
	for(i=0;i<size;i++){
		mean+=arr[i];	
		 }
	mean/=size;
	return  (unsigned char)mean ; 	


}


unsigned char find_maximum (unsigned char * arr , unsigned int size ){
	unsigned char max=arr[0];
	int i=0;
	for(i=0;i<size;i++){
						
		if ( arr[i]>max)
		max=arr[i];
			}
					return max ; 	


}

unsigned char find_minimum (unsigned char * arr , unsigned int size ){
		unsigned char min=arr[0];
		int i=0;
				for(i=0;i<size;i++){
						
					if ( arr[i]<min)	
						min=arr[i];
						   }
		return min ; 	


}

void print_array (unsigned char * arr , unsigned int size){
		unsigned int i=0;	
			for (i=0;i<size;i++)
			{
			printf("element[%d] = %d \n" ,i ,arr[i]   );


			}

}

void print_statistics (unsigned char * arr , unsigned int size){
	unsigned char  max,min ,median; 
	unsigned char mean;
	median = find_median(arr,size);
	max= find_maximum(arr,size);
	min=find_minimum(arr,size);
	mean=find_mean(arr,size);

	printf(" The median = %d\n ",median );
	printf(" The mean = %d\n ",mean );
	printf(" The maximum = %d\n ",max );
	printf(" The minimum = %d\n ",min );

}



void sort_array (unsigned char * arr , unsigned int size){


	int i =0,j=0;
	unsigned char a ; 
	for (i = 0; i < size; ++i){
		for (j = i + 1; j < size; ++j){
					if (arr[i] <arr[j]){
							a =  arr[i];
							arr[i] = arr[j];
							arr[j] = a;
							   }
						}

						}
}
	


