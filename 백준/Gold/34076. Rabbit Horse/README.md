# [Gold IV] Rabbit Horse - 34076 

[문제 링크](https://www.acmicpc.net/problem/34076) 

### 성능 요약

메모리: 1116 KB, 시간: 0 ms

### 분류

수학, 그리디 알고리즘, 조합론

### 제출 일자

2025년 8월 7일 08:47:52

### 문제 설명

<blockquote>
<p><b><i>코코아... 이거 아니라고</i></b></p>

<p>    — 카후우 치노</p>
</blockquote>

<p>오랜 시간이 지난 뒤, 래빗 하우스는 세계적으로 인정받는 유명한 커피 전문점이 되었다! 래빗 하우스의 CEO인 코코아와 치노는 이번에 "여름 빵 축제"라는 이벤트를 기획하고 주최하게 되었다.</p>

<p>무려 <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c32"></mjx-c></mjx-mn><mjx-mstyle><mjx-mspace style="width: 0.167em;"></mjx-mspace></mjx-mstyle><mjx-mn class="mjx-n"><mjx-c class="mjx-c34"></mjx-c><mjx-c class="mjx-c37"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>12</mn><mstyle scriptlevel="0"><mspace width="0.167em"></mspace></mstyle><mn>470</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$12\,470$</span></mjx-container> 엔의 거금을 들여 준비한 이벤트인 만큼, 치노와 코코아는 철저하게 행사를 기획하고 빵의 준비와 원두 확보, 그리고 홍보에 심혈을 기울였다. 여름 빵 축제의 준비 도중, 치노는 포스터의 설명문에서 <strong>대소문자 구분 없이</strong> 래빗 하우스의 영문표기인 <span style="color:#e74c3c;"><code>RabbitHouse</code></span> 부분수열을 최대한 많이 찾는 참가자에게 특별한 선물을 주는 이벤트를 기획하면 좋겠다고 생각했으나, 자신이 맡은 업무를 처리하기에도 바빴던 치노는 코코아에게 이러한 이벤트를 기획하는 것을 부탁하였다. 래빗 하우스의 철자를 <span style="color:#e74c3c;"><code>RabbitHo<strong>r</strong>se</code></span>로 잘못 알고 있던 코코아는 다음의 조건을 만족하는 설명문을 포스터에 적었다.</p>

<ol>
	<li>설명문은 길이 <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container>의 알파벳 대소문자로만 이루어진 문자열이다.</li>
	<li>설명문은 길이가 <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container>인 가능한 모든 알파벳 대소문자로만 이루어진 문자열 중, <strong>대소문자를 구분하지 않았을 때</strong> <span style="color:#e74c3c;"><code>RabbitHo<strong>r</strong>se</code></span>를 <strong>부분수열로서</strong> 가장 많이 포함하고 있어야 한다. 어떤 문자열의 <strong>부분수열</strong>이란, 해당 문자열에서 <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c30"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>0</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$0$</span></mjx-container>개 이상의 문자를 아무 위치에서 제거하여 얻어지는 문자열을 의미한다. 두 부분수열중 하나 이상의 문자가 설명문의 다른 위치에서 얻어졌다면, 두 부분수열을 서로 다른 것으로 간주한다.</li>
</ol>

<p>그렇게 심혈을 들인 준비가 끝난 후, 드디어 고대하던 여름 빵 축제가 개최되는 날이 되었다!</p>

<p>그러나, 어떤 이유에서인지 래빗 하우스 앞에서 대기하고 있는 손님이 한 명도 없었다. 준비 과정을 되짚어보던 치노는, 래빗 하우스의 영문 표기가 잘못된 것을 발견하고 급하게 수정된 설명문을 배포했고, 다행히도 여름 빵 축제는 성공적으로 개최될 수 있었다.</p>

<p>모든 사건이 일단락된 후, 치노는 문득 코코아가 이전에 작성한 포스터의 설명문이 무엇이었는지 궁금해졌지만, 유감스럽게도 코코아가 작성한 설명문의 원본은 남아있지 않았다. 따라서 치노는 조건을 만족하는 설명문으로 어떤 것이 가능했을지 알아보려고 한다. 치노를 위해 조건을 만족하는 길이 <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container>의 설명문을 아무거나 하나 찾아주자.</p>

### 입력 

 <p>첫 번째 줄에 설명문의 길이 <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container>이 주어진다. (<mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c></mjx-mn><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="4"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mn class="mjx-n" space="4"><mjx-c class="mjx-c35"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn><mo>≤</mo><mi>N</mi><mo>≤</mo><mn>50</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$1\le N\le 50$</span></mjx-container>)</p>

### 출력 

 <p>한 줄에 <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container>개의 문자로 구성된 문자열을 공백 없이 출력한다. 해당 문자열은 지문에서 언급한 조건을 만족해야 한다.</p>

