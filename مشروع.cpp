#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include <windows.h>
using namespace std;
struct car{
	int ID;
	string name;
	string model;
	int date;
	float price;
}; car c[5];
 void menu();
void add(){
	int n;
	system("cls");
	ofstream output;
	output.open("cars.txt",ios::app);
	if(output.is_open()){
		system("color E1");
		cout<<"how to cars do you want to add"<<endl;
		cin>>n;
		for(int i=0;i<n;i++){
			system("cls");
			cout<<"enter car id"<<i+1<<endl;
			cin>>c[i].ID;
			
			cout<<"enter name of car"<<endl;
			cin>>c[i].name;
			cout<<"enter model"<<endl;
			cin>>c[i].model;
			cout<<"enter date"<<endl;
			cin>>c[i].date;
			cout<<"enter price of car"<<endl;
			cin>>c[i].price;
			
			output<<c[i].ID<<"\t"<<c[i].name<<"\t"<<c[i].model<<"\t"<<c[i].date<<"\t"<<c[i].price<<endl;
		}
	output.close();	
	
	}
	else
	cout<<"file can not open";
	menu();
}
void delete_car(){

        system("cls");
      
        int m=0, g=0, id=0,a=0;
        ifstream input;
        input.open("cars.txt");
        input.seekg(0, ios::beg);
        if(input.is_open())
        {
               
 //__________________ from file to variables_____________________________
                for(int i=0 ; i<5 ; i++)
                {
                        if(!input.eof())
                        {
                                m++;
                                input>>c[i].ID;
                                input>>c[i].name;
                                input>>c[i].model;
                                input>>c[i].date;
                                input>>c[i].price;
                        }             
                }
               input.close(); 
//______________________input value____________________________________
        int a=0;
        cout<<"Enter the ID for delete it's account: ";
        cin>>id;
        ofstream output;
        output.open("cars.txt");
        if(output.is_open())
                {
//__________________ from variables to file_____________________________
                        for(int i=0 ; i<=m ; i++)
                        {
                                if(id != c[i].ID)
                                {
                                        g++;
                                        output  <<c[i].ID      <<"\t"<< c[i].name <<"\t"<<c[i].model<<"\t" <<c[i].date  <<"\t"<< c[i].price
                                        <<"\t"  << endl;
                                }
                                else
                                    cout<<"The account of ( "<<id<<" ) was deleted"<<endl<<endl<<endl;
                        }
                        if(g==0)
                                cout<<"The ID not found."<<endl<<endl<<endl;
                }
                else
                cout<<"The File Couldn't Be Opened."<<endl<<endl<<endl;
   
        }
        else
                cout<<"The File Couldn't Be Opened."<<endl<<endl<<endl;
    
    
menu();
}
void display (){
	
	
	ifstream input;

	
          input.open("cars.txt");
        if(input.is_open())
        { 
               
 //__________________ from file to variables_____________________________
                for(int i=0 ; i<5 ; i++)
                {
                        if(!input.eof())
                        {

                                input>>c[i].ID;
                               
                                cout<<c[i].ID<<endl;
								input>>c[i].name;
								cout<<c[i].name<<endl;
								input>>c[i].model;
								cout<<c[i].model<<endl;
								input>>c[i].date;
								cout<<c[i].date;
								input>>c[i].price;
								cout<<c[i].price<<endl;
								}}
                                
                           input.close();}
menu();
                              
               
}
void search(){
	
	int m=0;
	int id;
	int f=0;
		ifstream input;

	
          input.open("cars.txt");
        if(input.is_open())
        { 
               
 //__________________ from file to variables_____________________________
                for(int i=0 ; i<5 ; i++)
                {
                        if(!input.eof()){
                        	m++;
                        
                       

                                input>>c[i].ID;
                               
                               
								input>>c[i].name;
								
								input>>c[i].model;
								
								input>>c[i].date;
							
								input>>c[i].price;
								
								}}
						
								cout<<"enter id";
                             	cin>>id;
                             	for(int i=0;i<m;i++){
	                             	if(id==c[i].ID){
	                             		cout<<c[i].name<<endl;
	                             		cout<<c[i].model<<endl;
	                             		cout<<c[i].date<<endl;
	                             		cout<<c[i].price<<endl;
	                             		f=1;
	                             	}
	                             
	                             	
	                          input.close();} 
			             
                                
        }
        if(m==0)
        cout<<"not found";
        menu();
}
void edit(){
{
        system("cls");
     
        int test=0, g=0;
        int number;
        int id;
        string name[100];
        ifstream input;
        input.open("cars.txt");
        if(input.is_open())
        {
                for(int i=0 ; i<5 ; i++)
                {
                        if(!input.eof())
                        {
                                g++;
                                input>>c[i].ID;
                               
                               
								input>>c[i].name;
								
								input>>c[i].model;
								
								input>>c[i].date;
							
								input>>c[i].price;
						 		}
                        }
                }
            
                input.close();
       
        cout<<"Enter the id ";
        cin>>id;
       
        //cin.ignore();
        for(int i=0 ; i<g ; i++)
        {
                if(id==c[i].ID)
                {
                        
                         system("cls");
                        
                         cout<<"Edit now."<<endl;
                                l9:
//____________________________________list ________________________________________________
                                cout<<"Enter 1) to name.\n";
                                cout<<"Enter 2) to price .\n";
                                
                                cin>>number;
                                switch(number)
                                { case 1:
                                                cout<<"Enter the name: ";
                                                cin>>c[i].name;break;
                                                
                                        case 2:
                                                cout<<"Enter the price ";
                                               cin>>c[i].price;
                                        break;
                                        
                                        default: cout<<"Your choice out the range.\n Please enter any number from 1 to 10."<<endl;      goto l9;       break;
                                }
                        }
               
        }
        if(g==0)
        {
                cout<<"This id not found."<<endl;
        }
        ofstream output;
        output.open("cars.txt");
        if(output.is_open())
             {
                for(int i=0 ; i<g; i++)
                        {                      
                            output  <<c[i].ID      <<"\t"<< c[i].name <<"\t"<<c[i].model<<"\t" <<c[i].date  <<"\t"<< c[i].price
                                        <<"\t"  << endl;
                        }
             }
              else
                cout<<"The File Couldn't Be Opened."<<endl<<endl<<endl;
        
      }
      
        
menu();

}
void Exit(){
	cout<<"*************************Cars Managment*************************"<<endl;
	cout<<setw(25)<<"Done by"<<"\t"<<"Eng/ sultan shamsan  "<<endl;
}
void menu(){
		int ch;
	system("color 09");
	cout<<" enter 1 to add car"<<endl;
		system("color 0e");
	cout<<"enter 2 to delete car"<<endl;
		system("color 0A");
	cout<<"enter 3 to display info from file"<<endl;
		system("color 0B");
	cout<<"enter 4 to search"<<endl;
		system("color 0C");
	cout<<"enter 5 to edit"<<endl;
		system("color 0E");
	cout<<"enter 6 to exit"<<endl;
	
	cout<<"enter your choice";
	
	cin>>ch;
	switch(ch){
		case 1:add();break;
		case 2:delete_car();break;
		case 3:display();break;
		case 4:search();break;
		case 5:edit();break;
		case 6:Exit();break;
	}

	
}

			   
int main(){

	menu();
}