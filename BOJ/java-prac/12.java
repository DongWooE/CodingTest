import java.util.*;

public class code12 {
    public static void solution(ArrayList<String> array){
        StringBuilder result = new StringBuilder();
        for(String s : array){
            int tmp = Integer.parseInt(s, 2);
            result.append((char)tmp);
        }
        System.out.print(result);
    }
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int cnt = scan.nextInt();
        String str = scan.next();
        ArrayList<String> array = new ArrayList<>();

        for(int i = 0, j=0; j < cnt; j++, i+=7) {
            String tmp = str.substring(i, i+7);
            // 문자열 안에서 특정 문자를 여러번 다른 문자로 변환하기
            StringBuilder t = new StringBuilder(tmp.replace('#', '1').replace('*', '0'));
//            for(char x : tmp.toCharArray()){
//                if(x == '*') t.append('0');
//                else t.append('1');
//            }
            array.add(t.toString());
        }
        solution(array);
    }
}
