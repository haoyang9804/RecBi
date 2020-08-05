int a;
unsigned int b;

static void fn1 (int c)
{ 
  if (!(-c & ((--b >> 1) + 2)))
  {
    __builtin_abort ();
  }
}

int main ()
{ 
  fn1 (2);
  return 0;
}