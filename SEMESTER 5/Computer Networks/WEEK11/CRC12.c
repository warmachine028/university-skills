#include <stdio.h>
int gen[4], genl, frl, rem[4];

void remainder_(int fr[])
{
    int k1, i, j;
    for (int k = 0; k < frl; k++)
    {
        if (fr[k] == 1)
        {
            k1 = k;
            for (i = 0, j = k; i < genl; i++, j++)
            {
                rem[i] = fr[j] ^ gen[i];
            }
            for (i = 0; i < genl; i++)
            {
                fr[k1] = rem[i];
                k1++;
            }
        }
    }
}

void main()
{
    frl = 8;
    int i, j, fr[frl], dupfr[11], recfr[11], tlen, flag;
    genl = 4;
    printf("Enter frame: ");
    for (i = 0; i < frl; i++)
    {
        scanf("%i", &fr[i]);
        // dupfr[i] = fr[i];
    }
    printf("Enter generator: ");
    for (i = 0; i < genl; i++)
        scanf("%d", &gen[i]);
    
    tlen = frl + genl - 1;
    for (i = frl; i < tlen; i++)
    {
        dupfr[i] = 0;
    }
    remainder_(dupfr);
    for (i = 0; i < frl; i++)
    {
        recfr[i] = fr[i];
    }
    for (i = frl, j = 1; j < genl; i++, j++)
    {
        recfr[i] = rem[j];
    }
    remainder_(recfr);
    flag = 0;
    for (i = 0; i < 4; i++)
    {
        if (rem[i] != 0)
            flag++;
    }
    if (flag == 0)
    {
        printf("frame received correctly");
    }
    else
    {
        printf("the received frame is wrong");
    }
}
