
int a;
int b;
int *c;
int e;
int f;
int g = 1;
int h;
int k;
int m;
int n;
int p;
static int **d = &c;
static int j = 1;
short l = 1;

static void
fn1 (int p1)
{ 
  char t;
  int *r;
  unsigned s;
  if (g)
    { 
      int u;
      int **v = &c;
      *d = &b;
      **d = h == p1;
      for (; p1 < 6; p1++)
      {
        for (t = 0; t < 5; t += 4)
          { 
            m = 0;
            if (**v ? ~0 % **v : ~0)
              { 
                if (l)
                {
                  *v = &p;
                }
              }
            else
            {
              return;
            }
            u = 0;
            for (; u < 1; u++)
            {
              r = &b;
            }
            *v = r;
            s = j ? j : a;
            if (**v % s & 10)
            {
              return;
            }
          }
      }
      *c = 4;
    }
  n = b;
  f = 0;
}

void
fn2 ()
{ 
  fn1 (1);
  while (k)
  {
    e++;
  }
  j = 0;
}

int
main ()
{ 
  fn2 ();
  __builtin_printf ("%d\n", b);
  return 0;
}