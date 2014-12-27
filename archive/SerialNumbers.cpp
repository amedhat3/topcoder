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

class SerialNumbers {
public:
	vector <string> sortSerials(vector <string>);
};

int digsum(string str){
	ui summ = 0;
	loop(i,str.sz){
		if(str[i] >= '0' && str[i] <= '9'){
			summ += (str[i]-'0');
		}
	}
	return summ;
}

bool digitcmp(string s1, string s2){
	loop(i,s1.sz){
		if(s1[i] == s2[i]){
			continue;
		}
		if(isdigit(s1[i]) && !isdigit(s2[i])){
			return false;
		}
		else if(!isdigit(s1[i]) && isdigit(s2[i])){
			return true;
		}
		else if(s1[i] < s2[i]){
			return false;
		}
		else if(s1[i] > s2[i]){
			return true;
		}
	}
	return false;
}

vector <string> SerialNumbers::sortSerials(vector <string> serialNumbers) {
	ui  n = serialNumbers.sz;
	loop(i,n-1){
		loop4m(j,i+1,n){
			string str;
			if(serialNumbers[i].sz > serialNumbers[j].sz){
				str= serialNumbers[i];
				serialNumbers[i] = serialNumbers[j];
				serialNumbers[j] =str;
			}
			else if (serialNumbers[i].sz < serialNumbers[j].sz){
				continue;
			}
			else if(digsum(serialNumbers[i]) > digsum(serialNumbers[j])){
				str= serialNumbers[i];
				serialNumbers[i] = serialNumbers[j];
				serialNumbers[j] =str;
			}
			else if(digsum(serialNumbers[i]) < digsum(serialNumbers[j])){
				continue;
			}
			else if(digitcmp(serialNumbers[i],serialNumbers[j])){
				str= serialNumbers[i];
				serialNumbers[i] = serialNumbers[j];
				serialNumbers[j] =str;
			}
		}
	}
	return serialNumbers;
}


double test0() {
	string t0[] = {"ABCD","145C","A","A910","Z321"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	SerialNumbers * obj = new SerialNumbers();
	clock_t start = clock();
	vector <string> my_answer = obj->sortSerials(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string t1[] = {"A", "ABCD", "Z321", "145C", "A910" };
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p1.size() > 0) {
		cout <<"\""<<p1[0]<<"\"";
		for (int i=1; i<p1.size(); i++)
			cout <<", \"" <<p1[i]<<"\"";
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	cout <<endl <<"Your answer: " <<endl;
	cout <<"\t{ ";
	if (my_answer.size() > 0) {
		cout <<"\""<<my_answer[0]<<"\"";
		for (int i=1; i<my_answer.size(); i++)
			cout <<", \"" <<my_answer[i]<<"\"";
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	if (my_answer != p1) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	string t0[] = {"Z19", "Z20"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	SerialNumbers * obj = new SerialNumbers();
	clock_t start = clock();
	vector <string> my_answer = obj->sortSerials(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string t1[] = {"Z20", "Z19" };
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p1.size() > 0) {
		cout <<"\""<<p1[0]<<"\"";
		for (int i=1; i<p1.size(); i++)
			cout <<", \"" <<p1[i]<<"\"";
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	cout <<endl <<"Your answer: " <<endl;
	cout <<"\t{ ";
	if (my_answer.size() > 0) {
		cout <<"\""<<my_answer[0]<<"\"";
		for (int i=1; i<my_answer.size(); i++)
			cout <<", \"" <<my_answer[i]<<"\"";
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	if (my_answer != p1) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	string t0[] = {"34H2BJS6N","PIM12MD7RCOLWW09","PYF1J14TF","FIPJOTEA5"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	SerialNumbers * obj = new SerialNumbers();
	clock_t start = clock();
	vector <string> my_answer = obj->sortSerials(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string t1[] = {"FIPJOTEA5", "PYF1J14TF", "34H2BJS6N", "PIM12MD7RCOLWW09" };
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p1.size() > 0) {
		cout <<"\""<<p1[0]<<"\"";
		for (int i=1; i<p1.size(); i++)
			cout <<", \"" <<p1[i]<<"\"";
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	cout <<endl <<"Your answer: " <<endl;
	cout <<"\t{ ";
	if (my_answer.size() > 0) {
		cout <<"\""<<my_answer[0]<<"\"";
		for (int i=1; i<my_answer.size(); i++)
			cout <<", \"" <<my_answer[i]<<"\"";
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	if (my_answer != p1) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	string t0[] = {"ABCDE", "BCDEF", "ABCDA", "BAAAA", "ACAAA"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	SerialNumbers * obj = new SerialNumbers();
	clock_t start = clock();
	vector <string> my_answer = obj->sortSerials(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string t1[] = {"ABCDA", "ABCDE", "ACAAA", "BAAAA", "BCDEF" };
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p1.size() > 0) {
		cout <<"\""<<p1[0]<<"\"";
		for (int i=1; i<p1.size(); i++)
			cout <<", \"" <<p1[i]<<"\"";
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	cout <<endl <<"Your answer: " <<endl;
	cout <<"\t{ ";
	if (my_answer.size() > 0) {
		cout <<"\""<<my_answer[0]<<"\"";
		for (int i=1; i<my_answer.size(); i++)
			cout <<", \"" <<my_answer[i]<<"\"";
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	if (my_answer != p1) {
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
