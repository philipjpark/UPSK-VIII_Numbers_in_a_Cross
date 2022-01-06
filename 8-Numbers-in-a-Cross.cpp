#include<iostream>
#include<cmath>
using namespace std;

bool test(int cross[], int x) {
	static int checkList[8][5] = {
		{-1},  
		{0,-1}, 
		{1,-1}, 
		{0,1,2,-1},
		{1,2,3,-1},
		{2,4,-1},
		{0,3,4,-1},
		{3,4,5,6,-1},
	};

  for (int i = 0; i < x; i++)
  if(cross[x] == cross[i])
return false;

for(int i = 0; checkList[x][i] != -1; i++)
   if(abs(cross[x] - cross[checkList[x][i]]) == 1) 
   return false;

return true;
}
  
void print(int cross[]) {
	static int count = 0;
	cout << "Solution number: " << ++count << endl;
	cout << " " << cross[1] << cross[2] << endl;
	cout << cross[0] << cross[3] << cross[4] << cross[5] << endl;
	cout << " " << cross[6] << cross[7] << endl;
	return;
}

 int main() {

int cross[8] = {0};
int c = 0;
cross[c] = 1;
c++;

 while(c >= 0){
     if(c > 7)
     {
     print(cross);
    c--;
   } 
 else cross[c] = 0;  

 while(c >= 0 && c < 8) {
 cross[c]++;
if(cross[c] > 8)
    c--;  
 else if (test(cross,c)){
    c++;
    break;
     }
   }
  }
  
 return 0;
 }