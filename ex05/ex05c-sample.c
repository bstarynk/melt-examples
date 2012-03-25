/* file ex05c-sample.c */
#include <stdio.h>

static inline void 
printflush(const char* fmt, int x)
{
  printf(fmt, x);
  fflush(NULL);
}

/* should find fllush of NULL because inline-called */
void barone(int x)
{
  printflush("in barone x=%d", x);
}

/* should find two occurrence of fflush of NULL */
void bartwo(void)
{
  int i=0;
  for (i=0; i<4; i++) {
    puts("in bartwo");
    fflush(NULL);
  }
  for (i = 10; i < 20; i += 3)
    printflush("in battwo i=%d", i);
}

/* should not find fflush because the function's name don't start with
   bar */
void notabar(int z)
{
  if (z)
  fflush(NULL);
}
