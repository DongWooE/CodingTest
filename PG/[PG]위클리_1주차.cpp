using namespace std;

long long solution(int price, int money, int count)
{
    long long temp = (long long)price * count*(count+1)/2;
    cout << temp;
    if(temp > money) return temp - money;
    else return 0;
}