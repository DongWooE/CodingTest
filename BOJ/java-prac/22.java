import java.util.*;

public class code23 {
    public static void solution(int array [][]){
        int n = array.length;
        int cnt = 0;
        int weight_x [] = {1,0,-1,0}, weight_y [] ={0,1,0,-1};
        for(int i =0; i < n; i++){
            for(int j =0; j <n; j++){
                int cur = array[i][j];
                boolean status = true;
                for(int k =0; k < 4; k++){
                    if(i + weight_x[k] < 0 || weight_x[k] + i > n-1) continue;
                    if(j + weight_y[k] < 0 || weight_y[k] + j > n-1) continue;
                    int tmp = array[i + weight_x[k]][j+weight_y[k]];
                    if(tmp >= cur){
                        status = false;
                        break;
                    }
                }
                if(status)  cnt++;
            }
        }
        System.out.println(cnt);
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        int array [][] = new int [N][N];
        for(int i =0; i < N; i++){
            for(int j =0; j < N; j++){
                array[i][j] = scanner.nextInt();
            }
        }
        solution(array);
    }
}
