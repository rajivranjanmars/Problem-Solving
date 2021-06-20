#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
     if(s[8]=='A'){
     
    s.resize(8);
    if (s[0]=='1'&&s[1]=='2')
    {
        s[0] = '0';
        s[1] = '0';
    }
    return s ;
  }
  else{
      s.resize(8);
      if (s[0]=='1'&&s[1]=='2')
    {
        s[0] = '0';
        s[1] = '0';
    }
    int a=10*((int)s[0] -48)+((int)s[1] -48) ;
     a+=12;
     int b=a%10;
     a/=10;
     a+=48;
     b+=48;
     s[0]=(char)a;
     s[1]=(char)b;
     return s;
  }

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
