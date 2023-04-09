#include<iostream>
#include<unistd.h>
#include<stdlib.h>
using namespace std;
int main()
{
	int student[100];
	int teacher[100];
	int priority[100];
	int check1=0,check2=0,check3=0;
	char entered;
	char choice;
	int number_of_person;
	int n,j;
	cout<<"Enter the number of students.\n";
	cin>>n;
	j=n;
	for(int i=0;i<n;i++)
	{
		student[i]=1;
		check1++;
	}
	check3=check1;
	for(int i=0;i<n;i++)
	{
		
	student[i]=0;
	cout<<"Book has been published to student "<<i+1<<"\n";
	cout<<"Has anyone entered the queue.Type y for yes and n for no\n";
	cin>>entered;
	if(entered=='y')
	{
	goto inputfacility;	
	}
	else
	{
		continue;
	}
    }
    if(j==0)
    {
    inputfacility:
    	cout<<"Who has entered?Type t for teacher and s for student.\n";
    	cin>>choice;
    	if(choice=='t')
    	{
    		cout<<"How many teachers have entered?\n";
    	cin>>number_of_person;
    		for(int i=0;i<number_of_person;i++)
    		{
    			teacher[i+check2]=1;
			}
		}
		if(choice=='s')
		{
			cout<<"How many students have entered?\n";
    	cin>>number_of_person;
			for(int i=0;i<number_of_person;i++)
    		{
    			student[i+check1]=1;
    			check3++;
			}
			for(int i=0;i<check3;i++)
			{
				cout<<student[i]<<"  ";
			}
		}
}
	return 0;
}
