#include <stdio.h>
#include <math.h>

int main(){
    int m;
    int c;
    int t;
    int n;
    int nom;
    int denom;
    printf("Donnez le montant du prêt : ");
    scanf("%d", &c);
    printf("Donnez le taux d'intérêt annuel : ");
    scanf("%d", &t);
    printf("Donnez la durée du prêt : ");
    scanf("%d", &n);
    nom = c*(t/12);
    denom = (1+(t/12));
    denom = pow(denom, -n*12);
    denom = 1 - denom;
    if (denom != 0) {
        m = nom / denom;
    }
    printf("Les mensualités sont : %d", m);
    return 0;
}