
int printf (const char *, ...);

int a;
int b;
int *c = &b;
int d = -1;
int e;
int f;
int *g;
int *h = &f;
int **i = &g;
int j;

unsigned int
foo (unsigned int p)
{
  return p == 0 ? 0 : 1 / p;
}

static int *
bar ()
{
  *c = *h = foo (d) & (-9 < d);
  for (e = 0; e; e++)
  {
    ;
  }
  return 0;
}

int
main ()
{
  for (; j; j++)
  {
    for (;; a--)
    {
      ;
    }
  }
  *i = bar ();
  printf ("%d\n", f);
  return 0;
}