int printf(const char *, ...);
int a;
short fn1 (short p1)
{
  return p1 + 1;
}
short fn2 (int p1, int p2)
{
  return p1 + p2;
}
int main ()
{
  int c;
  char e;
  c = fn2 (-1, a && 1);
  e = fn1 ((unsigned) c > 33000) + 2;

  printf("%d\n", e);

  return 0;
}