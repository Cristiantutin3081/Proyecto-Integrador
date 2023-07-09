#include <stdio.h>
main(){
    int Peso,Estatura,Edad,Genero;
    int Continuar;
    float Dosis,DosisM;
    do{
        printf("Ingrese el peso:  ");
        scanf("%d", &Peso);
        printf("Ingrese la estatura:  ");
        scanf("%d", &Estatura);
        printf("Ingrese la edad:  ");
        scanf("%d", &Edad);
        printf("Ingrese el genero: Masculino=0 Femenino=1 ");
        scanf("%d", &Genero);
        if(Edad>18){
            if(Genero==0){
                if(Estatura>160 && Peso>=150){
                    Dosis=Estatura*0.20+Peso*0.80;
                    printf("La dosis para hombre es: %.2f", Dosis);
                }
                else{
                    Dosis=Estatura*0.30+Peso*0.70;
                    printf("La dosis para hombres es: %.2f", Dosis);
                }
            }
            if(Genero==1){
                if(Estatura>150 && Peso>=130){
                    DosisM=Estatura*0.25+Peso*0.75;
                    printf("La dosis para mujer es: %.2f", DosisM);
                }
                else{
                    DosisM=Estatura*0.35+Peso*0.65;
                    printf("La dosis para mujer es: %.2f", DosisM);
                }
            }
        }
        printf("\n Desea continuar: SI=0 NO=1 -->  ");
        scanf("%d", &Continuar);
    }while(Continuar==0);
}
