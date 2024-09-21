#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main()
{
    int centavos;

    do
    {
        float reais = get_float("Troca devida: ");
        centavos = round(reais * 100);
    }
    while (centavos <= 0);

    int quarters = centavos / 25;
    int dimes = (centavos % 25) / 10;
    int nickels = ((centavos % 25) % 10) / 5;
    int pennies = ((centavos % 25) % 10) % 5;

    printf("%d\n", quarters + dimes + nickels + pennies);
}