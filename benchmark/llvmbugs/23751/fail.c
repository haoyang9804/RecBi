
int *a;
int b;
int **c = &a;
int d;

unsigned
fn1 (int p1, int p2)
{
  return p1 + p2;
}

void
fn2 (unsigned char p)
{
  *c = &b;
  *a = p > fn1 (p, d | -2);
}

int
main ()
{
  fn2 (2);

  if (b != 1)
  {
    __builtin_abort ();
  }

  return 0;
}