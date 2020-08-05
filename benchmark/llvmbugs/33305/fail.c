int a, *b = &a, c, e = -1, f, g = 1, h;

static void fn1 ()
{
  for (; c < 1; c++)
    for (h = 0; h < 2; h++)
      {
    (g && h) || (e ^= !g);
    g = 0;
      }
  *b = h;
  if (e < -1)
    *b = f;
}

int main ()
{
  fn1 ();
  if (a)
    __builtin_abort (); 
  return 0; 
}

