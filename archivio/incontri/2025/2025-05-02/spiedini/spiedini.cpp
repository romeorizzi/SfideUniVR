#include<cassert>
#include<iostream>
//#include<cmath>

using namespace std;

const int MAXN = 20000000;
int N,K, S[MAXN];

void  print_array(int n, int A[]) {
}


int solve(int N, int K, int S[]) {
  /*
      N = numero di pezzi di frutta sullo spiedino
      K = il budget di spesa
      S = la lista dei costi dei frutti come presi da sinistra verso destra. Gli unici fruttio a costo 0 sono le fragole, che sono esattemente quelle di cui vorrei mangiarne il maggior numero. Quante rieso a mancgiarne stando dentro il budget?
   */
  assert(N >= 0);
  int prefVal[N+1], prefCnt[N+1]; // prefCnt[i] = #fragole_in([1,i])
  prefVal[0] = prefCnt[0] = 0;
  for (int i = 1; i <= N; i++) {
    prefVal[i] = prefVal[i-1] + S[i-1];
    prefCnt[i] = prefCnt[i-1] + (S[i-1] == 0 ? 1 : 0);
  }

  int suffVal[N+1], suffCnt[N+1]; // suffCnt[i] = #fragole_in([N-j,N-1])
  suffVal[0] = suffCnt[0] = 0;
  for (int j = 1; j <= N; j++) {
    suffVal[j] = suffVal[j-1] + S[N-j];
    suffCnt[j] = suffCnt[j-1] + (S[N-j] == 0 ? 1 : 0);
  }

  print_array(N, suffVal);
  
  int best_so_far = 0;
  int numR = N; // assumo di magiare tutti gli N frutti da destra
  for (int numL = 0; numL <= N; numL++) {
    if (numR > N - numL) 
      numR = N - numL;
            
    while (numR > 0 && prefVal[numL] + suffVal[numR] > K) 
      numR--;
            
    best_so_far = max(best_so_far, prefCnt[numL] + suffCnt[numR]);
  }
  return best_so_far;
}

int main() {
#ifdef EVAL
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
#endif
	cin >> N, K;
	for(int i=0; i<N; i++)
	  cin >> S[i];
	cout << solve(N, K, S) << endl;  
}
