# include <stdio.h>
# include <conio.h>
# include <iostream.h>
main()
{
	int nilai;
   char *grade;

   printf("Masukan Sebuah nilai:");scanf("%d",&nilai);

if(nilai>90)
{
grade="A";
}

else if(nilai>80)
{
grade="B";
}

else if(nilai>70)
{
grade="C";
}

else if(nilai>60)
{
grade="D";
}

else
{
grade="E";
}

cout<<"=========================="<<endl;
cout<<" nilai anda adalah : "<<nilai<<endl;
cout<<" grade : "<<grade<<endl;

getch();
}
