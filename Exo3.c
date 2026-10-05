#include <stdio.h>
#include <string.h>

int main()
{
    char mot[] = "pedoncule";
    int failure = 0;
    int statut[100];
    char affichage[100];
    for (int k = 0; k < strlen(mot); k++)
    {
        affichage[k] = '_';
    }
    for (int j = 0; j < strlen(mot); j++)
    {
        statut[j] = 0;
    }
    while (failure < 7)
    {
        switch (failure)
        {
        case 0:
            printf("\n\n\n\n\n\n\n-------\n");
            break;
        case 1:
            printf("\n |\n |\n |\n |\n |\n |\n-------\n");
            break;
        case 2:
            printf(" -------\n | |\n |\n |\n |\n |\n-------\n");
            break;
        case 3:
            printf(" -------\n | |\n | O\n |\n |\n |\n-------\n");
            break;
        case 4:
            printf(" -------\n | |\n | O\n | |\n |\n |\n-------\n");
            break;
        case 5:
            printf(" -------\n | |\n | O\n | /|\\\n |\n |\n-------\n");
            break;
        case 6:
            printf(" -------\n | |\n | O\n | /|\\\n | / \\\n |\n-------\n");
            printf("Vous avez perdu gros nullos.");
            return 0;
        default:
            break;
        }
        char lettredonnee;
        int ok = 0;
        printf("Le mot : %s", affichage);
        printf("\nDonnez une lettre : ");
        scanf("%c", &lettredonnee);
        getchar();
        printf("%c\n", lettredonnee);
        for (int l = 0; l < strlen(mot); l++)
        {
            if (lettredonnee == mot[l])
            {
                ok = 1;
            }
        }
        if (ok = 1)
        {
            for (int i = 0; i < strlen(mot); i++)
            {
                if (lettredonnee == mot[i])
                {
                    statut[i] = 1;
                    affichage[i] = lettredonnee;
                }
            }
            for (int m = 0; m < strlen(mot); m++)
            {
                if (statut[m] == 0)
                {
                    break;
                }
                else {
                    printf("Bravo vous avez gagné, le mot est %s ! ", affichage);
                return 0;
                }
            }
        }
        else
        {
            failure += 1;
        }
    }
    return 0;
}