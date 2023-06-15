#include<unistd.h>
#include<string.h>
#include<stdio.h>
/**
 * main -output and that piece of art is useful\" - Dora Korpar, 2015-10-19
 * Return: Always 0 (Success)
 */
int main()
  {
  const char x[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
  write(STDOUT_FILENO, x, strlen(x));
  return 0;
  }
