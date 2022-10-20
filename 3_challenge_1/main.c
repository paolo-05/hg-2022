/*
    Autore: Paolo Bianchessi 3ic
    Data: 19/10/2022
    Descrizione:
*/

#include <stdio.h>
#include <stdlib.h>
struct dato
{
    int a;
    int volte;
};

int main()
{
    int a, b, i = 0, j = 0, fc = 0;
    struct dato dato[240323];
    struct dato max = dato[0];
    FILE *f = fopen("signal_ch1.txt", "r");
    FILE *f1 = fopen("out.txt", "w");
    FILE *f2 = fopen("out1.txt", "w");
    do
    {
        while (j < 20)
        {
            if (fscanf(f, "%d %d", &a, &b) != EOF)
                if (b)
                {
                    dato[i].a = a;
                    dato[i].volte = 1;

                    fprintf(f1, "%d ", a);
                    j++;
                    i++;
                }
                else
                    0;
            else
                break;
        }
        fprintf(f1, "\n\n");
        j = 0;

    } while (!feof(f));
    printf("\ndim=%d\n", i);
    fclose(f), fclose(f1);
    for (fc = 0; fc < 120415; fc++)
        for (i = 0; i < 20; i++)
            for (j = 0; j < 20; j++)
                if (dato[i].a == dato[j].a)
                    dato[i].volte++;
    for (i = 0; i < 120415; i++)
    {
    }

    fclose(f2);

    return 0;
}
