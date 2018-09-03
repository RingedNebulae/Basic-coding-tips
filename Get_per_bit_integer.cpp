//获取int中的每一位
void getPerBit(int n)
{
	while (n) {
		cout << n % 10 << " ";
		n /= 10;
	}
	cout << endl;
}

//获取int中的某一位
int t1= n%10;//获取个位
int t2 = n/10%10;//获取十位
int t3 = n/100%10;
int t4 = n/1000%10;
int t5 = n/10000%10;