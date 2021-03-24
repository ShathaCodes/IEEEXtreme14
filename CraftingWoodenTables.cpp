#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int c,n,p,w,woods,nbr,k;
    cin >> c >> n >> p>>w;
    if (c > w )
    nbr = 0;
    else if ( c==w )
    nbr = 1;
	else{
	    nbr=0;
		woods=c;
    	vector<int> v,vs;
    	vs.push_back(0);
    	while (w){
    		if (w <= p){
    			v.push_back(w);
    			w =0;
			}
			else{
    			v.push_back(p);
				w -= p;
			}
		}
		vector<int>::iterator it ,it2;
		while (woods>0){
			
			for(int i =0;i<v.size();i++)
			cout << v[i]<<" ";
			cout << endl;
			cout <<"woods "<<woods<<endl;
												cout <<"nbr"<<nbr<<endl;
			
			sort(v.begin(),v.end());
			it = upper_bound(v.begin(),v.end(),0);
			if (*it >=woods){
				*it -=woods;
				woods = 0;
				it2 = v.end();
				k=0;
				while (*it2 !=0 && k<n){
					cout << "it2:   "<<*it2<<endl;
				it2 --;	
				k++;}
				if (*it2 == 0){
					*it2 = -1;
					nbr ++;
					woods = c;
				}

			}
			else if (*it>0){
				cout << "it " << *it << endl;
				woods -= *it;
				*it=0;
			}
			else
			woods=0;
		}
	}
	cout << nbr;
    return 0;
}
