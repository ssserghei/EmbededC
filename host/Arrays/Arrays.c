/*
 * Arrays.c
 *
 *  Created on: 5 сент. 2020 г.
 *      Author: SSS_notebok
 */


#include<stdio.h>
#include<stdint.h>

int main(void){
	uint8_t someData[10] ={0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, };
	printf("someData= %#x;\n", *(someData+1)); fflush(stdout);

	*(someData+1)=0x9;

	printf("someData= %#x;\n", *(someData+1)); fflush(stdout);

	printf("someData= %#x;\n", someData[0]); fflush(stdout);
	printf("someData= %#x;\n", *(someData+0)); fflush(stdout);

	printf("contents of this array\n");

	for(uint32_t i=0; i<10; i++){
		printf("%#x\t", someData[i]);
		}
	someData[2]=0x33;
	printf("\n");

	for(uint32_t i=0; i<10; i++){
			printf("%#x\t", someData[i]);
			}


	return 0;
}//end main
