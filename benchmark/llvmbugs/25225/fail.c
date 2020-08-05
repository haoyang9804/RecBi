int a = -1, *b = &a, f, l;
static short c, d, *e = &d;
static char g;

void fn1 () { }

void fn2 () { }

void fn3 () { }

void fn4 () { }

void fn5 () { }

void fn6 () { }

void fn7 () { }

void fn8 () { }

void fn9 () { }

void fn10 () { }

void fn11 () { }

void fn12 () { }

void fn13 () { }

void fn14 () { }

void fn15 () { }

void fn16 () { }

void fn17 () { }

void fn18 () { }

void fn19 () { }

void fn20 () { }

int fn21 (int p1) { return p1; }

void fn22 () { }

void fn23 () { }

void fn24 () { }

void fn25 () { }

void fn26 () { }

void fn27 () { }

void fn28 () { }

void fn29 () { }

void fn30 () { }

void fn31 () { }

void fn32 () { }

void fn33 () { }

void fn34 () { }

void fn35 () { }

void fn36 () { }

void fn37 () { }

void fn38 () { }

static int
fn39 ()
{
  if (d)
    {
      int h;
    }
  return 0;
}

static int
fn40 ()
{
  short *i = &c;
  *i = *e = 1;
  if (a < 0)
    __builtin_abort (); 
  return 0;
}

static int *fn41 (short);

void fn42 () { }

static int
fn43 ()
{
  char *j = &g;
  *j = 1;
  return 0;
}

static int 
fn44 ()
{
  if (f)
    fn41 (0);
  l = 0;
  return 0;
}

void fn45 () { }

static int
fn46 ()
{
  fn41 (a);
  fn40 ();
  fn39 ();
  fn21 (g);
  return 0;
}

static int *
fn41 (short p1)
{
  fn44 ();
  fn43 ();
  *b = p1 < 0;
  return 0;
}

void fn47 () { }

int
main ()
{
  if (c)
    fn35 ();
  fn46 ();
  return 0;
}
