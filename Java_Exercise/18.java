import java.util.*;

public class code19 {
    public static boolean solution(int number){
        int[] array = new int [number+1];
        if(number == 1) return false;
        for(int i = 2; i < number; i++){
            if(array[number] != 0) break;
            if(array[i] == 0){
                for(int j = i; j <= number; j += i){
                    array[j] = 1;
                }
            }
        }
        return array[number] == 0;
    }
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        int array [] = new int [N];
        int index = 0;
        while(N-- > 0){
            int number = scan.nextInt();

            //그냥 int형에서 뒤집기
            int res = 0;
            while(number >0){
                int t = number%10;
                res = res * 10 + t;
                number /= 10;
            }
            //StringBuilder로 변환 후 뒤집기
//            StringBuilder stringBuilder = new StringBuilder(String.valueOf(number));
//            stringBuilder = stringBuilder.reverse();
//            number = Integer.parseInt(stringBuilder.toString());
            if(solution(res)) {
                array[index++] = res;
            }
        }
        for(int cur : array){
            if(cur != 0) System.out.print(cur + " ");
        }
    }
}
