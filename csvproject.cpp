#include<iostream>
#include<istream>
#include<ostream>
#include<fstream>
#include<string.h>
using namespace std;
void file();
void number_of_activity();
void unique_process();
void no_of_case();
void follow(string);
char  a[20];
int i=0;//looping constant
int j=0;
int c=0;
int k=0;//for activity
int m=0;
int l=0;
int p=0;
int q=0;
int b=0;
char ud[20][2];
int count=0;
const int N=1000;//input array size
const int M=17;//use?
char ch[N];string f;
char line[M];

class process
{
public:
	char caseid[3];
	char activity[10];
	char ts[3];

}pr[50];//object array
int main()
{

	cout <<"Enter the file to be read-"<<endl;
	cin>>a;
	ifstream fin;
	fin.open(a);
	while(fin.is_open()&&(!fin.eof()))
	{
	fin.get(ch[i]);
	i++;
	c++; //for output and as looping counter
    }
	file();
	number_of_activity();
	unique_process();
	no_of_case();
	cout<<"Enter the step whose direct successor u want to know: "<<endl;
	cin>>f;
	cout<<"Step that follows "<<f<<" is: "<<endl;
	follow(f);
}
void file()
{
    cout <<"Given CSV file contains:"<<endl;
	for(i=0;i<c;i++)
	{
	cout <<ch[i];
	}
}
void number_of_activity()  //to find number of activity
{
	for(i=0;i<c;i++)
	{
		if(ch[i]=='\n')
		{
			k++;
		}
	}
  cout <<"Number of activity in the file:"<<k<<endl;
}
void unique_process()
{
	i=0;
	j=0;
	char act[50];int a=0;
do
{
  while((j<k)&&(ch[i]!=',')&&(i<c)) //stores all case id
    {
	(pr[j].caseid[p])=(ch[i]);
	i++;//increment operator of the loop
	p++;//increments case id array

	}
	i++;
	while(((j<k)&&(ch[i]!=','))&&((i<c)&&(l<10))) //stores all activity
    {
    	(pr[j].activity[l])=(ch[i]);
    	for(int d=0;d<a;d++)
        {
            if (ch[i]!=act[d])

            {
                act[a]=ch[i];
            }
        }
    	l++;//increments activity array
    	i++;
    	a++;
    }
    i++;
    j++;
    l=0;
    p=0;
    q=0;
}
cout<<"Unique activities are: "<<endl;
for(int d=0;d<a;d++)
    {
        cout<<act[d]<<endl;
    }

}

void no_of_case()
{
	for(j=0;j<k;j++)
	{
		p=0;
		while(((p<2)&&(pr[j].caseid[p])!=(pr[j+1].caseid[p]))&&(b<=30))
			{
				count++;
				p++;
				b++;
			}
     }
	cout <<"Number of cases in file:"<<count<<endl;
}
void follow(string f)
{
    if((f=="new")||(f=="waiting"))

        cout<<"ready"<<endl;
    if(f=="ready")
        cout<<"running"<<endl;
    if(f=="running")
        cout<<"terminated OR ready OR waiting"<<endl;
