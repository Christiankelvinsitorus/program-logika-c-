# include <stdio.h>
# include <conio.h>
# include <iostream.h>

main( )
{
int x,y,a,b=0,c=0,d=0;
clrscr();
cout<<"Masukan nilai A     : ",cin>>x;
cout<<"Masukan nilai B     : ",cin>>y;
cout<<"======================="<<endl;

a = x+y;c = x/y;
b = x-y;d = x*y;

printf("hasil dari A=X+Y=%i\n",a);
printf("hasil dari B=X-Y=%i\n",b);
cout<<"hasil dari C = X/Y = "<<c<<endl;
cout<<"hasil dari C = X*Y = "<<d<<endl;

getch( );
}
