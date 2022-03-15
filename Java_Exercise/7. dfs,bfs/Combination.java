import java.util.*;

public class Combination {

    static int n;
    static int m;
    static int [] arr;
    static int [] combination;
    static int [] checked;

    static void dfs(int L, int start){
        if(L == m){
            for(int c : combination) System.out.print(c + " ");
            System.out.println();
        }
        else{
            for(int i = start; i < n; i++){
                if(checked[i] == 0){
                    combination[L] = arr[i];
                    checked[i] = 1;
                    dfs(L+1, i+1);
                    checked[i] = 0;
                }
            }
        }
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        n = scan.nextInt();
        m = scan.nextInt();

        arr = new int [n];
        checked = new int [n];
        combination = new int [m];

        for(int i =0; i < n; i++)   arr[i] = i+1;

        dfs(0,0);
    }
}
