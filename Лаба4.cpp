#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
srand(time(NULL));
int a[100][100], n, i, j, t1, t2, s;
cin >> n;
for(i = 0; i < n; i++){
for(j = 0; j < n; j++){
a[i][j] = rand() % 10 - 3;
cout << a[i][j] <<" ";
}
cout << endl;
}

s=a[0][n-1];
for(i = 1; i < n; i++){
t1 = 0;
t2 = 0;
for(j = 0; j < n-i; j++){
t1 += a[i+j][j];
t2 += a[j][i+j];
}
if(t1 < s) s=t1;
if(t2 < s) s=t2;
}
cout<<"Result: "<<s<<endl;
bool flag = false;
for(int i = 0; i < n; i++){
flag = false;
int s = 0;
for(int j = 0; j < n; j++){
s += a[i][j];
if(a[i][j] < 0) flag = true;
}
if(!flag){
cout << "i:" << i+1 << " sum" << s;
}

}

return 0;
}

 
