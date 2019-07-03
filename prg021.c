#include<stdio.h>
#include<curses.h>
int main()
{
	char ch;
	printf("input your letter=");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
      printf("\n it is vowel");
    }
  else
  {
  printf("\n it is consonant");
  }
  return 0;
}
