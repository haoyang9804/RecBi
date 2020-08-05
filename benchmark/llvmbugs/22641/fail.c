unsigned short a = 1;
int b = 65536;
int c;

int
main ()
{
  for (c = 0; c < 1; c = 1)
  {
    for (;;)
      {
	b &= --a;
	break;
      }
  }

  if (b)
  {
    __builtin_abort ();
  }

  return 0;
}
