//#include <iostream>
//#include <ctime>
//using namespace std;
//int main()
//{	
//	setlocale(LC_ALL, "");
//	srand(time(NULL));
//	float a, b;
//	cin >> a >> b;
//	for (float i = a; a < b; i + 0.5) {
//		cout << i;
//	}
//		
//
//}


//#include <iostream>
//#include <ctime>
//using namespace std;
//int main() {
//
//	int a, b;
//	cin >> a >> b;
//	for (int i = b; a<=i; i --)
//		cout << i;
//}

//#include <iostream>
//#include <ctime>
//using namespace std;
//int main() {
//	int a, b;
//	cin >> a >> b;
//
//	for (; a <= b; a++)
//		if (a % 5 == 0) cout << a;
//}





#include <iostream>
#include <ctime>
using namespace std;
int main() {
	setlocale(LC_ALL, "");
	system("pause");
	srand(time(NULL));
	for (int PlayerKost = rand() % 6 + 1, int Playerkost2 = rand() % 6 + 1;) {
		cout << "Вам выпало: " << PlayerKost << " " << Playerkost2;
		cout << "\nХод компьютера: ";
		if (PlayerKost == Playerkost2) cout << (PlayerKost+Playerkost2)*2<<"Дубль!";
	}
	for (int CompKost = rand() % 6 + 1,int CompKost2 = rand() % 6 + 1;){
		cout << "\nКомпьютеру выпало: " << CompKost << " " << CompKost2; 
		if (CompKost == CompKost2) cout << (CompKost+CompKost2)*2<<"Дубль!";
	}
																											
	




}	
