import java.util.*;

public class code24 {
    public static void solution(int [][] array, int n){
        ArrayList<HashSet<Integer>> student = new ArrayList<HashSet<Integer>>();
        for(int i=0; i<n; i++)
            student.add(new HashSet<Integer>());


        for(int i =0; i < 5; i++){
            for(int j =0; j < n; j++){
                for(int k = 0; k < n; k++){
                    if(j == k) continue;
                    if(array[j][i] == array[k][i]) student.get(j).add(k);
                }
            }
        }

        int max = 0;
        for(int i =1; i < n; i++){
            if(student.get(i).size() > student.get(max).size()) max = i;
        }
        System.out.print(max+1);
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        int[][] array = new int[N][5];
        for(int i =0; i < N; i++){
            for(int j =0; j < 5; j++){
                array[i][j] = scanner.nextInt();
            }
        }
        solution(array, N);
    }
}
