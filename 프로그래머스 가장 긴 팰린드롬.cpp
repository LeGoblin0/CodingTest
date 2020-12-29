int solution(string s)
{
    int answer = 0;
    int len = s.length(); // 미리 길이를 변수에 저장해놓지 않으면 매번 길이를 호출해서 시간 초과됨
    int left, right = 0; //문자열 왼쪽과 오른쪽 끝에서부터 하나씩 가운데로 오며 찾음
    
    for(int i = 0; i<len; i++){ // 문자열 길이만큼 반복
        for(int lenTmp = len; lenTmp > answer; lenTmp--){ //lenTmp 로 문자열 길이만큼 이중 포문
            left = i; //맨 왼쪽 문자열 인덱스 0,1,2,3,4~
            right = left+ lenTmp -1; //맨 오른쪽 문자열 인덱스 ~
            while(left < right && s[left] == s[right]){ // 맨 왼쪽 인덱스 인자와 맨 오른쪽 인덱스 인자부터 왼쪽은 키우고 오른쪽은 작아지며 
                left++;                                                                   // 같으면 한칸더 움직이고 같으면 또한칸더 해서 레프트 값이 라이트를 안넘는 선에서
                right--;                                                              //가운데로 이동하며 비교. 틀린값이 나오면 브레이크
            }
            if(left >= right && answer <lenTmp){      // 결국 레프트와 라이트가 같거나 팰린드롬이 홀수일경우 레프트가 클수도 있는 경우와
                answer = lenTmp;                                        // 문자열 길이를 한칸씩 줄인게 answer 값 보다 큰걸 만족하면 정답
                break;
            }
        }
    }
    return answer;
}