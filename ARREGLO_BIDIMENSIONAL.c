#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){

    system("COLOR f3");
    srand(time(NULL));
    int tam1, tam2 , i=0 , j=0, aux1, aux2;

    do{
        printf("TAMANO DE LA MATRIZ(MAX 20): ");
        scanf("%d", &tam1);
    }while(tam1>20);
    tam2=tam1;
    printf("MATRIZ 1: \n");

    int matriz1[tam1][tam2];
    int matriz2[tam1][tam2];
    int sum_matriz[tam1][tam2];
    int rest_izq[tam1][tam2];
    int rest_der[tam1][tam2];
    int matriz_aux1[tam1][tam2];
    int matriz_aux2[tam1][tam2];
    //llena la matriz 1
    for (i=0; i<tam1; i++){
        for(j=0; j<tam2; j++){
            /*printf("INTRODUZCA N(%d,%d)", i, j);
            scanf("%d", &matriz1[i][j]);*/
            matriz1[i][j]=rand()%99;
        }
    }
    //imprime la matriz 1
    for(i=0; i<tam1; i++){
        for(j=0; j<tam2; j++){
            printf("%d| ", matriz1[i][j]);
        }
        printf("\n");
    }
    //llena la matriz 2
    printf("MATRIZ 2: \n");
    for (i=0; i<tam1; i++){
        for(j=0; j<tam2; j++){
            /*printf("INTRODUZCA N(%d,%d)", i, j);
            scanf("%d", &matriz2[i][j]);*/
            matriz2[i][j]=rand()%99;
        }
    }
    //imprime la matriz 2
    for(i=0; i<tam1; i++){
        for(j=0; j<tam2; j++){
            printf("%d| ", matriz2[i][j]);
        }
        printf("\n");
    }
    printf("SUMA DE LAS MATRICES: \n");
    for(i=0; i<tam1; i++){
        for(j=0; j<tam2; j++){
            sum_matriz[i][j]=matriz1[i][j]+matriz2[i][j];
            printf("%d|", sum_matriz[i][j]);
        }
        printf("\n");
    }
    //resta izquierda
    printf("LA RESTA IZQ ES: \n");
    for(i=0; i<tam1; i++){
        for(j=0; j<tam2; j++){
                if (i==j){
                    rest_izq[i][j]=matriz1[i][j]-matriz2[i][j];
                }else{
                    rest_izq[i][j]=matriz1[i][j]+matriz2[i][j];
                }
                printf("%d| ", rest_izq[i][j]);
        }
        printf("\n");
    }
    //resta derecha
    for(i=0; i<tam1; i++){
        for(j=0; j<tam2; j++){

        }
    }
    printf("LA RESTA DER ES: \n");
    for(i=0; i<tam1; i++){
        for(j=tam2-1; j>=0; j--){
                if(i==0&&j==tam2-1){
                    aux1=1;
                    aux2=j-1;
                    rest_der[i][j]=matriz1[i][j]-matriz2[i][j];
                }
                /*if(i==tam1-1&&j==tam2-1){
                    cont1+=1;
                    cont2-=1;
                    rest_der[i][j]=matriz1[i][j]+matriz2[i][j];
                    continue;
                }else{*/
                    if (aux1==i+1&&aux2==j-1){
                        rest_der[i+1][j-1]=matriz1[i+1][j-1]-matriz2[i+1][j-1];
                        aux1+=1;
                        aux2-=1;
                    }else{
                        rest_der[i][j]=matriz1[i][j]+matriz2[i][j];
                    }
            }
        }
        rest_der[tam1-1][tam2-1]=matriz1[tam1-1][tam2-1]+matriz2[tam1-1][tam1-1];
    for(i=0; i<tam1; i++){
        for(j=0; j<tam2; j++){
            printf("%d| ", rest_der[i][j]);
        }
        printf("\n");
        }
        system("PAUSE");
}
