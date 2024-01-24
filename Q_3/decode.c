#include "funcs.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    if (argc < 3)
    {
        printf("error - not enough arguments");
    }
    
    char* src = argv[1];
    char* dst = argv[2];

    char key[62] = {'d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','1','2','3','4','5','6','7','8','9','0','a','b','c'};

    void* codec = createCodec(key);
    if (!codec)
    {
        printf("ilegal code\n");
        exit(1);
    }
    
    decode(src, dst, 55 ,codec);

    freecodec(codec);
    
    return 0;
    
}