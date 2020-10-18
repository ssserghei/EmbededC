/*
 * ArraySwapping.c
 *
 *  Created on: 11 окт. 2020 г.
 *      Author: SimpalsGarage
 */

/*De scris un program care face schimbul continutul a doua tablouri reciproc.
 * 1- se se ceara utilizatorului sa introduca numarul de elemente a tablourilor?
 * Ex:
 * Enter no of elements of Array-1 and Array-2:3 4
 * Enter element 0 of Array-1: 3
 * Enter element 1 of Array-1: -89
 * Enter element 2 of Array-1: 67
 *
 * Enter element 0 of Array-2: 5
 * Enter element 1 of Array-2: 6
 * Enter element 2 of Array-2 7
 * Enter element 2 of Array-2 0
 * Res:
 * Contents of array before swap
 * 3	-89		67
 * 5	6		7		0
 * Contents of array after swap
 * 5	6		7
 * 3	-89		67		0
 * Press enter to exit this application_
 * */

#include<stdio.h>
#include<stdint.h>
void wait_for_user_input(void);

int main(void){
	int32_t nItem1, nItem2;
	printf(" Array Swapping program\n Enter no of elements of Array-1 and Array-2\n"); fflush(stdout);
	scanf("%d %d",&nItem1,&nItem2);

	if((nItem1<0)||(nItem2<0)){
		printf("Number of elements cannot be negative \n"); fflush(stdout);
		wait_for_user_input();
		return 0;
		}//end if

	int32_t array1[nItem1];
	int32_t array2[nItem2];

	for(uint32_t i=0; i<nItem1; i++){
		printf("Enter %d element of array1:",i); fflush(stdout);
		scanf("%d", &array1[i]);
	}//end for

	printf("\n"); fflush(stdout);

	for(uint32_t i=0; i<nItem2; i++){
			printf("Enter %d element of array2:",i); fflush(stdout);
			scanf("%d", &array2[i]);
	}//end for

	display_array(array1, nItem1);
	display_array(array2, nItem2);

	printf("\n");

	wait_for_user_input();

}//End main

void display_array(uint32_t *pArray1, uint32_t nitem)
{
	for(uint32_t i=0; i<nitem; i++){
		printf("%d ",pArray1[i]); fflush(stdout); //*(pArray1+i)
	}
	printf("\n"); fflush(stdout);
}

void wait_for_user_input(void)
{
	printf("Press enter key to exit this application"); fflush(stdout);

	while(getchar() != '\n')
	    {
	    	//just read the input buffer and do nothing
	    }
	    getchar();
}

