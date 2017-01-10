# include <stdio.h>
# include <conio.h>
# include <iostream.h>

main()
{
char kode_barang,buku[20],bonus,beli,lagi, yt;
float total_bayar,jumlah_beli,total_beli,potongan,harga;
kembali:
clrscr();
cout<<""<<endl;
cout<<" Masukkan Kode Buku [1/2/3]  : ";cin>>kode_barang;
kode_barang=getche();
cout<<" Jumlah Pembelian Buku Anda : ";cin>>jumlah_beli;
cout<<"\n ";
cout<<"\t *** TOKO BUKU HALIFI *** \n";
cout<<"\t    JL.Keadilan  No.16 \n";
cout<<" -------------------------------------------";
cout<<""<<endl;
cout<<" Nama Buku yang Anda Beli     :"<<buku;
switch(kode_barang)
 {
  case ('1') :
      {
      cout<<" Sukses Belajar Borland C++"<<buku;
      harga= 50000*jumlah_beli ;
      }
      break;
  case ('2') :
      {
      cout<<" Kunci Pribadi Yang Sukses"<<buku;
      harga= 35000*jumlah_beli;
      }
      break;
  case ('3') :
      {
      cout<<" Mencari Mutiara Didasar Hati"<<buku;
      harga= 45000*jumlah_beli;
      }
      break;
 }
cout<<endl;
cout<<" Harga Buku yang Anda Beli    : Rp."<<harga<<endl;
    if (jumlah_beli >5)
  {
   potongan = 0.3*harga;
  }
  else
  {
   potongan= 0;
  }
cout<<" Jumlah Buku yang Anda Beli   : "<<jumlah_beli<<endl;
cout<<" Total Harga                  : Rp."<<harga<<endl;
cout<<" Potongan Harga               : Rp."<<potongan<<endl;

total_bayar= harga-potongan;
cout<<" ---------------------------------------------"<<endl;
cout<<" Total Bayar                  : Rp."<<total_bayar<<endl;

cout<<" Bonus yang Anda Dapatkan     :"<<bonus;
     if (jumlah_beli >5)
  {
  cout<<"Note Book"<<bonus;
  }
   else
  {
   cout<<"Maaf Tidak Dapat Bonus"<<bonus;
  }
  cout<<endl;
cout<<" \n ";
cout<<"---------------------------------------------"<<endl;
cout<<"\t **** TERIMA KASIH ****        ";
cout<<endl;
cout<<" Apa Mau Input Data Lagi ? [Y/T] : ";cin>>yt;
cout<<endl;
clrscr();
if(yt=='Y' || yt=='y')
{goto kembali;}
if(yt=='T' || yt=='t')
{goto selesai;}
selesai:
cout<<endl;
cout<<"\t******* Terima Kasih *******"<<endl;
getch();
}
