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

class JingleRingle {
public:
	int profit(vector <int>, vector <int>, int);
};

int JingleRingle::profit(vector <int> buyOffers, vector <int> sellOffers, int tax) {
	return 5;
}


double test0() {
	int t0[] = {1000, 1024};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {990, 1011};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int p2 = 0;
	JingleRingle * obj = new JingleRingle();
	clock_t start = clock();
	int my_answer = obj->profit(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 34;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p3 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p3 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	int t0[] = {1000, 1001, 1002};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {980, 981, 982};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int p2 = 2;
	JingleRingle * obj = new JingleRingle();
	clock_t start = clock();
	int my_answer = obj->profit(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 2;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p3 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p3 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	int t0[] = {100, 120, 140};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {150, 170, 200};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int p2 = 15;
	JingleRingle * obj = new JingleRingle();
	clock_t start = clock();
	int my_answer = obj->profit(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 0;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p3 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p3 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	vector <int> p0;
	vector <int> p1;
	int p2 = 20;
	JingleRingle * obj = new JingleRingle();
	clock_t start = clock();
	int my_answer = obj->profit(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 0;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p3 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p3 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test4() {
	int t0[] = {1692, 3281, 862};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {2701, 2819, 2582, 1918, 638, 601, 1128, 2760, 1949, 3074,
  615, 2221, 1691, 3226, 1351, 1329, 556, 1060, 898, 1080,
 2494, 2379, 3148, 737, 1412, 3290, 1594, 1314, 959, 3192,
 1326, 932, 1103, 937, 1670, 2017, 1403, 1282, 2949, 2940,
 2557, 940, 2561, 1248, 2385, 541, 2382, 1309, 831};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int p2 = 4;
	JingleRingle * obj = new JingleRingle();
	clock_t start = clock();
	int my_answer = obj->profit(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 3905;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p3 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p3 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test5() {
	int t0[] = {5016, 7212, 7613, 1590, 2942, 5155, 5898, 8113, 2001, 2348,
  671, 5167, 7524, 2467, 4294, 3628, 4480, 5872, 5230, 3732,
 4637, 6419, 1431, 6335, 1652, 3005, 2125, 2193, 2183, 5856,
 1795, 5441, 2079, 7114, 2290, 4025, 5943, 1695};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {2407, 5602, 1350};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int p2 = 3;
	JingleRingle * obj = new JingleRingle();
	clock_t start = clock();
	int my_answer = obj->profit(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 13195;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p3 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p3 != my_answer) {
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
	
	time = test5();
	if (time < 0)
		errors = true;
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
