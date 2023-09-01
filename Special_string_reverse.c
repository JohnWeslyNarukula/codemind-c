#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%[^
]s",a);
    int max = strlen(a)-1;
    for(int i = 0 ; i<strlen(a);i++)
    {
       if(a[i]=='a'||a[i]=='b'||a[i]=='c'||a[i]=='d'
        ||a[i]=='e'||a[i]=='f'||a[i]=='g'||a[i]=='h'
        ||a[i]=='i'||a[i]=='j'||a[i]=='k'||a[i]=='l'
        ||a[i]=='m'||a[i]=='n'||a[i]=='o'||a[i]=='p'
        ||a[i]=='q'||a[i]=='r'||a[i]=='s'||a[i]=='t'
        ||a[i]=='u'||a[i]=='v'||a[i]=='w'||a[i]=='x'
        ||a[i]=='y'||a[i]=='z')
        {
        for(int j = max ; j >= 0; j-- )
        {
        if(a[j]=='a'||a[j]=='b'||a[j]=='c'||a[j]=='d'
        ||a[j]=='e'||a[j]=='f'||a[j]=='g'||a[j]=='h'
        ||a[j]=='i'||a[j]=='j'||a[j]=='k'||a[j]=='l'
        ||a[j]=='m'||a[j]=='n'||a[j]=='o'||a[j]=='p'
        ||a[j]=='q'||a[j]=='r'||a[j]=='s'||a[j]=='t'
        ||a[j]=='u'||a[j]=='v'||a[j]=='w'||a[j]=='x'
        ||a[j]=='y'||a[j]=='z') 
          {
            printf("%c",a[j]);
            max = j -1;
            break;
          }
        }
    }
    else
    {
        printf("%c",a[i]);
    }
}
}