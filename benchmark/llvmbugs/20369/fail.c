
int a;
int b;
int c[4][8] = {{1}};
int d;
int e;

int
fn1 (int p)
{
  return p ? 1 % p : 0;
}

void
fn2 ()
{
  for (e = 0; e < 4; e++)
    {
      c[d + 1][e + 1] = c[e][e];
      b = fn1 (a ^ 1);
    }
}

void
fn3 ()
{
  fn2 ();
}

int
main ()
{
  fn3 ();
  if (c[1][2] != 1)
  {
    __builtin_abort (); 
  }
  return 0;
}