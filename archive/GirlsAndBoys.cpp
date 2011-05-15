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

class GirlsAndBoys {
public:
	int sortThem(string);
};

int GirlsAndBoys::sortThem(string row) {

int G,B;
G=0;B=0;
char mchar;
	mchar = 'G';
	char t;
	string s1 = row;
	string s2 = row;
	int c1=0;
	int c2=0;
	int c3=0;
	int c4=0;
	
	int m=0;
	for(int i = 1 ; i < row.sz ; i ++){
		m=i;
		for(int j = i-1 ; j >= 0 ; j--){
			if(s1[j]!=mchar){
				t = s1[m];
				s1[m] = s1[j];
				s1[j]=t;
				c1++;
				m--;
			}
			else{
				break;
			}
		}
	}
	
	for(int i = row.sz-2 ; i >= 0 ; i --){
		if(s2[i]==mchar){
			m=i;
			for(int j = i+1 ; j < row.sz ; j++){
				if(s2[j]!=mchar){
					t = s2[m];
					s2[m] = s2[j];
					s2[j]=t;
					c2++;
					m++;
				}
				else{
					break;
				}
			}
		}
	}
	
	mchar = 'B';
	s1=row;
	s2=row;
	for(int i = 1 ; i < row.sz ; i ++){
		m=i;
		for(int j = i-1 ; j >= 0 ; j--){
			if(s1[j]!=mchar){
				t = s1[m];
				s1[m] = s1[j];
				s1[j]=t;
				c3++;
				m--;
			}
			else{
				break;
			}
		}
	}
	
	for(int i = row.sz-2 ; i >= 0 ; i --){
		if(s2[i]==mchar){
			m=i;
			for(int j = i+1 ; j < row.sz ; j++){
				if(s2[j]!=mchar){
					t = s2[m];
					s2[m] = s2[j];
					s2[j]=t;
					c4++;
					m++;
				}
				else{
					break;
				}
			}
		}
	}
	return min(c1,min(c2,min(c3,c4)));
}


double test0() {
	string p0 = "GGBBG";
	GirlsAndBoys * obj = new GirlsAndBoys();
	clock_t start = clock();
	int my_answer = obj->sortThem(p0);
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
double test1() {
	string p0 = "BBBBGGGG";
	GirlsAndBoys * obj = new GirlsAndBoys();
	clock_t start = clock();
	int my_answer = obj->sortThem(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 0;
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
	string p0 = "BGBGBGBGGGBBGBGBGG";
	GirlsAndBoys * obj = new GirlsAndBoys();
	clock_t start = clock();
	int my_answer = obj->sortThem(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 33;
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
double test3() {
	string p0 = "B";
	GirlsAndBoys * obj = new GirlsAndBoys();
	clock_t start = clock();
	int my_answer = obj->sortThem(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 0;
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
	
	time = test3();
	if (time < 0)
		errors = true;
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
