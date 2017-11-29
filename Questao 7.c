#include <stdio.h>
#include <string.h>
void main(){
    int n,i,k;
    scanf(" %i", & n);
    char palavra[n];
    char palavra2[n];
    scanf(" %[^\n]", palavra);
    int len=strlen(palavra);
    for( i = 0, k = len - 1 ; i < len; i++, k--)
    {
    palavra2[k] = palavra[i];
    }
    palavra2[len]='\0';
    if (strcmp(palavra, palavra2) == 0)
      printf("\ne palindromo");
    else
      printf("\nnao e palindromo");
}
