#include <stdio.h>
int main()
{
    int numero,bin1,bin2;

    printf("Digite um número: ");
    scanf("%d", &numero);

    for (bin2 = 31; bin2 >= 0; bin2--){
        
        bin1 = numero >> bin2;

        if (bin1 & 1){
            printf("1");
        }else{
            printf("0");
        }
    }
    
}