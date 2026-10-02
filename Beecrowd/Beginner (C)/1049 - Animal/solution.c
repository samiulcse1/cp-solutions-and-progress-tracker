#include <stdio.h>
#include <string.h>
int main()
{
    char arr1[50], arr2[50], arr3[50];
    char vertebrado[50] = "vertebrado";
    char invertebrado[50] = "invertebrado";
    char mamifero[50] = "mamifero";
    char onivoro[50] = "onivoro";
    char ave[50] = "ave";
    char carnivoro[50] = "carnivoro";
    char anelideo[50] = "anelideo";
    char inseto[50] = "inseto";
    char hematofago[50] = "hematofago";
    char herbivoro[50] = "herbivoro";
    gets(arr1);
    gets(arr2);
    gets(arr3);
    int a = strcmp(arr1, vertebrado);
    if (a == 0)
    {
        int b = strcmp(arr2, ave);
        if (b == 0)
        {
            int c = strcmp(arr3, carnivoro);
            if (c == 0)
            {
                printf("aguia\n");
            }
            else
            {
                printf("pomba\n");
            }
        }
        else
        {
            int c = strcmp(arr3, onivoro);
            if (c == 0)
            {
                printf("homem\n");
            }
            else
            {
                printf("vaca\n");
            }
        }
    }
    else
    {
        int b = strcmp(arr2, inseto);
        if (b == 0)
        {
            int c = strcmp(arr3, hematofago);
            if (c == 0)
            {
                printf("pulga\n");
            }
            else
            {
                printf("lagarta\n");
            }
        }
        else
        {
            int c = strcmp(arr3, hematofago);
            if (c == 0)
            {
                printf("sanguessuga\n");
            }
            else
            {
                printf("minhoca\n");
            }
        }
    }
    return 0;
}
