#include<stdio.h>
int main(){
    int i;
    int x;
    
    char listanombres[6][40]={"Martin ","Reggie ","jose ","teresa","maria","pedro"};
    char Cedulas[6][40]={"1","2","3","4","5","6"};

    for (i = 0; i < 6; i++)
    {
        printf("%s\t|-|-| %s\n",listanombres[i],Cedulas[i]);
    }



    
}



        
      