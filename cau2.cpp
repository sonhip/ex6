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
	int min=a[0];
	for(int i=1;i<n;i++)
	{
		if (max<a[i])
			max=a[i];
		if (min>a[i])
			min=a[i];
	}
	max=a[0];
	int sc=a[1];
	for (int k=1;k<n;k++)
	{
		if (sc<a[k])
			sc=a[k];
	}
	cout<<"Phan Tu Lon Thu Hai Cua Day La: "<<sc<<endl;
	return 0;
}