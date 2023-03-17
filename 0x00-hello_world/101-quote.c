#include <stdio.h>
#include <unistd.h>
/**
*main - Main function of my project
*
*
*Return: return 0 everytime
*/
int main(void)
{
char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, msg, 58);
return (1);
}
