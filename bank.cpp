
#include <iostream> //TODO make everthing ok
#include <iomanip>
using namespace std;



void showbalance(double balance);
double deposit();
double withdraw(double balance);
int searchCoustomer(string search,string coustomerID[]);

int main()
{


    string coustomerID[]{"1","2","3","4"};
    string IDsearch;
 	double balance0 = 0;
	int choice0 = 0;	
	double balance1 = 0;
	int choice1 = 0;
	double balance2 = 0;
	int choice2 = 0;
 	double balance3 = 0;
	int choice3 = 0; 

while(!(IDsearch=="e"||IDsearch=="E")){	
	cout<<"enter the Id"<<endl;
	cout<<"press e to exit"<<endl;
	cin>>IDsearch;

	if(searchCoustomer(IDsearch,coustomerID)==0){


	do {
		cout << "******************\n";
		cout << "enter your choice:\n";
		cout << "******************\n";
		cout << "1. show balance\n";
		cout << "2. desposit money\n";
		cout << "3. withdraw money\n";
		cout << "4. exit\n";
		cin >> choice0;
		
		cin.clear();
		fflush(stdin);

		switch (choice0) {
		case 1: showbalance(balance0);
			break;
		case 2: balance0 = balance0 += deposit();
			showbalance(balance0);
			break;
		case 3: balance0 -= withdraw(balance0);
			showbalance(balance0);
			break;
		case 4:cout << "thanks for visiting\n";
			break;
		default: cout << "invalid choice\n";
		}
	} while (choice0 != 4);

	}else if(searchCoustomer(IDsearch,coustomerID)==1){

	do {
		cout << "******************\n";
		cout << "enter your choice:\n";
		cout << "******************\n";
		cout << "1. show balance\n";
		cout << "2. desposit money\n";
		cout << "3. withdraw money\n";
		cout << "4. exit\n";
		cin >> choice1;
		
		cin.clear();
		fflush(stdin);

		switch (choice1) {
		case 1: showbalance(balance1);
			break;
		case 2: balance1 = balance1 += deposit();
			showbalance(balance1);
			break;
		case 3: balance1 -= withdraw(balance1);
			showbalance(balance1);
			break;
		case 4:cout << "thanks for visiting\n";
			break;
		default: cout << "invalid choice\n";
		}
	} while (choice1 != 4);

	}else if(searchCoustomer(IDsearch,coustomerID)==2){


	do {
		cout << "******************\n";
		cout << "enter your choice:\n";
		cout << "******************\n";
		cout << "1. show balance\n";
		cout << "2. desposit money\n";
		cout << "3. withdraw money\n";
		cout << "4. exit\n";
		cin >> choice2;
		
		cin.clear();
		fflush(stdin);

		switch (choice2) {
		case 1: showbalance(balance2);
			break;
		case 2: balance2 = balance2 += deposit();
			showbalance(balance2);
			break;
		case 3: balance2 -= withdraw(balance2);
			showbalance(balance2);
			break;
		case 4:cout << "thanks for visiting\n";
			break;
		default: cout << "invalid choice\n";
		}
	} while (choice2 != 4);

	}else if(searchCoustomer(IDsearch,coustomerID)==3){


	do {
		cout << "******************\n";
		cout << "enter your choice:\n";
		cout << "******************\n";
		cout << "1. show balance\n";
		cout << "2. desposit money\n";
		cout << "3. withdraw money\n";
		cout << "4. exit\n";
		cin >> choice3;
		
		cin.clear();
		fflush(stdin);

		switch (choice3) {
		case 1: showbalance(balance3);
			break;
		case 2: balance3 = balance3 += deposit();
			showbalance(balance3);
			break;
		case 3: balance3 -= withdraw(balance3);
			showbalance(balance3);
			break;
		case 4:cout << "thanks for visiting\n";
			break;
		default: cout << "invalid choice\n";
		}
	} while (choice3 != 4);

	}else if(searchCoustomer(IDsearch,coustomerID)==-1){
		if (IDsearch=="e"||IDsearch=="E")
		{
			break;
		}
		
    cout<<"NOT Find"<<endl;

	}
}
     


/* 	double balance = 0;
	int choice = 0;

	do {
		cout << "******************\n";
		cout << "enter your choice:\n";
		cout << "******************\n";
		cout << "1. show balance\n";
		cout << "2. desposit money\n";
		cout << "3. withdraw money\n";
		cout << "4. exit\n";
		cin >> choice;
		
		cin.clear();
		fflush(stdin);

		switch (choice) {
		case 1: showbalance(balance);
			break;
		case 2: balance = balance += deposit();
			showbalance(balance);
			break;
		case 3: balance -= withdraw(balance);
			showbalance(balance);
			break;
		case 4:cout << "thanks for visiting\n";
			break;
		default: cout << "invalid choice\n";
		}
	} while (choice != 4);
	 */
	return 0;

}








int searchCoustomer(string search,string coustomerID[]){
   
    for(int i=0;i<4;i++){
      if(search==coustomerID[i]){
		cout<<"finded"<<endl;
		return i;
	  }
    

	}


	return -1;
}
void showbalance(double balance) {
	cout << "your balance is: $" << setprecision(2)<<fixed << balance << '\n';
}
double deposit() {
	double amount = 0;

	cout << "enter amount to be deposited:";
	cin >> amount;

	if (amount > 0) {
		return amount;
	}
	else {
		cout << "that's not a valid amount:\n";
		return 0;
	}

}
double withdraw(double balance) {

	double amount = 0;

	cout << "enter amount to be withdrawn:";
		cin >> amount;

		if (amount > balance) {
			cout << "insufficient funds\n";
			return 0;
		}
		else if (amount < 0) {
			cout << "that's not a valid amount\n";
			return 0;
		}
		else {
			return amount;
		}
		
}


