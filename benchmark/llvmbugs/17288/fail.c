int printf (const char *, ...);

short a;
int b;
int c;

int
foo ()
{
  a++;
  return 1;
}

void
bar ()
{
 lbl:
  b &= c || foo ();
  if (a)
  {
    goto lbl;
  }
}

int
main ()
{
  b = 8;
  bar ();
  printf ("%d\n", b);
  return 0;
}