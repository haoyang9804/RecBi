

unsigned b;
int c;
int d;

short e (int f, int g)
{
  return f * g;
}

char h (int f)
{
  return f;
}

int main ()
{
  short a = e (!c, 65535);
  b = d = h (a <= -1);
  if (b != 1)
  {
    __builtin_abort (); 
  }
  return 0; 
}