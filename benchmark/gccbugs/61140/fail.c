
int printf (const char *, ...);

int a[1] = { 1 };
int b = 1;
int c; 

int
main ()
{
  for (; c < 1; c++)
  {
    if (a[0])
      {
        a[0] &= 1;
        b = 0;
      }
  }
  printf ("%d\n", b);
  return 0;
}