import java.util.*;

public class bj7569 {

    static int m;
    static int n;
    static int h;
    static int [][][] arr;
    static ArrayList<Pair> rT = new ArrayList<>();
    static int minusCnt = 0;
    static int result = 0;

    static class Pair{
        private int x;
        private int y;
        private int z;
        private int day;
        Pair(int z, int x, int y, int day){
            this.x = x;
            this.y = y;
            this.z = z;
            this.day = day;
        }
    }

    static void bfs(){

        int [] moveX = {1,0,-1,0,0,0};
        int [] moveY = {0,1,0,-1,0,0};
        int [] moveZ = {0,0,0,0,1,-1};

        Queue<Pair> Q = new LinkedList<>();
        Q.addAll(rT);

        int tCnt = 0;
        while(!Q.isEmpty()){
            Pair p = Q.poll();
            result = Math.max(p.day, result);
            tCnt++;
            for(int l =0; l < 6; l++){
                int x = p.x + moveX[l];
                int y = p.y + moveY[l];
                int z = p.z + moveZ[l];

                if(x < 0 || x >= n) continue;
                if(y < 0 || y >= m) continue;
                if(z < 0 || z >= h) continue;
                if(arr[z][x][y] == 0) {
                    Q.add(new Pair(z,x,y, p.day + 1));
                    arr[z][x][y] = 1;
                }
            }
        }

        if(n*m*h - minusCnt != tCnt) result = -1;
        System.out.println(result);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        m = sc.nextInt();
        n = sc.nextInt();
        h = sc.nextInt();

        arr = new int [h][n][m];

        for(int i =0; i < h; i++)
            for(int j =0; j < n; j++)
                for(int k=0; k < m; k++){
                    int tmp = sc.nextInt();
                    arr[i][j][k] = tmp;
                    if(tmp == -1) minusCnt++;
                    else if(tmp == 1) rT.add(new Pair(i,j,k,0));
                }
        bfs();
    }
}
