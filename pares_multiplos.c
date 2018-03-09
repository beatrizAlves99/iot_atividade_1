#include <stdio.h>
int main(){
    int a,b,i;
    printf("Digite o inicio da contagem: ");
    scanf("%d", &a);

    printf("Digite o final da contagem: ");
    scanf("%d", &b);
    for(i=a; i<=b; i++){
        if((i%3) == 0 & (i%2)==0){
            printf("%d\n", i);
        }
    }
    return 0;

    
}