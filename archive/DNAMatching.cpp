#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

#define pb push_back
#define all(v) v.begin(),v.end()
#define sz  size() 
#define loop(i,m) for(ui i=0;i<m;i++)
#define loop2(i,m) for(i=0;i<m;i++)
#define loop4m(i,x,m) for(ui i=x;i<m;i++)
#define loop4m2(i,x,m) for(ui i=x;i<=m;i++)
#define mem(a,b) memset(a,b,sizeof(a))
#define mp make_pair
const double pi=acos(-1.0);
const double eps=1e-11;

typedef stringstream ss;
typedef pair<int, int> pii;
typedef vector<pii> vpii;
typedef vector<string> vs;
typedef vector<vs> vvs;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
typedef long long ll;
typedef unsigned int ui;

class DNAMatching {
public:
	int getMaxSize(vector <string>);
};


bool isEq(string s, string t){
	if(s.sz != t.sz)return false;
	int ssiz = s.sz;
	for(int i = ssiz-1 ; i >= 0;i--){
		if( 
		(s[i]=='A' && t[ssiz-i-1] == 'T')
		|| (s[i]=='T' && t[ssiz-i-1] == 'A')
		|| (s[i]=='C' && t[ssiz-i-1] == 'G')
		|| (s[i]=='G' && t[ssiz-i-1] == 'C')
		){
		
		}
		else{
			return false;
		}
	}
	return true;
}
int DNAMatching::getMaxSize(vector <string> dna) {
	int dnasz = dna.sz;
	vs res;
	res.clear();
	int j;
	for(int i =0 ; i < dnasz ; i++){
		for(j=0 ; j < res.sz ; j++){
			if(isEq(dna[i],res[j]))break;
		}
		if(j >= res.sz )res.pb(dna[i]);
	}
	return res.sz;
}


double test0() {
	string t0[] = {"ACGCGCGTA", "GTCGATGCA", "ACGTAGCT", "TACGCGCGT"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	DNAMatching * obj = new DNAMatching();
	clock_t start = clock();
	int my_answer = obj->getMaxSize(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 3;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p1 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p1 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	string t0[] = {"A","C","T","G"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	DNAMatching * obj = new DNAMatching();
	clock_t start = clock();
	int my_answer = obj->getMaxSize(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 2;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p1 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p1 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	string t0[] = {"ATTA", "ATCG", "CGAT", "ATCGCGAT", "CCCGGG"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	DNAMatching * obj = new DNAMatching();
	clock_t start = clock();
	int my_answer = obj->getMaxSize(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 4;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p1 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p1 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}

int main() {
	int time;
	bool errors = false;
	
	time = test0();
	if (time < 0)
		errors = true;
	
	time = test1();
	if (time < 0)
		errors = true;
	
	time = test2();
	if (time < 0)
		errors = true;
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
