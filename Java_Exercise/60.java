import java.util.*;
public class code61 {

    private int cnt = 0;
    private final int [] moveX = {-1,0,1,0};
    private final int [] moveY = {0,1,0,-1};

    private void DFS(int x, int y, int[][] arr){
        if(x == 6 && y == 6){
            cnt++;
        }
        else{
            for(int i =0; i < 4; i++) {
                int posX = x+moveX[i];
                int posY = y+moveY[i];
                if(posX <0 || posX >= 7) continue;
                if(posY <0 || posY >= 7) continue;
                if(arr[posX][posY] == 1) continue;
                arr[posX][posY] = 1;
                DFS(posX, posY, arr);
                arr[posX][posY] =0;
            }
        }
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int [][] arr = new int [7][7];
        int [][] c = new int [7][7];
        for(int i =0; i < 7; i++)
            for(int j =0; j < 7; j++)
                arr[i][j] = scan.nextInt();
        code61 code = new code61();

        arr[0][0] =1;
        code.DFS(0,0, arr);
        System.out.println(code.cnt);
    }
}
