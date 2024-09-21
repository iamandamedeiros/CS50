#include <stdio.h>
#include <cs50.h>

void repeat(char c, int times)
{
    while (--times >= 0)
    {
        printf("%c", c);
    }
}

int main()
{
    int altura, largura;
    do
    {
        altura = get_int("Altura: ");
        largura = altura + 1;
    }
    while (altura < 0 || altura > 23);

    for (int i = 1; i <= altura; i++)
    {
        int num_hashes = i + 1;
        int num_spaces = largura - num_hashes;

        repeat(' ', num_spaces);
        repeat('#', num_hashes);

        printf("\n");
    }
}