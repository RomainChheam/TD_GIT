#include <stdio.h>

int main(){
    int demande;
    int s;
    int m;
    int h;
    printf("Donnez un nombre de secondes : ");
    scanf("%d", &demande);
    s = demande % 60;
    m = demande / 60;
    h = m / 60;
    m = m % 60;
    printf("%d secondes = %d heures, %d minutes, %d secondes", demande, h, m, s);
    return 0;
}