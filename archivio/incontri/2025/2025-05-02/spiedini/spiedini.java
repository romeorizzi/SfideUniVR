public static int solve(int N, int K, int[] S) {
     int[] prefVal = new int[N+1], prefCnt = new int[N+1];
        for (int i = 1; i <= N; i++) {
            prefVal[i] = prefVal[i-1] + S[i-1];
            prefCnt[i] = prefCnt[i-1] + (S[i-1] == 0 ? 1 : 0);
        }

        int[] suffVal = new int[N+1], suffCnt = new int[N+1];
        for (int j = 1; j <= N; j++) {
            suffVal[j] = suffVal[j-1] + S[N-j];
            suffCnt[j] = suffCnt[j-1] + (S[N-j] == 0 ? 1 : 0);
        }

        int best = 0;
        int y = N;
        for (int x = 0; x <= N; x++) {
            if (y > N - x) 
                y = N - x;
            
            while (y > 0 && prefVal[x] + suffVal[y] > K) 
                y--;
            
            best = Math.max(best, prefCnt[x] + suffCnt[y]);
        }
        return best;
    }
