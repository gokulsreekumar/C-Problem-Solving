#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int n;
	    cin >> n;
	    int arr[n];int min=99999;
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	        if(arr[i]<min){
	            min=arr[i];
	        }
	    }
	    int divicible = 1;
	    for(int i=0; i<n; i++){
	        if(arr[i]%min != 0){
	            divicible = 0;
	            break;
	        }
	    }
	    if(divicible==1){
	        for(int i=0; i<n; i++){
	            cout<<arr[i]/min<<" ";
	        }
	    } else {
	        for(int i=0; i<n; i++){
	            cout<<arr[i]<<" ";
	        }
	    }
	    cout<<"\n";
	}
	return 0;
}
