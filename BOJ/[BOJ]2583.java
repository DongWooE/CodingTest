import java.util.*;

public class bj2583 {
    static int m;
    static int n;
    static int k;
    static int [][] arr;

    static class Pos{
        private int x;
        private int y;

        Pos(int x, int y){
            this.x = x;
            this.y = y;
        }
    }

    static void bfs(){

        ArrayList<Integer> result = new ArrayList<>();
        Queue<Pos> Q = new LinkedList<>();

        int [] moveX = {-1,0,1,0};
        int [] moveY = {0,1,0,-1};
        int territorySize = 0;

        for(int i =0; i < n; i++){
            for(int j =0; j < m; j++){
                if(arr[i][j] == 0){
                    territorySize++;
                    Q.add(new Pos(i,j));
                    arr[i][j] = 1;
                    int cnt = 1;

                    while(!Q.isEmpty()){
                        Pos poll = Q.poll();

                        for(int k =0; k < 4; k++){
                            int tX = poll.x + moveX[k];
                            int tY = poll.y + moveY[k];

                            if(tX < 0 || tX >= n) continue;
                            if(tY < 0 || tY >= m) continue;
                            if(arr[tX][tY] == 1) continue;

                            Q.add(new Pos(tX, tY));
                            arr[tX][tY] = 1;
                            cnt++;
                        }
                    }
                    result.add(cnt);
                }
            }
        }

        Collections.sort(result);
        System.out.println(territorySize);
        for(Integer x : result) System.out.print(x + " ");

    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        m = scan.nextInt();
        n = scan.nextInt();
        k = scan.nextInt();

        arr = new int [n][m];
        for(int i =0; i < k; i++){
            int y1 = scan.nextInt();
            int x1 = scan.nextInt();
            int y2 = scan.nextInt();
            int x2 = scan.nextInt();

            for(int x = x1; x < x2; x++){
                for(int y = y1; y < y2; y++){
                    arr[y][x] = 1;
                }
            }
        }

        bfs();
    }
}
