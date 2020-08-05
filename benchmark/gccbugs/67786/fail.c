int printf (const char *, ...);

int a;
int b = 10;
char c;

int
main ()
{
  char d;
  int e = 5;
  for (a = 0; a; a--)
  {
    e = 0;
  }
  c = (b & 15) ^ e;
  d = c > e ? c : c << e;
  printf ("%d\n", d);
  return 0;
}