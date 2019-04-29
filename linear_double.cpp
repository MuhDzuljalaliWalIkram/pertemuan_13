#include <iostream>
#include <string>

using namespace std;

struct Dosen{
      //membuat tipe data struct yang berfungsi menyimpan bebrapa tipe data yang berbeda.
  int no_dosen;
  int NIDN;
  char kelas;
  
  Dosen*next;    //nama_struct*next.
  };
  
  void printlis(dosen*n)     //membuat fungsi printlist
  {
  while (n!=NULL)      //syarat n tidak sama dengan NULL
  {
  cout<<"no_dosen" : "<<n->no_dosen<<" "<<endl;
  cout<<"NIDN   : "<<n->NIDN<<" "<<endl;
  cout<<"kelas  : "<<n->kelas<<" "<<endl;
  cout<< " "<<endl;
  
  //n-.data merupakan sebuah variable yang akan di panggil
  n = n->next;
  }
  }
  
  int main()
  {
  dosen*head = NULL;
  dosen*second = NULL;
  dosen*thrid = NULL;
  
  head = new dosen();
  second = new dosen();
  third = new dosen();
  
  head->no_dosen = 1;
  head->NIDN = 18294344;
  head->kelas = 'a' ;
  head->next = second;
  
  second->no_dosen = 2;
  second->NIDN = 12234355;
  second->kelas = 'b';
  second->next = third;
  
  third->no_dosen = 3;
  third->NIDN = 14325678;
  third->kelas = 'c';
  third->next = NULL;
  
  printlist(head)
  
  cin.get();
  return 0;
  }
