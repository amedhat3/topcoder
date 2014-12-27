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

class ActivateGame {
public:
	int findMaxScore(vector <string>);
};
int rr,cc;
int myscore;
int ax,ay,dx,dy;
vvi g;

vector< vector<bool> > act;

int solve( int x, int y ){

	cout <<x<<" "<<y<<endl;

	if (x > cc || y > rr || x < 0 || y < 0)return 0;

	int maxx = 0;
	int res;
	for(int i = -1 ; i<=1;i++ ){
		for(int j = -1 ; i <= 1 ; j++){
			if(i==0 && j == 0)continue;
			if(x+i >= cc || y+j >= rr || x+i < 0 || y+j < 0)continue;
			cout << x+i <<" "<<y+j<<endl;
			if(act[x+i][y+j] == false){
				act[x+i][y+j] = true;
				res = solve(x+i,y+j);
				if (abs(res-g[x][y]) > maxx)maxx = abs(res-g[x][y]);
				else act[x+i][y+j] = false;
			}
		}
	}

	return maxx;
}

int ActivateGame::findMaxScore(vector <string> grid) {

	rr= grid.sz;
	if(rr > 0)cc= grid[0].sz;
	else cc =0;

	act.resize(rr);
	g.resize(rr);
	loop(i,rr){
		g.resize(cc);
		loop(j,cc){
			if(grid[i][j] >= '0' && grid[i][j] <= '9')g[i][j] = grid[i][j] -'0';
			else if(grid[i][j] >= 'a' && grid[i][j] <= 'z')g[i][j] = grid[i][j]-'a' + 10;
			else if(grid[i][j] >= 'A' && grid[i][j] <= 'Z')g[i][j] = grid[i][j] -'A' + 36;

			act[i].pb(false);
		}
	}

	act[0][0]=true;

return solve(0,0);
//	return 5;
}

double test0() {
	string t0[] = {"05",
 "aB"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	ActivateGame * obj = new ActivateGame();
	clock_t start = clock();
	int my_answer = obj->findMaxScore(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 69;
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
	string t0[] = {"03",
 "21"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	ActivateGame * obj = new ActivateGame();
	clock_t start = clock();
	int my_answer = obj->findMaxScore(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 7;
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
	string t0[] = {"John",
 "Brus",
 "Gogo"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	ActivateGame * obj = new ActivateGame();
	clock_t start = clock();
	int my_answer = obj->findMaxScore(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 118;
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
	string t0[] = {"AAA",
 "AAA",
 "AAA"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	ActivateGame * obj = new ActivateGame();
	clock_t start = clock();
	int my_answer = obj->findMaxScore(p0);
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
