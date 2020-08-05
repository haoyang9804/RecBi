int printf (const char *, ...);

struct S0
{
  long f2;
  int f3;
  int f4;
  int f5;
};

struct S1
{
  char f0;
} a;

struct S2
{
  int f2;
  int f3;
  struct S0 f4;
  struct S1 f5;
} b;

int i; 

int
main ()
{
  struct S2 c = { 1, 1, {1, 1, 1, 1}, {1} };
  b = c;
  i = c.f4.f5;
  a = b.f5;
  printf ("%d\n", a.f0);
  return 0;
}
