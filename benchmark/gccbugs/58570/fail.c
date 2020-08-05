

int printf (const char *, ...);

#pragma pack(1)
struct S
{
  int f0:15;
  int f1:29;
};

int a;
int b;
int c;
int e = 1;
int g;
static struct S d[6];
long long f;

static short
foo (int p)
{
  for (b = 0; b < 1; b++)
    {
      g |= 1;
      for (; a < 1; a++)
	{
	  int i;
	  if (p < c - 1)
	  {
	    return 4;
	  }
	  if (p)
	  {
	    for (i = 0; i < 6; i++)
	      {
		struct S j = {1, 1};
		d[i] = j;
	      }
	  }
	  continue;
	}
    }
  return 0;
}

int
main ()
{
  if (e)
  {
    foo (!f);
  }
  printf ("%d\n", d[0].f1);
  return 0;
}