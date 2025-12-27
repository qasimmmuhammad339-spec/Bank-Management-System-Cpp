
#include <iostream>
# include<string>
using namespace std;
class BankManSys{
private:
double bal;
   bool accountcreated;
public:
string name;
  double accno;
BankManSys(){
 cout << "...Welcome back!...\n";
 accountcreated= false;
 }
void accreate(){
 cout<< "Enter name:" << " ";
 cin.ignore();
 getline(cin, name);
 cout<< "Enter account number:" << " ";
 cin >> accno;
 cout << " Enter initial balance:" << " ";
 cin>> bal;
 if(bal<0){
 cout << "Invalid amount!\n";
    return;
 }
 cout << "Congratulations you successfully created your account!\n";
  accountcreated=true;
  }
 void Depo(){
  if(!accountcreated){
   cout<< "Create account first!\n";
   return;
  }

   cout << "Enter amount:" <<" ";
    double deposit;
cin >> deposit;
if(deposit<=0){
cout << "Invalid amount \n";

}
else{
 bal+=deposit;
cout<< "Your New balance:" << bal;
}
 }
void Withdraw(){
if(!accountcreated){
cout<< "Create account first!\n";
return;
}

cout << "Enter withdraw amount:" << " ";
double withdraw;
cin>> withdraw;
if(withdraw>bal){
cout<<"Insufficient Balance\n";

}
else{
bal-=withdraw;
cout << "New balance:" << bal;
}
}
  void check(){
 if(!accountcreated){
cout<< "Create account first!\n";
return;
}
 cout << "Your current balance:" << bal;
}
 void show(){
if(!accountcreated){
cout<< "Create account first!\n";
 return;
}
cout << "Name=" <<name << endl;
cout << "Account number="<< accno<< endl;

}
    
};

int main() {
BankManSys b1;
 int choice;
 do{
 cout<<"\n1. Create account";
    cout<< "\n2. Check Balance ";
   cout << "\n3. Deposit Money";
   cout << "\n4. Withdraw Money";
cout << "\n5. Display account details ";
cout<< "\n 6. Exit";
cout<< "\n Enter Choice:";
cin>> choice;
switch(choice){
case 1:
b1.accreate();
break;
case 2:
b1.check();
break;
 case 3:
b1.Depo();
 break;
case 4:
b1.Withdraw();
 break;
case 5:
 b1.show();
break;
 case 6:
 cout<< "Existing...";
 break;
default:
cout<< "Invalid choice:";

 }
 }
 while(choice!=6);


 return 0;
}
