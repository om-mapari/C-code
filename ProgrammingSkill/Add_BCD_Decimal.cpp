#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n1, n2, k2, k, rem = 0;
    int dec = 0, dec2 = 0;
    int c1[8], c2[8];
    int sum4[9];
    int c11[8];
    int c22[8];
    printf("Enter 1st decimal number = ");
    scanf("%d", &n1);
    printf("Enter 2nd decimal number = ");
    scanf("%d", &n2);
    int h = 7;
    int d;
    int m = n1;
    int m2 = n2;
    int d2;
    printf("\n");
    if (m > 9)
    {
        while (m != 0)
        {
            d = m % 10;
            for (int i = 3; i >= 0; i--)
            {
                k = d >> i;
                if (k & 1)
                {
                    c1[h] = 1;
                }
                else
                {
                    c1[h] = 0;
                }
                h--;
            }
            m = m / 10;
        }
        for (int i = 4; i <= 7; i++)
        {
            c11[i - 4] = c1[i];
        }
        for (int i = 0; i <= 3; i++)
        {
            c11[i + 4] = c1[i];
        }
        printf("BCD1  = ");
        for (int i = 7; i >= 0; i--)
        {
            printf("%d", c11[i]);
        }
    }
    else
    {
        for (int i = 7; i >= 0; i--)
        {
            k = m >> i;
            if (k & 1)
                c1[i] = 1;
            else
                c1[i] = 0;
        }
        printf("BCD1  = ");
        for (int i = 7; i >= 0; i--)
        {
            c11[i] = c1[i];
        }
    }

    h = 7;

    if (m2 > 9)
    {
        while (m2 != 0)
        {

            d2 = m2 % 10;
            for (int i = 3; i >= 0; i--)
            {
                k2 = d2 >> i;
                if (k2 & 1)
                {
                    c2[h] = 1;
                }
                else
                {
                    c2[h] = 0;
                }
                h--;
            }
            m2 = m2 / 10;
        }
        printf("\n");
        for (int i = 4; i <= 7; i++)
        {
            c22[i - 4] = c2[i];
        }
        for (int i = 0; i <= 3; i++)
        {
            c22[i + 4] = c2[i];
        }
        printf("BCD2  = ");
        for (int i = 7; i >= 0; i--)
        {
            printf("%d", c22[i]);
        }
    }

    else
    {
        for (int i = 7; i >= 0; i--)
        {
            k2 = m2 >> i;
            if (k2 & 1)
                c2[i] = 1;
            else
                c2[i] = 0;
        }
        printf("BCD2  = ");
        for (int i = 7; i >= 0; i--)
        {
            c22[i] = c2[i];
            printf("\n%d", c22[i]);
        }
    }

    rem = 0;
    for (int i = 0; i <= 7; i++)
    {
        sum4[i] = c11[i] ^ c22[i] ^ rem;
        rem = (c11[i] & c22[i]) | (c11[i] & rem) | (c22[i] & rem);
    }

    for (int i = 4; i <= 8; i++)
    {
        if (rem == 1 && i == 8)
        {
            sum4[8] = 1;
            dec = dec + sum4[i] * pow(2, (i - 4));
        }
        if (i < 8)
        {
            dec = dec + sum4[i] * pow(2, (i - 4));
        }
    }
    for (int i = 0; i <= 3; i++)
    {
        dec2 = dec2 + sum4[i] * pow(2, i);
    }
    if (dec2 > 9 && dec2 <= 15 && n1 % 10 + n2 % 10 <= 15)
    {
        dec2 = dec2 % 10;
        dec = dec + 1;
    }
    if (n1 % 10 + n2 % 10 > 15)
    {
        dec2 = (n1 % 10 + n2 % 10) % 10;
    }
    printf("\n");
    printf("\nAddition of BCD = ");
    printf("%d", dec);
    printf("%d", dec2);
    return 0;
}