#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	srand(time(0));
	int secretNumber=1+(rand()% 100);
	cout<<"\n\t\t\tWELCOME TO GUESS A NUMBER"<<endl;
	
	cout<<"\n\nyou have to guess number between 1 to 100 ,you have o limitead choice based on the level you chosse good luck"<<endl;
	while(true)
	{
		 cout<<"ener the difficulty level\n";
		 
		 cout<<"1 for eassy\n";
		 
		 cout<<"2 for middium\n";
		 
		 cout<<"3 for difficult\n";
		 
		 cout<<"0 for ending the game\n"<<endl;
		 
		 int difficultychoice;
		 
		 cout<<"enter the choice\n";
		 cin>>difficultychoice;
		 srand(time(0));
	int secretNumber=1+(rand()% 100);
	int plyarchoice;
	if(difficultychoice==1)
	{
		cout<<"you have 1 to 10 choice finding the secrate number between 1 to 100\n";
		
		int choiceleft=10,i;
		for(i=0;i<=10;i++)
		{
			cout<<"ener the number";
			cin>>plyarchoice;
			if(plyarchoice==secretNumber)
			{
				cout<<"well plyead you won"<<plyarchoice<<"is the screat number"<<endl;
				cout<<"\t\t\t thanks for plying....."<<endl;
				cout<<"plying the game againe with us!!\n\n"<<endl;
				break;
				
			}
			else
			{
				cout<<"Nope,"<<plyarchoice<<"is not right number\n";
				if(plyarchoice>secretNumber)
				{
					cout<<"the secrate number is smallar than the number you have choice"<<endl;
				}
				else
				{
				  cout<<"the secrate number is greater than the number you have choice"<<endl;
	
				}
				choiceleft--;
				 cout<<choiceleft<<"choiceleft"<<endl;
				 if(choiceleft==0)
				 {
				 	cout<<"the couldn't find the secrate number,it was"<<secretNumber<<"you have lose!!\n";
				 	cout<<"play the game again to win!!\n\n";
				 	break;
				 }
			}
		}
		
		
	}
	  else if(difficultychoice==2)
	  {
	  	cout<<"you have to 7 choice finding the secrate number between 1 to 100";
		int choiceleft=7,i;
		for(i=0;i<=7;i++)
		{
			cout<<"ener the number";
			cin>>plyarchoice;
			if(plyarchoice>secretNumber)
			{
				cout<<"well plyead you won"<<plyarchoice<<"is the screat number"<<endl;
				cout<<"\t\t\t thanks for plying....."<<endl;
				cout<<"plying the game againe with us!!\n\n"<<endl;
				break;
				
			}
			else
			{
				cout<<"Nope,"<<plyarchoice<<"is not right number\n";
				if(plyarchoice>secretNumber)
				{
					cout<<"the secrate number is smallar than the number you have choice"<<endl;
				}
				else
				{
				  cout<<"the secrate number is greater than the number you have choice"<<endl;
	
				}
				
				 choiceleft--;
				 cout<<choiceleft<<""<<choiceleft<<endl;
				 if(choiceleft==0)
				 {
				 	cout<<"the couldn't find the secrate number,it was"<<secretNumber<<"you have lose!!\n";
				 	cout<<"play the game again to win!!\n\n";
				 	break;
				 }
			}
		}
		
		
	  	
	  }
	  else if(difficultychoice=3)
	  {
	  	cout<<"you have to 5 choice finding the secrate number between 1 to 100";
		int choiceleft=5,i;
		for(i=0;i<=5;i++)
		{
			cout<<"ener the number";
			cin>>plyarchoice;
		  if(plyarchoice>secretNumber)

			
			{
				cout<<"well plyead you won"<<plyarchoice<<"is the screat number"<<endl;
				cout<<"\t\t\t thanks for plying....."<<endl;
				cout<<"plying the game againe with us!!\n\n"<<endl;
				break;
				
			}
			else
			{
				cout<<"Nope,"<<plyarchoice<<"is not right number\n";
				if(plyarchoice>secretNumber)
				{
					cout<<"the secrate number is smallar than the number you have choice"<<endl;
				}
				else
				{
				  cout<<"the secrate number is greater than the number you have choice"<<endl;
	
				}
				choiceleft--;
				 cout<<choiceleft<<"choiceleft"<<endl;
				 if(choiceleft==0)
				 {
				 	cout<<"the couldn't find the secrate number,it was"<<secretNumber<<"you have lose!!\n";
				 	cout<<"play the game again to win!!\n\n";
				 	break;
				 }
			}
		}
		
		
	  	
	  }
	  else if(difficultychoice==0)
	  {
	  	exit(0);
	  	
	  }
	  else
	  {
	  	cout<<"wrong choice enter the valid choice to play the game!!";
	  }
	

	
		 
	}
	return 0;
	
}
