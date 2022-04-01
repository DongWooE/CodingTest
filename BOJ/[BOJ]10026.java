import java.util.*;
public class bj10026 {

    static int [][] arr1;
    static int [][] arr2;
    static int N;
    static int [] moveX = {0,1,-1,0};
    static int [] moveY = {-1,0,0,1};

    static class Pair{
        private int x;
        private int y;
        Pair(int x, int y){
            this.x = x;
            this.y = y;
        }
        Pair(){}
    }

    static int bfs(int [][] arr){
        int cnt = 0;
        int [][] visited = new int [N][N];
        for(int i =0; i < N; i++){
            for(int j =0; j < N; j++){
                if(visited[i][j] == 1) continue;
                Queue<Pair> Q = new LinkedList<>();
                Q.add(new Pair(i,j));
                visited[i][j] = 1;
                int t = arr[i][j];
                cnt++;
                while(!Q.isEmpty()){
                    Pair poll = Q.poll();
                    for(int k =0; k < 4; k++){
                        int x = poll.x + moveX[k];
                        int y = poll.y + moveY[k];
                        if(x < 0 || x >= N) continue;
                        if(y < 0 || y >= N) continue;
                        if(visited[x][y] == 1) continue;
                        if(arr[x][y] != t) continue;
                        Q.add(new Pair(x,y));
                        visited[x][y] = 1;
                    }
                }
            }
        }
        return cnt;
    }

    static void printArray(int [][] arr){
        for(int i =0; i < arr.length; i++){
            for(int j =0; j < arr.length; j++){
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }
        System.out.println();
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        N = sc.nextInt();
        arr1 = new int [N][N];
        arr2 = new int [N][N];

        for(int i = 0; i < N; i++){
            char[] tmp = sc.next().toCharArray();
            for(int j =0; j < N; j++){
                if(tmp[j] == 'R' ||  tmp[j] == 'G'){
                    arr2[i][j] = 1;
                    arr1[i][j] = (tmp[j] == 'R') ? 1 : 2;
                }
                else{
                    arr1[i][j] = 0;
                    arr2[i][j] = 0;
                }
            }
        }

        System.out.print(bfs(arr1) + " ");
        System.out.print(bfs(arr2));

    }
}
