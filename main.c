#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h>
#include <ctype.h>

void AraBulYaz(char[10],char[10],int);

int sayac = 1;

int main()
{
    char cumle[20];
    char aranan[6];
    int i, uz_cumle, uz_aranan;


    printf("En fazla 20 karakterli cumle giriniz: ");
    gets(cumle);
    printf("\nEn Fazla 5 karakterli bir kelime giriniz: ");
    gets(aranan);

    uz_cumle = strlen(cumle);
    uz_aranan = strlen(aranan);


    printf("Girilen cumle: %s\n",cumle);

    for(i=0;i<uz_cumle;i++)
        AraBulYaz(cumle,aranan,i);


    printf("\n\nArama Sona Erdi...");
    getch();
    return 0;
}


void AraBulYaz(char cumle[10],char aranan[10],int i)
{
    int j,k=0;
    for (j=i ; j<i+strlen(aranan) ; j++ )
    {
     if(cumle[j]!=aranan[k])
            return;
        k++;
    }

    printf("\n\t\"%s\" kelimesi %d. defa bu aralikta bulundu: [%d,%d]",aranan,sayac++,i,i+strlen(aranan)-1);
}
