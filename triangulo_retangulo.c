#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    printf("Digite o lado a: ");
        scanf("%d", &a);
    printf("Digite o lado b: ");
        scanf("%d", &b);
    printf("Digite o lado c: ");
        scanf("%d", &c);

     /*if (a < (b + c)) {
            printf("É um triangulo");
            printf("Formação 1");
        } else if (b < (a + c)) {
            printf("É um triangulo");
            printf("Formação 2");
        } else if (c < (a + b)) {
            printf("É um triangulo");
            printf("Formação 3");
        } else {
            printf("Impossível");
        }*/

        if((a*a)== (b*b) + (c*c)){
            printf("É um triangulo retangulo");
            printf("Formação 1");
        }else if ((b*b)==(a*a)+(c*c)){
            printf("É um triangulo retangulo");
            printf("Formação 2");
        }else if((c*c)==(b*b)+(a*a)){
            printf("É um triangulo retangulo");
            printf("Formação 3");
        }else{
            printf("Impossível");
        }


}