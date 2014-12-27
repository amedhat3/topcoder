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

class PrimePairs {
public:
	vector <int> matches(vector <int>);
};

vi num;
vi sol;

bool *prm;
ui n;

//bool best[10000][10000];

bool solve(int s,int t){

	//if(best[s][t]!=-1)return best[s][t];

	if(s >= num.sz)return true;
	if(t >= num.sz)return false;

	if(sol[t])return solve(s,t+1);
	if(t == n && s == t)return solve(s,t+1);

	if(prm[num[s]+num[t]]==1){
		sol[t]=1;
		sol[s]=1;
		return solve(s+1,1);
		//best[s][t]=1;
		//return true;
	}

	return solve(s,t+1);
}

vector <int> PrimePairs::matches(vector <int> numbers) {
	vi res;
	res.clear();

	num = numbers;
	prm  = new bool[10000];
	loop(i,10000){
		prm[i]=1;
		//loop(j,10000)best[i][j]=-1;
	}

	prm[0]=0;
	prm[1]=0;
	prm[2]=0;

	for(int i = 3 ; i <= 10000 ; i++ ){
		if( i%2 == 0 ){
			prm[i]=0;
			continue;
		}
		int t = (int)sqrt(i);
		for(int j = 3 ; j <= t ; j+=2){
			if(i % j == 0 && i !=j ){
				prm[i]=0;
				break;
			}
		}
	}
	//loop(i,10000)cout << i << "  " << prm[i]<<endl;
	for(int i = 1 ; i < num.sz ; i++ ){
		sol.clear();
		sol.resize(num.sz);
		fill(all(sol),0);

		bool fail=false;
		if(prm[num[0]+num[i]]){
			cout << num[i] <<endl;
			sol[i]=1;
			n=i;
			for(int j =1 ;j < num.sz ; j++){
				if(j != i && sol[j]==0)
				{
					cout << j <<endl;
					if(!solve(j,1)){
						fail = true;
						//break;
					}
				}
			}
			if(!fail)res.pb(num[i]);
		}
	}
	//cout <<"fffffffffff  "<<*res.end()<<end;
	//sort(res.begin(),res.end());
	return res;
}

double test0() {
	int t0[] = { 1, 4, 7, 10, 11, 12 };
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	PrimePairs * obj = new PrimePairs();
	clock_t start = clock();
	vector <int> my_answer = obj->matches(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int t1[] = {4, 10 };
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p1.size() > 0) {
		cout <<p1[0];
		for (int i=1; i<p1.size(); i++)
			cout <<", " <<p1[i];
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	cout <<endl <<"Your answer: " <<endl;
	cout <<"\t{ ";
	if (my_answer.size() > 0) {
		cout <<my_answer[0];
		for (int i=1; i<my_answer.size(); i++)
			cout <<", " <<my_answer[i];
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	if (my_answer != p1) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	int t0[] = { 11, 1, 4, 7, 10, 12 };
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	PrimePairs * obj = new PrimePairs();
	clock_t start = clock();
	vector <int> my_answer = obj->matches(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int t1[] = {12 };
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p1.size() > 0) {
		cout <<p1[0];
		for (int i=1; i<p1.size(); i++)
			cout <<", " <<p1[i];
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	cout <<endl <<"Your answer: " <<endl;
	cout <<"\t{ ";
	if (my_answer.size() > 0) {
		cout <<my_answer[0];
		for (int i=1; i<my_answer.size(); i++)
			cout <<", " <<my_answer[i];
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	if (my_answer != p1) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	int t0[] = { 8, 9, 1, 14 };
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	PrimePairs * obj = new PrimePairs();
	clock_t start = clock();
	vector <int> my_answer = obj->matches(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	vector <int> p1;
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p1.size() > 0) {
		cout <<p1[0];
		for (int i=1; i<p1.size(); i++)
			cout <<", " <<p1[i];
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	cout <<endl <<"Your answer: " <<endl;
	cout <<"\t{ ";
	if (my_answer.size() > 0) {
		cout <<my_answer[0];
		for (int i=1; i<my_answer.size(); i++)
			cout <<", " <<my_answer[i];
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	if (my_answer != p1) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	int t0[] = { 34, 39, 32, 4, 9, 35, 14, 17 };
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	PrimePairs * obj = new PrimePairs();
	clock_t start = clock();
	vector <int> my_answer = obj->matches(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int t1[] = {9, 39 };
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p1.size() > 0) {
		cout <<p1[0];
		for (int i=1; i<p1.size(); i++)
			cout <<", " <<p1[i];
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	cout <<endl <<"Your answer: " <<endl;
	cout <<"\t{ ";
	if (my_answer.size() > 0) {
		cout <<my_answer[0];
		for (int i=1; i<my_answer.size(); i++)
			cout <<", " <<my_answer[i];
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	if (my_answer != p1) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test4() {
	int t0[] = { 941, 902, 873, 841, 948, 851, 945, 854, 815, 898,
  806, 826, 976, 878, 861, 919, 926, 901, 875, 864 }
;
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	PrimePairs * obj = new PrimePairs();
	clock_t start = clock();
	vector <int> my_answer = obj->matches(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int t1[] = {806, 926 };
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p1.size() > 0) {
		cout <<p1[0];
		for (int i=1; i<p1.size(); i++)
			cout <<", " <<p1[i];
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	cout <<endl <<"Your answer: " <<endl;
	cout <<"\t{ ";
	if (my_answer.size() > 0) {
		cout <<my_answer[0];
		for (int i=1; i<my_answer.size(); i++)
			cout <<", " <<my_answer[i];
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	if (my_answer != p1) {
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

	time = test3();
	if (time < 0)
		errors = true;

	time = test4();
	if (time < 0)
		errors = true;

	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}


//Powered by [KawigiEdit] 2.0!
