#include <iostream>

using namespace std;

int main() {
    int n,t,rot=0,x,on;
    cin >> n >> t;
    unsigned int s = 0,h;
    for(int i=0;i<n;i++){
    cin >> x;
    s |= (1<<x);
	}
	cout <<"s: "<< s << endl;
	h=s;
	x=1;
	while (x==1 ){
		on = h &(1<<(t-1));
		h &= ~(1<<(t-1));
		h = h << 1;
		if (on !=0 )
		h |= (1<<0);
		cout <<"h: "<< h << endl;
		if (h != s)
		rot ++ ;
		else
		x=0;
	}
    cout << rot;
    return 0;
}
