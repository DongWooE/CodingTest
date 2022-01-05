import java.util.*;

public class code10 {
    public static void solution(String s, char t){
        // 앞 뒤로 한번씩 왔다 갔다하면서 특정 문자와의 거리들을 리턴한다
        int[] array = new int[s.length()];
        int p = 100;
        for(int i =0; i < s.length(); i++){
            if(s.charAt(i) == t) p =0;
            else{
                p++;
                array[i] = p;
            }
        }

        p = 100;
        for(int i = s.length()-1; i >= 0; i--){
            if(s.charAt(i) == t) p =0;
            else{
                p++;
                array[i] = Math.min(array[i], p);
            }
        }

        for(int i : array){
            System.out.print(i);
            System.out.print(' ');
        }
        //        StringBuilder result = new StringBuilder();
        //        int pos = 0;
//        boolean status = false;
//        while(pos != -1){
//            pos =  s.indexOf(t);
//            for(int i = 0; i <= pos; i++){
//                int tmp = (status) ? Math.min(i+1, (pos - i)) : pos-i;
//                result.append(tmp);
//            }
//            s = s.substring(pos+1);
//            status = true;
//        }
//        if(s.length() > 0){
//            for(int i = 1; i <= s.length(); i++){
//                result.append(i);
//            }
//        }
//        for(char x : result.toString().toCharArray()){
//            System.out.print(x + " ");
//        }
    }
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.next();
        char t = scan.next().charAt(0);
        solution(s, t);
    }
}
