#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<stdio.h>

/**
*check_num-checkifastringcontainsonlydigits
*@str:thestringtocheck
*
*Return:1ifthestringcontainsonlydigits,0otherwise
*/
intcheck_num(constchar*str)
{
size_tcount;

for(count=0;count<strlen(str);count++)
{
if(!isdigit(str[count]))
{
return(0);
}
}
return(1);
}

/**
*main-Entrypoint.Addsuptheintegersamongthecommand-linearguments.
*@argc:thenumberofcommand-linearguments
*@argv:anarrayofstringscontainingthecommand-linearguments
*
*Return:Always0.
*/
intmain(intargc,char*argv[])
{
intcount;
intstr_to_int;
intsum=0;

if(argc<2)
{
printf("Error\n");
return(1);
}

for(count=1;count<argc;count++)
{
if(check_num(argv[count]))
{
str_to_int=atoi(argv[count]);
sum+=str_to_int;
}
else
{
printf("Error\n");
return(1);
}
}

printf("%d\n",sum);

return(0);
}
