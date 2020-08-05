int printf (const char *, ...);

int a;
int c;

union
{
  int f1;
  int f2:1;
} b;

short
foo (short p)
{
  return p < 0 ? p : a;
}

int
main ()
{
  b.f1 = 56374;
  unsigned short d;
  int e = b.f2;
  d = e == 0 ? b.f1 : 0;
  c = foo (d);
  printf ("%d\n", c);
  return 0;
}