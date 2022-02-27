import java.util.*;

public class code15 {
    public static void solution(int [] a, int [] b){
        StringBuilder result = new StringBuilder();
        int win [] = {1,2,3};
        for(int i =0; i < a.length; i++){
            int tmp = a[i];
            if(tmp == b[i]) result.append('D');
            else if(b[i] == win[(tmp+1)%3]) result.append('A');
            else result.append('B');
        }
        for(char x : result.toString().toCharArray()){
            System.out.println(x);
        }
    }
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        int [] aArray = new int[N];
        int [] bArray = new int[N];
        for(int i =0; i < N; i++){
            aArray[i] = scan.nextInt();
        }
        for(int i =0; i < N; i++){
            bArray[i] = scan.nextInt();
        }
        solution(aArray, bArray);
    }
}
