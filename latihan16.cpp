# include <stdio.h>
# include <conio.h>
# include <iostream.h>

main()
{
char kelas,ulang,kode[5],nama[15];
char kls1[15]= 	"1.Executive";
char kls2[15]= 	"2.Bisnis";
char kls3[15]= 	"3.Ekonomi";

int harga,jml,total;
atas:
clrscr( );
cout<<"                PROGRAM TIKET PESAWAT"<<endl;
cout<<"                   JAKARTA - MALAYSIA"<<endl;
cout<<"--------------------------------------------------------------"<<endl;
cout<<"Masukan Kode Pesawat [MPT/GRD/BTV] : ";cin>>kode;
cout<<"Kelas Pesawat :"<<endl<<kls1<<endl<<kls2<<endl<<kls3<<endl<<endl;
cout<<"Pilih Kelas [1/2/3] : ";cin>>kelas;

if (kode,"MPT" || kode,"mpt")
    {
	strcpy	(nama,"MERPATI");
	if 		(kelas == '1')
	harga	= 1500000;
   else if	(kelas == '1')
   harga		= 900000;
   else
   harga		= 500000;
    }

if (kode,"GRD" || kode,"grd")
    {
	strcpy	(nama,"GARUDA");
	if  		(kelas == '2')
	harga 	= 1200000;
   else if	(kelas == '2')
   harga 	= 800000;
   else
   harga 	= 400000;
    }
else if (kode,"BTV" || kode,"btv")
 {
 	strcpy	(nama,"BATAVIA");
 	if  		(kelas == '3')
 	harga 	= 1000000;
   else if	(kelas == '3')
   harga 	= 700000;
   else
   harga 	= 300000;
    }                                                 
else
cout<<"--------------------------"<<endl;
cout<<endl<<"Nama Pesawat      : "<<nama<<endl;
cout<<"Harga Tiket             : "<<harga<<endl;
cout<<"Jumlah Tiket            : ";cin>>jml;

total=jml*harga;
cout<<"Total Bayar        : "<<total<<endl<<endl;

getch();
bawah:
}
