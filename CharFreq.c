#include <stdio.h>
#include <stdlib.h>
int main()
{
   char ch;
   int i, frequency = 0;
   int l =0;
   printf("Enter a string length: ");
   scanf("%d",&l);  // Scan the length of String
    fflush(stdin);

   char *str = (char *)malloc(sizeof(char)*l); //Initilize a String of User Defined Size
   printf("Enter a string: ");
   gets(str); //Get a String form User

   printf("Enter a character to find the frequency: ");
   scanf("%c",&ch); //Get a Character whose frequency has to find

   for(i = 0; *(str+i) != '\0'; ++i)
   {
       if(ch == *(str+i) )// Comapare character till '/0' in the String
           ++frequency;
   }

   printf("Frequency of %c = %d", ch, frequency); //Print the frequency
    free(str);
   return 0;
}
