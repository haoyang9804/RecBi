int printf (const char *, ...);

int a[4] = { -1, 0, 0, 0 }; 
static int b;
static int c;

int
main ()
{
  for (; b < 4; b++)
    {
      short t = a[b];
      a[b] = c = t % 3;
    }
  printf ("%d\n", a[0]);
  return 0;
}