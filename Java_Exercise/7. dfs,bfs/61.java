import java.util.*;

public class code62 {

    private int [] moveX = {-1,0,1,0};
    private int [] moveY = {0,1,0,-1};

    private static class Pair{
        int x;
        int y;
        int cnt;
        Pair(int x, int y, int cnt){
            this.x = x;
            this.y = y;
            this.cnt = cnt;
        }
        Pair(){}
    }

    private void BFS(int [][] arr){

        Queue<Pair> Q = new LinkedList<>();

        Q.add(new Pair(0,0,0));
        arr[0][0] = 1;

        Pair cur = null;
        while(!Q.isEmpty()){
            cur = Q.poll();
            if(cur.x == 6 && cur.y == 6){
                System.out.println(cur.cnt);
                return;
            }
            for(int i =0; i < 4; i++){
                int posX = moveX[i] + cur.x;
                int posY = moveY[i] + cur.y;

                if(posX < 0 || posX >= 7) continue;
                if(posY < 0 || posY >= 7) continue;
                if(arr[posX][posY] == 1) continue;

                arr[posX][posY] = 1;
                Q.add(new Pair(posX, posY, cur.cnt + 1));
            }
        }
        System.out.println("-1");
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int [][] arr = new int [7][7];
        for(int i =0; i <7; i++)
            for(int j =0; j <7; j++)
                arr[i][j] = scan.nextInt();
        code62 code = new code62();
        code.BFS(arr);
    }
}
