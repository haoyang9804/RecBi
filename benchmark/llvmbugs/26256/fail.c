int printf (const char *, ...);

int a = 8, b, d, e, f;
short c;

void
fn1 ()
{ 
  char g = c, h = c = c | 195;
  if (d)
    ;
  if ((!a && c > d) || c < d)
    for (g = 0; g < 20; g++)
      e ^= f;
  a = 2 & g;
  if (h >= c || g)
    printf ("%d\n", b);
  if (a)
    { 
      fn1 ();
      for (;;)
        ;
    }
}

int
main ()
{ 
  fn1 ();
  return 0;
}
