int printf (const char *, ...);

unsigned a = 9;
int b, d;

void fn1 ()
{
  int f = 0;
  for (; f < 4; f++)
    {
      d = (a > 0) * f;
      unsigned c = f;
      b = c ? d / c : 0;
    }
}

int main ()
{
  fn1 ();
  printf ("%d\n", b);
  return 0; 
}
