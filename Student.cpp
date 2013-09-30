#include "stdafx.h"
#include <iostream>
using namespace std;

/*void list();
void add();
void sweep();
void write();*/
int studentCount = 0;
struct Student{
		char name[25];
		char course[20];
		int num;
		int grade;
	
	}students[100];

void list(){
	while (studentCount == 0 )
	{
		cout<<"There's no anyone.";
		break;
	}
		
	cout<<"学号\t"<<"姓名\t"<<"所选科目\t"<<"成绩"<<endl;
	for(int i=0;i<studentCount;i++)
	{
		cout<<students[i].num<<"\t"<<students[i].name<<"\t"<<students[i].course<<"\t\t"
		    <<students[i].grade<<endl;
	}
}//显示学生名单。
int find(char *name){
         int i;
		 for(i=0;i<studentCount;i++)
		 {
			 if(strcmp(students[i].name,name) == 0)
				 break;
		 }
		 return i;
}//按名字查找

void input(struct Student &student){
	cout<<"请输入您的学号："; 
	cin>>student.num;
	
	cout<<endl<<"请输入您的姓名：";
	cin>>student.name;
	
   	cout<<endl<<"请输入你要选择的科目：" ; 
	cin>>student.course;
}
void add(){
	struct Student student;
    input (student);

	int i = find(student.name);
	if(i == studentCount){
		strcpy_s(students[i].name,student.name);
		strcpy_s(students[i].course,student.course);
		students[i].num=student.num;
	}else cout<<"You'v selected your course.";
	studentCount++;
	
	
}

void sweep(){
	struct Student student;
	input(student);
	int i = find(student.name);

   char *p = students[i].name;
	p = NULL;//此处用指针代替char数组 
	
	studentCount--;
}

int findNum(int num)
{
	int i;
	for(i=0;i<=studentCount;i++)
	{
		if(!students[i].num == num)
		break;
	}
	return i;
}
void write(){
	struct Student student;
	
	int choice;
    
	
	cout<<"请输入您的学号:";
	cin>>student.num;
	
	int i = findNum(student.num);
	cout<<endl<<"请输入您的成绩:";
	cin>>student.grade;

	if(!i == studentCount)
	{
		students[i].num = student.num;
		students[i].grade = student.grade;
	}
	else cout<<"There isn't the student.";
	
	cout<<"---是否继续?---"<<endl;
	cout<<"---1.Yes.---"<< endl;
	cout<<"---2.No.---"<<endl;
    cin>>choice;
    switch(choice){
    	case 1:
    	 		write();
    	 		break;
		case 2: 
				break;
		default :
		        cout<<"Error!!!!!";
		        break;
    }
}

int main(int argc, char *argv[])
{
  do{
	cout<<endl<<"---------菜单--------"<<endl; 
	cout<<"1)查看学生名单"<<endl;
	cout<<"2)选课"<<endl;
	cout<<"3)退选"<<endl;
	cout<<"4)录入成绩"<<endl;
	cout<<"5)退出程序"<<endl;
	
	int action;
	cin>>action;
	
	
		switch(action)
		{
	        case 1:
	               list();
	               break;
  			
  			case 2:
		           add();
		           break;
            
			case 3:
			       sweep();
				   break; 
				   
     		case 4:
   				   write();
   				   break;
			
			case 5:
  			       return 0;
  			       
            default:
                    cout<<"输入错误，请重新输入。"<<endl; 
                    break;
		}
	}while(1);
	return 0;
}
