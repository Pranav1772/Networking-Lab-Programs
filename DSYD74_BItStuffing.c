//PROGRAM TO IMPLEMENT BIT STUFFING
//DSY74:Pranav Sawant

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()

{

    system("cls");

    char data[50], stuff[50], dstuff[50];
    int i, j, cnt, len;
    printf("Enter your data in form of 0's and 1's only: ");
    scanf("%s", data);
    len = strlen(data);
    cnt = 0;
    j = 0;

    //Sender Side
    for (i = 0; i < len; i++)
    {
        if (data[i] == '1')
        {
            cnt++;
        }
        else
        {
            cnt = 0;
        }
        stuff[j] = data[i];
        j++;
        if (cnt == 5 && data[i + 1] == '1')
        {
            stuff[j] = '0';
            j++;
            cnt = 0;
        }
    }
    stuff[j] = '\0';
    printf("\n:Sender Side:");
    printf("\n\nSent data by sender is : %s", data);
    printf("\n\nStuffed data sent by sender to receiver is: %s ", stuff);

    // Receiver Side
    len = strlen(stuff);
    cnt = 0;
    j = 0;
    for (i = 0; i < len; i++)
    {
        if (stuff[i] == '1')
        {
            cnt++;
        }
        else
        {
            cnt = 0;
        }
        dstuff[j] = stuff[i];
        j++;
        if (cnt == 5 && stuff[i + 1] == '0')
        {
            cnt = 0;
            i++;
        }
    }
    dstuff[j] = '\0';
    printf("\n\n:Receiver Side:");
    printf("\n\nDestuffed data received to receiver is: %s", dstuff);
    return 0;
}
