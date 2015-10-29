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
		

int main(){
	
}
