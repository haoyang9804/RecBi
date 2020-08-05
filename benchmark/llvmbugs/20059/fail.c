int a;
int b;
int c;
int d = 1;
char e = 1;

void
fn1 ()
{
  int h;
  for (; e; e++)
    {
      for (; b;)
	    { 
        d--;
      }
      h = (d ? a % d : 0);
      c &= h;
    }
}

int
main ()
{
  fn1 ();
  return 0;
}