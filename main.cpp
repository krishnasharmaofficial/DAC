#include <iostream>
#include <string>
using namespace std;

int t = -1;
int a[5];
int max = 5;
void swith();
void enterData();
void deleteData();
void ShowData();


	
void ShowData(){
	
//	for (int i=0;i<t;i++)
//	{
//		cout<<a[t];
//	}
}	
void deleteData()
{
//	if(t==-1){
//			cout << "Stack is empty";
//	}
//	else{
//			t--;
//	}
}

void swith()
{
	int d;
	cout << "presss 1 for enter into stack";
	cout << "presss 2 for delete from stack";
	cout << "presss 3 for display into stack";
	cin >> d;
	//int s;
	//bool h;
	switch (d)
	{
	case 1:
		//cout << "presss 1 for enter into stack";
	    enterData();
		swith();
	case 2:
		
		deleteData();
		//cout << "presss 1 for enter into stack";
	//	h = DeleteData();
		//return h;
	case 3:
		//cout << "presss 1 for enter into stack";

		ShowData();
		//return h;
	default:
		break;
	}
}

void enterData()
{

	//static int t = -1;
	if (t == max-1)
	{
		cout << "Stack is full, please delete for insertion";
		swith();
	}
	else
	{
		int e;
		t++;
		cout << t;
		cout << "enter the value";
		cin >> e;
		a[t] = e;
		swith();
	}
}
int main()
{

	swith();
//	bool k;
//
//	do {
//		
//		k = swith();
//	//	enterData();
//	} while (k);
}
