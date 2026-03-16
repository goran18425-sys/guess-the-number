#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));

    int min = 1;
    int max = 100;
    int odabrani_br = 0;
    int broj_pokusaja = 0;

    int randomNum = (rand() % (max - min + 1)) + min;

    printf("DOBRODOSAO U IGRU POGODI BROJ!\n");

    while (odabrani_br != randomNum)
    {
        printf("Pogodi broj od 1 do 100: ");
        scanf("%d", &odabrani_br);

        broj_pokusaja++;

        if (odabrani_br > randomNum)
        {
            printf("\nTrazeni broj je MANJI od tvog broja!\n");
        }
        else if (odabrani_br < randomNum)
        {
            printf("\nTrazeni broj je VECI od tvog broja!\n");
        }
    }

    printf("\nBravo pogodio si broj (%d)\n", randomNum);
    printf("Broj pokusaja: %d\n", broj_pokusaja);

    return 0;
}