int printf (const char *, ...);

int a;
int c = 1;
static short b;

void fn1 ()
{
  c = 2;
}

int fn2 (int p1)
{
  for (; a < 1; a++)
  {
    printf ("%d\n", c);
  }
  return p1;
}

int main ()
{
  int d = c && b;
  c = d;
  fn2 (0);
  fn1 ();
  return 0;
}