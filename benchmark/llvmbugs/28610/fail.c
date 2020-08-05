void f () {}

int g (int p, int q)
{
  return p > q || (p && q) ? p : q;
}

short h (int p)
{
  return p;
}

int main ()
{
  f ();

  if (h (g (0, 1)) != 1)
  {
    __builtin_abort ();
  }

  return 0;
}