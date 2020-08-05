typedef struct {
int __cnt;
unsigned char	*__ptr;
unsigned char	*__base;
unsigned short __flag;
unsigned char __fileL;
unsigned char __fileH;
} FILE;
typedef struct {
int __cnt;
unsigned char	*__ptr;
unsigned char	*__base;
unsigned short __flag;
unsigned char __fileL;
unsigned char __fileH;
unsigned char	*__bufendp;
unsigned char __smbuf[8 ];
} _FILEX;
typedef unsigned int size_t;
typedef long int fpos_t;
typedef double *__va_list;
extern FILE __iob[];
extern int remove(const char *);
extern int rename(const char *, const char *);
extern FILE *tmpfile(void);
extern char *tmpnam(char *);
extern int fclose(FILE *);
extern int fflush(FILE *);
extern FILE *fopen(const char *, const char *);
extern FILE *freopen(const char *, const char *, FILE *);
extern void setbuf(FILE *, char *);
extern int setvbuf(FILE *, char *, int, size_t);
extern int fprintf(FILE *, const char *, ...);
extern int fscanf(FILE *, const char *,...);
extern int printf(const char *,...);
extern int scanf(const char *,...);
extern int sprintf(char *, const char *,...);
extern int sscanf(const char *, const char *,...);
extern int vprintf(const char *, __va_list);
extern int vfprintf(FILE *, const char *, __va_list);
extern int vsprintf(char *, const char *, __va_list);
extern int fgetc(FILE *);
extern char *fgets(char *, int, FILE *);
extern int fputc(int, FILE *);
extern int fputs(const char *, FILE *);
extern int getc(FILE *);
extern int getchar(void);
extern char *gets(char *);
extern int putc(int, FILE *);
extern int putchar(int);
extern int puts(const char *);
extern int ungetc(int, FILE *);
extern int fgetpos(FILE *, fpos_t *);
extern int fseek(FILE *, long int, int);
extern int fsetpos(FILE *, const fpos_t *);
extern long int ftell(FILE *);
extern void rewind(FILE *);
extern void clearerr(FILE *);
extern int feof(FILE *);
extern int ferror(FILE *);
extern void perror(const char *);
extern size_t fread(void *, size_t, size_t, FILE *);
extern size_t fwrite(const void *, size_t, size_t, FILE *);
extern int __flsbuf(unsigned char, FILE *);
extern int __filbuf(FILE *);
extern int fileno(FILE *);
extern FILE *fdopen(int, const char *);
extern int getw(FILE *);
extern int putw(int, FILE *);
extern int pclose(FILE *);
extern FILE *popen(const char *, const char *);
extern char *tempnam(const char *, const char *);
extern char *ctermid(char *);
extern char *cuserid(char *);
extern int nl_fprintf(FILE *, const char * ,...);
extern int nl_fscanf(FILE *, const char * ,...);
extern int nl_printf(const char * ,...);
extern int nl_scanf(const char * ,...);
extern int nl_sprintf(char *, const char * ,...);
extern int nl_sscanf(const char *, const char * ,...);
extern unsigned char *__bufendtab[];
typedef double glueratio;
typedef	char schar;
typedef long integer;
typedef char boolean;
typedef double real;
extern int memcmp(const void *, const void *, size_t);
extern char *strncat(char *, const char *, size_t);
extern int strncmp(const char *, const char *, size_t);
extern void *memmove(void *, const void *, size_t);
extern char *strcpy(char *, const char *);
extern char *strncpy(char *, const char *, size_t);
extern char *strcat(char *, const char *);
extern int strcmp(const char *, const char *);
extern int strcoll(const char *, const char *);
extern size_t strxfrm(char *, const char *, size_t);
extern char *strchr(const char *, int);
extern char *strpbrk(const char *, const char *);
extern char *strrchr(const char *, int);
extern char *strstr(const char *, const char *);
extern char *strtok(char *, const char *);
extern char *strerror(int);
extern void *memcpy(void *, const void *, size_t);
extern void *memchr(const void *, int, size_t);
extern void *memset(void *, int, size_t);
extern size_t strcspn(const char *, const char *);
extern size_t strspn(const char *, const char *);
extern size_t strlen(const char *);
extern void *memccpy(void *, const void *, int, size_t);
extern char *strrstr(const char *, const char *);
extern int strcasecmp(const char *, const char *);
extern int strncasecmp(const char *, const char *, size_t);
extern char *strdup(const char *);
extern int nl_strcmp(const char *, const char *);
extern int nl_strncmp(const char *, const char *, size_t);
extern char *getenv (), *strrchr ();
typedef FILE *text, *file_ptr;
typedef char *ccharpointer;
extern integer argc;
extern void argv ();
extern FILE *checked_fopen ();
extern boolean eoln ();
extern void fprintreal ();
extern integer inputint();
extern void fprintreal ();
extern char *xmalloc (), *xrealloc ();
extern integer zround ();
typedef unsigned char ASCIIcode ;
typedef file_ptr textfile ;
typedef unsigned char eightbits ;
typedef unsigned short sixteenbits ;
typedef integer namepointer ;
typedef integer textpointer ;
typedef struct {
sixteenbits endfield ;
sixteenbits bytefield ;
namepointer namefield ;
textpointer replfield ;
short modfield ;
} outputstate ;
schar history ;
ASCIIcode xord[256] ;
ASCIIcode xchr[256] ;
textfile webfile ;
textfile changefile ;
textfile Pascalfile ;
textfile pool ;
ASCIIcode buffer[100 + 1] ;
boolean phaseone ;
ASCIIcode bytemem[3][45000L + 1] ;
eightbits tokmem[4][50000L + 1] ;
sixteenbits bytestart[4000 + 1] ;
sixteenbits tokstart[2000 + 1] ;
sixteenbits link_array [4000 + 1] ;
sixteenbits ilk[4000 + 1] ;
sixteenbits equiv[4000 + 1] ;
sixteenbits textlink[2000 + 1] ;
namepointer nameptr ;
namepointer stringptr ;
integer byteptr[3] ;
integer poolchecksum ;
textpointer textptr ;
integer tokptr[4] ;
schar z ;
integer idfirst ;
integer idloc ;
integer doublechars ;
sixteenbits hash[353 + 1], chophash[353 + 1] ;
ASCIIcode choppedid[20 + 1] ;
ASCIIcode modtext[400 + 1] ;
textpointer lastunnamed ;
outputstate curstate ;
outputstate stack[100 + 1] ;
integer stackptr ;
schar zo ;
eightbits bracelevel ;
integer curval ;
ASCIIcode outbuf[144 + 1] ;
integer outptr ;
integer breakptr ;
integer semiptr ;
eightbits outstate ;
integer outval, outapp ;
ASCIIcode outsign ;
schar lastsign ;
ASCIIcode outcontrib[72 + 1] ;
integer ii ;
integer line ;
integer otherline ;
integer templine ;
integer limit ;
integer loc ;
boolean inputhasended ;
boolean changing ;
ASCIIcode changebuffer[100 + 1] ;
integer changelimit ;
namepointer curmodule ;
boolean scanninghex ;
eightbits nextcontrol ;
textpointer currepltext ;
short modulecount ;
char webfilename[512 + 1], changefilename[512 + 1],
pascalfilename[512 + 1], poolfilename[512 + 1] ;
void error();
void scanargs();
void initialize();
void openinput();
boolean zinputln();
void zprintid();
namepointer zidlookup();
namepointer zmodlookup();
namepointer zprefixlookup();
void zstoretwobytes();
void zpushlevel();
void poplevel();
sixteenbits getoutput();
void flushbuffer();
void zappval();
void zsendout();
void zsendsign();
void zsendval();
void sendtheoutput();
boolean linesdontmatch();
void primethechangebuffer();
void checkchange();
void getline();
eightbits zcontrolcode();
eightbits skipahead();
void skipcomment();
eightbits getnext();
void zscannumeric();
void zscanrepl();
void zdefinemacro();
void scanmodule();
void error ( )
{integer j ;
integer k, l ;
if ( phaseone )
{
if ( changing )
(void) (void) fputs ( ". (change file " , (&__iob[1]) ) ;
else
(void) (void) fputs ( ". (" , (&__iob[1]) ) ;
(void) fprintf( (&__iob[1]) , "%s%ld%c\n", "l." , (long)line , ')' ) ;
if ( loc >= limit )
l = limit ;
else l = loc ;
{register integer for_end; k = 1 ; for_end = l ; if ( k <= for_end) do
if ( buffer [ k - 1 ] == 9 )
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ( ' ' ), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ( ' ' ))) ;
else
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ( xchr [ buffer [ k - 1 ] ] ), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ( xchr [ buffer [ k - 1 ] ] ))) ;
while ( k++ < for_end ) ; }
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
{register integer for_end; k = 1 ; for_end = l ; if ( k <= for_end) do
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ( ' ' ), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ( ' ' ))) ;
while ( k++ < for_end ) ; }
{register integer for_end; k = l + 1 ; for_end = limit ; if ( k <=
for_end) do
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ( xchr [ buffer [ k - 1 ] ] ), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ( xchr [ buffer [ k - 1 ] ] ))) ;
while ( k++ < for_end ) ; }
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ( ' ' ), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ( ' ' ))) ;
}
else {
(void) fprintf( (&__iob[1]) , "%s%ld%c\n", ". (l." , (long)line , ')' ) ;
{register integer for_end; j = 1 ; for_end = outptr ; if ( j <= for_end)
do
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ( xchr [ outbuf [ j - 1 ] ] ), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ( xchr [ outbuf [ j - 1 ] ] ))) ;
while ( j++ < for_end ) ; }
(void) (void) fputs ( "... " , (&__iob[1]) ) ;
}
(void) fflush ( (&__iob[1]) ) ;
history = 2 ;
}
void scanargs ( )
{integer dotpos, slashpos, i, a ;
char c ;
char fname[512 + 1] ;
boolean foundweb, foundchange ;
foundweb = 0 ;
foundchange = 0 ;
{register integer for_end; a = 1 ; for_end = argc - 1 ; if ( a <= for_end)
do
{
argv ( a , fname ) ;
if ( fname [ 1 ] != '-' )
{
if ( ! foundweb )
{
dotpos = -1 ;
slashpos = -1 ;
i = 1 ;
while ( ( fname [ i ] != ' ' ) && ( i <= 512 - 5 ) ) {
webfilename [ i ] = fname [ i ] ;
if ( fname [ i ] == '.' )
dotpos = i ;
if ( fname [ i ] == '/' )
slashpos = i ;
i = i + 1 ;
}
webfilename [ i ] = ' ' ;
if ( ( dotpos == -1 ) || ( dotpos < slashpos ) )
{
dotpos = i ;
webfilename [ dotpos ] = '.' ;
webfilename [ dotpos + 1 ] = 'w' ;
webfilename [ dotpos + 2 ] = 'e' ;
webfilename [ dotpos + 3 ] = 'b' ;
webfilename [ dotpos + 4 ] = ' ' ;
}
{register integer for_end; i = 1 ; for_end = dotpos ; if ( i <=
for_end) do
{
c = webfilename [ i ] ;
pascalfilename [ i ] = c ;
poolfilename [ i ] = c ;
}
while ( i++ < for_end ) ; }
pascalfilename [ dotpos + 1 ] = 'p' ;
pascalfilename [ dotpos + 2 ] = ' ' ;
poolfilename [ dotpos + 1 ] = 'p' ;
poolfilename [ dotpos + 2 ] = 'o' ;
poolfilename [ dotpos + 3 ] = 'o' ;
poolfilename [ dotpos + 4 ] = 'l' ;
poolfilename [ dotpos + 5 ] = ' ' ;
foundweb = 1 ;
}
else if ( ! foundchange )
{
dotpos = -1 ;
slashpos = -1 ;
i = 1 ;
while ( ( fname [ i ] != ' ' ) && ( i <= 512 - 5 ) ) {
changefilename [ i ] = fname [ i ] ;
if ( fname [ i ] == '.' )
dotpos = i ;
if ( fname [ i ] == '/' )
slashpos = i ;
i = i + 1 ;
}
changefilename [ i ] = ' ' ;
if ( ( dotpos == -1 ) || ( dotpos < slashpos ) )
{
dotpos = i ;
changefilename [ dotpos ] = '.' ;
changefilename [ dotpos + 1 ] = 'c' ;
changefilename [ dotpos + 2 ] = 'h' ;
changefilename [ dotpos + 3 ] = ' ' ;
}
foundchange = 1 ;
}
else {
(void) fprintf( (&__iob[1]) , "%s\n", "Usage: tangle webfile[.web] [changefile[.ch]]." ) ;
exit ( 1 ) ;
}
}
else {
{
(void) fprintf( (&__iob[1]) , "%s\n", "Usage: tangle webfile[.web] [changefile[.ch]]." ) ;
exit ( 1 ) ;
}
}
}
while ( a++ < for_end ) ; }
if ( ! foundweb )
{
(void) fprintf( (&__iob[1]) , "%s\n", "Usage: tangle webfile[.web] [changefile[.ch]]." ) ;
exit ( 1 ) ;
}
if ( ! foundchange )
{
changefilename [ 1 ] = '/' ;
changefilename [ 2 ] = 'd' ;
changefilename [ 3 ] = 'e' ;
changefilename [ 4 ] = 'v' ;
changefilename [ 5 ] = '/' ;
changefilename [ 6 ] = 'n' ;
changefilename [ 7 ] = 'u' ;
changefilename [ 8 ] = 'l' ;
changefilename [ 9 ] = 'l' ;
changefilename [ 10 ] = ' ' ;
}
}
void initialize ( )
{unsigned char i ;
schar wi ;
schar zi ;
integer h ;
history = 0 ;
xchr [ 32 ] = ' ' ;
xchr [ 33 ] = '!' ;
xchr [ 34 ] = '"' ;
xchr [ 35 ] = '#' ;
xchr [ 36 ] = '$' ;
xchr [ 37 ] = '%' ;
xchr [ 38 ] = '&' ;
xchr [ 39 ] = '\'' ;
xchr [ 40 ] = '(' ;
xchr [ 41 ] = ')' ;
xchr [ 42 ] = '*' ;
xchr [ 43 ] = '+' ;
xchr [ 44 ] = ',' ;
xchr [ 45 ] = '-' ;
xchr [ 46 ] = '.' ;
xchr [ 47 ] = '/' ;
xchr [ 48 ] = '0' ;
xchr [ 49 ] = '1' ;
xchr [ 50 ] = '2' ;
xchr [ 51 ] = '3' ;
xchr [ 52 ] = '4' ;
xchr [ 53 ] = '5' ;
xchr [ 54 ] = '6' ;
xchr [ 55 ] = '7' ;
xchr [ 56 ] = '8' ;
xchr [ 57 ] = '9' ;
xchr [ 58 ] = ':' ;
xchr [ 59 ] = ';' ;
xchr [ 60 ] = '<' ;
xchr [ 61 ] = '=' ;
xchr [ 62 ] = '>' ;
xchr [ 63 ] = '?' ;
xchr [ 64 ] = '@' ;
xchr [ 65 ] = 'A' ;
xchr [ 66 ] = 'B' ;
xchr [ 67 ] = 'C' ;
xchr [ 68 ] = 'D' ;
xchr [ 69 ] = 'E' ;
xchr [ 70 ] = 'F' ;
xchr [ 71 ] = 'G' ;
xchr [ 72 ] = 'H' ;
xchr [ 73 ] = 'I' ;
xchr [ 74 ] = 'J' ;
xchr [ 75 ] = 'K' ;
xchr [ 76 ] = 'L' ;
xchr [ 77 ] = 'M' ;
xchr [ 78 ] = 'N' ;
xchr [ 79 ] = 'O' ;
xchr [ 80 ] = 'P' ;
xchr [ 81 ] = 'Q' ;
xchr [ 82 ] = 'R' ;
xchr [ 83 ] = 'S' ;
xchr [ 84 ] = 'T' ;
xchr [ 85 ] = 'U' ;
xchr [ 86 ] = 'V' ;
xchr [ 87 ] = 'W' ;
xchr [ 88 ] = 'X' ;
xchr [ 89 ] = 'Y' ;
xchr [ 90 ] = 'Z' ;
xchr [ 91 ] = '[' ;
xchr [ 92 ] = '\\' ;
xchr [ 93 ] = ']' ;
xchr [ 94 ] = '^' ;
xchr [ 95 ] = '_' ;
xchr [ 96 ] = '`' ;
xchr [ 97 ] = 'a' ;
xchr [ 98 ] = 'b' ;
xchr [ 99 ] = 'c' ;
xchr [ 100 ] = 'd' ;
xchr [ 101 ] = 'e' ;
xchr [ 102 ] = 'f' ;
xchr [ 103 ] = 'g' ;
xchr [ 104 ] = 'h' ;
xchr [ 105 ] = 'i' ;
xchr [ 106 ] = 'j' ;
xchr [ 107 ] = 'k' ;
xchr [ 108 ] = 'l' ;
xchr [ 109 ] = 'm' ;
xchr [ 110 ] = 'n' ;
xchr [ 111 ] = 'o' ;
xchr [ 112 ] = 'p' ;
xchr [ 113 ] = 'q' ;
xchr [ 114 ] = 'r' ;
xchr [ 115 ] = 's' ;
xchr [ 116 ] = 't' ;
xchr [ 117 ] = 'u' ;
xchr [ 118 ] = 'v' ;
xchr [ 119 ] = 'w' ;
xchr [ 120 ] = 'x' ;
xchr [ 121 ] = 'y' ;
xchr [ 122 ] = 'z' ;
xchr [ 123 ] = '{' ;
xchr [ 124 ] = '|' ;
xchr [ 125 ] = '}' ;
xchr [ 126 ] = '~' ;
xchr [ 0 ] = ' ' ;
xchr [ 127 ] = ' ' ;
{register integer for_end; i = 1 ; for_end = 31 ; if ( i <= for_end) do
xchr [ i ] = ( i ) ;
while ( i++ < for_end ) ; }
{register integer for_end; i = 128 ; for_end = 255 ; if ( i <= for_end) do
xchr [ i ] = ( i ) ;
while ( i++ < for_end ) ; }
{register integer for_end; i = 0 ; for_end = 255 ; if ( i <= for_end) do
xord [ ( i ) ] = 32 ;
while ( i++ < for_end ) ; }
{register integer for_end; i = 1 ; for_end = 255 ; if ( i <= for_end) do
xord [ xchr [ i ] ] = i ;
while ( i++ < for_end ) ; }
xord [ ' ' ] = 32 ;
scanargs () ;
( Pascalfile ) = checked_fopen ((char *) ( pascalfilename ), "w") ;
{register integer for_end; wi = 0 ; for_end = 2 ; if ( wi <= for_end) do
{
bytestart [ wi ] = 0 ;
byteptr [ wi ] = 0 ;
}
while ( wi++ < for_end ) ; }
bytestart [ 3 ] = 0 ;
nameptr = 1 ;
stringptr = 256 ;
poolchecksum = 271828L ;
{register integer for_end; zi = 0 ; for_end = 3 ; if ( zi <= for_end) do
{
tokstart [ zi ] = 0 ;
tokptr [ zi ] = 0 ;
}
while ( zi++ < for_end ) ; }
tokstart [ 4 ] = 0 ;
textptr = 1 ;
z = 1 % 4 ;
ilk [ 0 ] = 0 ;
equiv [ 0 ] = 0 ;
{register integer for_end; h = 0 ; for_end = 353 - 1 ; if ( h <=
for_end) do
{
hash [ h ] = 0 ;
chophash [ h ] = 0 ;
}
while ( h++ < for_end ) ; }
lastunnamed = 0 ;
textlink [ 0 ] = 0 ;
scanninghex = 0 ;
modtext [ 0 ] = 32 ;
}
void openinput ( )
{(( webfile ) ? fclose ( webfile ) : 0), ( webfile ) = checked_fopen ((char *) ( webfilename ), "r") ;
(( changefile ) ? fclose ( changefile ) : 0), ( changefile ) = checked_fopen ((char *) ( changefilename ), "r") ;
}
boolean zinputln ( f )
textfile f ;
{register boolean Result; integer finallimit ;
limit = 0 ;
finallimit = 0 ;
if ( test_eof ( f ) )
Result = 0 ;
else {
while ( ! eoln ( f ) ) {
buffer [ limit ] = xord [ (--( f )->__cnt < 0 ? __filbuf( f ) : (int) *( f )->__ptr++) ] ;
limit = limit + 1 ;
if ( buffer [ limit - 1 ] != 32 )
finallimit = limit ;
if ( limit == 100 )
{
while ( ! eoln ( f ) ) (void) (--( f )->__cnt < 0 ? __filbuf( f ) : (int) *( f )->__ptr++) ;
limit = limit - 1 ;
if ( finallimit > limit )
finallimit = limit ;
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) (void) fputs ( "! Input line too long" , (&__iob[1]) ) ;
}
loc = 0 ;
error () ;
}
}
{ register c; while ((c = (--( f )->__cnt < 0 ? __filbuf( f ) : (int) *( f )->__ptr++) ) != '\n' && c != (-1) ); } ;
limit = finallimit ;
Result = 1 ;
}
return(Result) ;
}
void zprintid ( p )
namepointer p ;
{integer k ;
schar w ;
if ( p >= nameptr )
(void) (void) fputs ( "IMPOSSIBLE" , (&__iob[1]) ) ;
else {
w = p % 3 ;
{register integer for_end; k = bytestart [ p ] ; for_end = bytestart [ p
+ 3 ] - 1 ; if ( k <= for_end) do
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ( xchr [ bytemem [ w ][ k ] ] ), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ( xchr [ bytemem [ w ][ k ] ] ))) ;
while ( k++ < for_end ) ; }
}
}
namepointer zidlookup ( t )
eightbits t ;
{ register namepointer Result; eightbits c ;
integer i ;
integer h ;
integer k ;
schar w ;
integer l ;
namepointer p, q ;
integer s ;
l = idloc - idfirst ;
h = buffer [ idfirst ] ;
i = idfirst + 1 ;
while ( i < idloc ) {
h = ( h + h + buffer [ i ] ) % 353 ;
i = i + 1 ;
}
p = hash [ h ] ;
while ( p != 0 ) {
if ( bytestart [ p + 3 ] - bytestart [ p ] == l )
{
i = idfirst ;
k = bytestart [ p ] ;
w = p % 3 ;
while ( ( i < idloc ) && ( buffer [ i ] == bytemem [ w ][ k ] ) ) {
i = i + 1 ;
k = k + 1 ;
}
if ( i == idloc )
goto lab31 ;
}
p = link_array [ p ] ;
}
p = nameptr ;
link_array [ p ] = hash [ h ] ;
hash [ h ] = p ;
lab31: ;
if ( ( p == nameptr ) || ( t != 0 ) )
{
if ( ( ( p != nameptr ) && ( t != 0 ) && ( ilk [ p ] == 0 ) ) || ( ( p ==
nameptr ) && ( t == 0 ) && ( buffer [ idfirst ] != 34 ) ) )
{
i = idfirst ;
s = 0 ;
h = 0 ;
while ( ( i < idloc ) && ( s < 20 ) ) {
if ( buffer [ i ] != 95 )
{
if ( buffer [ i ] >= 97 )
choppedid [ s ] = buffer [ i ] - 32 ;
else choppedid [ s ] = buffer [ i ] ;
h = ( h + h + choppedid [ s ] ) % 353 ;
s = s + 1 ;
}
i = i + 1 ;
}
choppedid [ s ] = 0 ;
}
if ( p != nameptr )
{
if ( ilk [ p ] == 0 )
{
if ( t == 1 )
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) (void) fputs ( "! This identifier has already appeared" , (&__iob[1]) ) ;
error () ;
}
q = chophash [ h ] ;
if ( q == p )
chophash [ h ] = equiv [ p ] ;
else {
while ( equiv [ q ] != p ) q = equiv [ q ] ;
equiv [ q ] = equiv [ p ] ;
}
}
else {
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) (void) fputs ( "! This identifier was defined before" , (&__iob[1]) ) ;
error () ;
}
ilk [ p ] = t ;
}
else {
if ( ( t == 0 ) && ( buffer [ idfirst ] != 34 ) )
{
q = chophash [ h ] ;
while ( q != 0 ) {
{
k = bytestart [ q ] ;
s = 0 ;
w = q % 3 ;
while ( ( k < bytestart [ q + 3 ] ) && ( s < 20 ) ) {
c = bytemem [ w ][ k ] ;
if ( c != 95 )
{
if ( choppedid [ s ] != c )
goto lab32 ;
s = s + 1 ;
}
k = k + 1 ;
}
if ( ( k == bytestart [ q + 3 ] ) && ( choppedid [ s ] != 0 ) )
goto lab32 ;
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) (void) fputs ( "! Identifier conflict with " , (&__iob[1]) ) ;
}
{register integer for_end; k = bytestart [ q ] ; for_end =
bytestart [ q + 3 ] - 1 ; if ( k <= for_end) do
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ( xchr [ bytemem [ w ][ k ] ] ), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ( xchr [ bytemem [ w ][ k ] ] ))) ;
while ( k++ < for_end ) ; }
error () ;
q = 0 ;
lab32: ;
}
q = equiv [ q ] ;
}
equiv [ p ] = chophash [ h ] ;
chophash [ h ] = p ;
}
w = nameptr % 3 ;
k = byteptr [ w ] ;
if ( k + l > 45000L )
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) fprintf( (&__iob[1]) , "%s%s%s", "! Sorry, " , "byte memory" , " capacity exceeded" )
;
error () ;
history = 3 ;
exit ( 1 ) ;
}
if ( nameptr > 4000 - 3 )
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) fprintf( (&__iob[1]) , "%s%s%s", "! Sorry, " , "name" , " capacity exceeded" ) ;
error () ;
history = 3 ;
exit ( 1 ) ;
}
i = idfirst ;
while ( i < idloc ) {
bytemem [ w ][ k ] = buffer [ i ] ;
k = k + 1 ;
i = i + 1 ;
}
byteptr [ w ] = k ;
bytestart [ nameptr + 3 ] = k ;
nameptr = nameptr + 1 ;
if ( buffer [ idfirst ] != 34 )
ilk [ p ] = t ;
else {
ilk [ p ] = 1 ;
if ( l - doublechars == 2 )
equiv [ p ] = buffer [ idfirst + 1 ] + 32768L ;
else {
if ( stringptr == 256 )
( pool ) = checked_fopen ((char *) ( poolfilename ), "w") ;
equiv [ p ] = stringptr + 32768L ;
l = l - doublechars - 1 ;
if ( l > 99 )
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) (void) fputs ( "! Preprocessed string is too long" , (&__iob[1]) ) ;
error () ;
}
stringptr = stringptr + 1 ;
(void) fprintf( pool , "%c%c", xchr [ 48 + l / 10 ] , xchr [ 48 + l % 10 ] ) ;
poolchecksum = poolchecksum + poolchecksum + l ;
while ( poolchecksum > 536870839L ) poolchecksum = poolchecksum -
536870839L ;
i = idfirst + 1 ;
while ( i < idloc ) {
(void) (--( pool )->__cnt < 0 ? __flsbuf((unsigned char) ( xchr [ buffer [ i ] ] ), ( pool )) : (int) (*( pool )->__ptr++ = (unsigned char) ( xchr [ buffer [ i ] ] ))) ;
poolchecksum = poolchecksum + poolchecksum + buffer [ i ] ;
while ( poolchecksum > 536870839L ) poolchecksum = poolchecksum -
536870839L ;
if ( ( buffer [ i ] == 34 ) || ( buffer [ i ] == 64 ) )
i = i + 2 ;
else i = i + 1 ;
}
(void) (--( pool )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( pool )) : (int) (*( pool )->__ptr++ = (unsigned char) ('\n'))) ;
}
}
}
}
Result = p ;
return(Result) ;
}
namepointer zmodlookup ( l )
sixteenbits l ;
{ register namepointer Result; schar c ;
integer j ;
integer k ;
schar w ;
namepointer p ;
namepointer q ;
c = 2 ;
q = 0 ;
p = ilk [ 0 ] ;
while ( p != 0 ) {
{
k = bytestart [ p ] ;
w = p % 3 ;
c = 1 ;
j = 1 ;
while ( ( k < bytestart [ p + 3 ] ) && ( j <= l ) && ( modtext [ j ] ==
bytemem [ w ][ k ] ) ) {
k = k + 1 ;
j = j + 1 ;
}
if ( k == bytestart [ p + 3 ] )
if ( j > l )
c = 1 ;
else c = 4 ;
else if ( j > l )
c = 3 ;
else if ( modtext [ j ] < bytemem [ w ][ k ] )
c = 0 ;
else c = 2 ;
}
q = p ;
if ( c == 0 )
p = link_array [ q ] ;
else if ( c == 2 )
p = ilk [ q ] ;
else goto lab31 ;
}
w = nameptr % 3 ;
k = byteptr [ w ] ;
if ( k + l > 45000L )
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) fprintf( (&__iob[1]) , "%s%s%s", "! Sorry, " , "byte memory" , " capacity exceeded" ) ;
error () ;
history = 3 ;
exit ( 1 ) ;
}
if ( nameptr > 4000 - 3 )
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) fprintf( (&__iob[1]) , "%s%s%s", "! Sorry, " , "name" , " capacity exceeded" ) ;
error () ;
history = 3 ;
exit ( 1 ) ;
}
p = nameptr ;
if ( c == 0 )
link_array [ q ] = p ;
else ilk [ q ] = p ;
link_array [ p ] = 0 ;
ilk [ p ] = 0 ;
c = 1 ;
equiv [ p ] = 0 ;
{register integer for_end; j = 1 ; for_end = l ; if ( j <= for_end) do
bytemem [ w ][ k + j - 1 ] = modtext [ j ] ;
while ( j++ < for_end ) ; }
byteptr [ w ] = k + l ;
bytestart [ nameptr + 3 ] = k + l ;
nameptr = nameptr + 1 ;
lab31: if ( c != 1 )
{
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) (void) fputs ( "! Incompatible section names" , (&__iob[1]) ) ;
error () ;
}
p = 0 ;
}
Result = p ;
return(Result) ;
}
namepointer zprefixlookup ( l )
sixteenbits l ;
{register namepointer Result; schar c ;
integer count ;
integer j ;
integer k ;
schar w ;
namepointer p ;
namepointer q ;
namepointer r ;
q = 0 ;
p = ilk [ 0 ] ;
count = 0 ;
r = 0 ;
while ( p != 0 ) {
{
k = bytestart [ p ] ;
w = p % 3 ;
c = 1 ;
j = 1 ;
while ( ( k < bytestart [ p + 3 ] ) && ( j <= l ) && ( modtext [ j ] ==
bytemem [ w ][ k ] ) ) {
k = k + 1 ;
j = j + 1 ;
}
if ( k == bytestart [ p + 3 ] )
if ( j > l )
c = 1 ;
else c = 4 ;
else if ( j > l )
c = 3 ;
else if ( modtext [ j ] < bytemem [ w ][ k ] )
c = 0 ;
else c = 2 ;
}
if ( c == 0 )
p = link_array [ p ] ;
else if ( c == 2 )
p = ilk [ p ] ;
else {
r = p ;
count = count + 1 ;
q = ilk [ p ] ;
p = link_array [ p ] ;
}
if ( p == 0 )
{
p = q ;
q = 0 ;
}
}
if ( count != 1 )
if ( count == 0 )
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) (void) fputs ( "! Name does not match" , (&__iob[1]) ) ;
error () ;
}
else {
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) (void) fputs ( "! Ambiguous prefix" , (&__iob[1]) ) ;
error () ;
}
Result = r ;
return(Result) ;
}
void zstoretwobytes ( x )
sixteenbits x ;
{if ( tokptr [ z ] + 2 > 50000L )
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) fprintf( (&__iob[1]) , "%s%s%s", "! Sorry, " , "token" , " capacity exceeded" ) ;
error () ;
history = 3 ;
exit ( 1 ) ;
}
tokmem [ z ][ tokptr [ z ] ] = x / 256 ;
tokmem [ z ][ tokptr [ z ] + 1 ] = x % 256 ;
tokptr [ z ] = tokptr [ z ] + 2 ;
}
void zpushlevel ( p )
namepointer p ;
{if ( stackptr == 100 )
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) fprintf( (&__iob[1]) , "%s%s%s", "! Sorry, " , "stack" , " capacity exceeded" ) ;
error () ;
history = 3 ;
exit ( 1 ) ;
}
else {
stack [ stackptr ] = curstate ;
stackptr = stackptr + 1 ;
curstate .namefield = p ;
curstate .replfield = equiv [ p ] ;
zo = curstate .replfield % 4 ;
curstate .bytefield = tokstart [ curstate .replfield ] ;
curstate .endfield = tokstart [ curstate .replfield + 4 ] ;
curstate .modfield = 0 ;
}
}
void poplevel ( )
{ if ( textlink [ curstate .replfield ] == 0 )
{
if ( ilk [ curstate .namefield ] == 3 )
{
nameptr = nameptr - 1 ;
textptr = textptr - 1 ;
z = textptr % 4 ;
tokptr [ z ] = tokstart [ textptr ] ;
}
}
else if ( textlink [ curstate .replfield ] < 2000 )
{
curstate .replfield = textlink [ curstate .replfield ] ;
zo = curstate .replfield % 4 ;
curstate .bytefield = tokstart [ curstate .replfield ] ;
curstate .endfield = tokstart [ curstate .replfield + 4 ] ;
goto lab10 ;
}
stackptr = stackptr - 1 ;
if ( stackptr > 0 )
{
curstate = stack [ stackptr ] ;
zo = curstate .replfield % 4 ;
}
lab10: ;
}
sixteenbits getoutput ( )
{ register sixteenbits Result; sixteenbits a ;
eightbits b ;
sixteenbits bal ;
integer k ;
schar w ;
lab20: if ( stackptr == 0 )
{
a = 0 ;
goto lab31 ;
}
if ( curstate .bytefield == curstate .endfield )
{
curval = - (integer) curstate .modfield ;
poplevel () ;
if ( curval == 0 )
goto lab20 ;
a = 129 ;
goto lab31 ;
}
a = tokmem [ zo ][ curstate .bytefield ] ;
curstate .bytefield = curstate .bytefield + 1 ;
if ( a < 128 )
if ( a == 0 )
{
zpushlevel((namepointer) ( nameptr - 1 )) ;
goto lab20 ;
}
else goto lab31 ;
a = ( a - 128 ) * 256 + tokmem [ zo ][ curstate .bytefield ] ;
curstate .bytefield = curstate .bytefield + 1 ;
if ( a < 10240 )
{
switch ( ilk [ a ] )
{case 0 :
{
curval = a ;
a = 130 ;
}
break ;
case 1 :
{
curval = equiv [ a ] - 32768L ;
a = 128 ;
}
break ;
case 2 :
{
zpushlevel((namepointer) ( a )) ;
goto lab20 ;
}
break ;
case 3 :
{
while ( ( curstate .bytefield == curstate .endfield ) && ( stackptr >
0 ) ) poplevel () ;
if ( ( stackptr == 0 ) || ( tokmem [ zo ][ curstate .bytefield ] != 40
) )
{
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) (void) fputs ( "! No parameter given for " , (&__iob[1]) ) ;
}
zprintid((namepointer) ( a )) ;
error () ;
goto lab20 ;
}
bal = 1 ;
curstate .bytefield = curstate .bytefield + 1 ;
while ( 1 ) {
b = tokmem [ zo ][ curstate .bytefield ] ;
curstate .bytefield = curstate .bytefield + 1 ;
if ( b == 0 )
zstoretwobytes((sixteenbits) ( nameptr + 32767 )) ;
else {
if ( b >= 128 )
{
{
if ( tokptr [ z ] == 50000L )
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) fprintf( (&__iob[1]) , "%s%s%s", "! Sorry, " , "token" , " capacity exceeded" ) ;
error () ;
history = 3 ;
exit ( 1 ) ;
}
tokmem [ z ][ tokptr [ z ] ] = b ;
tokptr [ z ] = tokptr [ z ] + 1 ;
}
b = tokmem [ zo ][ curstate .bytefield ] ;
curstate .bytefield = curstate .bytefield + 1 ;
}
else switch ( b )
{case 40 :
bal = bal + 1 ;
break ;
case 41 :
{
bal = bal - 1 ;
if ( bal == 0 )
goto lab30 ;
}
break ;
case 39 :
do {
{
if ( tokptr [ z ] == 50000L )
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) fprintf( (&__iob[1]) , "%s%s%s", "! Sorry, " , "token" , " capacity exceeded" ) ;
error () ;
history = 3 ;
exit ( 1 ) ;
}
tokmem [ z ][ tokptr [ z ] ] = b ;
tokptr [ z ] = tokptr [ z ] + 1 ;
}
b = tokmem [ zo ][ curstate .bytefield ] ;
curstate .bytefield = curstate .bytefield + 1 ;
} while ( ! ( b == 39 ) ) ;
break ;
default:
;
break ;
}
{
if ( tokptr [ z ] == 50000L )
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) fprintf( (&__iob[1]) , "%s%s%s", "! Sorry, " , "token" , " capacity exceeded" ) ;
error () ;
history = 3 ;
exit ( 1 ) ;
}
tokmem [ z ][ tokptr [ z ] ] = b ;
tokptr [ z ] = tokptr [ z ] + 1 ;
}
}
}
lab30: ;
equiv [ nameptr ] = textptr ;
ilk [ nameptr ] = 2 ;
w = nameptr % 3 ;
k = byteptr [ w ] ;
if ( nameptr > 4000 - 3 )
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) fprintf( (&__iob[1]) , "%s%s%s", "! Sorry, " , "name" , " capacity exceeded" ) ;
error () ;
history = 3 ;
exit ( 1 ) ;
}
bytestart [ nameptr + 3 ] = k ;
nameptr = nameptr + 1 ;
if ( textptr > 2000 - 4 )
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) fprintf( (&__iob[1]) , "%s%s%s", "! Sorry, " , "text" , " capacity exceeded" ) ;
error () ;
history = 3 ;
exit ( 1 ) ;
}
textlink [ textptr ] = 0 ;
tokstart [ textptr + 4 ] = tokptr [ z ] ;
textptr = textptr + 1 ;
z = textptr % 4 ;
zpushlevel((namepointer) ( a )) ;
goto lab20 ;
}
break ;
default:
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) fprintf( (&__iob[1]) , "%s%s%c", "! This can't happen (" , "output" , ')' ) ;
error () ;
history = 3 ;
exit ( 1 ) ;
}
break ;
}
goto lab31 ;
}
if ( a < 20480 )
{
a = a - 10240 ;
if ( equiv [ a ] != 0 )
zpushlevel((namepointer) ( a )) ;
else if ( a != 0 )
{
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) (void) fputs ( "! Not present: <" , (&__iob[1]) ) ;
}
zprintid((namepointer) ( a )) ;
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ( '>' ), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ( '>' ))) ;
error () ;
}
goto lab20 ;
}
curval = a - 20480 ;
a = 129 ;
curstate .modfield = curval ;
lab31: Result = a ;
return(Result) ;
}
void flushbuffer ( )
{integer k ;
integer b ;
b = breakptr ;
if ( ( semiptr != 0 ) && ( outptr - semiptr <= 72 ) )
breakptr = semiptr ;
{register integer for_end; k = 1 ; for_end = breakptr ; if ( k <= for_end)
do
(void) (--( Pascalfile )->__cnt < 0 ? __flsbuf((unsigned char) ( xchr [ outbuf [ k - 1 ] ] ), ( Pascalfile )) : (int) (*( Pascalfile )->__ptr++ = (unsigned char) ( xchr [ outbuf [ k - 1 ] ] ))) ;
while ( k++ < for_end ) ; }
(void) (--( Pascalfile )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( Pascalfile )) : (int) (*( Pascalfile )->__ptr++ = (unsigned char) ('\n'))) ;
line = line + 1 ;
if ( line % 100 == 0 )
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ( '.' ), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ( '.' ))) ;
if ( line % 500 == 0 )
(void) fprintf( (&__iob[1]) , "%ld", (long)line ) ;
(void) fflush ( (&__iob[1]) ) ;
}
if ( breakptr < outptr )
{
if ( outbuf [ breakptr ] == 32 )
{
breakptr = breakptr + 1 ;
if ( breakptr > b )
b = breakptr ;
}
{register integer for_end; k = breakptr ; for_end = outptr - 1 ; if ( k
<= for_end) do
outbuf [ k - breakptr ] = outbuf [ k ] ;
while ( k++ < for_end ) ; }
}
outptr = outptr - breakptr ;
breakptr = b - breakptr ;
semiptr = 0 ;
if ( outptr > 72 )
{
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) (void) fputs ( "! Long line must be truncated" , (&__iob[1]) ) ;
error () ;
}
outptr = 72 ;
}
}
void zappval ( v )
integer v ;
{integer k ;
k = 144 ;
do {
outbuf [ k ] = v % 10 ;
v = v / 10 ;
k = k - 1 ;
} while ( ! ( v == 0 ) ) ;
do {
k = k + 1 ;
{
outbuf [ outptr ] = outbuf [ k ] + 48 ;
outptr = outptr + 1 ;
}
} while ( ! ( k == 144 ) ) ;
}
void zsendout ( t , v )
eightbits t ;
sixteenbits v ;
{ integer k ;
lab20: switch ( outstate )
{case 1 :
if ( t != 3 )
{
breakptr = outptr ;
if ( t == 2 )
{
outbuf [ outptr ] = 32 ;
outptr = outptr + 1 ;
}
}
break ;
case 2 :
{
{
outbuf [ outptr ] = 44 - outapp ;
outptr = outptr + 1 ;
}
if ( outptr > 72 )
flushbuffer () ;
breakptr = outptr ;
}
break ;
case 3 :
case 4 :
{
if ( ( outval < 0 ) || ( ( outval == 0 ) && ( lastsign < 0 ) ) )
{
outbuf [ outptr ] = 45 ;
outptr = outptr + 1 ;
}
else if ( outsign > 0 )
{
outbuf [ outptr ] = outsign ;
outptr = outptr + 1 ;
}
zappval((integer) ( ((integer) ( outval ) >= 0 ? (integer) ( outval ) : (integer) -( outval )) )) ;
if ( outptr > 72 )
flushbuffer () ;
outstate = outstate - 2 ;
goto lab20 ;
}
break ;
case 5 :
{
if ( ( t == 3 ) || ( ( ( t == 2 ) && ( v == 3 ) && ( ( ( outcontrib [ 1
] == 68 ) && ( outcontrib [ 2 ] == 73 ) && ( outcontrib [ 3 ] == 86 ) )
|| ( ( outcontrib [ 1 ] == 100 ) && ( outcontrib [ 2 ] == 105 ) && (
outcontrib [ 3 ] == 118 ) ) || ( ( outcontrib [ 1 ] == 77 ) && (
outcontrib [ 2 ] == 79 ) && ( outcontrib [ 3 ] == 68 ) ) || ( (
outcontrib [ 1 ] == 109 ) && ( outcontrib [ 2 ] == 111 ) && ( outcontrib
[ 3 ] == 100 ) ) ) ) || ( ( t == 0 ) && ( ( v == 42 ) || ( v == 47 ) ) )
) )
{
if ( ( outval < 0 ) || ( ( outval == 0 ) && ( lastsign < 0 ) ) )
{
outbuf [ outptr ] = 45 ;
outptr = outptr + 1 ;
}
else if ( outsign > 0 )
{
outbuf [ outptr ] = outsign ;
outptr = outptr + 1 ;
}
zappval((integer) ( ((integer) ( outval ) >= 0 ? (integer) ( outval ) : (integer) -( outval )) )) ;
if ( outptr > 72 )
flushbuffer () ;
outsign = 43 ;
outval = outapp ;
}
else outval = outval + outapp ;
outstate = 3 ;
goto lab20 ;
}
break ;
case 0 :
if ( t != 3 )
breakptr = outptr ;
break ;
default:
;
break ;
}
if ( t != 0 )
{register integer for_end; k = 1 ; for_end = v ; if ( k <= for_end) do
{
outbuf [ outptr ] = outcontrib [ k ] ;
outptr = outptr + 1 ;
}
while ( k++ < for_end ) ; }
else {
outbuf [ outptr ] = v ;
outptr = outptr + 1 ;
}
if ( outptr > 72 )
flushbuffer () ;
if ( ( t == 0 ) && ( ( v == 59 ) || ( v == 125 ) ) )
{
semiptr = outptr ;
breakptr = outptr ;
}
if ( t >= 2 )
outstate = 1 ;
else outstate = 0 ;
}
void zsendsign ( v )
integer v ;
{switch ( outstate )
{case 2 :
case 4 :
outapp = outapp * v ;
break ;
case 3 :
{
outapp = v ;
outstate = 4 ;
}
break ;
case 5 :
{
outval = outval + outapp ;
outapp = v ;
outstate = 4 ;
}
break ;
default:
{
breakptr = outptr ;
outapp = v ;
outstate = 2 ;
}
break ;
}
lastsign = outapp ;
}
void zsendval ( v )
integer v ;
{ switch ( outstate )
{case 1 :
{
if ( ( outptr == breakptr + 3 ) || ( ( outptr == breakptr + 4 ) && (
outbuf [ breakptr ] == 32 ) ) )
if ( ( ( outbuf [ outptr - 3 ] == 68 ) && ( outbuf [ outptr - 2 ] == 73
) && ( outbuf [ outptr - 1 ] == 86 ) ) || ( ( outbuf [ outptr - 3 ] ==
100 ) && ( outbuf [ outptr - 2 ] == 105 ) && ( outbuf [ outptr - 1 ] ==
118 ) ) || ( ( outbuf [ outptr - 3 ] == 77 ) && ( outbuf [ outptr - 2 ]
== 79 ) && ( outbuf [ outptr - 1 ] == 68 ) ) || ( ( outbuf [ outptr - 3
] == 109 ) && ( outbuf [ outptr - 2 ] == 111 ) && ( outbuf [ outptr - 1
] == 100 ) ) )
goto lab666 ;
outsign = 32 ;
outstate = 3 ;
outval = v ;
breakptr = outptr ;
lastsign = 1 ;
}
break ;
case 0 :
{
if ( ( outptr == breakptr + 1 ) && ( ( outbuf [ breakptr ] == 42 ) || (
outbuf [ breakptr ] == 47 ) ) )
goto lab666 ;
outsign = 0 ;
outstate = 3 ;
outval = v ;
breakptr = outptr ;
lastsign = 1 ;
}
break ;
case 2 :
{
outsign = 43 ;
outstate = 3 ;
outval = outapp * v ;
}
break ;
case 3 :
{
outstate = 5 ;
outapp = v ;
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) (void) fputs ( "! Two numbers occurred without a sign between them" , (&__iob[1]) ) ;
error () ;
}
}
break ;
case 4 :
{
outstate = 5 ;
outapp = outapp * v ;
}
break ;
case 5 :
{
outval = outval + outapp ;
outapp = v ;
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) (void) fputs ( "! Two numbers occurred without a sign between them" , (&__iob[1]) ) ;
error () ;
}
}
break ;
default:
goto lab666 ;
break ;
}
goto lab10 ;
lab666: if ( v >= 0 )
{
if ( outstate == 1 )
{
breakptr = outptr ;
{
outbuf [ outptr ] = 32 ;
outptr = outptr + 1 ;
}
}
zappval((integer) ( v )) ;
if ( outptr > 72 )
flushbuffer () ;
outstate = 1 ;
}
else {
{
outbuf [ outptr ] = 40 ;
outptr = outptr + 1 ;
}
{
outbuf [ outptr ] = 45 ;
outptr = outptr + 1 ;
}
zappval((integer) ( - (integer) v )) ;
{
outbuf [ outptr ] = 41 ;
outptr = outptr + 1 ;
}
if ( outptr > 72 )
flushbuffer () ;
outstate = 0 ;
}
lab10: ;
}
void sendtheoutput ( )
{ eightbits curchar ;
integer k ;
integer j ;
schar w ;
integer n ;
while ( stackptr > 0 ) {
curchar = getoutput () ;
lab21: switch ( curchar )
{case 0 :
;
break ;
case 65 :
case 66 :
case 67 :
case 68 :
case 69 :
case 70 :
case 71 :
case 72 :
case 73 :
case 74 :
case 75 :
case 76 :
case 77 :
case 78 :
case 79 :
case 80 :
case 81 :
case 82 :
case 83 :
case 84 :
case 85 :
case 86 :
case 87 :
case 88 :
case 89 :
case 90 :
case 97 :
case 98 :
case 99 :
case 100 :
case 101 :
case 102 :
case 103 :
case 104 :
case 105 :
case 106 :
case 107 :
case 108 :
case 109 :
case 110 :
case 111 :
case 112 :
case 113 :
case 114 :
case 115 :
case 116 :
case 117 :
case 118 :
case 119 :
case 120 :
case 121 :
case 122 :
{
outcontrib [ 1 ] = curchar ;
zsendout((eightbits) ( 2 ), (sixteenbits) ( 1 )) ;
}
break ;
case 130 :
{
k = 0 ;
j = bytestart [ curval ] ;
w = curval % 3 ;
while ( ( k < 50 ) && ( j < bytestart [ curval + 3 ] ) ) {
k = k + 1 ;
outcontrib [ k ] = bytemem [ w ][ j ] ;
j = j + 1 ;
if ( outcontrib [ k ] == 95 )
k = k - 1 ;
}
zsendout((eightbits) ( 2 ), (sixteenbits) ( k )) ;
}
break ;
case 48 :
case 49 :
case 50 :
case 51 :
case 52 :
case 53 :
case 54 :
case 55 :
case 56 :
case 57 :
{
n = 0 ;
do {
curchar = curchar - 48 ;
if ( n >= 214748364L )
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) (void) fputs ( "! Constant too big" , (&__iob[1]) ) ;
error () ;
}
else n = 10 * n + curchar ;
curchar = getoutput () ;
} while ( ! ( ( curchar > 57 ) || ( curchar < 48 ) ) ) ;
zsendval((integer) ( n )) ;
k = 0 ;
if ( curchar == 101 )
curchar = 69 ;
if ( curchar == 69 )
goto lab2 ;
else goto lab21 ;
}
break ;
case 125 :
zsendval((integer) ( poolchecksum )) ;
break ;
case 12 :
{
n = 0 ;
curchar = 48 ;
do {
curchar = curchar - 48 ;
if ( n >= 268435456L )
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) (void) fputs ( "! Constant too big" , (&__iob[1]) ) ;
error () ;
}
else n = 8 * n + curchar ;
curchar = getoutput () ;
} while ( ! ( ( curchar > 55 ) || ( curchar < 48 ) ) ) ;
zsendval((integer) ( n )) ;
goto lab21 ;
}
break ;
case 13 :
{
n = 0 ;
curchar = 48 ;
do {
if ( curchar >= 65 )
curchar = curchar - 55 ;
else curchar = curchar - 48 ;
if ( n >= 134217728L )
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) (void) fputs ( "! Constant too big" , (&__iob[1]) ) ;
error () ;
}
else n = 16 * n + curchar ;
curchar = getoutput () ;
} while ( ! ( ( curchar > 70 ) || ( curchar < 48 ) || ( ( curchar > 57
) && ( curchar < 65 ) ) ) ) ;
zsendval((integer) ( n )) ;
goto lab21 ;
}
break ;
case 128 :
zsendval((integer) ( curval )) ;
break ;
case 46 :
{
k = 1 ;
outcontrib [ 1 ] = 46 ;
curchar = getoutput () ;
if ( curchar == 46 )
{
outcontrib [ 2 ] = 46 ;
zsendout((eightbits) ( 1 ), (sixteenbits) ( 2 )) ;
}
else if ( ( curchar >= 48 ) && ( curchar <= 57 ) )
goto lab2 ;
else {
zsendout((eightbits) ( 0 ), (sixteenbits) ( 46 )) ;
goto lab21 ;
}
}
break ;
case 43 :
case 45 :
zsendsign((integer) ( 44 - curchar )) ;
break ;
case 4 :
{
outcontrib [ 1 ] = 97 ;
outcontrib [ 2 ] = 110 ;
outcontrib [ 3 ] = 100 ;
zsendout((eightbits) ( 2 ), (sixteenbits) ( 3 )) ;
}
break ;
case 5 :
{
outcontrib [ 1 ] = 110 ;
outcontrib [ 2 ] = 111 ;
outcontrib [ 3 ] = 116 ;
zsendout((eightbits) ( 2 ), (sixteenbits) ( 3 )) ;
}
break ;
case 6 :
{
outcontrib [ 1 ] = 105 ;
outcontrib [ 2 ] = 110 ;
zsendout((eightbits) ( 2 ), (sixteenbits) ( 2 )) ;
}
break ;
case 31 :
{
outcontrib [ 1 ] = 111 ;
outcontrib [ 2 ] = 114 ;
zsendout((eightbits) ( 2 ), (sixteenbits) ( 2 )) ;
}
break ;
case 24 :
{
outcontrib [ 1 ] = 58 ;
outcontrib [ 2 ] = 61 ;
zsendout((eightbits) ( 1 ), (sixteenbits) ( 2 )) ;
}
break ;
case 26 :
{
outcontrib [ 1 ] = 60 ;
outcontrib [ 2 ] = 62 ;
zsendout((eightbits) ( 1 ), (sixteenbits) ( 2 )) ;
}
break ;
case 28 :
{
outcontrib [ 1 ] = 60 ;
outcontrib [ 2 ] = 61 ;
zsendout((eightbits) ( 1 ), (sixteenbits) ( 2 )) ;
}
break ;
case 29 :
{
outcontrib [ 1 ] = 62 ;
outcontrib [ 2 ] = 61 ;
zsendout((eightbits) ( 1 ), (sixteenbits) ( 2 )) ;
}
break ;
case 30 :
{
outcontrib [ 1 ] = 61 ;
outcontrib [ 2 ] = 61 ;
zsendout((eightbits) ( 1 ), (sixteenbits) ( 2 )) ;
}
break ;
case 32 :
{
outcontrib [ 1 ] = 46 ;
outcontrib [ 2 ] = 46 ;
zsendout((eightbits) ( 1 ), (sixteenbits) ( 2 )) ;
}
break ;
case 39 :
{
k = 1 ;
outcontrib [ 1 ] = 39 ;
do {
if ( k < 72 )
k = k + 1 ;
outcontrib [ k ] = getoutput () ;
} while ( ! ( ( outcontrib [ k ] == 39 ) || ( stackptr == 0 ) ) ) ;
if ( k == 72 )
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) (void) fputs ( "! String too long" , (&__iob[1]) ) ;
error () ;
}
zsendout((eightbits) ( 1 ), (sixteenbits) ( k )) ;
curchar = getoutput () ;
if ( curchar == 39 )
outstate = 6 ;
goto lab21 ;
}
break ;
case 33 :
case 34 :
case 35 :
case 36 :
case 37 :
case 38 :
case 40 :
case 41 :
case 42 :
case 44 :
case 47 :
case 58 :
case 59 :
case 60 :
case 61 :
case 62 :
case 63 :
case 64 :
case 91 :
case 92 :
case 93 :
case 94 :
case 95 :
case 96 :
case 123 :
case 124 :
zsendout((eightbits) ( 0 ), (sixteenbits) ( curchar )) ;
break ;
case 9 :
{
if ( bracelevel == 0 )
zsendout((eightbits) ( 0 ), (sixteenbits) ( 123 )) ;
else zsendout((eightbits) ( 0 ), (sixteenbits) ( 91 )) ;
bracelevel = bracelevel + 1 ;
}
break ;
case 10 :
if ( bracelevel > 0 )
{
bracelevel = bracelevel - 1 ;
if ( bracelevel == 0 )
zsendout((eightbits) ( 0 ), (sixteenbits) ( 125 )) ;
else zsendout((eightbits) ( 0 ), (sixteenbits) ( 93 )) ;
}
else {
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) (void) fputs ( "! Extra @}" , (&__iob[1]) ) ;
error () ;
}
break ;
case 129 :
{
if ( bracelevel == 0 )
zsendout((eightbits) ( 0 ), (sixteenbits) ( 123 )) ;
else zsendout((eightbits) ( 0 ), (sixteenbits) ( 91 )) ;
if ( curval < 0 )
{
zsendout((eightbits) ( 0 ), (sixteenbits) ( 58 )) ;
zsendval((integer) ( - (integer) curval )) ;
}
else {
zsendval((integer) ( curval )) ;
zsendout((eightbits) ( 0 ), (sixteenbits) ( 58 )) ;
}
if ( bracelevel == 0 )
zsendout((eightbits) ( 0 ), (sixteenbits) ( 125 )) ;
else zsendout((eightbits) ( 0 ), (sixteenbits) ( 93 )) ;
}
break ;
case 127 :
{
zsendout((eightbits) ( 3 ), (sixteenbits) ( 0 )) ;
outstate = 6 ;
}
break ;
case 2 :
{
k = 0 ;
do {
if ( k < 72 )
k = k + 1 ;
outcontrib [ k ] = getoutput () ;
} while ( ! ( ( outcontrib [ k ] == 2 ) || ( stackptr == 0 ) ) ) ;
if ( k == 72 )
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) (void) fputs ( "! Verbatim string too long" , (&__iob[1]) ) ;
error () ;
}
zsendout((eightbits) ( 1 ), (sixteenbits) ( k - 1 )) ;
}
break ;
case 3 :
{
zsendout((eightbits) ( 1 ), (sixteenbits) ( 0 )) ;
while ( outptr > 0 ) {
if ( outptr <= 72 )
breakptr = outptr ;
flushbuffer () ;
}
outstate = 0 ;
}
break ;
default:
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) fprintf( (&__iob[1]) , "%s%ld", "! Can't output ASCII code " , (long)curchar ) ;
error () ;
}
break ;
}
goto lab22 ;
lab2: do {
if ( k < 72 )
k = k + 1 ;
outcontrib [ k ] = curchar ;
curchar = getoutput () ;
if ( ( outcontrib [ k ] == 69 ) && ( ( curchar == 43 ) || ( curchar ==
45 ) ) )
{
if ( k < 72 )
k = k + 1 ;
outcontrib [ k ] = curchar ;
curchar = getoutput () ;
}
else if ( curchar == 101 )
curchar = 69 ;
} while ( ! ( ( curchar != 69 ) && ( ( curchar < 48 ) || ( curchar > 57 )
) ) ) ;
if ( k == 72 )
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) (void) fputs ( "! Fraction too long" , (&__iob[1]) ) ;
error () ;
}
zsendout((eightbits) ( 3 ), (sixteenbits) ( k )) ;
goto lab21 ;
lab22: ;
}
}
boolean linesdontmatch ( )
{ register boolean Result; integer k ;
Result = 1 ;
if ( changelimit != limit )
goto lab10 ;
if ( limit > 0 )
{register integer for_end; k = 0 ; for_end = limit - 1 ; if ( k <= for_end)
do
if ( changebuffer [ k ] != buffer [ k ] )
goto lab10 ;
while ( k++ < for_end ) ; }
Result = 0 ;
lab10: ;
return(Result) ;
}
void primethechangebuffer ( )
{ integer k ;
changelimit = 0 ;
while ( 1 ) {
line = line + 1 ;
if ( ! zinputln((textfile) ( changefile )) )
goto lab10 ;
if ( limit < 2 )
goto lab22 ;
if ( buffer [ 0 ] != 64 )
goto lab22 ;
if ( ( buffer [ 1 ] >= 88 ) && ( buffer [ 1 ] <= 90 ) )
buffer [ 1 ] = buffer [ 1 ] + 32 ;
if ( buffer [ 1 ] == 120 )
goto lab30 ;
if ( ( buffer [ 1 ] == 121 ) || ( buffer [ 1 ] == 122 ) )
{
loc = 2 ;
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) (void) fputs ( "! Where is the matching @x?" , (&__iob[1]) ) ;
error () ;
}
}
lab22: ;
}
lab30: ;
do {
line = line + 1 ;
if ( ! zinputln((textfile) ( changefile )) )
{
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) (void) fputs ( "! Change file ended after @x" , (&__iob[1]) ) ;
error () ;
}
goto lab10 ;
}
} while ( ! ( limit > 0 ) ) ;
{
changelimit = limit ;
if ( limit > 0 )
{register integer for_end; k = 0 ; for_end = limit - 1 ; if ( k <=
for_end) do
changebuffer [ k ] = buffer [ k ] ;
while ( k++ < for_end ) ; }
}
lab10: ;
}
void checkchange ( )
{ integer n ;
integer k ;
if ( linesdontmatch () )
goto lab10 ;
n = 0 ;
while ( 1 ) {
changing = ! changing ;
templine = otherline ;
otherline = line ;
line = templine ;
line = line + 1 ;
if ( ! zinputln((textfile) ( changefile )) )
{
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) (void) fputs ( "! Change file ended before @y" , (&__iob[1]) ) ;
error () ;
}
changelimit = 0 ;
changing = ! changing ;
templine = otherline ;
otherline = line ;
line = templine ;
goto lab10 ;
}
if ( limit > 1 )
if ( buffer [ 0 ] == 64 )
{
if ( ( buffer [ 1 ] >= 88 ) && ( buffer [ 1 ] <= 90 ) )
buffer [ 1 ] = buffer [ 1 ] + 32 ;
if ( ( buffer [ 1 ] == 120 ) || ( buffer [ 1 ] == 122 ) )
{
loc = 2 ;
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) (void) fputs ( "! Where is the matching @y?" , (&__iob[1]) ) ;
error () ;
}
}
else if ( buffer [ 1 ] == 121 )
{
if ( n > 0 )
{
loc = 2 ;
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) fprintf( (&__iob[1]) , "%s%ld%s", "! Hmm... " , (long)n , " of the preceding lines failed to match" ) ;
error () ;
}
}
goto lab10 ;
}
}
{
changelimit = limit ;
if ( limit > 0 )
{register integer for_end; k = 0 ; for_end = limit - 1 ; if ( k <=
for_end) do
changebuffer [ k ] = buffer [ k ] ;
while ( k++ < for_end ) ; }
}
changing = ! changing ;
templine = otherline ;
otherline = line ;
line = templine ;
line = line + 1 ;
if ( ! zinputln((textfile) ( webfile )) )
{
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) (void) fputs ( "! WEB file ended during a change" , (&__iob[1]) ) ;
error () ;
}
inputhasended = 1 ;
goto lab10 ;
}
if ( linesdontmatch () )
n = n + 1 ;
}
lab10: ;
}
void getline ( )
{ lab20: if ( changing )
{
line = line + 1 ;
if ( ! zinputln((textfile) ( changefile )) )
{
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) (void) fputs ( "! Change file ended without @z" , (&__iob[1]) ) ;
error () ;
}
buffer [ 0 ] = 64 ;
buffer [ 1 ] = 122 ;
limit = 2 ;
}
if ( limit > 1 )
if ( buffer [ 0 ] == 64 )
{
if ( ( buffer [ 1 ] >= 88 ) && ( buffer [ 1 ] <= 90 ) )
buffer [ 1 ] = buffer [ 1 ] + 32 ;
if ( ( buffer [ 1 ] == 120 ) || ( buffer [ 1 ] == 121 ) )
{
loc = 2 ;
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) (void) fputs ( "! Where is the matching @z?" , (&__iob[1]) ) ;
error () ;
}
}
else if ( buffer [ 1 ] == 122 )
{
primethechangebuffer () ;
changing = ! changing ;
templine = otherline ;
otherline = line ;
line = templine ;
}
}
}
if ( ! changing )
{
{
line = line + 1 ;
if ( ! zinputln((textfile) ( webfile )) )
inputhasended = 1 ;
else if ( limit == changelimit )
if ( buffer [ 0 ] == changebuffer [ 0 ] )
if ( changelimit > 0 )
checkchange () ;
}
if ( changing )
goto lab20 ;
}
loc = 0 ;
buffer [ limit ] = 32 ;
}
eightbits zcontrolcode ( c )
ASCIIcode c ;
{register eightbits Result; switch ( c )
{case 64 :
Result = 64 ;
break ;
case 39 :
Result = 12 ;
break ;
case 34 :
Result = 13 ;
break ;
case 36 :
Result = 125 ;
break ;
case 32 :
case 9 :
Result = 136 ;
break ;
case 42 :
{
(void) fprintf( (&__iob[1]) , "%c%ld", '*' , (long)modulecount + 1 ) ;
(void) fflush ( (&__iob[1]) ) ;
Result = 136 ;
}
break ;
case 68 :
case 100 :
Result = 133 ;
break ;
case 70 :
case 102 :
Result = 132 ;
break ;
case 123 :
Result = 9 ;
break ;
case 125 :
Result = 10 ;
break ;
case 80 :
case 112 :
Result = 134 ;
break ;
case 84 :
case 116 :
case 94 :
case 46 :
case 58 :
Result = 131 ;
break ;
case 38 :
Result = 127 ;
break ;
case 60 :
Result = 135 ;
break ;
case 61 :
Result = 2 ;
break ;
case 92 :
Result = 3 ;
break ;
default:
Result = 0 ;
break ;
}
return(Result) ;
}
eightbits skipahead ( )
{ register eightbits Result; eightbits c ;
while ( 1 ) {
if ( loc > limit )
{
getline () ;
if ( inputhasended )
{
c = 136 ;
goto lab30 ;
}
}
buffer [ limit + 1 ] = 64 ;
while ( buffer [ loc ] != 64 ) loc = loc + 1 ;
if ( loc <= limit )
{
loc = loc + 2 ;
c = zcontrolcode((ASCIIcode) ( buffer [ loc - 1 ] )) ;
if ( ( c != 0 ) || ( buffer [ loc - 1 ] == 62 ) )
goto lab30 ;
}
}
lab30: Result = c ;
return(Result) ;
}
void skipcomment ( )
{ eightbits bal ;
ASCIIcode c ;
bal = 0 ;
while ( 1 ) {
if ( loc > limit )
{
getline () ;
if ( inputhasended )
{
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) (void) fputs ( "! Input ended in mid-comment" , (&__iob[1]) ) ;
error () ;
}
goto lab10 ;
}
}
c = buffer [ loc ] ;
loc = loc + 1 ;
if ( c == 64 )
{
c = buffer [ loc ] ;
if ( ( c != 32 ) && ( c != 9 ) && ( c != 42 ) && ( c != 122 ) && ( c !=
90 ) )
loc = loc + 1 ;
else {
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) (void) fputs ( "! Section ended in mid-comment" , (&__iob[1]) ) ;
error () ;
}
loc = loc - 1 ;
goto lab10 ;
}
}
else if ( ( c == 92 ) && ( buffer [ loc ] != 64 ) )
loc = loc + 1 ;
else if ( c == 123 )
bal = bal + 1 ;
else if ( c == 125 )
{
if ( bal == 0 )
goto lab10 ;
bal = bal - 1 ;
}
}
lab10: ;
}
eightbits getnext ( )
{ register eightbits Result; eightbits c ;
eightbits d ;
integer j, k ;
lab20: if ( loc > limit )
{
getline () ;
if ( inputhasended )
{
c = 136 ;
goto lab31 ;
}
}
c = buffer [ loc ] ;
loc = loc + 1 ;
if ( scanninghex )
if ( ( ( c >= 48 ) && ( c <= 57 ) ) || ( ( c >= 65 ) && ( c <= 70 ) ) )
goto lab31 ;
else scanninghex = 0 ;
switch ( c )
{case 65 :
case 66 :
case 67 :
case 68 :
case 69 :
case 70 :
case 71 :
case 72 :
case 73 :
case 74 :
case 75 :
case 76 :
case 77 :
case 78 :
case 79 :
case 80 :
case 81 :
case 82 :
case 83 :
case 84 :
case 85 :
case 86 :
case 87 :
case 88 :
case 89 :
case 90 :
case 97 :
case 98 :
case 99 :
case 100 :
case 101 :
case 102 :
case 103 :
case 104 :
case 105 :
case 106 :
case 107 :
case 108 :
case 109 :
case 110 :
case 111 :
case 112 :
case 113 :
case 114 :
case 115 :
case 116 :
case 117 :
case 118 :
case 119 :
case 120 :
case 121 :
case 122 :
{
if ( ( ( c == 101 ) || ( c == 69 ) ) && ( loc > 1 ) )
if ( ( buffer [ loc - 2 ] <= 57 ) && ( buffer [ loc - 2 ] >= 48 ) )
c = 0 ;
if ( c != 0 )
{
loc = loc - 1 ;
idfirst = loc ;
do {
loc = loc + 1 ;
d = buffer [ loc ] ;
} while ( ! ( ( ( d < 48 ) || ( ( d > 57 ) && ( d < 65 ) ) || ( ( d >
90 ) && ( d < 97 ) ) || ( d > 122 ) ) && ( d != 95 ) ) ) ;
if ( loc > idfirst + 1 )
{
c = 130 ;
idloc = loc ;
}
}
else c = 69 ;
}
break ;
case 34 :
{
doublechars = 0 ;
idfirst = loc - 1 ;
do {
d = buffer [ loc ] ;
loc = loc + 1 ;
if ( ( d == 34 ) || ( d == 64 ) )
if ( buffer [ loc ] == d )
{
loc = loc + 1 ;
d = 0 ;
doublechars = doublechars + 1 ;
}
else {
if ( d == 64 )
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) (void) fputs ( "! Double @ sign missing" , (&__iob[1]) ) ;
error () ;
}
}
else if ( loc > limit )
{
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) (void) fputs ( "! String constant didn't end" , (&__iob[1]) ) ;
error () ;
}
d = 34 ;
}
} while ( ! ( d == 34 ) ) ;
idloc = loc - 1 ;
c = 130 ;
}
break ;
case 64 :
{
c = zcontrolcode((ASCIIcode) ( buffer [ loc ] )) ;
loc = loc + 1 ;
if ( c == 0 )
goto lab20 ;
else if ( c == 13 )
scanninghex = 1 ;
else if ( c == 135 )
{
k = 0 ;
while ( 1 ) {
if ( loc > limit )
{
getline () ;
if ( inputhasended )
{
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) (void) fputs ( "! Input ended in section name" , (&__iob[1]) ) ;
error () ;
}
goto lab30 ;
}
}
d = buffer [ loc ] ;
if ( d == 64 )
{
d = buffer [ loc + 1 ] ;
if ( d == 62 )
{
loc = loc + 2 ;
goto lab30 ;
}
if ( ( d == 32 ) || ( d == 9 ) || ( d == 42 ) )
{
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) (void) fputs ( "! Section name didn't end" , (&__iob[1]) ) ;
error () ;
}
goto lab30 ;
}
k = k + 1 ;
modtext [ k ] = 64 ;
loc = loc + 1 ;
}
loc = loc + 1 ;
if ( k < 400 - 1 )
k = k + 1 ;
if ( ( d == 32 ) || ( d == 9 ) )
{
d = 32 ;
if ( modtext [ k - 1 ] == 32 )
k = k - 1 ;
}
modtext [ k ] = d ;
}
lab30: if ( k >= 400 - 2 )
{
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) (void) fputs ( "! Section name too long: " , (&__iob[1]) ) ;
}
{register integer for_end; j = 1 ; for_end = 25 ; if ( j <=
for_end) do
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ( xchr [ modtext [ j ] ] ), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ( xchr [ modtext [ j ] ] ))) ;
while ( j++ < for_end ) ; }
(void) (void) fputs ( "..." , (&__iob[1]) ) ;
if ( history == 0 )
history = 1 ;
}
if ( ( modtext [ k ] == 32 ) && ( k > 0 ) )
k = k - 1 ;
if ( k > 3 )
{
if ( ( modtext [ k ] == 46 ) && ( modtext [ k - 1 ] == 46 ) && (
modtext [ k - 2 ] == 46 ) )
curmodule = zprefixlookup((sixteenbits) ( k - 3 )) ;
else curmodule = zmodlookup((sixteenbits) ( k )) ;
}
else curmodule = zmodlookup((sixteenbits) ( k )) ;
}
else if ( c == 131 )
{
do {
c = skipahead () ;
} while ( ! ( c != 64 ) ) ;
if ( buffer [ loc - 1 ] != 62 )
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) (void) fputs ( "! Improper @ within control text" , (&__iob[1]) ) ;
error () ;
}
goto lab20 ;
}
}
break ;
case 46 :
if ( buffer [ loc ] == 46 )
{
if ( loc <= limit )
{
c = 32 ;
loc = loc + 1 ;
}
}
else if ( buffer [ loc ] == 41 )
{
if ( loc <= limit )
{
c = 93 ;
loc = loc + 1 ;
}
}
break ;
case 58 :
if ( buffer [ loc ] == 61 )
{
if ( loc <= limit )
{
c = 24 ;
loc = loc + 1 ;
}
}
break ;
case 61 :
if ( buffer [ loc ] == 61 )
{
if ( loc <= limit )
{
c = 30 ;
loc = loc + 1 ;
}
}
break ;
case 62 :
if ( buffer [ loc ] == 61 )
{
if ( loc <= limit )
{
c = 29 ;
loc = loc + 1 ;
}
}
break ;
case 60 :
if ( buffer [ loc ] == 61 )
{
if ( loc <= limit )
{
c = 28 ;
loc = loc + 1 ;
}
}
else if ( buffer [ loc ] == 62 )
{
if ( loc <= limit )
{
c = 26 ;
loc = loc + 1 ;
}
}
break ;
case 40 :
if ( buffer [ loc ] == 42 )
{
if ( loc <= limit )
{
c = 9 ;
loc = loc + 1 ;
}
}
else if ( buffer [ loc ] == 46 )
{
if ( loc <= limit )
{
c = 91 ;
loc = loc + 1 ;
}
}
break ;
case 42 :
if ( buffer [ loc ] == 41 )
{
if ( loc <= limit )
{
c = 10 ;
loc = loc + 1 ;
}
}
break ;
case 32 :
case 9 :
goto lab20 ;
break ;
case 123 :
{
skipcomment () ;
goto lab20 ;
}
break ;
default:
if ( c >= 128 )
goto lab20 ;
else ;
break ;
}
lab31: Result = c ;
return(Result) ;
}
void zscannumeric ( p )
namepointer p ;
{ integer accumulator ;
schar nextsign ;
namepointer q ;
integer val ;
accumulator = 0 ;
nextsign = 1 ;
while ( 1 ) {
nextcontrol = getnext () ;
lab21: switch ( nextcontrol )
{case 48 :
case 49 :
case 50 :
case 51 :
case 52 :
case 53 :
case 54 :
case 55 :
case 56 :
case 57 :
{
val = 0 ;
do {
val = 10 * val + nextcontrol - 48 ;
nextcontrol = getnext () ;
} while ( ! ( ( nextcontrol > 57 ) || ( nextcontrol < 48 ) ) ) ;
{
accumulator = accumulator + nextsign * ((integer) ( val )) ;
nextsign = 1 ;
}
goto lab21 ;
}
break ;
case 12 :
{
val = 0 ;
nextcontrol = 48 ;
do {
val = 8 * val + nextcontrol - 48 ;
nextcontrol = getnext () ;
} while ( ! ( ( nextcontrol > 55 ) || ( nextcontrol < 48 ) ) ) ;
{
accumulator = accumulator + nextsign * ((integer) ( val )) ;
nextsign = 1 ;
}
goto lab21 ;
}
break ;
case 13 :
{
val = 0 ;
nextcontrol = 48 ;
do {
if ( nextcontrol >= 65 )
nextcontrol = nextcontrol - 7 ;
val = 16 * val + nextcontrol - 48 ;
nextcontrol = getnext () ;
} while ( ! ( ( nextcontrol > 70 ) || ( nextcontrol < 48 ) || ( (
nextcontrol > 57 ) && ( nextcontrol < 65 ) ) ) ) ;
{
accumulator = accumulator + nextsign * ((integer) ( val )) ;
nextsign = 1 ;
}
goto lab21 ;
}
break ;
case 130 :
{
q = zidlookup((eightbits) ( 0 )) ;
if ( ilk [ q ] != 1 )
{
nextcontrol = 42 ;
goto lab21 ;
}
{
accumulator = accumulator + nextsign * ((integer) ( equiv [ q ] - 32768L
)) ;
nextsign = 1 ;
}
}
break ;
case 43 :
;
break ;
case 45 :
nextsign = - (integer) nextsign ;
break ;
case 132 :
case 133 :
case 135 :
case 134 :
case 136 :
goto lab30 ;
break ;
case 59 :
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) (void) fputs ( "! Omit semicolon in numeric definition" , (&__iob[1]) ) ;
error () ;
}
break ;
default:
{
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) (void) fputs ( "! Improper numeric definition will be flushed" , (&__iob[1]) ) ;
error () ;
}
do {
nextcontrol = skipahead () ;
} while ( ! ( ( nextcontrol >= 132 ) ) ) ;
if ( nextcontrol == 135 )
{
loc = loc - 2 ;
nextcontrol = getnext () ;
}
accumulator = 0 ;
goto lab30 ;
}
break ;
}
}
lab30: ;
if ( ((integer) ( accumulator ) >= 0 ? (integer) ( accumulator ) : (integer) -( accumulator )) >= 32768L )
{
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) fprintf( (&__iob[1]) , "%s%ld", "! Value too big: " , (long)accumulator ) ;
error () ;
}
accumulator = 0 ;
}
equiv [ p ] = accumulator + 32768L ;
}
void zscanrepl ( t )
eightbits t ;
{ sixteenbits a ;
ASCIIcode b ;
eightbits bal ;
bal = 0 ;
while ( 1 ) {
lab22: a = getnext () ;
switch ( a )
{case 40 :
bal = bal + 1 ;
break ;
case 41 :
if ( bal == 0 )
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) (void) fputs ( "! Extra )" , (&__iob[1]) ) ;
error () ;
}
else bal = bal - 1 ;
break ;
case 39 :
{
b = 39 ;
while ( 1 ) {
{
if ( tokptr [ z ] == 50000L )
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) fprintf( (&__iob[1]) , "%s%s%s", "! Sorry, " , "token" , " capacity exceeded" )
;
error () ;
history = 3 ;
exit ( 1 ) ;
}
tokmem [ z ][ tokptr [ z ] ] = b ;
tokptr [ z ] = tokptr [ z ] + 1 ;
}
if ( b == 64 )
if ( buffer [ loc ] == 64 )
loc = loc + 1 ;
else {
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) (void) fputs ( "! You should double @ signs in strings" , (&__iob[1]) ) ;
error () ;
}
if ( loc == limit )
{
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) (void) fputs ( "! String didn't end" , (&__iob[1]) ) ;
error () ;
}
buffer [ loc ] = 39 ;
buffer [ loc + 1 ] = 0 ;
}
b = buffer [ loc ] ;
loc = loc + 1 ;
if ( b == 39 )
{
if ( buffer [ loc ] != 39 )
goto lab31 ;
else {
loc = loc + 1 ;
{
if ( tokptr [ z ] == 50000L )
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) fprintf( (&__iob[1]) , "%s%s%s", "! Sorry, " , "token" , " capacity exceeded" ) ;
error () ;
history = 3 ;
exit ( 1 ) ;
}
tokmem [ z ][ tokptr [ z ] ] = 39 ;
tokptr [ z ] = tokptr [ z ] + 1 ;
}
}
}
}
lab31: ;
}
break ;
case 35 :
if ( t == 3 )
a = 0 ;
break ;
case 130 :
{
a = zidlookup((eightbits) ( 0 )) ;
{
if ( tokptr [ z ] == 50000L )
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) fprintf( (&__iob[1]) , "%s%s%s", "! Sorry, " , "token" , " capacity exceeded" ) ;
error () ;
history = 3 ;
exit ( 1 ) ;
}
tokmem [ z ][ tokptr [ z ] ] = ( a / 256 ) + 128 ;
tokptr [ z ] = tokptr [ z ] + 1 ;
}
a = a % 256 ;
}
break ;
case 135 :
if ( t != 135 )
goto lab30 ;
else {
{
if ( tokptr [ z ] == 50000L )
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) fprintf( (&__iob[1]) , "%s%s%s", "! Sorry, " , "token" , " capacity exceeded" ) ;
error () ;
history = 3 ;
exit ( 1 ) ;
}
tokmem [ z ][ tokptr [ z ] ] = ( curmodule / 256 ) + 168 ;
tokptr [ z ] = tokptr [ z ] + 1 ;
}
a = curmodule % 256 ;
}
break ;
case 2 :
{
{
if ( tokptr [ z ] == 50000L )
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) fprintf( (&__iob[1]) , "%s%s%s", "! Sorry, " , "token" , " capacity exceeded" ) ;
error () ;
history = 3 ;
exit ( 1 ) ;
}
tokmem [ z ][ tokptr [ z ] ] = 2 ;
tokptr [ z ] = tokptr [ z ] + 1 ;
}
buffer [ limit + 1 ] = 64 ;
while ( buffer [ loc ] != 64 ) {
{
if ( tokptr [ z ] == 50000L )
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) fprintf( (&__iob[1]) , "%s%s%s", "! Sorry, " , "token" , " capacity exceeded" )
;
error () ;
history = 3 ;
exit ( 1 ) ;
}
tokmem [ z ][ tokptr [ z ] ] = buffer [ loc ] ;
tokptr [ z ] = tokptr [ z ] + 1 ;
}
loc = loc + 1 ;
if ( loc < limit )
if ( ( buffer [ loc ] == 64 ) && ( buffer [ loc + 1 ] == 64 ) )
{
{
if ( tokptr [ z ] == 50000L )
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) fprintf( (&__iob[1]) , "%s%s%s", "! Sorry, " , "token" , " capacity exceeded" ) ;
error () ;
history = 3 ;
exit ( 1 ) ;
}
tokmem [ z ][ tokptr [ z ] ] = 64 ;
tokptr [ z ] = tokptr [ z ] + 1 ;
}
loc = loc + 2 ;
}
}
if ( loc >= limit )
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) (void) fputs ( "! Verbatim string didn't end" , (&__iob[1]) ) ;
error () ;
}
else if ( buffer [ loc + 1 ] != 62 )
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) (void) fputs ( "! You should double @ signs in verbatim strings" , (&__iob[1]) )
;
error () ;
}
loc = loc + 2 ;
}
break ;
case 133 :
case 132 :
case 134 :
if ( t != 135 )
goto lab30 ;
else {
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) fprintf( (&__iob[1]) , "%s%c%s", "! @" , xchr [ buffer [ loc - 1 ] ] , " is ignored in Pascal text" ) ;
error () ;
}
goto lab22 ;
}
break ;
case 136 :
goto lab30 ;
break ;
default:
;
break ;
}
{
if ( tokptr [ z ] == 50000L )
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) fprintf( (&__iob[1]) , "%s%s%s", "! Sorry, " , "token" , " capacity exceeded" ) ;
error () ;
history = 3 ;
exit ( 1 ) ;
}
tokmem [ z ][ tokptr [ z ] ] = a ;
tokptr [ z ] = tokptr [ z ] + 1 ;
}
}
lab30: nextcontrol = a ;
if ( bal > 0 )
{
if ( bal == 1 )
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) (void) fputs ( "! Missing )" , (&__iob[1]) ) ;
error () ;
}
else {
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) fprintf( (&__iob[1]) , "%s%ld%s", "! Missing " , (long)bal , " )'s" ) ;
error () ;
}
while ( bal > 0 ) {
{
if ( tokptr [ z ] == 50000L )
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) fprintf( (&__iob[1]) , "%s%s%s", "! Sorry, " , "token" , " capacity exceeded" ) ;
error () ;
history = 3 ;
exit ( 1 ) ;
}
tokmem [ z ][ tokptr [ z ] ] = 41 ;
tokptr [ z ] = tokptr [ z ] + 1 ;
}
bal = bal - 1 ;
}
}
if ( textptr > 2000 - 4 )
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) fprintf( (&__iob[1]) , "%s%s%s", "! Sorry, " , "text" , " capacity exceeded" ) ;
error () ;
history = 3 ;
exit ( 1 ) ;
}
currepltext = textptr ;
tokstart [ textptr + 4 ] = tokptr [ z ] ;
textptr = textptr + 1 ;
if ( z == 3 )
z = 0 ;
else z = z + 1 ;
}
void zdefinemacro ( t )
eightbits t ;
{namepointer p ;
p = zidlookup((eightbits) ( t )) ;
zscanrepl((eightbits) ( t )) ;
equiv [ p ] = currepltext ;
textlink [ currepltext ] = 0 ;
}
void scanmodule ( )
{ namepointer p ;
modulecount = modulecount + 1 ;
nextcontrol = 0 ;
while ( 1 ) {
lab22: while ( nextcontrol <= 132 ) {
nextcontrol = skipahead () ;
if ( nextcontrol == 135 )
{
loc = loc - 2 ;
nextcontrol = getnext () ;
}
}
if ( nextcontrol != 133 )
goto lab30 ;
nextcontrol = getnext () ;
if ( nextcontrol != 130 )
{
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) fprintf( (&__iob[1]) , "%s%s", "! Definition flushed, must start with " , "identifier of length > 1" ) ;
error () ;
}
goto lab22 ;
}
nextcontrol = getnext () ;
if ( nextcontrol == 61 )
{
zscannumeric((namepointer) ( zidlookup((eightbits) ( 1 )) )) ;
goto lab22 ;
}
else if ( nextcontrol == 30 )
{
zdefinemacro((eightbits) ( 2 )) ;
goto lab22 ;
}
else if ( nextcontrol == 40 )
{
nextcontrol = getnext () ;
if ( nextcontrol == 35 )
{
nextcontrol = getnext () ;
if ( nextcontrol == 41 )
{
nextcontrol = getnext () ;
if ( nextcontrol == 61 )
{
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) (void) fputs ( "! Use == for macros" , (&__iob[1]) ) ;
error () ;
}
nextcontrol = 30 ;
}
if ( nextcontrol == 30 )
{
zdefinemacro((eightbits) ( 3 )) ;
goto lab22 ;
}
}
}
}
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) (void) fputs ( "! Definition flushed since it starts badly" , (&__iob[1]) ) ;
error () ;
}
}
lab30: ;
switch ( nextcontrol )
{case 134 :
p = 0 ;
break ;
case 135 :
{
p = curmodule ;
do {
nextcontrol = getnext () ;
} while ( ! ( nextcontrol != 43 ) ) ;
if ( ( nextcontrol != 61 ) && ( nextcontrol != 30 ) )
{
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) (void) fputs ( "! Pascal text flushed, = sign is missing" , (&__iob[1]) ) ;
error () ;
}
do {
nextcontrol = skipahead () ;
} while ( ! ( nextcontrol == 136 ) ) ;
goto lab10 ;
}
}
break ;
default:
goto lab10 ;
break ;
}
zstoretwobytes((sixteenbits) ( 53248L + modulecount )) ;
zscanrepl((eightbits) ( 135 )) ;
if ( p == 0 )
{
textlink [ lastunnamed ] = currepltext ;
lastunnamed = currepltext ;
}
else if ( equiv [ p ] == 0 )
equiv [ p ] = currepltext ;
else {
p = equiv [ p ] ;
while ( textlink [ p ] < 2000 ) p = textlink [ p ] ;
textlink [ p ] = currepltext ;
}
textlink [ currepltext ] = 2000 ;
lab10: ;
}
void main_body() {
initialize () ;
openinput () ;
line = 0 ;
otherline = 0 ;
changing = 1 ;
primethechangebuffer () ;
changing = ! changing ;
templine = otherline ;
otherline = line ;
line = templine ;
limit = 0 ;
loc = 1 ;
buffer [ 0 ] = 32 ;
inputhasended = 0 ;
(void) fprintf( (&__iob[1]) , "%s\n", "This is TANGLE, C Version 4.1" ) ;
phaseone = 1 ;
modulecount = 0 ;
do {
nextcontrol = skipahead () ;
} while ( ! ( nextcontrol == 136 ) ) ;
while ( ! inputhasended ) scanmodule () ;
if ( changelimit != 0 )
{
{register integer for_end; ii = 0 ; for_end = changelimit ; if ( ii <=
for_end) do
buffer [ ii ] = changebuffer [ ii ] ;
while ( ii++ < for_end ) ; }
limit = changelimit ;
changing = 1 ;
line = otherline ;
loc = changelimit ;
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) (void) fputs ( "! Change file entry did not match" , (&__iob[1]) ) ;
error () ;
}
}
phaseone = 0 ;
if ( textlink [ 0 ] == 0 )
{
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) (void) fputs ( "! No output was specified." , (&__iob[1]) ) ;
}
if ( history == 0 )
history = 1 ;
}
else {
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) (void) fputs ( "Writing the output file" , (&__iob[1]) ) ;
}
(void) fflush ( (&__iob[1]) ) ;
stackptr = 1 ;
bracelevel = 0 ;
curstate .namefield = 0 ;
curstate .replfield = textlink [ 0 ] ;
zo = curstate .replfield % 4 ;
curstate .bytefield = tokstart [ curstate .replfield ] ;
curstate .endfield = tokstart [ curstate .replfield + 4 ] ;
curstate .modfield = 0 ;
outstate = 0 ;
outptr = 0 ;
breakptr = 0 ;
semiptr = 0 ;
outbuf [ 0 ] = 0 ;
line = 1 ;
sendtheoutput () ;
breakptr = outptr ;
semiptr = 0 ;
flushbuffer () ;
if ( bracelevel != 0 )
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) fprintf( (&__iob[1]) , "%s%ld", "! Program ended at brace level " , (long)bracelevel ) ;
error () ;
}
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) (void) fputs ( "Done." , (&__iob[1]) ) ;
}
}
lab9999: if ( stringptr > 256 )
{
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) fprintf( (&__iob[1]) , "%ld%s", (long)stringptr - 256 , " strings written to string pool file." ) ;
}
(void) (--( pool )->__cnt < 0 ? __flsbuf((unsigned char) ( '*' ), ( pool )) : (int) (*( pool )->__ptr++ = (unsigned char) ( '*' ))) ;
{register integer for_end; ii = 1 ; for_end = 9 ; if ( ii <= for_end) do
{
outbuf [ ii ] = poolchecksum % 10 ;
poolchecksum = poolchecksum / 10 ;
}
while ( ii++ < for_end ) ; }
{register integer for_end; ii = 9 ; for_end = 1 ; if ( ii >= for_end) do
(void) (--( pool )->__cnt < 0 ? __flsbuf((unsigned char) ( xchr [ 48 + outbuf [ ii ] ] ), ( pool )) : (int) (*( pool )->__ptr++ = (unsigned char) ( xchr [ 48 + outbuf [ ii ] ] ))) ;
while ( ii-- > for_end ) ; }
(void) (--( pool )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( pool )) : (int) (*( pool )->__ptr++ = (unsigned char) ('\n'))) ;
}
switch ( history )
{case 0 :
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) (void) fputs ( "(No errors were found.)" , (&__iob[1]) ) ;
}
break ;
case 1 :
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) (void) fputs ( "(Did you see the warning message above?)" , (&__iob[1]) ) ;
}
break ;
case 2 :
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) (void) fputs ( "(Pardon me, but I think I spotted something wrong.)" , (&__iob[1]) )
;
}
break ;
case 3 :
{
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
(void) (void) fputs ( "(That was a fatal error, my friend.)" , (&__iob[1]) ) ;
}
break ;
}
(void) (--( (&__iob[1]) )->__cnt < 0 ? __flsbuf((unsigned char) ('\n'), ( (&__iob[1]) )) : (int) (*( (&__iob[1]) )->__ptr++ = (unsigned char) ('\n'))) ;
if ( ( history != 0 ) && ( history != 1 ) )
exit ( 1 ) ;
else exit ( 0 ) ;
}
