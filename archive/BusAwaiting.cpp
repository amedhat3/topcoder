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

class BusAwaiting {
public:
	int waitingTime(vector <string>, int);
};

int BusAwaiting::waitingTime(vector <string> buses, int at) {

	ss str;
	str.clear();
	int arr,intr,count;
	int minn = INT_MAX;
	loop(i,buses.sz){
		str << buses[i];
		str >> arr >> intr >> count;
		str.clear();
		
		cout <<"aaaa: " << at <<"  "<<arr<<endl;
		if(at  < arr){
			if(arr-at < minn )minn = arr-at;
		}
		else if(at == arr)return 0;
		
		/*if(at > arr+intr*(count-1)){
			return
		}*/
		
		for(int j = arr ;j < arr+intr*(count-1);j+=intr){
			cout << j << "  "<< at << "  "<<j+intr<<endl;
			if (j == at )return 0;
			if(j < at && j+intr >=at){
				if(j+intr-at < minn) {
					minn = j+intr-at;
					break;
				}
			}
		}
	}
	
	if(minn == INT_MAX)return -1;
	
	return minn;
}


double test0() {
	string t0[] = {"150 50 10"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int p1 = 285;
	BusAwaiting * obj = new BusAwaiting();
	clock_t start = clock();
	int my_answer = obj->waitingTime(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 15;
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
	string t0[] = {"123456 10000 1"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int p1 = 123456;
	BusAwaiting * obj = new BusAwaiting();
	clock_t start = clock();
	int my_answer = obj->waitingTime(p0, p1);
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
	string t0[] = {"270758 196 67",
 "904526 8930 66",
 "121164 3160 56"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int p1 = 1;
	BusAwaiting * obj = new BusAwaiting();
	clock_t start = clock();
	int my_answer = obj->waitingTime(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 121163;
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
	string t0[] = {"718571 2557 74",
 "480573 9706 54",
 "16511 6660 90"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int p1 = 1000000;
	BusAwaiting * obj = new BusAwaiting();
	clock_t start = clock();
	int my_answer = obj->waitingTime(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = -1;
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
	string t0[] = {"407917 8774 24",
 "331425 4386 58",
 "502205 9420 32",
 "591461 1548 79",
 "504695 8047 53"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int p1 = 395439;
	BusAwaiting * obj = new BusAwaiting();
	clock_t start = clock();
	int my_answer = obj->waitingTime(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 1776;
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
