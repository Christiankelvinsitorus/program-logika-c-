#include <iostream.h>
#include <cstring.h>
#include <conio.h>
int main()
{
char password[20];
string username;
login:
clrscr();
cout<<endl;
cout<<"=====|program untuk membaca input password dari user|=====\n";
cout<<"\n----------------------------------------------------------";
cout<<"\n\n";
cout<<"\n\nUsername : ";cin>>username;
cout<<"\nPassword : ";cin>>password;

if (username == "Budi" && strcmp(password, "1234")==0)
{
clrscr();
cout<<"Selamat Datang "<<username<<endl;
}
else if(username == "Rama" && strcmp(password, "gataudeh")==0)
{
cout<<"Selamat Datang "<<username<<endl;
clrscr();
}
else
{
cout<<"\t\t\tLogin Gagal..."<<endl;
goto login;
}
getch();
}