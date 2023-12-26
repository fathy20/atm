#include <iostream>
using namespace std;
int d = 0;
int amount = 0;
int afterwithdrawal;
int money = 0;
double balance;
int selection;
void login();
void show_menu();
void withdrawal();
void transfer();
int main() {

	login();
}
//show menu
void show_menu() {

	cout << "******Welcome******" << endl;
	cout << "1: Balance Checking ." << endl;
	cout << "2: Withdrawal ." << endl;
	cout << "3: Money Transfer ." << endl;
	cout << "4: Exit ." << endl;
	cout << "please enter you selection (1) , (2) , (3) , (4)" << endl;
	cin >> selection;
}
//transfer
void transfer() {
	string name[10]{ "member1","member2","member3","member4","member5","member6","member7","member8","member9","member10" };
	int password[10]{ 1111,1222,1333,1444,1555,1666,1777,1888,1999,1000 };
	double balance[10]{ 10000,9000,8000,7000,6000,5000,4000,3000,2000,1000 };
	int code[10]{ 1231,1232,1233,1234,1235,1236,1237,1238,1239,1230 };

	cout << "please enter the code of clients account to transfer money to him" << endl;
	int _code;

	int count = 0;


	if (count <= 10000 - amount) {
		cin >> _code;
		switch (_code) {
		case 1231:
			cout << "you  transfer to " << name[0] << endl;
			balance[0] += amount;
			break;
		case 1232:
			cout << "you  transfer to " << name[1] << endl;

			balance[1] += amount;
			break;
		case 1233:
			cout << "you transfer to " << name[2] << endl;
			balance[2] += amount;
			break;
		case 1234:
			cout << "you transfer to " << name[3] << endl;
			balance[3] += amount;
			break;
		case 1235:
			cout << "you  transfer to " << name[4] << endl;
			balance[4] += amount;
			break;
		case 1236:
			cout << "you transfer to " << name[5] << endl;
			balance[5] += amount;
			break;
		case 1237:
			cout << "you  transfer to " << name[6] << endl;
			balance[6] += amount;
			break;
		case 1238:
			cout << "you  transfer to " << name[7] << endl;
			balance[7] += amount;
			break;
		case 1239:
			cout << "you  transfer to " << name[8] << endl;
			balance[8] += amount;
			break;
		case 1230:
			cout << "you  transfer to " << name[9] << endl;
			balance[9] += amount;
			break;
		default:
			cout << "sorry there is no account" << endl;
			break;
		}

	}
}

//withdrawal
void withdrawal() {

	cout << "please Enter the amout of money" << endl;
	cin >> money;

}
//login menu
void login() {
	string name[10]{ "member1","member2","member3","member4","member5","member6","member7","member8","member9","member10" };
	int password[10]{ 1111,1222,1333,1444,1555,1666,1777,1888,1999,1000 };
	double balance[10]{ 10000,9000,8000,7000,6000,5000,4000,3000,2000,1000 };
	int code[10]{ 1231,1232,1233,1234,1235,1236,1237,1238,1239,1230 };
	string user;
	int pass;
	int pass_2;
	int i = 0;
	cout << "please enter your name : ";
	cin >> user;
	cout << "please enter your password :";
	cin >> pass;
	cout << "please enter your password again :";
	cin >> pass_2;
	if (pass == pass_2) {
		if (user == name[0] && pass == password[0]) {
			balance[0];
			do {
				int code1 = 1231;
				show_menu();
				switch (selection) {
				case 1:cout << "your balance checking is  " << balance[0] << endl;
					break;
				case 2:
					withdrawal();
					if (money <= 2000 && money <= balance[0]) {
						balance[0] = balance[0] - money;
						cout << "your balance after withdrawal is = " << balance[0] << endl;
					}
					else {
						cout << "you cannot withdraw this amount " << endl;
					}
					break;
				case 3:
					cout << "please enter the amount" << endl;
					cin >> amount;
					if (amount <= balance[0] && balance[0] >= 0 && i != 3 && amount <= 10000) {
						transfer();
						balance[0] -= amount;
						cout << "your balance = " << balance[0] << endl;

						if (balance[0] == 0) break;

						i++;
					}
					else {

						cout << "you dont have enough money or you send to max client (3 clients) .." << endl;
						break;
					}

					break;
				case 4:
					break;

				}

			} while (selection != 4 && selection <= 4);

		}
		else if (user == name[1] && pass == password[1]) {
			int code2 = 1232;
			balance[1];
			do {
				show_menu();

				switch (selection) {
				case 1:cout << "your balance checking is  " << balance[1] << endl;
					break;
				case 2:
					withdrawal();
					if (money <= 2000 && money <= balance[1]) {
						balance[1] -= money;
						cout << "your balance after withdrawal is = " << balance[1] << endl;
					}
					else {
						cout << "you cannot withdraw this amount " << endl;
					}
					break;
				case 3:


					cout << "please enter the amount" << endl;
					cin >> amount;
					if (amount <= balance[1] && balance[1] >= 0 && i != 3 && amount <= 10000) {

						transfer();
						balance[1] -= amount;
						cout << "your balance = " << balance[1] << endl;

						if (balance[1] == 0) break;

						i++;
					}
					else {
						cout << "you dont have enough money or you send to max client (3 clients) .." << endl;
						break;
					}

					break;
				case 4:

					break;
				}
			} while (selection != 4 && selection <= 4);

		}
		else if (user == name[2] && pass == password[2]) {
			balance[2];
			int code3 = 1233;
			do {
				show_menu();

				switch (selection) {
				case 1:cout << "your balance checking is  " << balance[2] << endl;
					break;
				case 2:
					withdrawal();
					if (money <= 2000 && money <= balance[2]) {
						balance[2] = balance[2] - money;
						cout << "your balance after withdrawal is = " << balance[2] << endl;
					}
					else {
						cout << "you cannot withdraw this amount " << endl;
					}
					break;
				case 3:
					cout << "please enter the amount" << endl;
					cin >> amount;
					if (amount <= balance[2] && balance[2] >= 0 && i != 3 && amount <= 10000) {

						transfer();
						balance[2] -= amount;
						cout << "your balance = " << balance[2] << endl;

						if (balance[2] == 0) break;

						i++;
					}
					else {
						cout << "you dont have enough money or you send to max client (3 clients) .." << endl;
						break;
					}

					break;
				case 4:

					break;
				}
			} while (selection != 4 && selection <= 4);

		}
		else if (user == name[3] && pass == password[3]) {
			int code4 = 1234;
			balance[3];
			do {
				show_menu();

				switch (selection) {
				case 1:cout << "your balance checking is  " << balance << endl;
					break;
				case 2:
					withdrawal();
					if (money <= 2000 && money <= balance[3]) {
						balance[3] = balance[3] - money;
						cout << "your balance after withdrawal is = " << balance[3] << endl;
					}
					else {
						cout << "you cannot withdraw this amount " << endl;
					}
					break;
				case 3:
					cout << "please enter the amount" << endl;
					cin >> amount;
					if (amount <= balance[3] && balance[3] >= 0 && i != 3 && amount <= 10000) {

						transfer();
						balance[3] -= amount;
						cout << "your balance = " << balance[3] << endl;

						if (balance[3] == 0) break;

						i++;
					}
					else {
						cout << "you dont have enough money or you send to max client (3 clients) .." << endl;
						break;
					}

					break;
				case 4:
					break;
				}
			} while (selection != 4 && selection <= 4);

		}
		else if (user == name[4] && pass == password[4]) {
			int code5 = 1235;
			balance[4];
			do {
				show_menu();

				switch (selection) {
				case 1:cout << "your balance checking is  " << balance[4] << endl;
					break;
				case 2:
					withdrawal();
					if (money <= 2000 && money <= balance[4]) {
						balance[4] = balance[4] - money;
						cout << "your balance after withdrawal is = " << balance[4] << endl;
					}
					else {
						cout << "you cannot withdraw this amount " << endl;
					}
					break;
				case 3:
					cout << "please enter the amount" << endl;
					cin >> amount;
					if (amount <= balance[4] && balance[4] >= 0 && i != 3 && amount <= 10000) {

						transfer();
						balance[4] -= amount;
						cout << "your balance = " << balance[4] << endl;

						if (balance[4] == 0) break;

						i++;
					}
					else {
						cout << "you dont have enough money or you send to max client (3 clients) .." << endl;
						break;
					}

					break;
				case 4:
					break;
				}
			} while (selection != 4 && selection <= 4);
		}
		else if (user == name[5] && pass == password[5]) {
			int code6 = 1236;
			balance[5];
			do {
				show_menu();

				switch (selection) {
				case 1:cout << "your balance checking is  " << balance[5] << endl;
					break;
				case 2:
					withdrawal();
					if (money <= 2000 && money <= balance[5]) {
						balance[5] = balance[5] - money;
						cout << "your balance after withdrawal is = " << balance[5] << endl;
					}
					else {
						cout << "you cannot withdraw this amount " << endl;
					}

					break;
				case 3:
					cout << "please enter the amount" << endl;
					cin >> amount;
					if (amount <= balance[5] && balance[5] >= 0 && i != 3 && amount <= 10000) {

						transfer();
						balance[5] -= amount;
						cout << "your balance = " << balance[5] << endl;

						if (balance[5] == 0) break;

						i++;
					}
					else {
						cout << "you dont have enough money or you send to max client (3 clients) .." << endl;
						break;
					}

					break;
				case 4:
					break;
				}

			} while (selection != 4 && selection <= 4);
		}
		else if (user == name[6] && pass == password[6]) {
			int code7 = 1237;
			balance[6];
			do {
				show_menu();

				switch (selection) {
				case 1:cout << "your balance checking is  " << balance[6] << endl;
					break;
				case 2:
					withdrawal();
					if (money <= 2000 && money <= balance[6]) {
						balance[6] = balance[6] - money;
						cout << "your balance after withdrawal is = " << balance[6] << endl;
					}
					else {
						cout << "you cannot withdraw this amount " << endl;
					}
					break;
				case 3:
					cout << "please enter the amount" << endl;
					cin >> amount;
					if (amount <= balance[6] && balance[6] >= 0 && i != 3 && amount <= 10000 - amount) {

						transfer();
						balance[6] -= amount;
						cout << "your balance = " << balance[6] << endl;

						if (balance[6] == 0) break;

						i++;
					}
					else {
						cout << "you dont have enough money or you send to max client (3 clients) .." << endl;
						int enter;
						cout << "if you want to know more press1 if no press 0" << endl;
						cin >> enter;
						if (enter == 1) {
							if (i == 3) { cout << "you have send to 3 client " << endl; }
							else { cout << "you dont have enough money in you balance" << endl; }
						}
						break;
					}

					break;
				case 4:
					break;
				}
			} while (selection != 4 && selection <= 4);
		}
		else if (user == name[7] && pass == password[7]) {
			int code8 = 1238;
			balance[7];
			do {
				show_menu();

				switch (selection) {
				case 1:cout << "your balance checking is  " << balance[7] << endl;
					break;
				case 2:
					withdrawal();
					if (money <= 2000 && money <= balance[7]) {
						balance[7] = balance[7] - money;
						cout << "your balance after withdrawal is = " << balance[7] << endl;
					}
					else {
						cout << "you cannot withdraw this amount " << endl;
					}
					break;
				case 3:
					cout << "please enter the amount" << endl;
					cin >> amount;
					if (amount <= balance[7] && balance[7] >= 0 && i != 3 && amount <= 10000) {

						transfer();
						balance[7] -= amount;
						cout << "your balance = " << balance[7] << endl;

						if (balance[7] == 0) break;

						i++;
					}
					else {
						cout << "you dont have enough money or you send to max client (3 clients) .." << endl;
						break;
					}

					break;
				case 4:
					break;
				}

			} while (selection != 4 && selection <= 4);
		}
		else if (user == name[8] && pass == password[8]) {
			int code9 = 1239;
			balance[8];
			do {
				show_menu();

				switch (selection) {
				case 1:cout << "your balance checking is  " << balance[8] << endl;
					break;
				case 2:
					withdrawal();
					if (money <= 2000 && money <= balance[8]) {
						balance[8] = balance[8] - money;
						cout << "your balance after withdrawal is = " << balance[8] << endl;
					}
					else {
						cout << "you cannot withdraw this amount " << endl;
					}
					break;
				case 3:
					cout << "please enter the amount" << endl;
					cin >> amount;
					if (amount <= balance[8] && balance[8] >= 0 && i != 3 && amount <= 10000) {

						transfer();
						balance[8] -= amount;
						cout << "your balance = " << balance[8] << endl;

						if (balance[8] == 0) break;

						i++;
					}
					else {
						cout << "you dont have enough money or you send to max client (3 clients) .." << endl;
						break;
					}

					break;
				case 4:
					break;
				}
			} while (selection != 4 && selection <= 4);
		}
		else if (user == name[9] && pass == password[9]) {
			int code10 = 1230;
			balance[9];
			do {
				show_menu();

				switch (selection) {
				case 1:cout << "your balance checking is  " << balance[9] << endl;
					break;
				case 2:
					withdrawal();
					if (money <= 2000 && money <= balance[9]) {
						balance[9] = balance[8] - money;
						cout << "your balance after withdrawal is = " << balance[9] << endl;
					}
					else {
						cout << "you cannot withdraw this amount " << endl;
					}
					break;
				case 3:
					cout << "please enter the amount" << endl;
					cin >> amount;
					if (amount <= balance[9] && balance[9] >= 0 && i != 3 && amount <= 10000) {

						transfer();
						balance[9] -= amount;
						cout << "your balance = " << balance[9] << endl;

						if (balance[9] == 0) break;

						i++;
					}
					else {
						cout << "you dont have enough money or you send to max client (3 clients) .." << endl;
						break;
					}

					break;
				case 4:
					break;
				}
			} while (selection != 4 && selection <= 4);
		}
		else {
			cout << "you have no account" << endl;
			d++;
			if (d == 1) {
				string username;
				int password_1;
				int password_2;
				cout << "please enter your user :";
				cin >> username;
				cout << "please enter your password :";
				cin >> password_1;
				cout << "please enter your password again :";
				cin >> password_2;
				for (; password_1 != password_2;) {
					cout << "wrong" << endl;
					cout << "please enter your password :";
					cin >> password_1;
					cout << "please enter your password again :";
					cin >> password_2;
				}
			}

		}
	}
	else {
		for (; i < 2;)
		{
			int pass_check;
			int passcheck2;
			cout << "wrong" << endl;
			cout << "please enter your password :";
			cin >> pass_check;
			cout << "please enter your password again:";
			cin >> passcheck2;
			i++;

			if ((pass_check == passcheck2) && (passcheck2 == pass || passcheck2 == pass_2) && (pass_check == pass || pass_check == pass_2))
			{
				login();
				break;
			}
		}
	}

	if (i == 2 && selection != 4 && selection <= 4) {
		cout << "sorry you have been try for 3 times wrong" << endl;
	}
}
