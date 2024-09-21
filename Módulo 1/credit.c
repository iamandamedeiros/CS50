#include <stdio.h>
#include <cs50.h>

int main()
{
    long long cc_numero = get_long_long("Number: ");
    int digit1 = 0, digit2 = 0, num_digitos = 0, soma_prob_dupla = 0, soma_pares = 0;

    while (cc_numero > 0)
    {
        digit2 = digit1;
        digit1 = cc_numero
 % 10;

        if (num_digitos % 2 == 0)
        {
         soma_pares += digit1;
        }
        else
        {
            int multiple = 2 * digit1;
            soma_probdupla += (multiple / 10) + (multiple % 10);
        }

        cc_numero
 /= 10;
        num_digitos++;
    }

    bool is_valid =  (soma_pares + soma_probdupla) % 10 == 0;
    int primeiros_dois_digitos = (digit1 * 10) + digit2;

    if (digit1 == 4 && num_digitos >= 13 && num_digitos <= 16 && is_valid)
    {
        printf("VISA\n");
    }
    else if (primeiros_dois_digitos >= 51 && primeiros_dois_digitos <= 55 && num_digitos == 16 && is_valid)
    {
        printf("MASTERCARD\n");
    }
    else if ((primeiros_dois_digitos == 34 || primeiros_dois_digitos == 37) && num_digitos == 15 && is_valid)
    {
        printf("AMEX\n");
    }
    else
    {
        printf("INVALID\n");
    }
}