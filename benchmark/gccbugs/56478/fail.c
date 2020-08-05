/* gcc-trunk -O2+ */
int a;
void fn1 ()
{
    int b;
    b = 0;
    for (;; b++)
    {
        a = 0 < -9223372036854775807LL - 1 - b ? : 0;
    }
}