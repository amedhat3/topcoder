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

class SumRectangle {
public:
	int getCorner(vector <int>, vector <int>);
};
int mx,my;


int SumRectangle::getCorner(vector <int> l, vector <int> t) {
	vvi grid;

	my = l.sz;
	mx = t.sz;
	cout << mx << "  "<< my<<endl;
	grid.resize(my);

	loop(i,my){
		grid[i].resize(mx);
	}

	loop(i,my){
			grid[i][0]= l[i];
	}

	loop(i,mx){
			grid[0][i]= t[i];
	}

	for(int i=1;i <my;i++){
		for(int j=1;j<mx;j++){
			grid[i][j] = grid[i-1][j-1]-grid[i-1][j]-grid[i][j-1];
		}
	}

	return grid[my-1][mx-1];


}


double test0() {
	int t0[] = {88,18,1};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {88,57,33,10,5};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	SumRectangle * obj = new SumRectangle();
	clock_t start = clock();
	int my_answer = obj->getCorner(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 18;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	int t0[] = {0,0,0,0};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {0,0,0,0};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	SumRectangle * obj = new SumRectangle();
	clock_t start = clock();
	int my_answer = obj->getCorner(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 0;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	int t0[] = {6,1};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {6,2};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	SumRectangle * obj = new SumRectangle();
	clock_t start = clock();
	int my_answer = obj->getCorner(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 3;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
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
