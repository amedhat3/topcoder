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
#include <string.h>

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

class RectangularIsland {
public:
	double theProbablity(int, int, int, int, int);
};

double b[1000][1000];

int w,h;


bool step(int x,int y){
	if(x >= w || y >= h || x < 0 || y < 0)return false;
	return true;
}
double solve(int x,int y,int s){
	if(b[x][y]!=-1)return b[x][y];
double res=1.0;
	loop(i,s){
	if(step(x,y)){
		res+= solve(x+1,y,s-1)+		
		solve(x-1,y,s-1)+
		solve(x,y+1,s-1)+
		solve(x,y-1,s-1);	
	}
	else{
		b[x][y] = 0;
		return 0.0;
	}
	}
	b[x][y] = res/4.0;
	return res/4.0;
}

double RectangularIsland::theProbablity(int width, int height, int x, int y, int steps) {
	memset(b,-1,sizeof(double)*1000*1000);
	w= width;
	h = height;
	return solve(x,y,steps);
}


double test0() {
	int p0 = 5;
	int p1 = 8;
	int p2 = 4;
	int p3 = 3;
	int p4 = 1;
	RectangularIsland * obj = new RectangularIsland();
	clock_t start = clock();
	double my_answer = obj->theProbablity(p0, p1, p2, p3, p4);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p5 = 0.75;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p5 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p5 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	int p0 = 5;
	int p1 = 8;
	int p2 = 4;
	int p3 = 7;
	int p4 = 1;
	RectangularIsland * obj = new RectangularIsland();
	clock_t start = clock();
	double my_answer = obj->theProbablity(p0, p1, p2, p3, p4);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p5 = 0.5;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p5 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p5 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	int p0 = 2;
	int p1 = 2;
	int p2 = 0;
	int p3 = 1;
	int p4 = 5;
	RectangularIsland * obj = new RectangularIsland();
	clock_t start = clock();
	double my_answer = obj->theProbablity(p0, p1, p2, p3, p4);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p5 = 0.03125;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p5 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p5 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	int p0 = 58;
	int p1 = 85;
	int p2 = 47;
	int p3 = 74;
	int p4 = 1000;
	RectangularIsland * obj = new RectangularIsland();
	clock_t start = clock();
	double my_answer = obj->theProbablity(p0, p1, p2, p3, p4);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p5 = 0.13056659769966347;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p5 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p5 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test4() {
	int p0 = 1000;
	int p1 = 1000;
	int p2 = 123;
	int p3 = 456;
	int p4 = 5000;
	RectangularIsland * obj = new RectangularIsland();
	clock_t start = clock();
	double my_answer = obj->theProbablity(p0, p1, p2, p3, p4);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p5 = 0.9868611148475199;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p5 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p5 != my_answer) {
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
