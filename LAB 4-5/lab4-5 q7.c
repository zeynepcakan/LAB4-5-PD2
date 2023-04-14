#include <stdio.h>
#include <stdlib.h>

//Pointer ile girilen metni terse çevirme;

int main()
{
    int k=0,c;
    char *pnt,dizi[100];
    printf("Input a string : ");
    gets(dizi);
    pnt = dizi;
    for (c = 0; dizi[c] != '\0'; c++, pnt++) {
        *pnt = dizi[c];
        k++;
    }
    pnt--;
    printf("Reverse of the string : ");
    for(k;k>0;pnt--,k--)
    {
        printf("%c",*pnt);
    }

    return 0;
}
