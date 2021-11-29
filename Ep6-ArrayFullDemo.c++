#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int p_id[100],qty[100];
	string name[100];
	float price[100];
	int option;
	int n=0,i,j;
	do{
		cout<<"1.Input"<<endl;
		cout<<"2.Ouput"<<endl;
		cout<<"3.Search"<<endl;
		cout<<"4.Delete"<<endl;
		cout<<"5.Update"<<endl;
		cout<<"6.Sort name (<A->Z)"<<endl;
		cout<<"7.Sort nmae(Z->A)"<<endl;
		cout<<"8.Exit"<<endl;
		cout<<"Input your choice:"; cin>>option;
		switch(option){
			case 1:
				cout<<"======Input product info======"<<endl;
				cout<<"Input product ID: "; cin>>p_id[n];
				cout<<"Input product Name: "; cin.clear();cin.ignore();getline(cin,name[n]);
				cout<<"Input product qty: "; cin>>qty[n];
				cout<<"Input product price: "; cin>>price[n];
				n++;
				break;
			case 2:
				cout<<"======Ouput product info======"<<endl;
				for(i=0;i<n;i++){
					cout<<setw(10)<<p_id[i];
					cout<<setw(15)<<name[i];
					cout<<setw(10)<<qty[i];
					cout<<setw(10)<<price[i]<<endl;
				}
				break;
			case 3:
				cout<<"======Search product info======"<<endl;
				break;
			case 4:
				cout<<"======Delete product info======"<<endl;
				break;
			case 5:
				cout<<"======Update product info======"<<endl;
				break;
			case 6:
				cout<<"======Sort product (A->Z)======"<<endl;
				break;
			case 7:
				cout<<"======Sort product (Z->A)======"<<endl;
				break;
			case 8:
				exit(0);
		}

	}while(option !=8);
	return 0;
}