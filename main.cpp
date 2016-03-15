#include<iostream>
using namespace std;
int arraw[4] = { 2,3,5,7 };
int noarraw[6] = { 0,1,4,6,8,9 };
int test(int num,int lenth){
	int temp[10] = { 0 };
	for (int i = 0; i < lenth; i++)
	{
		temp[num % 10] = 1;
		num /= 10;
	}
	int all = 0;
	for (int i = 0; i < 6 ; i++)
	{
		all += temp[noarraw[i]];
	}
	if (all == 0) {
		int all = 0;
		for (int i = 0; i < 4; i++)
		{
			all += temp[arraw[i]];
		}
		if (all == 4) {
			return true;
		}
	}
	else
		return false;
}
int main(){
	int two, three, four, four0, five;
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++) {
		two = arraw[i] * 10 + arraw[j];
			for (int i = 0; i < 4; i++)
				for (int j = 0; j < 4; j++)
					for (int k = 0; k < 4; k++) {
						three = arraw[i] * 100 + arraw[j] * 10 + arraw[k];
						four = two*three;
						if (test(four, 5)) {
							for (int i = 0; i < 4; i++)
								for (int j = 0; j < 4; j++)
									for (int k = 0; k < 4; k++)
										for (int l = 0; l < 4; l++) {
											four0 = arraw[i] * 1000 + arraw[j] * 100 + arraw[k] * 10 + arraw[l];
											five = four0 + four0 * 10;
											if (test(five,5)&&five==four) {
												printf("(%d * %d) + %d = %d\n", two, three, four0, five);
											}
										}
						}
					}
		}
	system("pause");
	return 0;
}