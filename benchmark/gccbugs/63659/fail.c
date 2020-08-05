int a;
int b;
int c;
int *d = &b;
int g;
int h;
int i;
unsigned char e;
char f;

int
main ()
{
  for (; a;)
  {
    for (a = 0; a; a++)
	  {
      for (; c; c++)
	    {
        ;
      }
    }
    if (i)
	  {
      break;
    }
  }
  char j = c;
  char k = -1;
  char l;
  l = g = j >> h;
  f = l == 0 ? k : k % l;
  e = 0 ? 0 : f;
  *d = e;

  if (b != 255) 
  {
    __builtin_abort (); 
  }

  return 0;
}