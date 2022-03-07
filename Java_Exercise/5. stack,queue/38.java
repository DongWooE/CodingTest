import java.util.*;

public class code39 {
    public static void solution(int [][] board, int [] moves, int n, int m){

        Stack<Integer> s = new Stack<>();
        int cnt = 0;
        for(int i =0; i < m; i++){
            int pos = moves[i]-1;
            int cur = 0;
            for(int j =0; j < n; j++){
                if(board[j][pos] != 0){
                    cur = board[j][pos];
                    board[j][pos] = 0;
                    break;
                }
            }
            if(cur == 0 || s.empty()){
                if(s.empty()) s.add(cur);
                continue;
            }
            if(s.peek() == cur){
                s.pop();
                cnt += 2;
            }
            else s.add(cur);
        }

        System.out.println(cnt);


    }
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int N = s.nextInt();
        int[][] board = new int[N][N];
        for(int i =0; i < N; i++)
            for(int j =0; j < N; j++)
                board[i][j] = s.nextInt();
        int M = s.nextInt();
        int[] moves = new int[M];
        for(int i =0; i < M; i++)
            moves[i] = s.nextInt();

        solution(board, moves, N, M);
    }
}
