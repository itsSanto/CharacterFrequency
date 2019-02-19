#include <stdio.h>

int main()
{
   char str[1000], ch; //Initilize a String of size 1000 characters
   int i, frequency = 0;

   printf("Enter a string: ");
   gets(str); //Get a String form User

   printf("Enter a character to find the frequency: ");
   scanf("%c",&ch); //Get a Character whose frequency has to find

   for(i = 0; str[i] != '\0'; ++i)
   {
       if(ch == str[i]) // Comapare character till '/0' in the String
           ++frequency;
   }

   printf("Frequency of %c = %d", ch, frequency); //Print the frequency

   return 0;
}
