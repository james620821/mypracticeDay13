#include <stdio.h>
#include <string.h>
void key_print(void);

int main()
{
    /*
    //影片20 字串簡介
    char str[]= {'H','e','l','l','o','\0'};
    //""裡的字串，編譯器會自動加\0
    char str1[] = "Hello world";
    //str_print(str);
    str_print(str1);
    */
    //影片20-1 若陣列設定值大於字元個數，則編譯器會自動補'\0'
    //影片20-2 從鍵盤輸入讀入一型字練習
    key_print();

    return 0;
}
void key_print()
{
    int i=0;
    char str[15];
    while(1)
    {
        scanf("%c",&str[i]);
        if(str[i] == '\n' || i==14)
            break;
        i++;
    }
    str[i]='\0';
    printf("%s\n",str);
}
void str_print(char str[])
{
    /*
    for(int i=0; str[i] != '\0'; i++)
    {
        printf("%c",str[i]);
    }
    printf("\n");
    */
    //若字串為""所定義，可由下print
    printf("%s\n",str);
}
