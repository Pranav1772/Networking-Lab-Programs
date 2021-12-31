//PROGRAM TO IMPLEMENT STOP AND WAIT PROTOCOL
//DSY74:Pranav Sawant

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int i = 1, noframes, x;

    printf("\nEnter the number of frames: ");
    scanf("%d", &noframes);

    while (noframes > 0)
    {
        printf("\n\nSending the %d number frame", i);
        x = rand() % 10;
        if (x % 2 == 0)
        {
            for (int j = 1; j < 2; j++)
            {
                printf("\nDid not got acknoledgment for %d frame. Waiting for %d seconds", i, j);
                sleep(j);
            }
            printf("\nSending the %d number frame", i);
            x = rand() % 10;
        }
        printf("\nAcknoledgement for %d frame", i);
        noframes--;
        i++;
    }
}