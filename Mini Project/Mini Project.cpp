#include <stdio.h>
#include <string.h>

int main()
{
    int i=0;
    int asciiNum, keyz, cipherNum;
    char plainText[500], cipheredText[500];
    printf("\n Enter Text: ");
    fgets(plainText, 500, stdin);
    printf("%s", plainText);
    for(i=0; i<strlen(plainText); i++)
    {
        asciiNum= (int)plainText[i];
        if(asciiNum==32)
        {
            cipheredText[i]=(char)asciiNum;
        }
        else
        {
        cipherNum=(int)asciiNum;
        cipheredText[i]=(char)((asciiNum+25)%127);
        }
    printf("%c", cipheredText[i]);
    }
return 0;
}
