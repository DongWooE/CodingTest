import java.util.*;

public class code20 {
    public static void solution(int array []){
        int result = 0, cur = 0;
        for(int x : array){
            if(x == 1){
                result += ++cur;
            }
            else{
                cur = 0;
            }
        }
        System.out.print(result);
    }
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        int array [] = new int [N];
        int i = 0;
        while(N-- >0){
            int tmp = scan.nextInt();
            array[i] = tmp;
            i++;
        }
        solution(array);
    }
}
