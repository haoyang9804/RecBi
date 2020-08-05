int a;
int b;
int c;
int d[6];

int
main ()
{
  c = 0;
  for (; a < 14; a++)
    {
      int i = 0;
      for (; i < 6; i++)
      {
        d[i] = 11;
      }
      char e = b = c;
      c = e - d[0];
    }

  if (b != 113)
    __builtin_abort();

  return 0;
}