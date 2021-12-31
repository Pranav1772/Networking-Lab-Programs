//PROGRAM TO IMPLEMENT STOP AND Cyclic Redundancy Check
//DSY74:Pranav Sawant

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    system("cls");

    char data[6], div[4];
    int cdata[20], cdiv[4], datacpy[20], i;

    printf("\nEnter the data: ");
    scnaf("%s", &data);
    printf("\nEnter the divisor: ");
    scnaf("%s", &div);

    for (i = 0; i < 6; i++)
        cdata[i] = data[i] - '0';

    for (i = 0; i < 6; i++)
        datacpy[i] = cdata[i];

    for (i = 6; i < 9; i++)
        cdata[i] = 0;

    for (i = 0; i < 9; i++)
    {
    }
}