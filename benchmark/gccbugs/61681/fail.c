

int printf (const char *, ...);

int a = 1;
int *e = &a;
int **f = &e;
int *l;
int *p;
int j;
static int b;
long d;
short g;

void
fn1 (int *p)
{
  int m;
  if (!(*p & j))
    {
      int *n = &m;
      for (d = 6; d; d--)
	{
	  for (g = 0; g < 1; g++)
	    {
	      n = l = *f;
	      b = *p;
	    }
	  *n = 0;
	}
    }
}

int
main ()
{
  p = *f;
  fn1 (p);
  printf ("%d\n", b);
  return 0;
}