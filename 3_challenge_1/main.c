/*
    Autore: Paolo Bianchessi 3ic
    Data: 19/10/2022
    Descrizione:
*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct ciao
{
    int data;
    int carrier;
};

typedef struct ciao SIG;
int main()
{
    SIG sig[240323];

    int dim = 0, a, b, i = 0, j = 0, fc = 0;

    int max = INT_MIN, min = INT_MAX;
    FILE *f = fopen("signal_ch1.txt", "r");
    do
    {
        while (j < 20)
        {
            fscanf(f, "%d %d", &a, &b);
            if (b)
            {
                if (a > max)
                    max = a;
                if (a < min)
                    min = a;
                printf("\ndata=%d", a);
                sig[i].data = a;
                sig[i].carrier = b;
                j++;
            }
        }
        printf("\n\n");
        j = 0;
        i++;
    } while (!feof(f));

    printf("\ndim=%d\nmax=%d\nmin=%d\n", dim, max, min);
    fclose(f);
    return 0;
}
