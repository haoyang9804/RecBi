int printf (const char *, ...);

int a = 1;
int b;
int d;
unsigned char c;

int
foo ()
{
  b |= 1;
  return a;
}

void
bar ()
{
l:d = foo () && --c;
  if (c)
  {
    goto l;
  }
}

int
main ()
{
  bar ();
  printf ("%d\n", b);
  return 0;
}