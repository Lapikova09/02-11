#include <iostream>
using namespace std;
int main() {
	//вывести элементы в обратном порядке
	/*const int n = 5;
	int mas[n];
	for (int i = 0; i < n; i++) {
		cin >> mas[i];
	}
	for (int i = n-1; i >= 0; i=i-1) {
		cout << mas[i] << ' ';
	}
	cout << endl;*/

	/*//заполнить случайными числами от 0-20, подсчтитать кол во четных 
	const int n = 15;
	int mas[n];
	for (int i = 0; i < n; i++) {
		 mas[i]=rand()%21;
		 cout << mas[i] << " ";
	}
	cout << endl;
	//подсчет
	int k = 0;
	for (int i = 0; i < n; i++) {
		if (mas[i] % 2 == 0) { k++; }
	}
	cout << k << endl;*/

	//Array22.Дан массив размера N и целые числа K и L(1 < K ≤ L ≤ N).Найти
	//	сумму всех элементов массива, кроме элементов с номерами от K до L
	//	включительно
	/*const int n = 5;
	int mas[n];
	int k;
	cin >> k;
	int l;
	cin >> l;
	int s = 0;
	for (int i = 0; i < n; i++) {
		cin >> mas[i];
	}
	for (int i = 0; i < n; i++) {
		if (i<k || i>l) {
			s = s + mas[i];
		}
	}
	cout << s << endl;
     */
	
	 
	/* Array23. Дан массив размера N и целые числа K и L (1 < K ≤ L ≤ N).
	Найти среднее арифметическое всех элементов массива, кроме элементов
	с номерами от K до L включительно.*/	/*const int n = 5;
	int mas[n];
	int k;
	cin >> k;
	int l;
	cin >> l;
	int s = 0;
	int p = 0;
	for (int i = 0; i < n; i++) {
		cin >> mas[i];
	}
	for (int i = 0; i < n; i++) {
		if (i<k || i>l) {
			s = s + mas[i]; p++;
		}
	}
	double sr =(double) s / p;
	cout << sr << endl;*/
	 
	/* 1 колво чисел не делящ на 5
	const int n = 15;
	int mas[n];
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 21;
		cout << mas[i] << " ";
	}
	cout << endl;
	int k = 0;
	for (int i = 0; i < n; i++) {
		if (mas[i] % 5 != 0) { k++; }
	}
	cout << k << endl;*/

	// 2 сумма, делящихся на 3 и 5
	/*const int n = 20;
	int mas[n];
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 31;
		cout << mas[i] << " ";
	}
	cout << endl;
	int s = 0;
	for (int i = 0; i < n; i++) {
		if (mas[i] % 3 == 0 && mas[i] % 5 == 0) { s=s+mas[i]; }
	}
	cout << s << endl;*/

	//3 произведение, делящихся на 2 или 3
	/*const int n = 17;
	int mas[n];
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 46;
		cout << mas[i] << " ";
	}
	cout << endl;
	long long p = 1;
	for (int i = 0; i < n; i++) {
		if (mas[i] % 3 == 0 || mas[i] % 2 == 0) { p = p * mas[i]; }
	}
	cout << p << endl;*/


    //4
    /* const int n = 17;
     int mas[n];
	 int p = 0;
      for (int i = 0; i < n; i++) {
	    mas[i] = rand() % 53;
	    cout << mas[i] << " ";
       }
       cout << endl;
        int s = 0;
       for (int i = 0; i < n; i++) {
		   if (i % 2 == 0) { s = s + mas[i]; p++; }
       }
	   double sr =(double) s / p;
       cout << sr << endl;*/


      //5 
     /*const int n = 25;
     int mas[n];
     for (int i = 0; i < n; i++) {
         	mas[i] = rand() % 67;
	          cout << mas[i] << " ";
         }
      cout << endl;
      long long p = 1;
      for (int i = 0; i < n; i++) {
		  if (i % 2 != 0) { p = p * mas[i]; }
      }
		   double sr = sqrt(p);
            cout << sr << endl;*/
         
}