import java.util.*;

public class DuplicatedPermutation {

    static int n;
    static int m;
    static int [] permutation;

    static void dfs(int L){
        if(L == m){
            for(int p : permutation) System.out.print(p + " ");
            System.out.println();
        }
        else{
            for(int i =1; i <= n; i++){
                permutation[L] = i;
                dfs(L+1);
            }
        }
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        n = scan.nextInt();
        m = scan.nextInt();
        permutation = new int [m];
        dfs(0);
    }
}
