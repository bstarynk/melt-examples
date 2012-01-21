/* file ex02c-sample.c in the public domain */

int foo(int x)
{
  return x+1;
}


int bar(int y)
{
  return y*2;
}

int gee(int z, int t)
{
  if (bar(z) <= 4) return foo(t);
  return foo(z+t);
}
