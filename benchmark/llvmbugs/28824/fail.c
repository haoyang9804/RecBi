
struct
{ 
  int f0;
} a = {1}, b;

volatile int c;
int d;
int e;
int f;
int g;
int h;
int i;
int j;
int k;
int l;
int m[1];
int n;
int o;
int p;
int q;
int r[1];
int s;
int t;
int u;

void fn1 (int p1)
{ 
  n = n >> 8 ^ m[n ^ p1];
}

void fn2 ()
{ 
  fn1 (l > 0);
  fn1 (l >> 8);
  fn1 (l & 5);
  n = n >> 8 ^ n;
}

static void fn3 (int p1, int p2, int p3, short p4)
{ 
  q = q && (p1 = p4);
  for (; o; o++)
    { 
      h = e ? 0 : s;
      g = j;
      s = p2 | (p3 == (f < h)) | j;
      if (p1)
      {
        c;
      }
    }
}

int fn4 ()
{ 
  short v;
  short x = i;
  fn2 ();
  v = x >> d;
  fn3 (2, 5, v, i);
  fn3 (4, 0, 0, p);
  if (v < 1)
  {
    return t;
  }
  a = b;
  return 0;
}

int fn5 ()
{ 
  for (; i < 2; i++)
  {
    fn4 ();
  }
  if (!a.f0)
  {
    return u;
  }
  k = r[2000];
  return 0;
}

int main ()
{ 
  fn5 ();
  return 0;
}