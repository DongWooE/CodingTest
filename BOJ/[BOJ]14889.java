import java.util.*;
public class bj14889 {

    static int n;
    static int [][] s;
    static boolean [] visited;
    static int min = 10000000;

    static int calcTeam(int [] arr){
        int sum = 0;
        for(int i = 0; i < arr.length-1; i++){
            for(int j = i+1; j < arr.length; j++){

                int t1 = arr[i];
                int t2 = arr[j];

                sum += (s[t1][t2] + s[t2][t1]);
            }
        }
        return sum;
    }


    static void combination(int L, int start){
        if(L == n/2){
            int [] team1 = new int [n/2];
            int [] team2 = new int [n/2];

            int index1 = 0;
            int index2 = 0;
            for(int i =0; i < n; i++){
                if(visited[i])  team1[index1++] = i;
                else team2[index2++] = i;
            }


            int tSum1 = calcTeam(team1);
            int tSum2 = calcTeam(team2);

            min = Math.min(Math.abs(tSum1 - tSum2), min);
        }
        else{
            for(int i =start; i < n; i++){
                visited[i] = true;
                combination(L+1, i+1);
                visited[i] = false;
            }
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        s = new int [n][n];
        visited = new boolean [n];

        for(int i =0; i < n; i++){
            for(int j =0; j < n; j++){
                s[i][j] = sc.nextInt();
            }
        }

        combination(0,0);

        System.out.println(min);

    }
}
