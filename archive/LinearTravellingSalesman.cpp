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
#include <limits.h>

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

class LinearTravellingSalesman {
public:
	int findMinimumDistance(vector <int>, vector <int>);
};

int LinearTravellingSalesman::findMinimumDistance(vector <int> x, vector <int> y) {
	int maxx , maxy,minx,miny;
	maxx=0;
	maxy=0;
	
	minx=INT_MAX;
	miny=INT_MAX;
	
	loop(i,x.sz){
		if(x[i] > maxx) maxx = x[i];
		if(y[i] > maxy) maxy = y[i];
		
		if(x[i] < minx) minx = x[i];
		if(y[i] < miny) miny = y[i];
	}
	
	return abs(maxx-minx)+abs(maxy-miny);
}


double test0() {
	int t0[] = {1,3,5};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {2,2,2};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	LinearTravellingSalesman * obj = new LinearTravellingSalesman();
	clock_t start = clock();
	int my_answer = obj->findMinimumDistance(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 4;
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
	int t0[] = {3,2,1};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {3,2,1};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	LinearTravellingSalesman * obj = new LinearTravellingSalesman();
	clock_t start = clock();
	int my_answer = obj->findMinimumDistance(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 4;
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
	int t0[] = {0,100,1000,10000};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {0,10,100,1000};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	LinearTravellingSalesman * obj = new LinearTravellingSalesman();
	clock_t start = clock();
	int my_answer = obj->findMinimumDistance(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 11000;
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
double test3() {
	int t0[] = {80,60,70,50};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {50,70,60,80};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	LinearTravellingSalesman * obj = new LinearTravellingSalesman();
	clock_t start = clock();
	int my_answer = obj->findMinimumDistance(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 60;
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
double test4() {
	int t0[] = {7,7,7,7,7,7,7};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {105,1231,5663,295,3062,380,7777};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	LinearTravellingSalesman * obj = new LinearTravellingSalesman();
	clock_t start = clock();
	int my_answer = obj->findMinimumDistance(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 7672;
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
