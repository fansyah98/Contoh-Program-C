#include <iostream.h>
#include <conio.h>

int data[10];
int n ;

void tukar(int a , int b ){
int t;
t=data[b];
data[b]=data[a];
data[a]=t;
}

 main(){
int pos,i,j;

cout<<"==================================================="<<endl;
cout<<" Nama   : Fansyah Dwi Krisnady                     "<<endl;
cout<<" NRP    : 14519077                                 "<<endl;
cout<<" Mata Kuliah : Strutuk Data                        "<<endl;
cout<<" Kelas  : Semester III - Teknik Informatika 1      "<<endl;
cout<<"==================================================="<<endl;

cout<<"---------------------------------------------------"<<endl;
cout<<"SELECTION SORT ASCENDING"<<endl;
cout<<"---------------------------------------------------"<<endl;
cout<<" masukan banyak data  = ";
cin>>n;
cout<<"---------------------------------------------------"<<endl;

 for(int i =0; i<n; i++)
   {
      cout<<"Masukan Data Ke-";
      cin>>data[i];
   }
cout<<"---------------------------------------------------"<<endl;
cout<<" DATA YANG DI INPUTKAN : "<<endl;
for(i=0; i<n; i++)
{
	cout<<data[i]<<" ";
}
cout<<endl;
cout<<"----------------------------------------------------"<<endl;
for(i=0; i<n; i++)
{
	pos=i;
   for(j=i; j<n; j++)
   {
   	if(data[j]<data[pos]) pos=j;
   }
   	if(pos!=i) tukar (pos, i);
}
cout<<endl;
cout<<"--------------------------------------------------"<<endl;
cout<<"SELECTION SORT SELESAI ! "<<endl;
cout<<"--------------------------------------------------"<<endl;
getch();
}
