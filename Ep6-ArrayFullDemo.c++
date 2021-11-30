#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int p_id[100],qty[100],qtyTmp;
	string name[100],nameTmp;
	float price[100],priceTmp;
	int option,idTmp;
	int n=0,i,j, isSearch, isDelete, isUpdate;
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
				cout<<"Input product ID to search: "; cin>>idTmp;
				isSearch=0;
				for(i=0;i<n;i++)
				{
					if(idTmp==p_id[i]){
						cout<<"Product ID "<<idTmp<<" found in list"<<endl;
						isSearch=1;
						break;
					}
					if (isSearch==0){
						cout<<"Product ID search not found!"<<endl;
					}
				}
				break;
			case 4:
				cout<<"======Delete product info======"<<endl;
				cout<<"Input product ID to Delete: "; cin>>idTmp;
				isDelete=0;
				for(i=0; i<n; i++){
					if(idTmp==p_id[i]){
						for(j=i;j<n;j++){
							p_id[j]=p_id[j+1];
							name[j]=name[j+1];
							qty[j]=qty[j+1];
							price[j]=price[j+1];
						}
						n--;
						isDelete=1;
					}
				}
				if (isDelete==0){
						cout<<"Delete not complete!"<<endl;
					}else{
						cout<<"Delete complete!"<<endl;
					}
				break;
			case 5:
				cout<<"======Update product info======"<<endl;
				cout<<"Input ID to Update: "; cin>>idTmp;
				isUpdate=0;
				for(i=0;i<n;i++){
					if(idTmp==p_id[i]){
						cout<<"Input new product name: "; cin>>name[i];
						cout<<"Input new qty: "; cin>>qty[i];
						cout<<"Input new price: "; cin>>price[i];
						isUpdate=1;
						break;
					}
				}

				if(isUpdate==0){
					cout<<"Update not completed!"<<endl;
				}else{
					cout<<"Update completed!"<<endl;
				}
				break;
			case 6:
				cout<<"======Sort product (A->Z)======"<<endl;
				for(i=0;i<n;i++){
					for(j=i+1;j<n;j++){
						if(name[i]>name[j]){
							idTmp=p_id[i];
							p_id[i]=p_id[j];
							p_id[j]=idTmp;

							nameTmp=name[i];
							name[i]=name[j];
							name[j]=nameTmp;

							qtyTmp=qty[i];
							qty[i]=qty[j];
							qty[j]=qtyTmp;

							priceTmp=price[i];
							price[i]=price[j];
							price[j]=priceTmp;
						}
					}
				}
				cout<<"Sort name A->Z completed"<<endl;
				break;
			case 7:
				cout<<"======Sort product (Z->A)======"<<endl;
				for(i=0;i<n;i++){
					for(j=i+1;j<n;j++){
						if(name[i]<name[j]){
							idTmp=p_id[i];
							p_id[i]=p_id[j];
							p_id[j]=idTmp;

							nameTmp=name[i];
							name[i]=name[j];
							name[j]=nameTmp;

							qtyTmp=qty[i];
							qty[i]=qty[j];
							qty[j]=qtyTmp;

							priceTmp=price[i];
							price[i]=price[j];
							price[j]=priceTmp;
						}
					}
				}
				cout<<"Sort name Z->A completed"<<endl;
				break;
			case 8:
				exit(0);
		}

	}while(option !=8);
	return 0;
}