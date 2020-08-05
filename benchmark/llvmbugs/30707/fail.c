static int *b;
int **c = &b;
int **d = &b;
int e;
int f;
int g;

int main ()
{
  int **h = &b;
  for (; g < 1; g++)
    {
      *c = &e;
      if (!b)
      {
        __builtin_abort (); 
      }
      *h = &f;
    }
  return 0; 
}