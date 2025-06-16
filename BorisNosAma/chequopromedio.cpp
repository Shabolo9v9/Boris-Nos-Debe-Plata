#include<bits/stdc++.h>

using namespace std;

int main(){

	int t; cin >> t;
	
	while(t--){
		
		double p; cin >> p;
		vector<double> parciales;
		
		for(int i=0; i<3; ++i){
			
			double x; cin >> x;
			parciales.push_back(x);
			
		}
		
		sort(parciales.begin(), parciales.end());
		
		double p1 = parciales[2];
		double p2 = parciales[1];
		
		double fiinal; cin >> fiinal;
		
		double notafinal = (p*0.15) + (0.45*((p1+p2)/2)) + (0.40*fiinal);
		
		if(notafinal > 50){
			cout << "Si" << endl;
		}else{
			cout << "No" << endl;
		}
		
	
	}



}
