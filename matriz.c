#include<stdio.h>
int main(){
    int i;
    int x;
    
    char listanombres[6][40]={"Martin ","Reggie ","jose ","teresa","maria","pedro"};
    char Cedulas[6][40]={"1","2","3","4","5","6"};

    for (i = 0; i < 6; i++)
    {
        printf("%s\t| %s\n",listanombres[i],Cedulas[i]);
    }
    char estudiante[30];
int contador=0;
printf("ingrese la cedula del estudiante");
scanf("%s", estudiante);
for (i=0;i<6;i++){
    if(strcmp(Cedulas[i],estudiante)==0){
        printf("El estudiante %s %s tiene acceso \n ", listanombres[i], Cedulas[i]);
    }else{
        contador++;
    }
}
    if (contador==6)
    {
        printf("%s no tiene acceso", estudiante);
    }



    
}



        
      