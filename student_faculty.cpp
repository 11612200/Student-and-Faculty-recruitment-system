#include<iostream>
#include<conio.h>
#include<fstream>
#include<stdio.h>
#include<string>
#include<cstdio>
#include<cstdlib>
#include<string.h>
int regno=16000;
int regnof=1000;
using namespace std;
 class student
  {
	int reg,age,x,sno;
	float p1,p2,p3,d,p;
//	string sname;
    char sname[20];
    char fname[20];
    char birth[20];
//	string crse;

	public:
		int retreg()
		{
			return reg;
		}
	void input()
	{ 
	
	   //  fflush(stdin);
	   rewind(stdin);
	     system("cls");
		cout<<"\n\n\n Enter the student name : ";
		gets(sname);
		cout<<"\n\nEnter your Father's name: ";
		gets(fname);
		cout<<"\n\nEnter your DOB : ";
		gets(birth);                                    //make changes...  date of birth cannot be less than 1994.
		
//	cin>>sname;
		cout<<endl<<"\n\n Enter your age : ";
		cin>>age;
	//	cout<<"\n\nEnter father's Name:";
		//
		 if(age<17||age>22)
		{
		 cout<<"\n\n\n\t\t\tXXXXXX    You are not eligible for admission     XXXXXX";
		 getch();
		 goto a;
	    }
	    system("cls");
	     cout<<endl<<"\n\n\n\n\t\t\t You are forwarded to ***  FIRST level  ***"<<endl;
	     getch();
	     first_level();
	    a:
	    cout<<endl;	
	}
	void first_level()
	{  system("cls");
	cout<<"\n\n\n\n\n\t\t\t-------------------------------------------------";
		cout<<"\n\n\t\t\t Enter your 10th percentage : ";
		cin>>p1;
		cout<<"\n\n\t\t\t--------------------------------------------";
		
		{
		
		if(p1<60)
		{
		cout<<"\n\n\n\t\t\tXXXXX   YOU ARE NOT ELIGIBLE FOR ADMISSION    XXXXX ";
		goto s;
		}
	    }
	    cout<<"\n\n\n\t\t\t-------------------------------------------";
		cout<<"\n\n\n\t\t\t Enter your 12th percentage : ";
		cin>>p2;
		if(p2<60)
		{
		cout<<"\t\t\t\n\n\nXXXXXYOU ARE NOT ELIGIBLE FOR ADMISSION    XXXXX";
		goto s;
		}
	//	getch();
	//	else
	//	{
		system("cls");
		cout<<"\n\n\n\n\t\t\t--------------------------------------";
		cout<<"\n\t\t\t| You are forwarded to SECOND LEVEL  |"<<endl;
		cout<<"\t\t\t--------------------------------------";
		getch();
	//	cout<<"\n\n\n\n\t\t\t\t  which course you want to Opt";
		courses();
		system("cls");
		cout<<"\n\n\n\t\t\t -------------";
		cout<<"\n\t\t\t| THIRD LEVEL |";
		cout<<"\n\t\t\t -------------";
		cout<<"\n\n\n\t\t You have to qualify   LPU_NEST   exam ";
		getch();
		LPU_NEST();
	//	}
		s:
			cout<<endl;
			
	}
   
   void LPU_NEST()
    {
    	cout<<"\n\n\n\n\n\t If u score more than 70 you will be provided scholarship"<<endl;
    	getch();
    	system("cls");
   	    cout<<"\n\n\n\n\t\t\t ||  LPU NEST   ||"<<endl;
   	    getch();
   	    system("cls");
     	cout<<"\n\n\n\n\t\t\t TEST COMPLETED";
     	getch();
     	system("cls");
   	    cout<<"\n\n\n\n\t\t\t Enter your percentage You got: ";
   	    cin>>p3;
    if(p3<40)
   	{ system("cls");
  		cout<<"\n\n\n\n\n XXXXXX  YOU FAILED IN EXAM !!!  XXXXXXX"<<endl;
	    cout<<"\n\n\n YOU ARE NOT ELIGIBLE FOR ADMISSION"<<endl;
	    getch();
	    goto s;
    }
    else if(p3>40&&p3<70)
    {
    	system("cls");
    	cout<<"\n\n\n\t\t\t------------------";
        cout<<"\n\t\t\t| YOU PASSED !!! |";
        cout<<"\n\t\t\t------------------";
        cout<<"\n\n\n\t\t\t No Scholarship will be provided"<<endl;
        d=0;
        getch();
        fees_calculate();
    }
    else if(p3>=70&&p3<80)
    {
    	system("cls");
    	cout<<"\n\n\n\t\t\t------------------";
        cout<<"\n\t\t\t| YOU PASSED !!! |";
        cout<<"\n\t\t\t------------------";
   	    cout<<"\n\n\n\t\t\t CONGRATS!!! You will get 20% scholarship"<<endl;
   	    d=20;
		   getch();
   	    fees_calculate();
    } 
    else if(p3>=80&&p3<90)
    {
    	system("cls");
   	        	cout<<"\n\n\n\t\t\t------------------";
        cout<<"\n\t\t\t| YOU PASSED !!! |";
        cout<<"\n\t\t\t------------------";
   	    cout<<"\n\n\n\t\t\t CONGRATS!!!  You will get 30% scholarship"<<endl;
   	    d=30;
   	   getch(); 
	   fees_calculate();
    } 
    else if(p3>=90&&p3<100)
    {
    	system("cls");
   	        	cout<<"\n\n\n\t\t\t------------------";
        cout<<"\n\t\t\t| YOU PASSED !!! |";
        cout<<"\n\t\t\t------------------";
   	    cout<<"\n\n\n\t\t\t CONGRATS!!!  You will get 50% scholarship"<<endl;
   	    d=50;
   	    getch();
	   fees_calculate();
    }
    s:
   	    cout<<endl;
   }    
    void fees_calculate()
    {
    	if(x==1)
    	{
    		if(d==0)
    		{
    			cout<<"\n\n\nYOUR FEES IS---"<<230000<<" /-";
			}
			else
    		{
   		//	p=230000/2;
			p=230000-(d/100)*230000;
    		cout<<"\n\nYour actual Fees was: 230000 /-    but";
    		cout<<"\n\n\n  YOUR FEES AFTER SCHOLARSHIP IS ----  "<<p<< "/-";
    	    }
		}
		    	else if(x==2)
    	{
    		
    			if(d==0)
    		{
    			
    			cout<<"\n\n\nYOUR FEES IS---"<<200000<<" /-";
			}
			else
    		{
			p=200000-d/100*200000;
			cout<<"\n\nYour actual Fees was: 200000 /-    but";
    		cout<<"\n\n  YOUR FEES AFTER SCHOLARSHIP IS ----  "<<p<< "/-";
    	    }
		}
		    	else if(x==3)
    	{
    			if(d==0)
    		{
    			cout<<"\n\n\nYOUR FEES IS---"<<220000<<" /-";
			}
			else
    		{
			p=220000-d/100*220000;
			cout<<"\n\nYour actual Fees was: 220000 /-    but";
    		cout<<"\n\n  YOUR FEES AFTER SCHOLARSHIP IS ----  "<<p<< "/-";
    	    }
		}
		    	else if(x==4)
    	{
    			if(d==0)
    		{
    			cout<<"\n\n\nYOUR FEES IS---"<<190000<<" /-";
			}
			else
    		{
			p=190000-d/100*190000;
			cout<<"\n\nYour actual Fees was: 190000 /-    but";
    		cout<<"\n\n  YOUR FEES AFTER SCHOLARSHIP IS ----  "<<p<< "/-";
    	    }
		}
		    	else if(x==5)
    	{
    			if(d==0)
    		{
    			cout<<"\n\n\nYOUR FEES IS---"<<190000<<" /-";
			}
			else
    		{
			p=190000-d/100*190000;
			cout<<"\n\nYour actual Fees was: 190000 /-    but";
    		cout<<"\n\n  YOUR FEES AFTER SCHOLARSHIP IS ----  "<<p<< "/-";
    	    }
		}
		    	else if(x==6)
    	{
    			if(d==0)
    		{
    			cout<<"\n\n\nYOUR FEES IS---"<<200000<<" /-";
			}
			else
    		{
			p=200000-d/100*200000;
			cout<<"\n\nYour actual Fees was: 200000 /-    but";
    		cout<<"\n\n  YOUR FEES AFTER SCHOLARSHIP IS ----  "<<p<< "/-";
    	    }

		}
		    	else if(x==7)
    	{
    			if(d==0)
    		{
    			cout<<"\n\n\nYOUR FEES IS---"<<150000<<" /-";
			}
			else
    		{
			p=150000-d/100*150000;
			cout<<"\n\nYour actual Fees was: 150000 /-    but";
    		cout<<"\n\n  YOUR FEES AFTER SCHOLARSHIP IS ----  "<<p<< "/-";
    	    }
		}
		getch();
		cout<<"\n\n\n\nYour registration no. is : "<<regno;
		cout<<"\n\n\nEnter this no. again : ";
		n:
		cin>>reg;
		if(reg!=regno)
		{
			cout<<"\n Wrong..\n Enter Correctly : ";
			goto n;
		}
		regno++;
		system("cls");
	
		
		system("COLOR 61");
		cout<<"\n\n\t\t\t!!!!  C O N G R A T S   !!!!";
		cout<<"\n\n\n\n\n\n\t\t------ A D M I S S I O N     C O M P L E T E-------";
	    
		getch();
	
	}
   
   void display()
   { 
   system("cls");
   	cout<<"\nRegistration Number :"<<reg;
   	cout<<"\n Student's Name : "<<sname;
   	cout<<"\n Father's Name  : "<<fname;
   	cout<<"\n Age            : "<<age;
   	cout<<"\n DOB            : "<<birth;
    if(x==1)
	cout<<"\nCourse          : "<<"B.TECH";
    else if(x==2)
    cout<<"\nCourse          : "<<"B.Com";
   	else if(x==3)
    cout<<"\nCourse          : "<<"BBA";
    else if(x==4)
    cout<<"\nCourse          : "<<"Bio Tech";
    else if(x==5)
    cout<<"\nCourse          : "<<"Fashion";
    else if(x==6)
    cout<<"\nCourse          : "<<"Architecture";
    else if(x==7)
    cout<<"\nCourse          : "<<"Hotel Management";
   }
   
   void courses()
   {
 // 	do
//	{
	
   		p:
	system("cls");
	cout<<"\n\n\t\t\t\t  Which course you want to Opt  ???\n\n\n";
  	cout<<"\n1) B.Tech.";           
  	cout<<"\n2) B.Com.";             
  	cout<<"\n3) BBA";              
  	cout<<"\n4) Bio Tech. ";       
  	cout<<"\n5) Fashion ";            
  	cout<<"\n6) Architecture";        
  	cout<<"\n7) Hotel Management";
    
    cout<<"\n\n\n\nEnter your course: ";
	  cin>>x; 
	  switch(x)
	  {
	  	    case 1:
	  		cout<<"\n\n\nYou have seletecd  B.TECH.";
	  		getch();
	  		break;
	  		case 2:
	  		cout<<"\n\n\nYou have seletecd  B.COM.";
	  		getch();
	        break;	
  			case 3:
	  		cout<<"\n\n\nYou have seletecd  BBA";
	  		getch();
	  		break;
	  			case 4:
	  		cout<<"\n\n\nYou have seletecd  Bio TECH.";
	  		getch();
	  		break;
	  			case 5:
	  		cout<<"\n\n\nYou have seletecd  FASHION";
	  		getch();
	  		break;
	  			case 6:
	  		cout<<"\n\n\nYou have seletecd  ARCHITECTURE";
	  		getch();
	  		break;
	  			case 7:
	  		cout<<"\n\n\nYou have seletecd  HOTEL MANAGEMENT";
	  		getch();
	  		break;	
	  		default:
	  			cout<<"\n\nXXXX Invalid Entry   XXXXX"<<cout<<"\n\n enter your couse again";
	  			getch();
	  			goto p;
		}
 // }while(x>=1&&x<=7);
   }
   
      void courses_display()             
   {                                 
	system("cls");                   
	cout<<"\n\n\t\t\t\t  --------- COURSES  PROVIDED-------------\n\n\n";
  	cout<<"\n1) B.Tech.";             
  	cout<<"\n2) B.Com.";              
  	cout<<"\n3) BBA";                 
  	cout<<"\n4) Bio Tech. ";          
  	cout<<"\n5) Fashion ";            
  	cout<<"\n6) Architecture";        
  	cout<<"\n7) Hotel Management";    
  	getch();
   }

};

   void writefile_student()
   {
	ofstream wr("stud.cpp",ios::out|ios::binary);
	char ch;
	student s;
	do
	{
		
		s.input();
		wr.write((char*)&s,sizeof(s));
		cout<<"want to add more record(y/n)"<<"\n";
		cin>>ch;
	    
	 
	}
	while(ch=='y');
    }
    void readfile_student()
    {
   	student s;
    	ifstream rd("stud.cpp",ios::in|ios::binary);
    	while(rd.read((char*)&s,sizeof(s)))
    	{
    		s.display();
		}
		rd.close();
	
	}

void search_student()
{
	system("cls");
	int sno;
	student s;
	cout<<"\n\n\nEnter The Students's Reg. No. to be searched : ";
	cin>>sno;
	ifstream rd("stud.cpp",ios::in|ios::binary);
	while(rd.read((char*)&s,sizeof(s)))
	{
	
	if(sno==s.retreg())
	{
		s.display();
	}
    }
    rd.close();
    
}
	
  void fee_structure()
  { system("cls");
  	cout<<"\n1) B.Tech.              :  2,30,000 p/a";
  	cout<<"\n2) B.Com.               :  2,00,000 p/a";
  	cout<<"\n3) BBA                  :  2,20,000 p/a";
  	cout<<"\n4) Bio Tech.            :  1,90,000 p/a";
  	cout<<"\n5) Fashion              :  1,90,000 p/a";
  	cout<<"\n6) Architecture         :  2,00,000 p/a";
  	cout<<"\n7) Hotel Management     :  1,50,000 p/a";
  	getch();
  }
  
  
  class faculty

  {

  	int no,age,reg;
  	char ffname[20],dept[20],sub[20];
  	float m,m1,m2;
  	int x,y,z,r,e,f,h,i,j,k,l;
  	char g;
  	public:
  		int retreg()
  		{
  			return reg;
		  }
  			void display_faculty()
	{
		system("cls");
		cout<<"\n\n\nName:"<<ffname;
		cout<<"\n\nAge:"<<age;
		cout<<"\n\nDepartment : "<<dept;
		cout<<"\n\nSpecialisation : "<<sub;
		getch();
	}
  		void input_faculty()
	{ 
	     rewind(stdin);
	     system("cls");
		cout<<"\n\n\n Enter the you name : ";
		gets(ffname);
		cout<<endl<<"\n\n Enter your age : ";
		cin>>age;

		 if(age<17||age>47)
		{
		 cout<<"\n\n\n\t\t\tXXXXXX    You are not eligible for JOB     XXXXXX";
		 getch();
		 goto a;
	    }

	    system("cls");
	    e:
	    cout<<" In which Department you want to teach: ";
	    
	    
	    	cout<<"\n\n\n1. B.Tech";
	    	cout<<"\n2. B.Com";
	    	cout<<"\n3. BBA";
	    	cout<<"\n4. Bio. Tech";
	    	cout<<"\n\n\n Enter Your Choice : ";
	    	cin>>x;
	    	switch(x)
	    	{
	    		case 1:
	    			cout<<" Which Subject You are specialised to choose :";
                        strcpy(dept,"B.Tech");	    			
	    				cout<<"\n1. Mathematics";
	    				cout<<"\n2. C++";
	    				cout<<"\n3. Physics";
	    				cout<<"\n4. Mechanics";
	    				cout<<"\n\nEnter Your Choice : ";
	    				b:
						cin>>z;
	    				switch(z)
	    				{
	    				case 1:
					    cout<<"  MATHEMATICS";
					    strcpy(sub,"Mathematics");
						getch();
						break;
						case 2:
							cout<<"  C++";
							strcpy(sub,"C++");
							break;
							getch();
						case 3:
						cout<<"  PHYSICS";
						strcpy(sub,"Physics");
						getch();
						break;
						case 4:
						cout<<"  MECHANICS";
						strcpy(sub,"Mechanics");
						getch();
						break;
						default: 
						cout<<"  Wrong Entry";
						cout<<"\n\n enter the number again : ";
						goto b;
						}
					
	    			getch();
					break;
			case 2: 
			         strcpy(dept,"B.com");
	    			cout<<" Which Subject You are specialised to choose :";
	    			cout<<"\n\n\n 1.Mathematics";
	    			cout<<"\n2.Economics";
	    			cout<<"\n3.Business";
	    			cout<<"\n4.Accounts";
	    			cout<<"\n\nEnter Your Choice : ";
	    			cin>>z;
	    				switch(z)
	    				{
	    				case 1:
					    cout<<"  MATHEMATICS";
					    strcpy(sub,"Mathematics");
						getch();
						break;
						case 2:
							cout<<"  ECONOMICS";
							strcpy(sub,"Economics");
							getch();
							break;
							
						case 3:
						cout<<"  BUSINESS";
						strcpy(sub,"Business");
						getch();
						break;
						case 4:
						cout<<"  ACCOUNTS";
						strcpy(sub,"Accounts");
						getch();
						break;
						default: 
						cout<<"  Wrong Entry";
						cout<<"\n\n enter the number again : ";
						goto b;
						}
					
				getch();
				break;
			case 3:
				strcpy(dept,"BBA");
					    			cout<<" Which Subject You are specialised to choose :";
	    			cout<<"\n\n\n 1.Mathematics";
	    			cout<<"\n2.Economics";
	    			cout<<"\n3.Business";
	    			cout<<"\n4.Soft Skills";
	    			cout<<"\n\nEnter Your Choice : ";
	    			cin>>z;
	    				switch(z)
	    				{
	    				case 1:
					    cout<<"  MATHEMATICS";
					    strcpy(sub,"Mathematics");
						getch();
						break;
						case 2:
							cout<<"  ECONOMICS";
							strcpy(sub,"Economics");
							getch();
							break;
							
						case 3:
						cout<<"  BUSINESS";
						strcpy(sub,"Business");
						getch();
						break;
						case 4:
						cout<<"  SOFT SKILLS";
						strcpy(sub,"Soft Skills");
						getch();
						break;
						default: 
						cout<<"  Wrong Entry";
						cout<<"\n\n enter the number again : ";
						goto b;
						}
			getch();
			break;
			case 4:
				strcpy(dept,"Bio Tech");
					    			cout<<" Which Subject You are specialised to choose :";
	    			cout<<"\n\n\n 1.Mathematics";
	    			cout<<"\n2.Zoology";
	    			cout<<"\n3.Botany";
	    			cout<<"\n4.Chemistry";
	    			cout<<"\n\nEnter Your Choice : ";
	    			cin>>z;
	    				switch(z)
	    				{
	    				case 1:
					    cout<<"  MATHEMATICS";
					    strcpy(sub,"Mathematics");
						getch();
						break;
						case 2:
							cout<<"  Zoology";
							strcpy(sub,"Zoology");
							getch();
							break;
						case 3:
						cout<<"  Botany";
						strcpy(sub,"Botany");
						getch();
						break;
						case 4:
						cout<<"  Chemistry";
						strcpy(sub,"Chemistry");
						getch();
						break;
						default: 
						cout<<"  Wrong Entry";
						cout<<"\n\n enter the number again : ";
						goto b;
					}
		getch();
		break;
		default:
			cout<<"\n\nWrong Entry";
			cout<<" \n\n Enter agian";
			goto e;
	}
		system("cls");
	    		cout<<"\n\n  MASTER DEGREES : "; 
		
			s:
			cout<<"\n\n1.Mtech";
			cout<<"\n\n2.Phd.";
			cout<<"\n\n3.MSc.";
			cout<<"Enter your Master Degree: ";
			cin>>x;
			switch(x)
			{
				case 1:
					cout<<"Mtech";
					getch();
					break;
				case 2:
					cout<<"Phd.";
					getch();
					break;
			    default :
				cout<<"\n\n Wrong choice";
				goto s;	
		    }
		    	    cout<<"\n\nEnter Your Experience (at least 3 years is reqiured) : ";
   	 cin>>f;
   	 if(f<3)
   	 {
 	   	cout<<"\n\nXXX   You Are Not Elligible for this Job   XXX";
 	   	goto a;
	 }
	    system("cls");
	     cout<<endl<<"\n\n\n\n\t\t\t You are forwarded to ***  FIRST level  ***"<<endl;
	     getch();
	     first_level();
	    a:
	    cout<<endl;	
	
}

  	void first_level()
  	{
  	system("cls");
  	cout<<"\n\n\nYou Have To Pass A   WRITTEN TEST  ";
  	getch();
	  system("cls");
  	cout<<"\n\n\n\n\t\t\t--------------------------";
  	cout<<"\n\t\t\t|    WRTITTEN   TEST     |";
  	cout<<"\n\t\t\t--------------------------";
  	getch();
	  system("cls");
  	getch();
	cout<<"\n\n\n\n\t\t\t--------  !!!   TEST  COMPLETE   !!!---------";
	getch();
	system("cls");
	cout<<"\n\n\n\t\t\tEnter the marks obtained:";
	cin>>m; 
	if(m>70)
	{
		system("cls");
		cout<<"\n\n\n\n\t\t\t*****     Qualified    *****" ;
		cout<<"\n\n\n\t\t\tYou are headed towards next level";
		getch();
		system("cls");
		cout<<"\n\n\n\t\t\tYou Have To Pass Three Interviews";
		getch();
		first_interview();
		s:
			cout<<endl;
	 }
	 else
	 {
	 	system("cls");
	 	cout<<"\n\n\n\n\t\t\tX X X X     F A I L E D     X X X X ";
         getch();
         goto s;
	 	
	  } 	
    }
    void first_interview()
    {
    	system("cls");
    	cout<<"\n\n\n\t\t F I R S T     I N T E R V I E W";
    	cout<<"\n\n\n\t\t------ TECHNICAL INTERVIEW------ ";
    	getch();
    	system("cls");
    	cout<<"\n\n\n\t\t\tEnter your reviews marks( 0ut of 10 ): ";
    	cin>>m1; 
    	if(m1<7)
    	{
   		system("cls");
   		cout<<"\n\n\n\n\t\t\t X X X X     F A I L E D    X X X X  ";
   		getch();
   		goto a;
   	}
   		else
   		{
 			system("cls");
 			cout<<"\n\n\n\t\t\t---------  !!!! P A S S E D  !!!!  -------------";
 			getch();
 			system("cls");
 			cout<<"\n\n\nYou are headed towards second Level";
 			second_interview();
 			
		   }
   		a:
   			cout<<endl;
	}


    void second_interview()
    {
    	system("cls");
    	cout<<"\n\n\n\t\t S E C O N D     I N T E R V I E W";
    	getch();
    	system("cls");
    	cout<<"\n\n\n\t\t\tEnter your reviews marks( 0ut of 10 ): ";
    	cin>>m2; 
    	if(m2<8)
    	{
   		system("cls");
   		cout<<"\n\n\n\n\t\t\t X X X X     F A I L E D    X X X X  ";
   		getch();
   		goto b;
   	}
   		else
   		{
 			system("cls");
 			cout<<"\n\n\n\t\t\t---------  !!!! P A S S E D  !!!!  -------------";
 			getch();
			
 			cout<<"\n\n\nYou are headed towards THIRD Level";
 			third_interview();
 			
		   }
   		b:
   			cout<<endl;
	}
  	   
  
  
      void third_interview()
    {
    	system("cls");
    	cout<<"\n\n\n\t\t T  H I R D     I N T E R V I E W";
    	getch();
    	system("cls");
    	cout<<"\n\n\n\t\t\tEnter your reviews  Grades(A-E) : ";
    	cin>>g; 
    
   		if(g=='A'||g=='a')
   		{
 			system("cls");
 			system("COLOR 61");
 			cout<<"\n\n\n\t\t\t---------  !!!! P A S S E D  !!!!  -------------";
 			getch();	
 			system("cls");
 			cout<<"\n\n\n\n \t\t\t!!!!     C O N G R T U L A T I O N S     !!!!!";
 			getch();
 			
 			cout<<"\n\n\n Your Registration No. is: "<<regnof;
 			cout<<"\n\nEnter this No. again: ";
 			n:
			 cin>>reg;
 					if(reg!=regnof)
		{
			cout<<"\n Wrong..\n Enter Correctly : ";
			goto n;
		}
		regnof++;
 			system("cls");
 			system("COLOR 61");
 			cout<<"\n\n\n\n\t\t\t YOU GOT THE JOB ";
 			getch();
 			
		   }
		   	else
    	{
   		system("cls");
   		cout<<"\n\n\n\n\t\t\t X X X X     F A I L E D    X X X X  ";
   		getch();
   		goto c;
        }
   		c:
   			cout<<endl;
	}
	

	
};
void search_faculty()
{
	system("cls");
	int sno;
	faculty f;
	cout<<"\n\n\nEnter The Faculty's Reg. No. to be searched : ";
	cin>>sno;
	ifstream rd("faculty.cpp",ios::in|ios::binary);
	while(rd.read((char*)&f,sizeof(f)))
	{
	
	if(sno==f.retreg())
	{
		f.display_faculty();
	}
    }
    rd.close();
    
}
	
   void writefile_faculty()
   {
	ofstream wr("faculty.cpp",ios::out|ios::binary);
	char ch;
	faculty f;
	do
	{
		
		f.input_faculty();
		wr.write((char*)&f,sizeof(f));
		cout<<"want to add more record(y/n)"<<"\n";
		cin>>ch;
	    
	 
	}
	while(ch=='y');
    }
    void readfile_faculty()
    {
   	faculty f;
    	ifstream rd("faculty.cpp",ios::in|ios::binary);
    	while(rd.read((char*)&f,sizeof(f)))
    	{
    		f.display_faculty();
		}
		rd.close();
	
	}
  
  int main()
  {
	int x,y,z;
	//fstream f1,f2;
	student s1;
	faculty f;
	system("cls");
	system("COLOR 50");//47
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t L O V E L Y\t P R O F E S S I O N A L "<<"\n\n\n";
	cout<<"\t\t\t\t U N I V E R S I T Y";
	getch();
	 do
	 {
	 	system("COLOR 47");
	 	d:
		s:
		v:	
		system("cls");
		cout<<"\n\n\n\n\n\t\t\t------------------------------------"<<"\n";
		cout<<"\t\t\t|  UNIVERSITY RECRUITMENT SYSTEM   |"<<"\n";
     	cout<<"\t\t\t------------------------------------"<<"\n";
		 cout<<endl<<endl<<endl<<"\t\t\t1. student scruitny";
	    cout<<endl<<endl<<"\t\t\t2. Faculty scruitny";
	    cout<<endl<<endl<<"\t\t\t3. EXIT";
        cout<<endl<<endl<<"\t\t\t Enter  your  choice :_____ ";
        cin>>x;
    
	    switch(x)
	    {
		 case 1:
		 	do
		 	{
		 system("COLOR 47");
		 	//s1.input();
		//	writefile_student();
			//readfile_student();
			p:
			system("cls");
			cout<<"\n\n\-------------------------------F O R     S T U D E N T----------------------";
			cout<<"\n\n\n\n\n\t\t\t1. Taking addmission";
			cout<<"\n\t\t\t2. Fee Structure";
			cout<<"\n\t\t\t3. Courses Provided";
			cout<<"\n\t\t\t4.Record of Students";
			cout<<"\n\t\t\t5.Search ";
			cout<<"\n\t\t\t6. Main Menu";
			cout<<"\n\t\t\t7. EXIT";
			   cout<<"\n\n\n\t\t\t Enter Your choice :";
			   cin>>y;
			   
			   switch(y)
			   {
			   	case 1:
			   	//	s1.input();
			   	system("COLOR 47");
			  	writefile_student();
			   		getch();
			   		break;
			   		case 2:
			   			system("COLOR 47");
			   			fee_structure();
			   			getch();
			   			break;
		   			case 3:
		   				system("cls");
		   				system("COLOR 47");
			   		s1.courses_display();
					   getch();
					   break;
					case 4:
				//	s1.display();
				     system("cls");
				     system("COLOR 47");
					readfile_student();
					getch();
					break;
					case 5:
						system("COLOR 47");
						search_student();
						getch();
						break;
					case 6:
						system("COLOR 47");
					goto d;
					getch();
					break;
					system("COLOR 47");
					case 7:
					exit(0);
					default:
					goto p;		
			   }
		}while(y>=1&&y<=7);
			getch();
			break;
				
	     case 2:
	     	do
	     	{
	     		system("cls");
		     cout<<"\n\n\n1.Apply";
		     cout<<"\n2.Display record";
		     cout<<"\n3.Search";
		     cout<<"\n4.Main Menu";
		     cout<<"\n5.EXIT";
		     cout<<"\n\n\n Enter Your Choice:";
		     cin>>z;
		     switch(z)
		     {
			 case 1:
	         //f.input_faculty(); 
	         system("COLOR 47");
	         writefile_faculty();
	    	getch();
	    	break;
	    	case 2:
	    	//	f.display_faculty();
	    	system("COLOR 47");
	    	readfile_faculty();
				getch();
	    		break;
	    		case 3:
	    			system("COLOR 47");
	    			search_faculty();
	    			getch();
	    			break;
    		case 4:
    			system("COLOR 47");
    			goto v;
				getch();
				break;
			case 5:
			   exit(0); 
	    }
	    }while(z>=1&&z<=5);
	    getch();
	    break;
	    case 3:
	    	exit(0);
	     default:
          	cout<<endl<<endl<<"Wrong chioce   .... choose again..";
         	getch();
	    	goto s;
        }
    }while(x>=1&&x<=3);
 getch();
}
 
