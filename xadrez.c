#include <stdio.h>
int main () {
int i2 = 0;
int i3 = 0;
   for (int i1 = 0; i1 < 5; i1++) // A Torre se move cinco casas para direira
   {
     printf("Torre se noveu para (Direita)\n"); 
   }


   do{
   printf("Bispo se moveu para (Cima direita)\n"); // O Bispo se move cinco casas para cima direita (diagonal)
   i2++;
   } while (i2 < 5);



   while (i3 < 8)
   {
    printf("Rainha se moveu para (Esquerda)\n"); // A Rainha se move oito casas para esquerda 
    i3++;
   }

return 0;
}
