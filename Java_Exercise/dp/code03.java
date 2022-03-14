import java.util.*;

public class code74 {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();

        int [] arr = new int [N];
        for(int i =0; i < N; i++){
            arr[i] = scan.nextInt();
        }

        int [] d = new int [N];
        d[0] = 1;
        int result = 0;
        for(int i =1; i < N; i++){
            d[i] = 1;
            for(int j = i-1; j >=0; j--){
                if(arr[i] > arr[j]){
                    d[i] = Math.max(d[j]+1,d[i]);
                }
            }
            result = Math.max(result, d[i]);
        }

            System.out.println(result);
        }
    }
