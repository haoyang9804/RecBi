int printf (const char *, ...);

int a;
int b = -2;

int main ()
{
  for (; a < 1; a++)
    {
      int c = ~b;
      if (b > c || !c)
	{
	  printf ("0");
	  continue;
	}
      if (c < 0)
	    { 
        printf ("1\n");
      }
    }
  return 0;
}