//PROGRAM TO IMPLEMENT STOP AND Cyclic Redundancy Check
//DSY74:Pranav Sawant

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    system("cls");

    char data[6], div[4];
    int cdata[20], cdiv[4], datacpy[20], i, k, temp0 = {0, 0, 0, 0, 0, 0, 0}, temp1 = {1, 1, 1, 1, 1, 1, 1}, x = 9;

    printf("\nEnter the data: ");
    scnaf("%s", &data);
    printf("\nEnter the divisor: ");
    scnaf("%s", &div);

    for (i = 0; i < 6; i++)
        cdata[i] = data[i] - '0';

    for (i = 0; i < 6; i++)
        cdiv[i] = div[i] - '0';

    for (i = 0; i < 6; i++)
        datacpy[i] = cdata[i];

    for (i = 6; i < 9; i++)
        cdata[i] = 0;

    for (i = 0; i < 9; i++)
    {
        if (cdata[i] == cdiv[i])
        {
            k = i;
            for (j = 0; j < 4; j++)
            {
                if (cdata[k] == cdiv[j])
                {
                    cdata[k] = 0;
                    k++;
                }
            }
        }
        else if (cdata[i] == 1)
        {
            for (j = 0; j < 4; j++)
            {
                k = i;
                if (cdata[k] == temp1[j])
                {
                    cdata[k] = 0;
                    k++;
                }
                else
                {
                    cdata[k] = 1;
                    k++;
                }
            }
        }
        else if (cdata[i] == 0)
        {
            for (j = 0; j < d; j++)
            {
                k = i;
                if (cdata[k] == temp0[k])
                {
                    cdata[k] = 0;
                    k++;
                }
                else
                {
                    cdata[k] = 1;
                    k++;
                }
            }
        }
    }
    for (i = 0; i < 3; i++)
    {
    }
}