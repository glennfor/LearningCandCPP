#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
void moveZeroes(vector<int>& nums){
	for(int i = 0; i < nums.size(); ++i)
	{
		if(nums[i] != 0)
		{
			int hold = nums[i], j = i;
			while(j > 0 and nums[j-1]==0){
				nums[j] = nums[j-1];
				--j;
			}
			nums[j]=hold;
		}
	}
}

int cnt(vector<int>& v){
	int cnt2=0;
    std::vector<int>::iterator it = v.begin();
    for(;it!=v.end(); ++it)
    {
        std::vector<int>::iterator iter = std::find(v.begin(), v.end(), (*it)+1);
        if(iter>=v.begin() and iter<v.end())++cnt2;
    }
    return cnt2;
}

bool equals(string& s1, string& s2){
	vector<char> s11, s22;
	for(int i = 0; i <s1.length(); ++i)
	    if(s1[i]=='#' and !s11.empty())s11.pop_back();
	    else s11.push_back(s1[i]);//s11+=s1[i];
	for(int i = 0; i <s2.length(); ++i)
	    if(s2[i]=='#' and !s22.empty())s22.pop_back();
	    else s22.push_back(s2[i]);//)+=s2[i];
	return s11==s22;
}

void display(vector<int> v){
	cout << "\n";
	for(int i = 0; i < v.size(); ++i)
	cout << v[i] << ", ";
	cout << "\n\n";
}



int mult(vector<int>& v, int pos){
	int ret=1;
	for(int i = 0; i < v.size(); ++i){
	    if(i==pos)continue;
	    ret*=v[i];
	}
	return ret;
}


vector<int> uput(vector<int>& v){
	vector<int> ret;
	for(int i =0; i< v.size(); ++i)
	    ret.push_back(mult(v, i));
	return ret;
}

void smash(vector<int>& v){
	int maxi = v[0], smax = v[0];
	for(int i=0; i<v.size(); ++i){
		if(v[i]>maxi){
			maxi = v[i];
			smax = maxi;
		}
	}

}

int sm(vector<int> &v, int k){
	int cnt=0;
	for(int i = 0; i < v.size(); ++i){
		int j = i, sm=0;
		while(j < v.size() and sm<k)sm+=v[j++];
		if(sm==k)cnt+=1;
	}
	return cnt;
}
main(){
	int arr[]={0,2,3,4,0,0,0,6,7,3,4,0
	};
	vector<int> v;
	for(int i =0; i <12; ++i)
	    v.push_back(arr[i]);
	int vam = 9, ans = 5;
	cout << "\n\n";
	moveZeroes(v);
	display(v);
	int r;
	cout <<"\n\n"<<cnt(v);
	string s1 , s2;
	cout<<"\n\n";
	//cin>>s1>>s2;
	//cout<<equals(s1, s2);

	vector<int> vec;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);
	display(uput(vec));
	cout <<"\n\n";
	vec.clear();
	vec.push_back(1);
	vec.push_back(1);
	vec.push_back(1);
	cout<<"[][]  "<<sm(vec, 2) <<"\n\n";
	cin >> r >> r;
}
