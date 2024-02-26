#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>



using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void login();
void course_detai();
void RedHat_Certification();
void Java_Certification();
void Azure_Certification();
void ASPDotNet_Certiication();
void subject_selection();
void about();
void registration();
void student_management();
void logout();
void sub_main();
void exit();

//int main()
//{
//	void login();
//	cout<<"loging Complete !"<<endl;
//	return 0;	
//}

main()
{
	login();
	int value;
	while(true)
	{
	//cout<<"    1. Login             "<<endl;
	cout<<"    1. Course details    "<<endl;
	cout<<"    2. Subject Checker   "<<endl;
	cout<<"    3. About Institute   "<<endl;
	cout<<"    4. Register          "<<endl;
	cout<<"    5. Student Management"<<endl;
	cout<<"    6. Log Out           "<<endl;
	cout<<"    7. Exit              "<<endl;
	cin>>value;
	switch(value)
	{
//		case 1:
//			login();
//			system("cls");
//			break;
		case 1:
			system("cls");
			course_detai();
				int val;
				while(true)
				{
					//system("cls");
					cout<<"Enter the Subject Value";
					cout<<" "<<endl;
					cout<<" "<<endl;
					cout<<"1. Java"<<endl;
					cout<<"2.Azure"<<endl;
					cout<<"3.ASP.Net"<<endl;
					cout<<"4.RedHat"<<endl;
					cout<<" "<<endl;
					cout<<" "<<endl;
					cout<<"5.Back"<<endl;
					cin>>val;
					switch(val)
					{
						case 1:
							cout<<" "<<endl;
							cout<<" "<<endl;
							Java_Certification();
							system("cls");
							break;
						case 2:
							cout<<" "<<endl;
							cout<<" "<<endl;
							Azure_Certification();
							system("cls");
							break;
						case 3:
							cout<<" "<<endl;
							cout<<" "<<endl;
							ASPDotNet_Certiication();
							system("cls");
							break;
						case 4:
							cout<<" "<<endl;
							cout<<" "<<endl;
							RedHat_Certification();
							system("cls");
							break;
						case 5:
							cout<<" "<<endl;
							cout<<" "<<endl;
							//course_detai();
							system("cls");
							main();
							
							//system("pause");
							break;
						default:
							cout<<"Invalid Input"<<endl;
							main();
							break;
					}
				}
			system("cls");
			break;
		case 2:
			subject_selection();
			system("cls");
			break;
		case 3:
			about();
			//system("cls");
			break;
		case 4:
			registration();
			system("cls");
			break;
		case 5:
			student_management();
			system("cls");
			break;
		case 6:
			logout();
			system("cls");
			break;
		case 7:
			//exit();
			system("cls");
			//sub_main();
			cout<<"Thank You Come Again !"<<endl;
			//system("cls");
			break;
		default:
			cout<<"Invalid Input"<<endl;
			break;
			
	}
	}
}

void sub_main()
{
	int value;
	while(true)
	{
	//cout<<"    1. Login             "<<endl;
	cout<<"    1. Course details    "<<endl;
	cout<<"    2. Subject Checker   "<<endl;
	cout<<"    3. About Institute   "<<endl;
	cout<<"    4. Register          "<<endl;
	cout<<"    5. Student Management"<<endl;
	cout<<"    6. Log Out           "<<endl;
	cout<<"    7. Exit              "<<endl;
	cin>>value;
	switch(value)
	{
//		case 1:
//			login();
//			system("cls");
//			break;
		case 1:
			course_detai();
				int val;
				while(true)
				{
					system("cls");
					cout<<"Enter the Subject Value";
					cout<<" "<<endl;
					cout<<" "<<endl;
					cout<<"1. Java"<<endl;
					cout<<"2.Azure"<<endl;
					cout<<"3.ASP.Net"<<endl;
					cout<<"4.RedHat"<<endl;
					cout<<" "<<endl;
					cout<<" "<<endl;
					cout<<"5.Back"<<endl;
					cin>>val;
					switch(val)
					{
						case 1:
							cout<<" "<<endl;
							cout<<" "<<endl;
							Java_Certification();
							//system("cls");
							break;
						case 2:
							cout<<" "<<endl;
							cout<<" "<<endl;
							Azure_Certification();
							//system("cls");
							break;
						case 3:
							cout<<" "<<endl;
							cout<<" "<<endl;
							ASPDotNet_Certiication();
							//system("cls");
							break;
						case 4:
							cout<<" "<<endl;
							cout<<" "<<endl;
							RedHat_Certification();
							//system("cls");
							break;
						case 5:
							cout<<" "<<endl;
							cout<<" "<<endl;
							//course_detai();
							//system("cls");
							sub_main();
							//main();
							
							//system("pause");
							break;
						default:
							cout<<"Invalid Input"<<endl;
							main();
							break;
					}
				}
			system("cls");
			break;
		case 2:
			subject_selection();
			system("cls");
			break;
		case 3:
			about();
			system("cls");
			break;
		case 4:
			registration();
			system("cls");
			break;
		case 5:
			student_management();
			system("cls");
			break;
		case 6:
			logout();
			system("cls");
			break;
		case 7:
			exit();
			//cout<<"Thank You Come Again !"<<endl;
			//system("cls");
			break;
		default:
			cout<<"Invalid Input"<<endl;
			break;
			
	}
	}
}

void login()
{
	cout<<"|:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::|\n";
	cout<<"|            :::::::Master Mind Institute::::::             |\n";
	cout<<"|:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::|\n";
	cout<<""<<endl;
	cout<<""<<endl;
	
	
	ofstream file("logindetails.txt");
	file<<"Kesara\n20010429\nSahasra\n1234\nCooray\n5678\nICBT\n321\nColombo\n1111";
	file.close();
	
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<"|:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::|\n";
	cout<<"|   Enter Institute required portal Username and Password   |"<<endl;
	cout<<"|:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::|\n";
	cout<<""<<endl;
	cout<<""<<endl;
	
	string uid, pwd,ln;
	cout<<"Enter user Id: ";
	cin>>uid;
	cout<<"Enter the password: ";
	cin>>pwd;
	bool validity=0;
	ifstream file2("logindetails.txt");
	while(getline(file2, ln))
	{
		if(ln==uid)
		{
			getline(file2, ln);
			{
				if(ln==pwd)
				{
					validity = 1;
					break;
				}
			}
		}
	}
	file2.close();
	if(validity==1){
		cout<<"Username and Password is valid";
		cout<<"\n";
		cout<<"Welcome to Master Mind Institute"<<endl;
	}
	else
	{
		system("cls");
		cout<<"Invalid username and/or password"<<endl;
		system("pause");
		login();//<<endl;
	}
}

void course_detai()
{
//int cou01;	
		cout<<"_______Course Details______"<<endl;
		cout<<"___________________________"<<endl;
		cout<<"  a. java Certiication     "<<endl;
		cout<<"  b. Azure Certiication     "<<endl;
		cout<<"  c. ASP.Net Certiication    "<<endl;
		cout<<"  d. RedHat Certiication  "<<endl;
		cout<<"___________________________"<<endl;
		cout<<"___________________________"<<endl;
		//main();
		//sub_main();	
}
void RedHat_Certification()
{
	cout<<"d. RedHat Certification"<<endl;
	cout<<"___________________________"<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<"Shop thousands of high-quality on-demand online courses.\n30-day satisfaction guarantee.\nFind the right instructor for you.\nChoose from many topics, skill levels, and languages.\n30-Day Money Guarantee.\nLearn ChatGPT. Stay Updated with AI.\nREST APIs With Flask."<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;
	system("pause");
}	
void Java_Certification()
{
	cout<<"a. Java Certification"<<endl;
	cout<<"___________________________"<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<"Gain a competitive advantage by learning and\ngetting certified as a Java Developer with Oracle.\nLearn how to build highly functional, reliable, portable,\nand secure applications with training created\nby Oracle's Java experts, who are at the forefront of\nhigh-tech solutions in the world of Java."<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;
	system("pause");
}
void Azure_Certification()
{
	cout<<"b. Azure Certification"<<endl;
	cout<<"___________________________"<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<"Whether you’re new to the field or a seasoned professional,\nmastering the basics in Microsoft Azure can\nhelp you jump-start your career and prepare you to dive deeper\ninto the many technical opportunities Azure offers."<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;
	system("pause");
}
void ASPDotNet_Certiication()
{
	cout<<"c. ASP.Net Certiication"<<endl;
	cout<<"___________________________"<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<"When we can expect availability of certifications which\nare related to  asp.net mvc  core certification .\nAt present all certifications which related to MVC are retired."<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;
	system("pause");
}
void subject_selection()
{	
	system("cls");
	ofstream file4("Course_Details.txt");
	file4<<"RedHat\nA/L\nJava\nO/L\nAzure\n10\nASP.Net\n8\n";
	file4.close();
	string name, level,ln;
	cout<<"______________________________"<<endl;
	cout<<"_______Subject Selection______"<<endl;
	cout<<"______________________________"<<endl;
	
	cout<<"What is your Target Subject ? ";
	cin>>name;
	cout<<"What is Your Education Level ? ";
	cin>>level;
	bool validity=0;
	
	ifstream file3("Course_Details.txt");
	while(getline(file3, ln))
	{
		if(ln==name)
		{
			getline(file3, ln);
			{
				if(ln==level) {
					validity = 1;
					break;
				}
			}
		}
	}
	file4.close();
	if(validity==1)
	{
		cout<<""<<endl;
		cout<<""<<endl;
		cout<<"         You Can Do This Subject             ";
		cout<<""<<endl;
		cout<<""<<endl;
		cout<<"             Let get start !                 "<<endl;
		cout<<""<<endl;
		cout<<""<<endl;
		cout<<"Please press Enter to Register..."<<endl;
		
		system("pause");
		
		registration();
		
	}
	else
	{
		cout<<"You can't Get This Subject\n Because your Education Requarements are\nNot Enough !"<<endl<<endl;
	}
	//main();
	system("cls");
	sub_main();	
}

void about()
{
		system("cls");
		cout<<""<<endl;
		cout<<""<<endl;
		cout<<"***---_ _ _About Master Mind Institute_ _ _---***"<<endl;
		cout<<""<<endl;
		cout<<""<<endl;
		cout<<"ICT integration is understood as the usage of\ntechnology seamlessly for educational\nprocesses like transacting curricular content and students working on\ntechnology to do authentic tasks.\nNowadays ICT facilitate not only the delivery\nof lessons but also the learning\nprocess itself"<<endl;
		//main();
		cout<<""<<endl;
		cout<<""<<endl;
		//cout<<"Press 'B' to go back"<<endl;
}

void registration()
{	
	system("cls");
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<"Registration"<<endl;
	cout<<""<<endl;
	cout<<""<<endl;
	string name,edulvl,age,sub,adrs;
	cout<<"Enter Your Name : ";
	cin>>name;
	cout<<"Enter Your Education Level : ";
	cin>>edulvl;
	cout<<"Enter Your Age : ";
	cin>>age;
	cout<<"Enter Your Target Subject : ";
	cin>>sub;
	cout<<"Enter Your Address : ";
	cin>>adrs;
	
	ofstream file5("Registration.txt",ios::app);
	file5<<"\n\n\nName = "<<name;
	file5<<"\nEducation Level = "<<edulvl;
	file5<<"\nAge = "<<age;
	file5<<"\nSubject = "<<sub;
	file5<<"\nAddress = "<<adrs;
	file5.close();
	
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<"Your registration is Complete !"<<endl;
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<"You can Chech your Registration\nDetails in Text File"<<endl;
	cout<<""<<endl;
	cout<<""<<endl;
	
	system("pause");
	//main();	
}

void student_management()
{
	
	system("cls");
	int p_id[100], qty[100];
	string name[100];
	float price[100];
	int option, idTmp;
	int n=0, i, j ,isSearch, isDelete, isUpdate;
	
	do
	{
		cout<< "1. Add Subjects and Details"<<endl;
		cout<< "2. View Details"<<endl;
		cout<< "3. Search"<<endl;
		cout<< "4. Delete Data"<<endl;
		cout<< "5. Update Informations"<<endl;
	//	cout<< "6. sort a -> z"<<endl;
	//	cout<< "7. sort z -> a"<<endl;
		cout<< "8. exit"<<endl;
		cout<< "Input Your Choice: "; cin >> option;
		switch(option)
		{
			case 1:
				system("cls");
				cout<<"Input Subjects"<<endl;
				cout << "input your ID: "; cin >> p_id[n];
				cout << "Input Your name: "; cin.clear(); cin.ignore();getline(cin,name[n]);
				cout << "Input subject qty: "; cin>>qty[n];
				cout << "Input Subject fee in Lakhs: "; cin >> price[n];
				n++;
				break;
			case 2:
				system("cls");
				cout<<"output Subjects"<<endl;
				for(i = 0; i<n; i++)
				{
					cout << setw(10) << p_id[i];
					cout << setw(15) << name[i];
					cout << setw(10) << qty[i];
					cout << setw(10) << price[i] << endl;
				}
				break;
			case 3:
				system("cls");
				cout<<"search Subjects"<<endl;
				cout << "Input your ID to search: "; cin >> idTmp;
				isSearch = 0;
				for(i=0; i<n; i++)
				{
					if(idTmp == p_id[i])
					{
						cout<< "your id " << idTmp << "found in list" << endl;
						isSearch = 1;
						break;
					}
				}
				if(isSearch == 0)
				{
					cout << " Your ID search not Found !" <<endl;
				}
				break;
			case 4:
				system("cls");
				cout<<"delete Subjects"<<endl;
				cout<<"Input Subject ID to delete : "; cin >> idTmp;
				isDelete = 0;
				for(i=0; i<n; i++)
				{
					if(idTmp == p_id[i]){
					for(j=i; j<n; j++)
					{
						p_id[j]=p_id[j+1];
						name[j]= name[j+1];
						qty[j]=qty[j+1];
						price[j]=price[j+1];
					}
					n--;
					isDelete = 1;
					cout<<"Delete Completed !" <<endl;
				}
				}
				if (isDelete == 0)
				{
					cout <<"Delete isnt Complete ! " <<endl;
				}
				else
				{
					cout << "Update Completed !"<<endl;
				}
				break;
			case 5:
				system("cls");
				cout<<"update Subjects"<<endl;
				cout<<"Input ID to Update: "; cin >> idTmp;
				isUpdate = 0;
				for(i=0; i<n; i++)
				{
					if(idTmp == p_id[i])
					{
						cout<<"Input new Subject name: "; cin>>name[i];
						cout<<"Input new QTY: "; cin >> qty[i];
						cout << "Input new Fee: "; cin >> price[i];
						isUpdate = 1;
						break;
					}
					if(isUpdate = 0)
					{
						cout<<"Update isnt Completed !"<<endl;
					}
				}
				break;
			case 6:
				cout<<"Accending sort Subjects"<<endl;
				break;
			case 7:
				cout<<"decending sort Subjects"<<endl;
				break;
			case 8:
				//exit(0);
				system("cls");
				main();
		}
	}
	while(option != 8);
}

void logout()
{	
		cout<<"Log Out and Feed Back"<<endl;
		cout<<""<<endl;
		cout<<""<<endl;
		cout<<"Thank you, For using Master Mind Institute"<<endl;
		cout<<""<<endl;
		cout<<""<<endl;
		cout<<"Add a FeedBack"<<endl;
	string fdbk;
	cout<<"Enter Your FeedBack : ";
	cin>>fdbk;
	
	ofstream file6("Feed_Back.txt",ios::app);
	file6<<"\n\n\nFeedBack: "<<fdbk;
	file6.close();
	
		cout<<""<<endl;
		cout<<""<<endl;
		cout<<"Thank Your Feed Back !"<<endl;
		cout<<""<<endl;
		cout<<""<<endl;
		cout<<"Logged Out !"<<endl;
		cout<<""<<endl;
		cout<<""<<endl;	
	system("pause");
	//main();	
}

void exit()
{	
		cout<<"Plese check your User name or Password";
			
}



