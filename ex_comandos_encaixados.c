
#include <stdio.h>

int main()
{
    int num;
    
    printf("Digite um numero:");
    scanf("%d", &num);

    if(num%2 == 0) {
        printf("Numero par\n");
    }
    
    if(num<10) {
        printf("Numero menor que 10\n");
    }

    return 0;
}


