#include <stdio.h>
#include <iostream>
#include <string.h>
#include <vector>
#include <stack>

#define PVI(X) for(int x=0;x<X.size();x++){printf("%d ",X[x]);}printf("\n");
#define SZ(X) ((int)(X).size())
#define ALL(X) (X).begin(), (X).end()
#define REP(I, N) for (int I = 0; I < (N); ++I)
#define REPP(I, A, B) for (int I = (A); I < (B); ++I)
#define RI(X) scanf("%d", &(X))
#define RII(X, Y) scanf("%d%d", &(X), &(Y))
#define RIII(X, Y, Z) scanf("%d%d%d", &(X), &(Y), &(Z))
#define RIIII(X, Y, Z, K) scanf("%d%d%d%d", &X, &Y, &Z, &K)
#define DRI(X) int (X); scanf("%d", &X)
#define DRII(X, Y) int X, Y; scanf("%d%d", &X, &Y)
#define DRIII(X, Y, Z) int X, Y, Z; scanf("%d%d%d", &X, &Y, &Z)
#define DRIIII(X, Y, Z, K) int X, Y, Z, K; scanf("%d%d%d%d", &X, &Y, &Z, &K)
#define RS(X) scanf("%s", (X))
#define CASET int ___T, case_n = 1; scanf("%d ", &___T); while (___T-- > 0)
#define CASENZ int ___T, case_n = 1; scanf("%d ", &___T); while (___T != 0)
#define MP make_pair
#define PB push_back
#define MS0(X) memset((X), 0, sizeof((X)))
#define MS1(X) memset((X), -1, sizeof((X)))
#define LEN(X) strlen(X)
#define F first
#define S second
using namespace std;


// Queue using two stacks

class MyQueue{
	public:
		void enqueue(int v){
			B.push(v);
		}
		int dequeue(){
			if(A.empty()){
				while(!B.empty()){
					int BTop = B.top();
					B.pop();
					A.push(BTop);
				}
			}
			int top = A.top();
			A.pop();
			return top;
		}
	private:
		stack<int> A,B;
};


int main(){	
	MyQueue *queue = new MyQueue();
 	queue->enqueue(1);
 	queue->enqueue(2);
 	queue->enqueue(3);
 	cout<<queue->dequeue()<<endl;
 	cout<<queue->dequeue()<<endl;
 	cout<<queue->dequeue()<<endl;
	return 0;
}
