/****************************************************************************
Lab 2 student file
 
 To enable gdb logging
   gdb <binary>
   set logging file <file>
   set logging overwrite on
   set logging on
   
         gcc -std=c99  -g -O0 lab_d.c -o lab_d
         
 10/05/2019 R. Repka    Initial release
****************************************************************************/
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>


int main(int argc, char *argv[]) {
   char *text_p;        // do not change
      
   /*------------------------------------------------------------------------
     Add code here
   ------------------------------------------------------------------------*/

//malloc 12 bytes of memory for text_p
text_p = (char *) malloc(12 * sizeof(char));
//check
if( text_p==NULL)  { 
printf("failed mem allocation");
exit(1); 
}
 
strcpy(text_p, "CMPE380 lab malloc try 2") ;
printf("String in text_p: %s\n", text_p);

text_p = realloc(text_p,20);

//check
if( text_p==NULL)  { 
printf("failed mem allocation");
exit(1); 
}

strcat(text_p, "--Realloc");
printf("String in text_p after strncat: %s\n", text_p);

free(text_p);  
text_p=NULL;
}


