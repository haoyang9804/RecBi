int a;

void
fn1 ()
{ 
  char b = 0;
  for (; b != -2; b--)
  {
    for (a = 0 ; a < 1; a++)
    {
      if ((unsigned int) b > 1)
      {
        return;
      }
    }
  }
}

int
main ()
{ 
  fn1 ();

  if (a != 0)
  {
    __builtin_abort ();
  }

  return 0;
}