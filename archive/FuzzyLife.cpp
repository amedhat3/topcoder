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

class FuzzyLife {
public:
	int survivingCells(vector <string>);
};

int maxx;
int maxy;

int nsumm(vs g,int x,int y){
	int summ=0;
	for(int i = -1 ; i <= 1;i++ )
		for(int j = -1 ; j <= 1;j++ )
		{
			if(i==0 && j==0)continue;

			if(x+i < 0 || y+j < 0 || x+i >= maxx || y+j >= maxy )continue;

			summ += g[x+i][y+j]-'0';

		}
	return summ;
}

vs move(vs g){
	int summ=0;
	vs g2;

	g2.resize(maxx);
	loop(i,maxx)g2[i].resize(maxy);


	for(int i = 0 ; i < maxx;i++ )
		for(int j = 0 ; j < maxy;j++ ){

			summ = nsumm(g,i,j);

			if(g[i][j]=='1'){
				if(summ < 2 || summ > 3){
					g2[i][j]='0';
				}
				else{
					g2[i][j]='1';
				}
			}
			else if(g[i][j]=='0'){
				if(summ == 3){
					g2[i][j]='1';
				}
				else{
					g2[i][j]='0';
				}
			}
		}

		return g2;
}

int FuzzyLife::survivingCells(vector <string> g) {
	maxx=0;
	maxy=0;
	int unc=0;
	vi un;
	int count=0;

	maxx=g.sz;
	if(g.sz>0)maxy=g[0].sz;

	for(int i =0;i < maxx ; i++){
		for(int j =0;j<maxy;j++){
			if(g[i][j]=='?'){
			g[i][j]='1';//remove it later
				unc++;
			}
		}
	}

	for(int i =0;i < maxx ; i++){
		for(int j =0;j<maxy;j++){
			cout << g[i][j]<<"  ";
		}
		cout <<endl;
	}

	g = move(g);
	cout <<"-----------------"<<endl;
	for(int i =0;i < maxx ; i++){
		for(int j =0;j<maxy;j++){
			cout << g[i][j]<<"  ";
		}
		cout <<endl;
	}

	for(int i =0;i < maxx ; i++){
		for(int j =0;j<maxy;j++){
			if(g[i][j]=='1')count++;
		}
	}

	//un.resize(unc);

	/*for(int i =0;i < ii ; i++){
		for(int j =0;j<jj;j++){

		}
	}*/

	/*vpii mpp;
	mpp.resize(unc);

	loop(i,unc){
		mpp[i].first=0;
		mpp[i].second=0;
	}*/


	return count;
}

double test0() {
	string t0[] = {"011",
 "0?1",
 "100"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	FuzzyLife * obj = new FuzzyLife();
	clock_t start = clock();
	int my_answer = obj->survivingCells(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 5;
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
	string t0[] = {"101",
 "0?0",
 "101"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	FuzzyLife * obj = new FuzzyLife();
	clock_t start = clock();
	int my_answer = obj->survivingCells(p0);
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
double test2() {
	string t0[] = {"11",
 "11"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	FuzzyLife * obj = new FuzzyLife();
	clock_t start = clock();
	int my_answer = obj->survivingCells(p0);
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
double test3() {
	string t0[] = {"111",
 "1?1",
 "111"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	FuzzyLife * obj = new FuzzyLife();
	clock_t start = clock();
	int my_answer = obj->survivingCells(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 8;
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
double test4() {
	string t0[] = {"?11?",
 "0110",
 "1001",
 "?11?"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	FuzzyLife * obj = new FuzzyLife();
	clock_t start = clock();
	int my_answer = obj->survivingCells(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 12;
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
double test5() {
	string t0[] = {"00100",
 "01010",
 "10?01",
 "01010",
 "00100"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	FuzzyLife * obj = new FuzzyLife();
	clock_t start = clock();
	int my_answer = obj->survivingCells(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 12;
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
