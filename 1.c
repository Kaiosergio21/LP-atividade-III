# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>
# include <locale.h>



int main(){


char nome[5][500];

int idade[5][5];

float peso[5][5][500];

float altura[5][5][5][500];

int i,a,b,c;

int menor_idade = 9999;

int maior_idade = 1;


float menor_peso = 9999;

float maior_peso = 1;

float menor_altura = 9999;

float maior_altura = 1;
    
    /* code */
    
for ( i = 0; i < 2; i++)
{  
    printf("nome");
    gets(nome[i]);

    printf("\n");

      fflush(stdin);





    for ( a = 0; a < 1; a++)
    {
            printf("idade");
            scanf("%d",&idade[i][a]);


     
            
if ( idade[i][a] < menor_idade)
{
      menor_idade = idade[i][a];
      

        }if (idade[i][a] > maior_idade)
        {
             maior_idade = idade[i][a];
        }
        
        

                printf("\n");
        
        fflush(stdin);
    }

      
    for ( b = 0; b < 1; b++)
    {
            printf("peso");
            scanf("%f",&peso[i][a][b]);


                       
if ( peso[i][a][b] < menor_peso)
{
      menor_peso = peso[i][a][b];
      

        }if (peso[i][a][b] > maior_peso)
        {
             maior_peso = peso[i][a][b];
        }
 

                printf("\n");

            fflush(stdin);
        
    }

      for ( c = 0; c < 1; c++)
    {
            printf("altura");
            scanf("%f",&altura[i][a][b][c]);


                                  
if ( altura[i][a][b][c] < menor_altura)
{
      menor_altura = altura[i][a][b][c];
      

        }if (altura[i][a][b][c] > maior_altura)
        {
             maior_altura = altura[i][a][b][c];
        }
 

                printf("\n");

            fflush(stdin);
        
    }

}

    


for ( i = 0; i < 2; i++)
{  
    printf("nome%s\n\n",nome[i]);

        printf("\n");
    
    


    
    for ( a = 0; a < 1; a++)
    {
            printf("idade%d\n\n",idade[i][a]);

                printf("\n");
      
        
    
    }

      
    for ( b = 0; b < 1; b++)
    {
            printf("peso%.1f\n\n",peso[i][a][b]);

                printf("\n");
     

            
        
    }

      for ( c = 0; c < 1; c++)
    {
            printf("altura%.1f\n\n",altura[i][a][b][c]);

                printf("\n");
            

          
        
    }
    
}

 printf("\n");

printf("idade menor %d\n\n",menor_idade);
printf("idade maior %d\n\n",maior_idade);

printf("peso menor %.1f\n\n",menor_peso);
printf("peso maior %.1f\n\n",maior_peso);


printf("altura menor %.2f\n\n",menor_altura);
printf("altura maior %.2f",maior_altura);






printf("\n");




  return 0;


}