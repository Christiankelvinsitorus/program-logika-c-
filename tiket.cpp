                           #include<stdio.h>
#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<string.h>

using namespace std;
int main()
{
    char kelas,kdpesawat[10],nmpesawat[20];
    long harga, totalbyr;
    int qty;
    totalbyr=0;

    //INPUTAN
    cout<<"PROGRAM TIKET PESAWAT\n\n";
    cout<<"Masukan Kode Pesawat [MPT|GRD|BTV] : ";cin>>kdpesawat;
    cout<<"Kelas Pesawat : \n";
    cout<<"\t\t1. Executive\n";
    cout<<"\t\t2. Bisnis\n";
    cout<<"\t\t3. Ekonomi\n";
    cout<<"Pilih Kelas [1|2|3] : ";cin>>kelas;

    //PROSES
    if(strcmp(kdpesawat,"MPT")==0)
    {
        strcpy(nmpesawat,"MERPATI");
        if(kelas=='1')
            harga=1500000;
        else if(kelas=='2')
            harga=900000;
        else
            harga=500000;
    }
    else if(strcmp(kdpesawat,"GRD")==0)
    {
        strcpy(nmpesawat,"GARUDA");
        if(kelas=='1')
            harga=1200000;
        else if(kelas=='2')
            harga=800000;
        else
            harga=400000;
    }
    else
    {
        strcpy(nmpesawat,"BATAVIA");
        if(kelas=='1')
            harga=1000000;
        else if(kelas=='2')
            harga=700000;
        else
            harga=300000;
    }

    //OUTPUT
    cout<<"Nama Pesawat : "<<nmpesawat<<endl;
    cout<<"Harga Tiket  : "<<harga<<endl;
    cout<<"Jumlah Tiket : ";cin>>qty;

    totalbyr=harga*qty;

    cout<<"Total Bayar  : "<<totalbyr;
    getch();
}