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

int main(void){
	uint8_t nItemsOfArray1;

	uint8_t Array1[nItemsOfArray1];
//	uint8_t Array2[nItemsOfArray2];

	printf("Enter no of elements of Array1 and Array2: \n"); fflush(stdout);
	scanf("%d", &nItemsOfArray1);

	for(uint8_t i=0; i<nItemsOfArray1; i++){
	uint8_t cureEl;
	printf("Enter element 0 of Array-1\n"); fflush(stdout);
	scanf("%d",&cureEl);
	Array1[i]=cureEl;
	}//end for


	for(uint8_t i=0; i<nItemsOfArray1; i++){
	printf("Contents of : %d\t", Array1[i]=i); fflush(stdout);
	}//end for

	return 0;
}
