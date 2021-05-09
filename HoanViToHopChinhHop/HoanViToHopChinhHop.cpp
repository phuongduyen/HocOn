#define _CRT_SECURE_NO_WARNINGS																															
#include <iostream>
using namespace std;


int BB(int b);
int AA(int a);

int a[100];
//int a[100][100];
int trace[100];
int n, k;
//int icount;
int iLeng;

void init() {
//	icount = 0;
	iLeng = 0;
	for (int i = 0; i < n; i++) {
		trace[i] = 0;
		a[i] = 0;
//		for (int j = 0; j < 100; j++) {
	//		a[i][j] = 0;
		//}
	}
}

void printOut() {
	cout << "to hop : ";
	for (int j = 0; j < k; j++) {
		cout << a[j] << " ";
	}
	cout << endl;
//	a[icount][iLeng] = 0;
	iLeng--;
//	icount++;
}

void find(int x) {
	for (int i = x; i <= n; i++) {
		if(i == n)
		if (trace[i] == 0) {
			trace[i] = 1;
			a[iLeng] = i;
			iLeng++;
		}
		if (iLeng == k) {
			trace[i] = 0;
			printOut();
		}

	}

}

int BB(int b) {
	return AA(b - 1);
}


int AA(int a) {
	cout << "a = " << a << endl;
	if (a == 1) {
		return 1;
	}
	else {
		BB(a);
	}

}


//int main()
//{
//	//1freopen("text.txt", "r", stdin);
//	cin >> n;
//	//cin >> k;
//	//init();
//	//find(0);
//	
//	AA(n);
//
//}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
