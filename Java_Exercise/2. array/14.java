import java.util.*;

public class code14 {
    public static void solution(int a[]){
        int max = 0;
        int cnt = 0;
        for(int cur : a){
            if(cur > max) {
                cnt++;
                max = cur;
            }
        }
        System.out.print(cnt);
    }
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        int [] array = new int[N];
        int index = 0;
        while(N-- > 0 ){
            int tmp = scan.nextInt();
            array[index] = tmp;
            index++;
        }
        solution(array);
    }
}
