#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Nhap So Phan Tu Cua Day: ";
	cin>>n;
	int a[n];
	for (int i=0;i<n;i++)
	{
		cout<<"Phan Tu Thu "<<i+1<<" La: ";
		cin>>a[i];
	}
	int max=a[0];
	for(int i=1;i<n;i++)
	{
		if (max<a[i])
			max=a[i];
	}
	cout<<"Phan Tu Lon Nhat Cua Day La: "<<max<<endl;
	return 0;
}