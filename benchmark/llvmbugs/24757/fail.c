
int printf (const char *, ...);

char a = -127;
int b;

char
fn1 (int p1, int p2)
{
  return p1 - p2;
}

int
main ()
{
  char *c = &a;
 lbl:
  b = ~(*c)--;
  if (fn1 (b, a))
  {
    goto lbl;
  }
  printf ("%d\n", a);
  return 0;
}