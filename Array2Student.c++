#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int id[100];
	string name[100], gender[100], result[100],genderTmp, nameTmp;
	float math[100], khmer[100], english[100], avg[100],mathTmp,khmerTmp,englishTmp,avgTmp;
	char grade[100];
	int i,j,n=0, option,idTmp,isSearch, isDelete, isUpdate;
	do{
		cout<<"1.Input"<<endl;
		cout<<"2.Output"<<endl;
		cout<<"3.Search"<<endl;
		cout<<"4.Delete"<<endl;
		cout<<"5.Update"<<endl;
		cout<<"6.Sort"<<endl;
		cout<<"7.Exit"<<endl;
		cout<<"Input option (1-7): "; cin>>option;
		switch(option){
			case 1:
				cout<<"==========Input Student Information=========="<<endl;
				cout<<"Input student ID: "; cin>>id[n];
				cout<<"Input studnet Name: "; cin.clear();cin.ignore();getline(cin,name[n]);
				cout<<"Input studnet Gender: "; cin>>gender[n];
				cout<<"Input studnet Math: "; cin>>math[n];
				cout<<"Input student Khmer: "; cin>>khmer[n];
				cout<<"Input studnet Englsih: "; cin>>english[n];
				avg[n]=(math[n]+khmer[n]+english[n])/3;
				avgTmp=avg[n];
				if(avgTmp>=90){
					grade[n]='A';
				}else if(avgTmp>=80){
					grade[n]='B';
				}else if(avgTmp>=70){
					grade[n]='C';
				}
				else if(avgTmp>=60){
					grade[n]='D';
				}
				else if(avgTmp>=50){
					grade[n]='E';
				}
				else if(avgTmp<50){
					grade[n]='F';
				}
				if(avgTmp<50){
					result[n]="Fail";
				}else{
					result[n]="Pass\n";
				}
				n++;
				break;
			case 2:
				cout<<"==========Output Student Information=========="<<endl;
				for(i=0;i<n;i++){
					cout<<setw(10)<<id[i];
					cout<<setw(10)<<name[i];
					cout<<setw(10)<<gender[i];
					cout<<setw(10)<<math[i];
					cout<<setw(10)<<khmer[i];
					cout<<setw(10)<<english[i];
					cout<<setw(10)<<avg[i];
					cout<<setw(10)<<grade[i];
					cout<<setw(10)<<result[i];
				}

				break;
			case 3:
				cout<<"==========Search Student Information=========="<<endl;
				cout<<"Input studnet ID to Search: "; cin>>idTmp;
				isSearch=0;
				for(i=0;i<n;i++){
					if(idTmp==id[i]){
						cout<<"Student ID "<<idTmp<<"found in list"<<endl;
						isSearch=1;
						break;
					}
				}
				if(isSearch==0){
					cout<<"Student ID search not found!"<<endl;
				}
				break;
			case 4:
				cout<<"==========Delete Student Information=========="<<endl;
				cout<<"Input studnet ID to delete: "; cin>>idTmp;
				isDelete=0;
				for(i=0;i<n;i++){
					if(idTmp==id[i]){
						for(j=i;j<n;j++){
							id[j]=id[j+1];
							name[j]=name[j+1];
							gender[j]=gender[j+1];
							math[j]=math[j+1];
							khmer[j]=khmer[j+1];
							english[j]=english[j+1];
							avg[j]=avg[j+1];
							grade[j]=grade[j+1];
							result[j]=result[j+1];
						}
						n--;
						cout<<"Delete completed!"<<endl;
					}
				}
				if(isDelete==0){
					cout<<"Delete not completed!"<<endl;
				}
				break;
			case 5:
				cout<<"==========Update Student Information=========="<<endl;
				cout<<"Input studnet ID to update: "; cin>>idTmp;
				isUpdate=0;
				for(i=0;i<n;i++){
					if(idTmp==id[i]){
   						cout<<"Input new student ID: "; cin>>name[i];
   						cout<<"Input new student Name: "; cin>>id[i];
   						cout<<"Input new student Gender: "; cin>>gender[i];
   						cout<<"Input new student Math: "; cin>>math[i];
   						cout<<"Input new student Khmer: "; cin>>khmer[i];
   						cout<<"Input new student English: "; cin>>english[i];
   						isUpdate=1;
					}
				}
				if(isUpdate==0){
					cout<<"Update not completed!"<<endl;
				}else{
					cout<<"Update completed!"<<endl;
				}
				break;
			case 6:
				cout<<"==========Sort Student Information=========="<<endl;
				for(i=0;i<n;i++){
					for(j=i+1;j<n;j++){
						if(avg[i]>avg[j]){
							idTmp=id[i];
							id[i]=id[j];
							id[j]=idTmp;

							nameTmp=name[i];
							name[i]=name[j];
							name[j]=nameTmp;

							genderTmp=gender[i];
							gender[i]=gender[j];
							gender[j]=genderTmp;

							mathTmp=math[i];
							math[i]=math[j];
							math[j]=mathTmp;

							khmerTmp=khmer[i];
							khmer[i]=khmer[j];
							khmer[j]=khmerTmp;

							englishTmp=english[i];
							english[i]=english[j];
							english[j]=englishTmp;
						}
					}
				}
				cout<<"Sort avgerage completed!"<<endl;
				break;
			case 7:
				exit(0);
		}

	}while(option !=7);

	return 0;
}