#include <stdio.h>
#include <string.h>
int main() {
    char name[100];
    int vowel=0, i=0, consonant=0;
    int sub, upp;
    printf("Input a sentence: ");
    fgets(name,sizeof name,stdin);
    sub=strlen(name);

  upp=0;
   while(name[upp]!='\0')
    {
        if(name[upp]=='A'||name[upp]=='a'||name[upp]=='E'||name[upp]=='e'||name[upp]=='I'||name[upp]=='i'||name[upp]=='O'||name[upp]=='o'||name[upp]=='U'||name[upp]=='u')
     {
         name[upp]=name[upp]-32;
     }
     upp++;
    }
    for(i=0;i<sub;i++)
{

    if(name[i]=='A'||name[i]=='a'||name[i]=='E'||name[i]=='e'||name[i]=='I'||name[i]=='i'||name[i]=='O'||name[i]=='o'||name[i]=='U'||name[i]=='o')
    {
        vowel++;
    }

    else if
    ((name[i]>='a' && name[i]<='z') || (name[i]>='A' && name[i]<='Z'))
    {
       consonant++;
    }

}
    printf("String Converted: ");
    puts(name);
    printf("String Lenght: %zu\n",strlen(name));
    printf("Vowels: %d\n",vowel);
    printf("Consonants: %d",consonant);
    return 0;
}