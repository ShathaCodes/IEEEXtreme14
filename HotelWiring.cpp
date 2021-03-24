#include <iostream>

using namespace std;

int main() {
    int t,tests=0,i,index,min;
    cin >> t;
    int m,n,k,powered,good;
    while (tests<t){
        powered=0;good=0;
    	cin >> m >> n >> k;
    	int rooms[m];
    	for(i=0;i<m;i++){
		cin >> rooms[i];
		good+=rooms[i];
		}
    	if ( k == 0)
    	powered = good;
    	else if (k == m)
    	powered = m*n - good;
    	else {
    		for(int lol=0;lol<k;lol++)
			{
    		index=0;
			min= rooms[0];
    		for(i=1;i<m;i++){
    			if(rooms[i]<min){
    				index=i;
    				min=rooms[i];
				}
			}
			powered += n - min;
			rooms[index]= n+10;
			}
			for(i=0;i<m;i++){
				if(rooms[i] <= n){
					powered += rooms[i];
				}
			}
		}
    	cout << powered<< endl;
    	tests++;
	}
    return 0;
}
