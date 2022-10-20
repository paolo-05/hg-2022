/*
    Autore: Paolo Bianchessi 3ic
    Data: 20/10/2022
    Descrizione:
*/

#include <stdio.h>
#include <stdint.h>
struct dato
{
    unsigned a : 1;
} byte[6];
int main()
{
    FILE *f = fopen("out.bin", "rb");
    FILE *f1 = fopen("out.txt", "w");
    int i = 0;
    do
    {
        fread(&byte, sizeof(byte) / 4, 1, f);
        for (i = 0; i < 6; i++)
            if (!feof(f))
                fprintf(f1, "%u", byte[i].a);
        fprintf(f1, "\n");
    } while (!feof(f));

    fclose(f), fclose(f1);
    return 0;
}
