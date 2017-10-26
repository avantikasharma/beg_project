#include<iostream.h>
#include<conio.h>
#inclulde<math.h>
void main()
{
clrscr();
char c='y';
while(c=='y')
{
  float a,b,c;
    cout<<"\nEnter three sides of the triangle: \n";
    cin>>a>>b>>c;
  if((pow(c,2)==pow(a,2)+pow(b,2))
    cout<<"\nIt is a pythagorean triplet";
  else if((pow(a,2)==pow(c,2)+pow(b,2))
    cout<<"\nIt is a pythagorean triplet";
  else if((pow(b,2)==pow(c,2)+pow(a,2))
    cout<<"\nIt is a pythagorean triplet";
  else
    cout<<"\nIt is not a pythagorean triplet";
  cout<<"Do you wish to continue? y/n";
  cin>>c;
}
getch();
}
