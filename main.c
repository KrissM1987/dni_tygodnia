#include <stdio.h>


int main()
{

char znak;
int wartosc_calkowita ;
double wartosc_wymierna;

printf("Podaj znak : ");
scanf(" %c", &znak);
printf("\n Twoj znak to: %c", znak);
printf("\nPodaj liczbe calkowita : ");
scanf(" %i", &wartosc_calkowita);
printf("\nLiczba calkowita %d", wartosc_calkowita);
printf("\nPodaj liczbę wymierna : ");
scanf(" %lf", &wartosc_wymierna);
printf("\nliczba wymierna to : %lf", wartosc_wymierna);


/*scanf(" %c%d%lf",
        &znak,
        &wartosc_calkowita,
        &wartosc_wymierna);
//printf ("Wpisz znak : ");
//znak = getchar();
//putchar(znak);
 */
printf("\nznak = %c" "\n liczba całkowita = %d""\n licza wymierna = %lf" ,
        znak,
        wartosc_calkowita,
        wartosc_wymierna
        );



    return 0;
}