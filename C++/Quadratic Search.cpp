#include<iostream>
#include<ctime>
using namespace std;


int beg = 0;
int end = 0;
int point1 = 0;
int point2 = 0;
int mid = 0;
int size = 0;
int index = -1;
int count = 0;

void linear_search(int A[], int numToFind) {
	if (numToFind == A[mid])
	{
		index = mid;
		count++;
	}
	else if(numToFind == A[point1])
	{
		index = point1;
		count++;
	}
	else if(numToFind == A[point2])
	{
		index = point2;
		count++;
	}
}


void search_algo(int A[], int numToFind) {
	end = size - 1;

	while (beg <= end) {
		mid = ( beg + end )	/ 2;
		point1 = mid - ( end - mid ) / 2;
		point2 = mid + ( end - mid ) / 2;

		if ( (numToFind == A[mid]) || (numToFind == A[point1]) || (numToFind == A[point2]) ) {
			linear_search(A, numToFind);
			count++;
			break;
		}

		else if (numToFind < A[point1]) {
			end = point1 - 1;
			count++;
		}

		else if (numToFind < A[mid]) {
			beg = point1 + 1;
			end = mid - 1;
			count++;
		}

		else if (numToFind > A[point2]) {
			beg = point2 + 1;
			count++;
		}

		else if (numToFind > A[mid]) {
			beg = mid + 1;
			end = point2 - 1;
			count++;
		}

	}

}

main() {
	int num;
	cout<<"SIZE : ";
	cin>>size;
	cout<<"Num To Find :";
	cin>>num;
	int A[size];
	for(int i = 0; i < size; i++) {
		A[i] = i;
	}

	const long double sysTime = time(0);
	const long double start = sysTime * 1000 *1000;                    // converting to micro seconds
	search_algo(A, num);
	const long double sysTime2 = time(0);
	const long double finish = sysTime2 * 1000 *1000;
	const long double elapsed = finish - start;

	cout<<"index : "<<index<<" : comparisons : "<<count<<endl<<"Starting time : "<<start<<" : Finishing time "<<finish;
}
