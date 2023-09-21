#include <stdio.h>
 int main(void){
 printf("signed char: %d bytes \n", sizeof(signed char));
 printf("short int: %d bytes \n", sizeof(short int));
 printf("int: %d bytes \n", sizeof(int));
 printf("long int: %d bytes \n", sizeof(long int));
 printf("long long int: %d bytes \n", sizeof(long long int));
 printf("unsigned char: %d bytes \n", sizeof(unsigned char));
 printf("unsigned short int: %d bytes \n", sizeof(unsigned short int));
 printf("unsigned int: %d bytes \n", sizeof(unsigned int));
 printf("unsigned long int: %d bytes \n", sizeof(unsigned long int));
 printf("unsigned long long int: %d bytes \n", sizeof(unsigned long long int));
 return 0;
}