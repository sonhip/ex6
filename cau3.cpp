#include <iostream>
using namespace std;
void sotrungbinhcong();
int main()
{
	sotrungbinhcong();
	cout<<endl;
	return 0;
}
void sotrungbinhcong()
{	
	int n;
	cout<<"So Phan Tu Cua Day La: ";cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Phan Tu Thu "<<i+1<<" La:";
		cin>>a[i];
	}
	int tong=0;
	for(int i=0;i<n;i++)
	{
		tong=tong+a[i];
	}
	int tbc=tong/n;
	cout<<"Cac Phan Lon Hon Trung Binh Cong Cua Day So La: ";
	for(int i=0;i<n;i++)
	{
		if (a[i]>tbc)
			cout<<a[i]<<" ";
	}
}