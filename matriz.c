#include<stdio.h>
#include<string.h>
void VerCompu(int numCompu[][4], int estCompu[][4], char Cedulas[][10] );
int main(){
    int i;
    int x;
//punto ver lista de personas que pueden entrar al laboratorio 
    char listanombres[6][40]={"Martin ","Reggie ","jose ","teresa","maria","pedro"};
    char Cedulas[6][40]={"1","2","3","4","5","6"};

    for (i = 0; i < 6; i++)
    {
        printf("%s\t| %s\n",listanombres[i],Cedulas[i]);
    }

//Imprirmir y ver estado de la computadora 
    int matriz [3][4]={{1,2,3,4},
                        {5,6,7,8},
                        {9,10,11,12}};
  
    int estadoCompu[3][4];
  
    for(i=0;i<3;i++){
        for ( x = 0; x < 4; x++)
        {
            estadoCompu[i][x]=-1;//indica la plaza si esta libre 
    
        }
        
    }

//Punto ver si estan registrados o no 
    char cedulaEst[30];
    int contador=0;
    int temp=0;
    printf("ingrese la cedula del estudiante \t");
    scanf("%s", cedulaEst);
    for (i=0;i<6;i++){
        if(strcmp(Cedulas[i],cedulaEst)==0){
        temp=i;//guardamos cedula en temporal
        
         
        }   else{
        contador++;
        }
    }
    if (contador==6)
    {
        printf("%s no tiene acceso\n", cedulaEst);
    }   
    for (i=0;i<3;i++){
        for (x= 0; x<4; x++)
        {
            if (estadoCompu[i][x]<0)//indica si esta libre 
            {
                 printf("%d\t",matriz[i][x]);
            }
            else{
                printf("%s",Cedulas[matriz[i][x]]);
            }
           
        }
        printf("\n\n");
        
    }

    
}




        
      