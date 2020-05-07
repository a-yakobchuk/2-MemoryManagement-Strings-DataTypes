/****************************************************************************
 Lab 2 student file
 10/05/2019 R. Repka    Initial release
****************************************************************************/
#include <stdio.h> 
#include <stdint.h> 
#include <string.h>
   
/*---------------------------------------------------------------------------
  Student data structure
---------------------------------------------------------------------------*/
struct bandMember {
   char f_name[256]; 
   char l_name[256]; 
   int  year; 
};	
   
int main(int argc, char *argv[]) {
   
   /*------------------------------------------------------------------------
     Example union and pointer
   ------------------------------------------------------------------------*/
   union aunion  {
      uint16_t   number;   
      struct {
         uint8_t high; 
         uint8_t low;
      } bytes; 
   } aUnion;
   union aunion *aUnion_P = &aUnion;
  
   union aNumber1 { 
     int i;
     float f;
   }aNumber1;

  aNumber1.i = 5;
  aNumber1.f = 6.0;

//struct
  struct aNumber2 {
	int istruct;
	float fstruct;
 }aNumber2;

	aNumber2.istruct = 5;
	aNumber2.fstruct = 6.0;
	
//print struct values
	printf("value of struct float: %f\n", aNumber2.fstruct);
	printf("value of struct integer: %d\n", aNumber2.istruct);

   //print out value of float and integer
   printf("Value of float :%f\n", aNumber1.f);
   printf("Value of integer :%d\n", aNumber1.i);

   //print size of variables
   printf("Size of union aNumber1 integer variable: %ld\n", sizeof(aNumber1.i));
   printf("Size of union aNumber1 float variable: %ld\n", sizeof(aNumber1.f));
   printf("Size of struct aNumber2 integer variable: %ld\n", sizeof(aNumber2.istruct));
   printf("Size of struct aNumber2 float variable: %ld\n", sizeof(aNumber2.fstruct));
   
//part 4 struct
	typedef short int int16_t;

	struct mystruct {
		int16_t a;
		
		char padd[3];
	}mystruct;

//print size of mystruct
	printf("Number of bytes of mystruct: %ld bytes", sizeof(mystruct));

//beatle band members
	typedef struct bandMember band;
	band Beatles[4]; // array of band members
	strncpy(Beatles[0].f_name , "Ringo",256);
	strncpy(Beatles[1].f_name , "John",256);
	strncpy(Beatles[2].f_name , "Paul",256);
	strncpy(Beatles[3].f_name , "George",256);
	strncpy(Beatles[0].l_name , "Starr",256);
	strncpy(Beatles[1].l_name , "Lennon",256);
	Beatles[0].year = 1940;
	strncpy(Beatles[2].l_name , "McCartney",256);
	strncpy(Beatles[3].l_name , "Harrison",256);
	Beatles[1].year = 1940;
	Beatles[2].year = 1942;
	Beatles[3].year = 1943;
	
//for loop to print Beatle names and year
	for (int i = 0; i<4; i++) { 
		printf("%s %s born in  %d\n", Beatles[i].f_name, Beatles[i].l_name, Beatles[i].year); 
	}
	
//for loop to print run on string
//	create and initialize buffer
	char buffer[256]; //buffer, array of bytes
	strncpy(buffer, "",256);
//	buffer[0]=0
	
	for(int i = 0; i<4; i++) {
	   	strncat(buffer, Beatles[i].f_name,256); //strncat(destination,source,length of thing you are writing to) 
	}

		printf("Run on string of first names:%s\n",buffer); 
//part 7 print index of ringo
	for(int i = 0; i<4; i++) {
		if(strcmp(Beatles[i].f_name, "Ringo")==0){
			printf("The index of Ringo is: %d\n", i);
		}
	}

   // Set byte parts of the union 
   aUnion.bytes.high= 0xee;
   aUnion.bytes.low = 0xff;
   
   // Now print out the integer parts AND the union
  // printf("Size of aUnion  :%ld, aUnion.number:0x%04x\n",    sizeof(aUnion), aUnion.number);
  // printf("Size of aUnion_P:%ld, aUnion_P->number:0x%04x\n\n", sizeof(aUnion_P), aUnion_P->number);
 

} 

