int printf (const char *, ...);

int a = 2;
int b;

int
main ()
{
  int c;
  if (!b)
    {
      b = a;
      c = a == 0 ? 1 : 1 % a;
      if (c)
	    {
        b = 0;
      }
    }
  printf ("%d\n", b);
  return 0;
}