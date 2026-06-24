# Bomblab이란?
- 폭탄을 해체한다는 컨셉으로 C로 작성된 binary 실행 파일 하나를 가지고 요구하는 입력값을 찾아내는 게임.
- gdb와 같은 디버거를 CLI환경에서 활용하면서 적절한 위치에 breakpoint를 추가하고 assembly로 번역된 코드를 읽으며 알고리즘 해석하기.
- 본 repository는 제작자의 편의상 모든 소스 코드를 첨부했지만, 일반적으로 bomb 실행 파일 단독으로 주어지거나 bomb.c 코드까지만 주어진다.

## 예를 들어:
```
Welcome to my fiendish little bomb. You have 2 phases with
which to blow yourself up. Have a nice day!
갑신정변 갑오개혁 동학농민운동                                      // 사용자입력


 ____   ___   ___  __  __ _ _ _ _
| __ ) / _ \ / _ \|  \/  | | | | |
|  _ \| | | | | | | |\/| | | | | |
| |_) | |_| | |_| | |  | |_|_|_|_|
|____/ \___/ \___/|_|  |_(_|_|_|_)


The bomb has blown up.
```

위와 같이 틀린 답을 제출하면 폭탄이 터졌다는 메시지를 출력하며 프로그램이 exit 코드 1로 종료된다.<br>
그러면 옳은 답을 입력했다고 해보자.<br/>
(예시 답 : 세화고등학교)

```
Welcome to my fiendish little bomb. You have 2 phases with
which to blow yourself up. Have a nice day!
세화고등학교                                                       // 사용자입력
Phase 1 defused. How about the next one?
```

이런식으로 다음 페이즈로 넘어가게 된다.<br>
본 프로젝트의 경우 총 2개의 페이즈를 구현했다.

```
(...)
인공신경망제작연구반                                                // 사용자입력
Congratulations! You've defused the bomb!
```

마지막 페이즈까지 풀어내면 이렇게 성공 메시지 출력과 함께 프로그램이 exit 코드 0으로 종료된다.
