#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <windows.h> //mendukung format system sebagai pengganti clrscr()
using namespace std;

int pilih; void pilihan();
void insert_data();
void hapus_data();
struct node
{
int nomorinduk;
char nama (20);
char gender (20);
float nilai;
node *prev, *next; //nama struct node*prev dan node*next
};
node*baru, *head=NULL, *tail=NULL, *help, *del;
main()  //program utama
{
do 
{
system("cls");
cout<<"\tlin. doubly linked list"<<endl;
cout<<"\t=========================="<<endl;
cout<<"\t1. insert data"<<endl;
cout<<"\t2. hapus data"<<endl;
cout<<"\t3. cetak data"<<endl;
cout<<"\t4. exit"<<endl;
cout<<"\tpilihan (1-4) : ";
cin>>pilih;
cout<<endl<<endl;
pilihan();
cout<<"================================"<<endl;
}
wheli(pilih!=4);
}
void pilihan()//fungsing'pilihan'untuk memperoses
{
if(pilih==1)
insert_data();
else if(pilihan==2)
hapus_data();
else if(pilih==3)
cetak_data();
else
{
cout<<"exit";
cout<<"\nsampai ketemu lagi"<<endl;
}
}
void buat_baru() //membuat data baru
{
baru = new(node)
cout<<"masukkan nomor induk : ";cin>>baru->nomor induk;
cout<<"masukkan nama : ";cin>>baru>>nama;
cout<<"masukkan gender : ";cin>>baru>>gender;
cout<<"masukkan nilai : ";cin>>baru>>nilai;
cout<<"\n\t---data dimasukkan---";
cout<<"\n\npress enter to continue...";
getch();
baru->prev=NULL;
baru->next=NULL;
}
void insert_data()
{
buat_baru();
if(head==NULL)
{
head=baru
tail=baru
}
else
{
baru->next=head;
head->prev=baru;
head=baru;
}
cout<<endl<<endl;
}
void hapus_data() //untuk menghapus
{
int hapus,nomorinduk;
if(head==NULL)
{
cout<<"\nlinked list kosong, \npenghapus tidak dapat dilakukan"<<endl;
}
else
{
hapus=head->nomorinduk;
cout<<"\nData dihapus adalah "; 
cin>>nomorinduk;
del = head;
head = head->next;
delete del;
}
}
void cetak_data()
{
if (head==NULL)
cout<<"\ndata tidak ditemukan! "<<endl;
else
{
help=head;
while(help!=NULL)
{
cout<<"nomor induk : "<<help->nomorinduk;
cout<<"nama : "<<help->nama;
cout<<"gender : "<<help->gender;
cout<<"nilai : "<<help->nilai<<endl;
help=help->next;
}
}
getch();
}
