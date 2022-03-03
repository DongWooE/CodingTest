import java.util.Scanner;

// DFS, 부분 집합 구하기

public class code55 {

    private int total;
    private int n;
    private int [] arr;
    private boolean flag;
    private String answer = "NO";

    private void DFS(int cnt,int sum) {
        if(flag) return;
        if(cnt == n){
            if(total - sum == sum) {
                flag = true;
                answer = "YES";
            }
        }
        else{
            DFS(cnt+1, sum + arr[cnt]);
            DFS(cnt+1, sum);
        }
    }

    private void solution(){
        DFS(0, arr[0]);
        System.out.println(answer);
    }
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int N = s.nextInt();
        code55 c = new code55();
        c.n = N;
        c.arr = new int [N];
        for(int i =0; i < N; i++){
            c.arr[i] = s.nextInt();
            c.total += c.arr[i];
        }
        c.solution();
    }
}
