# include <stdio.h>
# include <conio.h>
# include <iostream.h>

main( )
{
int p,l,luas,keliling;
clrscr();
cout<<"Masukan Panjang : ",cin>>p;
cout<<"Masukan Lebar   : ",cin>>l;
cout<<"======================================"<<endl;
cout<<"        *** HASIL PERHITUNGAN ***"<<endl;
cout<<"======================================"<<endl;

luas=p*l;
keliling=2*(p+l);


cout<<"luas persegi panjang		=  "<<luas<<endl;
cout<<"keliling persegi panjang	=  "<<keliling<<endl;

getch( );
}
