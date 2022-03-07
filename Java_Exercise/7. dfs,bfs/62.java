import java.util.*;

public class code63 {
    private int cnt = 0;
    private int [] moveX = {-1,0,1,0};
    private int [] moveY = {0,1,0,-1};

    private static class Pair{
        private int x;
        private int y;
        private int day;

        Pair(int x, int y, int day){
            this.x = x;
            this.y = y;
            this.day = day;
        }
        Pair(){}
    }

    private void BFS(int n, int m, int[][] arr, ArrayList<Pair> ripe, int minusCnt){

        Queue<Pair> Q = new LinkedList<>();
        int day = 0;
        int toCnt = 0;
        for(Pair p : ripe)
            Q.add(p);

        while(!Q.isEmpty()) {
            Pair cur = Q.poll();
            day = Math.max(cur.day, day);
            toCnt++;
            for (int a = 0; a < 4; a++) {
                int posX = cur.x + moveX[a];
                int posY = cur.y + moveY[a];

                if (posX < 0 || posX >= n) continue;
                if (posY < 0 || posY >= m) continue;
                if (arr[posX][posY] == -1 || arr[posX][posY] == 1) continue;

                arr[posX][posY] = 1;
                Q.add(new Pair(posX, posY, cur.day +1));
            }
        }
        if(n*m - toCnt == minusCnt) System.out.println(day);
        else System.out.println("-1");
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int M = scan.nextInt();
        int N = scan.nextInt();
        int [][] arr = new int [N][M];
        ArrayList<Pair> ripe = new ArrayList<>();
        int minusCnt = 0;
        for(int i =0; i < N; i++)
            for(int j =0; j < M; j++) {
                arr[i][j] = scan.nextInt();
                if(arr[i][j] == -1) minusCnt++;
                else if(arr[i][j] == 1) ripe.add(new Pair(i, j , 0));
            }
        code63 code = new code63();
        code.BFS(N,M,arr, ripe, minusCnt);
    }
}
