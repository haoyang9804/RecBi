int printf (const char *, ...);

int a, b, c, e, k, l;

struct
{
  int f1;
} d;

void
fn1 ()
{
  if (d.f1)
    for (c = 0; a;)
      for (; l;)
    ;
}

int
fn2 ()
{
  for (; b < 1; b++)
    for (; k; k++)
      fn1 ();
  return 0;
}

int
fn3 ()
{
  int g = 0, h;
  int i[1][1] = { {1} };
  for (;;)
    {
      b = 0;
      for (; g < 1; g++)
    h = i[0][g] != fn2 ();
      if (++e)
    return 0;
      g = h;
    }
}

int
main ()
{
  fn3 ();
  printf ("%d\n", b);
  return 0;
}

