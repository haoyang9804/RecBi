int printf (const char *, ...);

struct S
{
  int f0;
  int f1:25; 
};

int a;
int b;
int *c = &b;
int d;

struct S
fn1 ()
{
  struct S e = {0, 0};
  if (!d)
    {
      struct S f = {0, -1};
      return f;
    }
  return e;
}

int
main ()
{
  struct S g = fn1 ();
  struct S h = g;
  for (a = 0; a < 1; a++)
    {
      *c = 0;
      *c = 1 <= ((h.f0 >= *c) ^ (h.f1 |= 1));
    }
  printf ("%d\n", b);
  return 0;
}