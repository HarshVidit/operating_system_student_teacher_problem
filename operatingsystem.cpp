#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
class student
{
	public:
	int pen,paper,question_paper;	
};
class teacher
{
	public:
		int pen,paper,question_paper;
		teacher(int pen,int paper,int question_paper)
		{
			this->pen=pen;
			this->paper=paper;
			this->question_paper=question_paper;
		}
		
};
void processing()
{
	
}
int main()
{
	student obj[3];
	obj[1].pen=1;obj[1].paper=0;obj[1].question_paper=0;
	obj[2].pen=0;obj[2].paper=1;obj[2].question_paper=0;
	obj[3].pen=0;obj[3].paper=0;obj[3].question_paper=1;
	teacher t1(10,10,10);
	int n=1;
	int seq[3];
	printf("Enter the sequence of the students for resource allocation\n");
	for(int i=0;i<3;i++)
	{
		scanf("%d",&seq[i]);
	}
	while(n<10)
	{
	for(int i=0;i<3;i++)
	{
		if(seq[0]==1&&seq[1]==2&&seq[2]==3)
		{
		if(obj[seq[i]].paper==0&&obj[seq[i]].question_paper==0)
		{t1.paper=t1.paper-1;t1.question_paper=t1.question_paper-1;
		obj[seq[i]].paper=1;obj[seq[i]].question_paper=1;
		}
		if(obj[seq[i]].pen==0&&obj[seq[i]].question_paper==0)
		{
			t1.pen=t1.pen-1;t1.question_paper=t1.question_paper-1;
		obj[seq[i]].pen=1;obj[seq[i]].question_paper=1;
		}
		if(obj[seq[i]].pen==0&&obj[seq[i]].paper==0)
		{
			t1.pen=t1.pen-1;t1.paper=t1.paper-1;
		obj[seq[i]].paper=1;obj[seq[i]].pen=1;
		}
		if(obj[seq[i]].pen+obj[seq[i]].paper+obj[seq[i]].question_paper==3)
		printf("Resources have been allocated to Student %d\n",seq[i]);
		printf("Student %d has done his/her assignment\n",seq[i]);
		t1.paper=t1.paper+2;t1.pen=t1.pen+2;t1.question_paper=t1.question_paper+2;
	    }
	    if(seq[0]==1&&seq[1]==3&&seq[2]==2)
		{
		if(obj[seq[i]].paper==0&&obj[seq[i]].question_paper==0)
		{t1.paper=t1.paper-1;t1.question_paper=t1.question_paper-1;
		obj[seq[i]].paper=1;obj[seq[i]].question_paper=1;
		}
		if(obj[seq[i]].pen==0&&obj[seq[i]].question_paper==0)
		{
			t1.pen=t1.pen-1;t1.question_paper=t1.question_paper-1;
		obj[seq[i]].pen=1;obj[seq[i]].question_paper=1;
		}
		if(obj[seq[i]].pen==0&&obj[seq[i]].paper==0)
		{
			t1.pen=t1.pen-1;t1.paper=t1.paper-1;
		obj[seq[i]].paper=1;obj[seq[i]].pen=1;
		}
		if(obj[seq[i]].pen+obj[seq[i]].paper+obj[seq[i]].question_paper==3)
		printf("Resources have been allocated to Student %d\n",seq[i]);
		printf("Student %d has done his/her assignment\n",seq[i]);
		t1.paper=t1.paper+2;t1.pen=t1.pen+2;t1.question_paper=t1.question_paper+2;
	    }
	    if(seq[0]==2&&seq[1]==1&&seq[2]==3)
		{
		if(obj[seq[i]].paper==0&&obj[seq[i]].question_paper==0)
		{t1.paper=t1.paper-1;t1.question_paper=t1.question_paper-1;
		obj[seq[i]].paper=1;obj[seq[i]].question_paper=1;
		}
		if(obj[seq[i]].pen==0&&obj[seq[i]].question_paper==0)
		{
			t1.pen=t1.pen-1;t1.question_paper=t1.question_paper-1;
		obj[seq[i]].pen=1;obj[seq[i]].question_paper=1;
		}
		if(obj[seq[i]].pen==0&&obj[seq[i]].paper==0)
		{
			t1.pen=t1.pen-1;t1.paper=t1.paper-1;
		obj[seq[i]].paper=1;obj[seq[i]].pen=1;
		}
		if(obj[seq[i]].pen+obj[seq[i]].paper+obj[seq[i]].question_paper==3)
		printf("Resources have been allocated to Student %d\n",seq[i]);
		printf("Student %d has done his/her assignment\n",seq[i]);
		t1.paper=t1.paper+2;t1.pen=t1.pen+2;t1.question_paper=t1.question_paper+2;
	    }
	    if(seq[0]==2&&seq[1]==3&&seq[2]==1)
		{
		if(obj[seq[i]].paper==0&&obj[seq[i]].question_paper==0)
		{t1.paper=t1.paper-1;t1.question_paper=t1.question_paper-1;
		obj[seq[i]].paper=1;obj[seq[i]].question_paper=1;
		}
		if(obj[seq[i]].pen==0&&obj[seq[i]].question_paper==0)
		{
			t1.pen=t1.pen-1;t1.question_paper=t1.question_paper-1;
		obj[seq[i]].pen=1;obj[seq[i]].question_paper=1;
		}
		if(obj[seq[i]].pen==0&&obj[seq[i]].paper==0)
		{
			t1.pen=t1.pen-1;t1.paper=t1.paper-1;
		obj[seq[i]].paper=1;obj[seq[i]].pen=1;
		}
		if(obj[seq[i]].pen+obj[seq[i]].paper+obj[seq[i]].question_paper==3)
		printf("Resources have been allocated to Student %d\n",seq[i]);
		printf("Student %d has done his/her assignment\n",seq[i]);
		t1.paper=t1.paper+2;t1.pen=t1.pen+2;t1.question_paper=t1.question_paper+2;
	    }
	    if(seq[0]==3&&seq[1]==1&&seq[2]==2)
		{
		if(obj[seq[i]].paper==0&&obj[seq[i]].question_paper==0)
		{t1.paper=t1.paper-1;t1.question_paper=t1.question_paper-1;
		obj[seq[i]].paper=1;obj[seq[i]].question_paper=1;
		}
		if(obj[seq[i]].pen==0&&obj[seq[i]].question_paper==0)
		{
			t1.pen=t1.pen-1;t1.question_paper=t1.question_paper-1;
		obj[seq[i]].pen=1;obj[seq[i]].question_paper=1;
		}
		if(obj[seq[i]].pen==0&&obj[seq[i]].paper==0)
		{
			t1.pen=t1.pen-1;t1.paper=t1.paper-1;
		obj[seq[i]].paper=1;obj[seq[i]].pen=1;
		}
		if(obj[seq[i]].pen+obj[seq[i]].paper+obj[seq[i]].question_paper==3)
		printf("Resources have been allocated to Student %d\n",seq[i]);
		printf("Student %d has done his/her assignment\n",seq[i]);
		t1.paper=t1.paper+2;t1.pen=t1.pen+2;t1.question_paper=t1.question_paper+2;
	    }
	    if(seq[0]==3&&seq[1]==2&&seq[2]==1)
		{
		if(obj[seq[i]].paper==0&&obj[seq[i]].question_paper==0)
		{t1.paper=t1.paper-1;t1.question_paper=t1.question_paper-1;
		obj[seq[i]].paper=1;obj[seq[i]].question_paper=1;
		}
		if(obj[seq[i]].pen==0&&obj[seq[i]].question_paper==0)
		{
			t1.pen=t1.pen-1;t1.question_paper=t1.question_paper-1;
		obj[seq[i]].pen=1;obj[seq[i]].question_paper=1;
		}
		if(obj[seq[i]].pen==0&&obj[seq[i]].paper==0)
		{
			t1.pen=t1.pen-1;t1.paper=t1.paper-1;
		obj[seq[i]].paper=1;obj[seq[i]].pen=1;
		}
		if(obj[seq[i]].pen+obj[seq[i]].paper+obj[seq[i]].question_paper==3)
		printf("Resources have been allocated to Student %d\n",seq[i]);
		printf("Student %d has done his/her assignment\n",seq[i]);
		t1.paper=t1.paper+2;t1.pen=t1.pen+2;t1.question_paper=t1.question_paper+2;
	    }
	}
	n++;
}
}
