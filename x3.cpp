#include<iostream>
using namespace std;

int main() {
   int n;
	cin>>n;
	int c=1,i=0;

	while(c<=n){

		if(i%2 == 0)
		{
			cout<<c<<" ";
			c++;

			if(c>n)
				break;
			cout<<c<<endl;
			c++;
			i++;
		}
		else
		{
			int y=c+1;
			if(y<=n){
				cout<<y<<" ";
			    
			}
			y--;
			if(y==n){
				cout<<"  "<<y<<endl;
				break;
			}
			cout<<y<<endl;
			i++;
			c=c+2;
		}


	}
	return 0;
 
	 
    
}