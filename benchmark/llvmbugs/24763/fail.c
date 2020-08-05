
char a = -1;
int b;

short
fn1 (int p1)
{
  return p1 >> 1;
}

int
main ()
{
  b = fn1 (a);
  
  if (b != -1)
  {
    __builtin_abort ();
  } 

  return 0;
}