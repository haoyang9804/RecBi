#include <assert.h>

struct
{ 
  int f0;
  short f1;
  short f2;
  short f3;
} b, e;

int a;
int **c;
int f;
int *m;
int d;
int i;
int j;
int l;
int n;
short ****g;

void
fn1 ()
{ 
  int o;
  if (f)
    { 
      for (; e.f0; e.f0++)
      {
        for (; d; d = 0)
        {
          *c = &o;
        }
      }
      assert (a);
      *m &= i | ((j == 0) == l) | n;
      for (; b.f1 >= 0; b.f1++)
      {
        ;
      }
    }
  for (b.f3 = 0; b.f3 < 2; b.f3++)
    { 
      short *****h = 0;
      for (b.f2 = 0; b.f2; b.f2--)
      {
        h = &g;
      }
      assert (!h);
    }
}

int
main ()
{ 
  fn1 ();

  if (b.f3 != 2)
  {
    __builtin_abort ();
  }

  return 0;
}