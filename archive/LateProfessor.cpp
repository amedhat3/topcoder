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
class LateProfessor {
public:
	double getProbability(int, int, int, int, int);
};

double LateProfessor::getProbability(int wtt, int wkt, int lt, int ba, int wa) {

	int term2 = 0;//the value of walk time in the professer intervales
	int term3 = wa - ba ;
	
	int start,last;
	
	for(int i = wtt ; i <= wa ; i += wkt+wtt ){
		if(ba < i || ba < i + wkt ){
		
			last = (wa > i + wkt) ? i + wkt : wa;
			start = (ba < i) ? i : ba;
			if( (ba >= i && ba <= i+wkt ) && ( wa >= i && wa <= i+wkt ) ){
				if(ba == wa  && wa == i){
					return 0.0;
				}
				if( last <= i+wkt-lt )
					return 1.0;
				else if(last > i+wkt-lt && start <= i+wkt-lt )
					term2 += i+wkt-lt - start;
				else
					return 0.0;
			}
			
			else if( ( wa >= i && wa <= i+wkt ) ){
				if(last > i+wkt-lt )
					term2+=wkt-lt < 0 ? 0 : wkt-lt;
				else
					//term2+=last-start-lt < 0 ? 0 :  last-start-lt;
					term2 += last-start;
			}
			else if(  (ba >= i && ba <= i+wkt ) ){
				term2+=last-start-lt < 0 ? 0 :  last-start-lt;
			}
			else if( ba < i && wa > i+wkt ){
				term2+=last-start-lt < 0 ? 0 :  last-start-lt;
			}
			else{
				cout <<"Iam stupid please fire me"<<endl;
			}
		}
	}
	if(term3==0.0 && term2 == 0)return 0.0;
	else if(term3==0.0 && term2 > 0) return 1.0;
	
	return (term2*1.0) / (term3*1.0);
}


double test0() {
	int p0 = 20;
	int p1 = 30;
	int p2 = 10;
	int p3 = 0;
	int p4 = 50;
	LateProfessor * obj = new LateProfessor();
	clock_t start = clock();
	double my_answer = obj->getProbability(p0, p1, p2, p3, p4);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p5 = 0.4;
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
	int p0 = 20;
	int p1 = 30;
	int p2 = 10;
	int p3 = 30;
	int p4 = 100;
	LateProfessor * obj = new LateProfessor();
	clock_t start = clock();
	double my_answer = obj->getProbability(p0, p1, p2, p3, p4);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p5 = 0.42857142857142855;
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
	int p0 = 20;
	int p1 = 40;
	int p2 = 50;
	int p3 = 0;
	int p4 = 300;
	LateProfessor * obj = new LateProfessor();
	clock_t start = clock();
	double my_answer = obj->getProbability(p0, p1, p2, p3, p4);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p5 = 0.0;
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
	int p0 = 101;
	int p1 = 230;
	int p2 = 10;
	int p3 = 654;
	int p4 = 17890;
	LateProfessor * obj = new LateProfessor();
	clock_t start = clock();
	double my_answer = obj->getProbability(p0, p1, p2, p3, p4);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p5 = 0.6637270828498492;
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
	int p0 = 20;
	int p1 = 30;
	int p2 = 10;
	int p3 = 90;
	int p4 = 90;
	LateProfessor * obj = new LateProfessor();
	clock_t start = clock();
	double my_answer = obj->getProbability(p0, p1, p2, p3, p4);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p5 = 1.0;
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
double test5() {
	int p0 = 1000;
	int p1 = 600;
	int p2 = 1;
	int p3 = 17000;
	int p4 = 17000;
	LateProfessor * obj = new LateProfessor();
	clock_t start = clock();
	double my_answer = obj->getProbability(p0, p1, p2, p3, p4);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p5 = 0.0;
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
	
	time = test5();
	if (time < 0)
		errors = true;
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
