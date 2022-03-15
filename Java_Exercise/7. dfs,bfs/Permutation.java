import java.util.*;

public class Permutation {
    static int n;
    static int m;
    static int [] arr;
    static int [] permutation;
    static int [] checked;

    static void dfs(int L){
        if(L == m){
            for(int p : permutation)    System.out.print(p + " ");
            System.out.println();
        }
        else{
            for(int i = 0; i < n; i++){
                if(checked[i] == 0){
                    permutation[L] = arr[i];
                    checked[i] = 1;
                    dfs(L+1);
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
        permutation = new int [m];
        checked = new int [n];
        for(int i =0; i < n; i++) arr[i] = scan.nextInt();
        dfs(0);
    }
}
