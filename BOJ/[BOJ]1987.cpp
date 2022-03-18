import java.util.*;

public class bj1987 {
    static int r;
    static int c;
    static char [][] arr;
    static int max = 0;

    static int [] moveX = {0,1,-1,0};
    static int [] moveY = {-1,0,0,1};
    static boolean [] visited = new boolean[26];

    static class Pair{
        private int x;
        private int y;
        Pair(int x, int y){
            this.x = x;
            this.y = y;
        }
    }

    static void dfs(Pair cur, int cnt){
        if(cur.x == 0 && cur.y == 0) max = 1;
        for(int i =0; i < 4; i++){
            int tx = cur.x + moveX[i];
            int ty = cur.y + moveY[i];
            if(tx < 0 || tx >= r) continue;
            if(ty < 0 || ty >= c) continue;
            if(visited[arr[tx][ty]-'A']) continue;

            max = Math.max(max, cnt+1);
            visited[arr[tx][ty]-'A'] = true;
            dfs(new Pair(tx, ty), cnt+1);
            visited[arr[tx][ty]-'A'] = false;
        }
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        r = scan.nextInt();
        c = scan.nextInt();

        arr = new char [r][c];

        for(int i =0; i < r; i++){
            String str = scan.next();
            arr[i] = str.toCharArray();
        }

        visited[arr[0][0]-'A'] = true;
        dfs(new Pair(0,0), 1);
        System.out.println(max);
    }
}
