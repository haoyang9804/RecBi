
int a[4];
int b;
int i;  
static int c[] = { 0, 1, 0, 0 };

void
fn1 ()
{
  int d[] = { 0 };
  for (i = c[0]; i < 4; i++)
  {
    c[i] = 0;
  }
}

int
main ()
{
  for (; i < 4; i++)
  {
    a[i] = i;
  }
  fn1 ();
  for (i = 0; i < 4; i++)
  {
    b = a[b ^ c[i]];
  }

  if (b)
  {
    __builtin_abort ();
  }

  return 0;
}