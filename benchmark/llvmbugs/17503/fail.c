int printf (const char *, ...);

struct S
{
  int f0:1;
  int:0;
  int f1:1;
} a; 

int b;

void
bar ()
{
  struct S d = { 0, 1 };
  a = d;
  b = d.f0;
}

int
main ()
{
  bar ();
  printf ("%d\n", a.f1);
  return 0;
}