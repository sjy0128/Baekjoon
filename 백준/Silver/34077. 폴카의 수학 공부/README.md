# [Silver III] 폴카의 수학 공부 - 34077 

[문제 링크](https://www.acmicpc.net/problem/34077) 

### 성능 요약

메모리: 1116 KB, 시간: 8 ms

### 분류

수학, 애드 혹, 정수론, 사칙연산

### 제출 일자

2025년 7월 27일 14:19:16

### 문제 설명

<blockquote>
<p><strong><em>행복의 힌트가 필요해, 어딘가에 있을까?</em></strong></p>

<p>    — 이키즈라이부!, <i>What is my LIFE?</i></p>
</blockquote>

<p align="center"><img alt="" src="" style="width:360px;max-width:100%"></p>

<p>안녕! 나는 타카하시 폴카, $L$고 아사쿠사 위성학교 $1$학년이야! 왜 위성학교에 다니게 되었냐고? 그건.... 내가 수학을 너무 못해서 고등학교 입시에 실패해 버렸거든.... 구구단 $7$단을 못 외울 수도 있는 거 아냐? 숫자는 나에게 너무 어려운걸 ㅜㅜ</p>

<p>그런 나를 위해서 내 프로그래머 친구 마이쨩이 수학 문제를 내줬어! 덧셈과 뺄셈 정도면 할 줄 알겠지?라고 물어봤는데.... 계산할 때마다 답이 달라지는걸 ㅜㅜ 예를 들어 $3 - 1 + 2$을 보면, $1$이랑 $2$를 더하면 $3$이고, 그걸 $3$에서 빼주면 $0$이잖아? 그런데 $3$에서 $1$를 빼면 $2$이고, 그걸 $2$에다 더하면 $4$가 나오잖아? 그래서 답이 뭔지 모르겠어! 라고 말하니까 마이쨩이 한숨을 내쉬더라....</p>

<p>화내는 마이쨩이 나한테 왜 계산 결과가 달라지는지 알아보라는 새로운 과제를 내줬어. 다시 덧셈과 뺄셈으로 이루어진 수식을 $T$개 줄 테니, 각각을 어떤 순서로 계산하더라도 같은 결과가 나오는지 판단해 보라고 하더라구. 하지만 난 아직도 모르겠어! 부탁해! 폴카를 대신해서 이 문제를 풀어줘! 안 도와주면 마이쨩이 나를 또 혼낼 거야 ㅜㅜ</p>

### 입력 

 <p>첫 번째 줄에 마이가 내준 과제의 개수 $T$가 주어진다. ($1 \leq T \leq 100 \, 000$)</p>

<p>이후 $T$개의 과제가 각각 두 줄로 주어진다. 각 과제의 첫 번째 줄에는 정수 $N$이, 두 번째 줄에는 길이가 $2N+1$인 수식이 주어진다. ($1 \leq N \leq 100 \, 000$)</p>

<p>입력으로 주어지는 수식의 홀수($1,3,\cdots,2N+1$)번째 문자는 $0$ 이상 $9$ 이하의 숫자이며, 짝수($2,4,\cdots,2N$)번째 문자는 <code><span style="color:#e74c3c;">+</span></code>혹은 <code><span style="color:#e74c3c;">-</span></code>이다.</p>

<p>입력으로 주어지는 모든 $N$의 합은 $100 \, 000$ 이하이다.</p>

### 출력 

 <p>$T$개의 줄에 걸쳐 $i$번째 줄에 $i$번째 과제로 주어진 수식을 어떤 순서대로 계산하든 결과가 변하지 않으면 <span style="color:#e74c3c;"><code>YES</code></span>, 아니면 <span style="color:#e74c3c;"><code>NO</code></span>를 출력한다.</p>

