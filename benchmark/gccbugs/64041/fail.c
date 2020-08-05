int printf (const char *, ...);

int a, b = 1, d;

union U1
{
  unsigned int f0;
  int f1;
};

union U2
{
  int f2;
  int f3;
} c;

int
fn1 (int p)
{
  int t = p && a || p && a && p; 
  return t ? t : a;
}

unsigned
fn2 (union U1 p1, union U2 p2)
{
  if (p1.f1 <= 0)
    {
      for (; p2.f2;)
    c.f2 = 0;
      p2.f2 = fn1 (d);
    }
  return p2.f3;
}

int
main ()
{
  if (b)
    {
      union U1 f = { 0xFFFFFFFFU }; 
      fn2 (f, c);
    }
  printf ("%d\n", 0);
  return 0; 
}
