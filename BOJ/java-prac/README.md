#  문제풀이 시에 유의사항, 모범답안 간략 정리

## 7.java (회문 문자열)
### 모범답안 #1 .
- for문을 str.length()/2 만큼 돌면서 현재 위치와 len-현재위치-1을 비교
### 모범답안 #2.
- StringBuilder를 reverse() 후에 equalsIgnoreCase로 비교
### 유의사항
- 하나의 String 자체를 toUpperCase(), toLowerCase()를 통해서 조작할 수 있다 
- String 비교 시에 '=='와 'equals'의 차이점을 인식하고 되도록 'equals'를 사용한다 

## 8.java (펠린드롬)
### 모범답안 #1 .
- replaceAll과 정규 표현식을 활용해서 문자열 안에 있는 특수문자를 빠르게 제거함 
### 유의사항
- X

## 9.java(문자열에서 숫자 추출)
### 모범답안 #1 .
- x의 ascii 코드가 48 ~ 57값이면 숫자 문자라는 것을 이용해서 문자열을 분해해서 숫자 문자라면 계속 sum
### 모범답안 #2 .
- replaceAll로 숫자만 거른 후, Interger.parseInt해서 맨 앞에 '0'이 들어간 경우를 제거
 
### 유의사항
- Integer.valueOf와 Interger.parseInt의 차이