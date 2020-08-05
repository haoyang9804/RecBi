int a, b, d;
volatile int c;

int main ()
{ 
  int e = 0;
  for (; e < 1; e++)
    {
    L1:
      if (b)
        goto L2;
      int h, i = h = c;
      b = a = ~0;
      if (h)
        goto L1;
      a = i;
    L2:
      c = 1 % ~a;
      d = h;
    }
  return 0;
}
