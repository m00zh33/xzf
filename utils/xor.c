#include <stdlib.h> 
#include <string.h> 
void xor(char *s)
{
	for(int i=0; i<strlen(s); i++) s[i] ^= 0x2a;
} 

