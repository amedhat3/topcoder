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
#include <set>

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

class WhatsThisChord {
public:
	string classify(vector <int>);
};

string WhatsThisChord::classify(vector <int> c) {
	vs all;
	all.pb("C");
	all.pb("C#");
	all.pb("D");
	all.pb("D#");	 
	all.pb("E");
	all.pb("F");
	all.pb("F#");
	all.pb("G");
	all.pb("G#");
	all.pb("A");
	all.pb("A#");
	all.pb("B");
	
	vs strl;
	strl.pb("E");
	strl.pb("A");
	strl.pb("D");
	strl.pb("G");
	strl.pb("B");
	strl.pb("E");
	
	set <string> res;
	int i=0;
	string sss="";
	for(i = 0 ; i < (int)c.sz ;i++){
		if(c[i]==-1)continue;
		for(int j =0 ; j < (int)all.sz ;j++){
			if(strl[i].compare(all[j])==0){
				sss = all[(j+c[i])%12];
				break;
			}
		}
		res.insert(sss);
		sss="";
	}
	set<string>::iterator it;
	
	vs fres;
	for (it=res.begin(); it!=res.end(); it++){
		fres.pb(*it);
	}
	
	vs f2;
	
	loop(i,all.sz)
	loop(j,fres.sz){
		if(all[i].compare(fres[j])==0){
			f2.pb(all[i]);
			cout << f2[f2.sz-1]<<endl;
		}
	}
		
	if(f2.sz != 3 ){
		return "";
	}
	
	
	int plus=0;
	loop(j,all.sz){
		if(f2[0].compare(all[j])==0){
			plus = j;
		}
	}
	
	int cc=0;
	loop(j,all.sz){
		if(f2[1].compare(all[j])==0){
			if((j+plus)%12 == 4){
					cc+= 1;
			}
			else if((j+plus)%12 == 3){
				cc+= 10;
			}
		}
		if(f2[2].compare(all[j])==0){
			if((j+plus)%12 == 7){
				cc+= 1;
			}
		}
	}
	
	cout <<cc<<endl;
	
	if(cc==2){
		return f2[0]+" Major";
	}
	else if (cc==11){
		return f2[0]+" Minor";
	}
	else{
		return "";
	}
}


double test0() {
	int t0[] = {-1, 3, 2, 0, 1, 0};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	WhatsThisChord * obj = new WhatsThisChord();
	clock_t start = clock();
	string my_answer = obj->classify(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "C Major";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p1 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	int t0[] = {3,2,0,0,0,3};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	WhatsThisChord * obj = new WhatsThisChord();
	clock_t start = clock();
	string my_answer = obj->classify(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "G Major";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p1 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	int t0[] = {-1,0,2,2,1,0};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	WhatsThisChord * obj = new WhatsThisChord();
	clock_t start = clock();
	string my_answer = obj->classify(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "A Minor";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p1 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	int t0[] = {-1,4,3,1,2,1};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	WhatsThisChord * obj = new WhatsThisChord();
	clock_t start = clock();
	string my_answer = obj->classify(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "C# Major";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p1 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	int t0[] = {8,10,10,9,8,8};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	WhatsThisChord * obj = new WhatsThisChord();
	clock_t start = clock();
	string my_answer = obj->classify(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "C Major";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p1 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	int t0[] = {0,0,0,0,0,0};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	WhatsThisChord * obj = new WhatsThisChord();
	clock_t start = clock();
	string my_answer = obj->classify(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p1 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
	if (p1 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test6() {
	int t0[] = {-1,-1,4,-1,-1,7};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	WhatsThisChord * obj = new WhatsThisChord();
	clock_t start = clock();
	string my_answer = obj->classify(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p1 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
	if (p1 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test7() {
	int t0[] = {-1, -1, 2, 0, 1, 0};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	WhatsThisChord * obj = new WhatsThisChord();
	clock_t start = clock();
	string my_answer = obj->classify(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "C Major";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p1 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	
	time = test6();
	if (time < 0)
		errors = true;
	
	time = test7();
	if (time < 0)
		errors = true;
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
