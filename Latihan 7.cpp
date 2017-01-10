# include <stdio.h>
# include <conio.h>
# include <iostream.h>

main( )
{
int ab,t,UTS,UAS,na;
clrscr();
cout<<"Masukan nilai absen     : ",cin>>ab;
cout<<"Masukan nilai tugas     : ",cin>>t;
cout<<"Masukan nilai UTS       : ",cin>>UTS;
cout<<"Masukan nilai UAS       : ",cin>>UAS;
cout<<"=====HASIL AKHIR===================="<<endl;

na=(ab*0.1)+(t*0.2)+(UTS*0.3)+(UAS*0.5);


cout<<"nilai akhir anda        =  "<<na<<endl;

getch( );
}
