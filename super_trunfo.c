#include <stdio.h>

int main (){
printf ("Países! \n");

char estado;
char código[03];
char nome[50];
int população;
float área;
float PIB;
int número;

printf ("Digite o estado: \n");
scanf ("%s", &estado);
    
printf ("Digite o código da carta: \n");
scanf ("%s", &código);
    
printf ("Digite o nome da cidade: \n");
scanf ("%s", &nome);
    
printf ("Digite a população: \n");
scanf ("%i", &população);
    
printf ("Digite a área em km²: \n");
scanf ("%f", &área);
    
printf ("Digite o PIB: \n");
scanf ("%f", &PIB);
    
printf ("Digite o número de pontos turísticos: \n");
scanf ("%d", &número);
    
printf ("Carta 1:\n");
printf ("Estado: %s \n", estado);
printf ("Código: %s \n", código);
printf ("Nome da cidade: %s \n", nome);
printf ("População: %d \n", população);
printf ("Área: %f km²\n", área);
printf ("PIB: %.f bilhões de reais \n", PIB);
printf ("Número de pontos turísticos: %d \n", número);
    
    
return 0;

}