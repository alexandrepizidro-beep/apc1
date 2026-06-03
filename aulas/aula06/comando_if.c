#include <stdio.h>

int main () {

    int idade = 0;

    printf("Informe a sua idade: ");
    scanf("%i", &idade);
    
    int e_maior_que_16anos = idade >= 16;
    int e_menor_que_16anos = idade < 16;
    int e_menor_que_70anos = idade < 70;
    int e_maior_que_18anos = idade >= 18;
    int e_menor_que_18anos = idade < 18;
   

    if(e_menor_que_16anos){
         printf("Com %i voce não pode votar\n", idade);
    }else if (e_menor_que_18anos) {
         printf("Com %i anos voce pode votar\n", idade);
    }else if(e_menor_que_70anos) {
         printf("Com %i anos voce TEM que votar\n", idade);
    }else {
        printf("Com %i anos voce pode votar\n", idade);
    }

//     if(e_maior_que_18anos && e_menor_que_70anos){
//         printf("Com %i anos voce tem que votar\n", idade);
//     }
    
//    if(e_maior_que_16anos) {
//        printf("Com %i anos voce pode votar\n", idade);
//    }else{
//        printf("Com %i voce não pode votar\n", idade);

//    }

//     int e_maior_que_18anos = idade >= 18;
//     int e_menor_que_70anos = idade < 70;

//     if(e_maior_que_18anos && e_menor_que_70anos){
//         printf("Com %i anos voce tem que votar\n", idade);
//     }

//    int e_menor_que_16anos = !e_maior_que_16anos;

//    if(e_menor_que_16anos) {
//         printf("Com %i voce não pode votar\n", idade);
//     }

    return 0;
}