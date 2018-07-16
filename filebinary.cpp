#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<stdlib.h>
class Student
{
  public:
   int roll;
   char name[20];
   int marks;
     void input()
     {
       cout<<"Enter rollno and marks"<<endl;
       cin>>roll>>marks;
       fflush(stdin);
       cin.getline(name,20);   
     }
     void output()
     {
       cout<<"Rollno="<<roll<<endl;
       cout<<"Name="<<name<<endl;
       cout<<"Marks="<<marks<<endl;
     }  
};
main()
{
 Student ob1;
 int i,n;
 ofstream f1("e:\\new\\records.bin",ios::app|ios::binary);
 if(f1==0)
 {
   cout<<"Error opening in file"<<endl;
   getch();
   exit(1);       
 }
  cout<<"Enter no. of records"<<endl;
  cin>>n;
for(i=1;i<=n;i++)
{
 ob1.input();
 f1.write((char *)&ob1,sizeof(ob1));                 
} 
f1.close();
 ifstream f2("e:\\new\\records.bin",ios::binary);
 if(f2==0)
 {
   cout<<"Error opening in file"<<endl;
   getch();
   exit(1);       
 }
while(1)
{      
 f2.read((char *)&ob1,sizeof(ob1));                
 if(f2.eof()!=0)
 break; 
 ob1.output();                 
} 
 f2.close(); 
   getch();
}
