/* file ex04c-sample.c in the public domain */
/* this won't match, not a function */
int bee_var;

extern void doexit(int);

/* this won't match, not a function prefixed bee */
void foo (void)
{
  if (bee_var) 
    doexit(0);
}

/* this should match, prefixed bee and with integer arguments */
int beef(int x, int y)
{
  return x+y;
}

/* this won't match, prefixed bee but pointer argument */
void beebad(int *p)
{
  if (beef(p[0], p[1]) == 5) 
    doexit(1);
}
