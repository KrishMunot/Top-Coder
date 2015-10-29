#include <iostream>
#include <vector>
using namespace std;

class NumberGameAgain{
	public:
		
		bool isReducible(long long a, long long b){
			while(b){
				if(a==b)
					return true;
				b>>=1;
			}
			return false;
		}
		
		long long solve(int k, vector<long long> table){
			vector<bool> isValid(table.size(),true);
		}
		

int main(){
	
}
