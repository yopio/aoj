#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string s;
string s1 = " ',.!?',.!?',.!?";
string s2 = " abcABCabcABCabcABC";
string s3 = " defDEFdefDEFdefDEF";
string s4 = " ghiGHIghiGHIghiGHI";
string s5 = " jklJKLjklJKLjklJKL";
string s6 = " mnoMNOmnoMNOmnoMNO";
string s7 = " pqrsPQRSpqrsPQRSpqrtPQRS";
string s8 = " tuvTUVtuvTUVtuvTUV";
string s9 = " wxyzWXYZwxyzWXYZwxyzWZYZ";

int main(void){

  while( cin >> s ){

    int cnt = 0;

    for( int i = 0 ; i < s.size() ; i++ ){
      if( s[i] == '1' ){
	for( int j = i ; s[j] == '1' ; j++ , i++ ) cnt++;
	cout << s1[cnt];
	i--;
      }
      else if( s[i] == '2' ){
	for( int j = i ; s[j] == '2' ; j++ , i++ ) cnt++;
	cout << s2[cnt];
	i--;
      }
      else if( s[i] == '3' ){
	for( int j = i ; s[j] == '3' ; j++ , i++ ) cnt++; 
	cout << s3[cnt];
	i--;
      }
      else if( s[i] == '4' ){
	for( int j = i ; s[j] == '4' ; j++ , i++ ) cnt++;
	cout << s4[cnt];
	i--;
      }
      else if( s[i] == '5' ){
	for( int j = i ; s[j] == '5'; j++ , i++ ) cnt++;
	cout << s5[cnt];
	i--;
      }
      else if( s[i] == '6' ){
	for( int j = i ; s[j] == '6'; j++ , i++ ) cnt++;
	cout << s6[cnt];
	i--;
      }
      else if( s[i] == '7' ){
	for( int j = i ; s[j] == '7' ; j++ , i++ ) cnt++;
	cout << s7[cnt];
	i--;
      }
      else if( s[i] == '8' ){
	for( int j = i ; s[j] == '8' ; j++ , i++ ) cnt++;
	cout << s8[cnt];
	i--;
      }
      else if( s[i] == '9' ){
	for( int j = i ; s[j] == '9' ; j++ , i++ ) cnt++;
	cout << s9[cnt];
	i--;
      }
      else if( s[i] == '0' && s[i + 1] == '0' && s[i + 2] == '0' ){
	cout << "  ";
	i += 2;
      }
      else if( s[i] == '0' && s[i + 1] == '0' ){
	cout << " ";
	i++;
      }
      cnt = 0;
    }
    cout << endl;
  }
  return 0;
}


