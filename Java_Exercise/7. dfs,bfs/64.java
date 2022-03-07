import java.util.*;

public class code64 {

    public static class Pair{
        private int x;
        private int y;

        Pair(int x, int y){
            this.x = x;
            this.y = y;
        }

        Pair(){}
    }

    public static void solution(int[][] arr, int n){

        int [] moveX = {1,0,-1,0,-1,1,-1,1};
        int [] moveY = {0,1,0,-1,-1,1,1,-1};
        int cnt = 0;

        for(int i =0; i < n; i++){
            for(int j =0; j < n; j++){
                if(arr[i][j] == 1){
                    Queue<Pair> Q = new LinkedList<>();
                    Q.add(new Pair(i, j));
                    while(!Q.isEmpty()){
                        Pair t = Q.poll();
                        for(int k =0; k < 8; k++){
                            int posX = moveX[k] + t.x;
                            int posY = moveY[k] + t.y;
                            if(posX < 0 || posX >= n) continue;
                            if(posY < 0 || posY >= n) continue;
                            if(arr[posX][posY] == 0) continue;

                            Q.add(new Pair(posX, posY));
                            arr[posX][posY] = 0;
                        }
                    }
                    cnt++;
                }
            }
        }
        System.out.println(cnt);
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        int [][] arr = new int [N][N];
        for(int i =0; i < N; i++)
            for(int j =0; j < N; j++)
                arr[i][j] = scan.nextInt();
        solution(arr, N);
    }
}
