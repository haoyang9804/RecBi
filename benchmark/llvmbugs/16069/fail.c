int *a;
int b;
int *c;
int d;

int foo (short p, int q)
{
  return q == 0 || (p != 0 && q == 1) ? p : 1 % q;
}


int main ()
{
  c = &d;
  *c = ((int)&a) == 0;
  b = foo (0, d);

  return 0;
}