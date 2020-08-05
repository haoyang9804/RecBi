int a;
int b;
int c;
int d;
int e;
char f[1][3];

void
fn1 ()
{
  for (d = 0; d < 2; d++)
    {
      f[b][d] = 0;
      for (e = 0; e < 3; e++)
	{
	  if (c)
	  {
      a--;
    }
	  f[0][e] = 1;
	}
    }
}

int
main ()
{
  fn1 ();

  if (f[0][1] != 1)
  {
    __builtin_abort ();
  }

  return 0;
}