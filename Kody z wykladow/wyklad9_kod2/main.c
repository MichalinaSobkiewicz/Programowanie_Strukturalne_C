#include <stdio.h>
#include <stdlib.h>

int main()
{
    char buffer[20];
    int a=5;
    int b=7;
    snprintf(buffer,20*sizeof(char),"%5d+%5d=%5d",a,b,a+b);
    //bezpieczniejsza wersja
    //w drugim argumencie mamy rozmiar buffera (pamietajmy o miejscu zerowym)
    //zmien sizeof buffera i zobacz co wyjdzie
    printf("%s",buffer);
    return 0;
}
