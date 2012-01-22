/* file ex02c-sample.c in the public domain */

const char stamp[] = __DATE__ "@"  __TIME__ ;

int foo(int x)
{
  return x+1;
}


int bar(int y)
{
  return y*2;
}

#pragma GCC message ex02c before gee

int gee(int z, int t)
{
  if (bar(z) <= 4) return foo(t);
  return foo(z+t);
}
