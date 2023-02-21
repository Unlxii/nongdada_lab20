#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect A, Rect B){
	double area1 = min((A.x+A.w),(B.x+B.w))-max(A.x,B.x);
	double area2 =min((A.y+A.h),(B.y+B.h))-B.y;
	double sum =0;
	if(area1 <= 0 || area2 <=0){
		return sum;
	}else{
		sum = area1*area2;
		return sum;
	}	

	
	
};
int main(){
Rect R1 = {1,1,5,5};
Rect R2 = {7,2,3,3};	
cout << overlap(R1,R2);	
}

