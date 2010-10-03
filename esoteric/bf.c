#define P(C,X)case C:printf(#X);break; 
main(){int c;printf("char a[9999];main(){char*p=a;");while((c=getchar())>=0)
{switch(c){P(62,p++;)P(60,p--;)P(43,++*p;)P(45,--*p;)P(46,putchar(*p);)P(44,
*p=getchar();)P(91,while(*p){)P(93,});}}printf("exit(0);}");exit(0);}
