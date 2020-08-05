int printf (const char *, ...);

int u; 

int a;
int b;
int c[2];
int d;
int *e;
int f;
int g; 

int fn2 ()
{
  int t[1];
  int i;
  i = 0;
  for (; i < 1; i++)
  {
    t[i] = 0;
  }
  for (d = 0; d; d = 1) {
    int *s[1] = {&t[0]};
    g = a = *s[0]; 
  }
  f = g; 
  return 1;
}

void fn1 ()
{
  for (; b < 2; b++) {
    int *p = &u; 
    *p = 0;
    *p = fn2();
    e = &c[b];
    *e = 0;
  }
}

int
main ()
{
  fn1 ();
  printf ("%d\n", u);
  return 0;
}