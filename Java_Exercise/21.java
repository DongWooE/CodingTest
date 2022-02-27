import java.util.*;

public class code22 {
    public static void solution(int array [][]){
        int n = array.length;
        int max = 0;
        for(int i =0; i < n; i++){
            int sum [] = new int[4];
            for(int j =0; j < n; j++){
                sum[0] += array[n-1-j][n-1-j];
                sum[1] += array[j][j];
                sum[2] += array[i][j];
                sum[3] += array[j][i];
            }
            for(int k =0; k < 4; k++)
                max = Math.max(max, sum[k]);
        }
        System.out.println(max);
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        int array [][] = new int[N][N];
        for(int i =0; i < N; i++)
            for(int j =0; j < N; j++){
                array[i][j] = scanner.nextInt();
            }
        solution(array);
    }
}
