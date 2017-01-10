# include <stdio.h>
# include <conio.h>
# include <iostream.h>

main( )
{
int a,t,s,luas,keliling;
clrscr();
cout<<"Masukan alas     : ",cin>>a;
cout<<"Masukan tinggi   : ",cin>>t;
cout<<"Masukan sisi     : ",cin>>s;
cout<<"============================="<<endl;

luas=0.5*a*t;
keliling=3*s;


cout<<"luas segitiga    =  "<<luas<<endl;
cout<<"keliling segitiga=  "<<keliling<<endl;

getch( );
}
