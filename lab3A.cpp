#include<iostream>
#include<fstream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	int n;//number of cows
	int sum=0;
	ifstream in("file.in",ios::in);
	if(!in){
		cerr<<"Failed opening"<<endl;
		exit(1);
	}
	in>>n;
	vector<int>v(n);

	for(int i=0;i<n;i++)
		in>>v.at(i);

	sort(v.begin(),v.end());//sort

	for(int i=n-1;i>n-6;i--){//由大而小取5個加起來
		sum = sum + v.at(i);
	}
	cout<<sum<<endl;
	return 0;
}

