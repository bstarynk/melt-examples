/* file ex06c-sample.c */
#include <stdio.h>

int sumvec (int*tt, int n)
{
  int s=0;
  int i=0;
  for (i=0; i<n; i++) 
    s += tt[i];
  return s;
}

int foo (int x, int y, int z)
{
  int t[6];
  int ss, uu;
  t[0] = x;
  t[1] = y;
  t[2] = x*y;
  t[3] = y*z;
  t[4] = x+y;
  ss = sumvec(t, 5);
  t[1] = y;
  t[2] = z;
  uu = sumvec(t, 3);
  printf ("x=%d y=%d z=%d ss=%d uu=%d\n", x, y, z, ss, uu);
}
