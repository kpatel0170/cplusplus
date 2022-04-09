#include<conio.h>
#include<iostream>
#include<fstream>
#include<Windows.h>
// #include<dos.h>
#include<cctype>
#include<sstream>
#include<string>

using namespace std;

bool check = true;

struct Node    //structure of Node //
{
 char name[20];
 char discipline[20];
 int rollNo;
 char section;
 Node *pnext;
}
*head; *lastptr;

void add()    //Adds record of student//
{
    Node *p = new Node;
    cout << "Enter name of student: " << endl;
    gets(p -> name);
    fflush(stdin);
    cout << "Enter discipline of student: " << endl;
    gets(p -> discipline);
    fflush(stdin);
    cout << "Enter Roll Number of student: " << endl;
    cin >> p -> rollNo;
    fflush(stdin);
    cout << "Enter section of student: " << endl;
    cin >> p -> section;
    fflush(stdin);
    p -> pnext = NULL;

    if(check)
    {
        head = p;
        lastptr = p;
        check = false;
    }
    else
    {
        lastptr -> pnext = p;
        lastptr = p;
    }
    cout<< endl <<"Recored Entered";
    getch();
}

void modify()   //modifies record of student//
{
    Node *prev = head;
    Node *current = head;
    int roll_no;
    cout<<"Enter Roll Number to search: "<<endl;
    cin >> roll_no;
    // prev = head;
    // current = head;
    
    while(current -> rollNo != roll_no)    //linear search
    {
        prev = current;
        current = current -> pnext;
    }
    Node *ptr = new Node;
    fflush(stdin);
    cout << "Enter name of student:" << endl;
    gets(ptr -> name);
    fflush(stdin);
    cout << "Enter discipline of student:" << endl;
    gets(ptr -> discipline);
    fflush(stdin);
    cout << "Enter Roll Number of student:" << endl;
    cin >> ptr -> rollNo;
    fflush(stdin);
    cout << "Enter section of student:" << endl;
    cin >> ptr -> section;
    fflush(stdin);
    prev -> pnext = ptr;
    ptr -> pnext = current -> pnext;
    current -> pnext = NULL;
    delete current;
    cout << "\nRecored Modified";
    getch();
}



void search()   //searches record of student//
{
 Node *prev=NULL;
 Node *current=NULL;
 int roll_no;
 cout<<"Enter Roll Number to search:"<<endl;
 cin>>roll_no;
 prev=head;
 current=head;
 while(current->rollNo!=roll_no)
 {
  prev=current;
  current=current->pnext;
 }
 cout<<"\nname: ";
 puts(current->name);
 cout<<"\nRoll No:";
 cout<<current->rollNo;
 cout<<"\nDiscipline:";
 puts(current->discipline);
 cout<<"\nSection:";
 cout<<current->section;
 getch();
}
void del()    //deletes record of a student//
{
 Node *ptr=NULL;
 Node *prev=NULL;
 Node *current=NULL;
 int roll_no;
 cout<<"Enter Roll Number to Delete:"<<endl;
 cin>>roll_no;
 prev=head;
 current=head;
 while(current->rollNo!=roll_no)
 {
  prev=current;
  current=current->pnext;
 }
 prev->pnext = current->pnext;
 current->pnext=NULL;
 delete current;
 cout<<endl<<"Recored Deleted";
 getch();
}

int main()
{
 char x;
 cout<<"\t\t ********************************* \t\t\t"<<endl;
 cout<<"\t\t ****STUDENT MANAGEMENT SYSTEM**** \t\t\t"<<endl;
 cout<<"\t\t ********************************* \t\t\t"<<endl;
 cout<<"…………………………………….."<<endl;
 cout<<"…………………"<<endl;
 cout<<"……………………………………………………."<<endl;
 cout<<"\n\nPress Any Key To Continue . . . ."<<endl;
 getch();
 do
 {
    system("cls");
    cout<<"1--->Press '1' to add New record:"<<endl;
    cout<<"2--->Press '2' to search a record:"<<endl;
    cout<<"3--->Press '3' to modify a record:"<<endl;
    cout<<"4--->Press '4' to delete a record:"<<endl;
    cout<<"5--->Press '5' to exit:"<<endl;
    x=getch();
    if(x=='1')
    {
    system("cls");
    add();
    }
    else if(x=='2')
    {
    system("cls");
    search();
    }
    else if(x=='3')
    {
    system("cls");
    modify();
    }
    else if(x=='4')
    {
    system("cls");
    del();
    }
    else if(x=='5')
    {
    exit(0);
    }
    else
    {
    }
 }while(x != 27);
 getch();
}