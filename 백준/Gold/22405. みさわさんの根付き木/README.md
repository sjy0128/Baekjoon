# [Gold III] みさわさんの根付き木 - 22405 

[문제 링크](https://www.acmicpc.net/problem/22405) 

### 성능 요약

메모리: 1116 KB, 시간: 0 ms

### 분류

자료 구조, 구현, 파싱, 재귀, 문자열, 트리

### 제출 일자

2025년 8월 30일 07:53:51

### 문제 설명

<p>あなたは親友であるみさわさんの誕生日が近いことに気づき，根付きの二分木をプレゼントすることにした． ここで，根付きの二分木とは，以下のようなグラフ構造である．(図 1)</p>

<ul>
	<li>各頂点には，その頂点の親と呼ばれる頂点がちょうど 1 つだけ存在し，親と辺で結ばれている．ただし，根と呼ばれる 1 つの頂点のみ，例外的に親を持たない．</li>
	<li>各頂点は，左の子と呼ばれる頂点をちょうど1つ持つか，あるいは持たない．左の子を持つ場合，左の子とは辺で結ばれており，左の子の親はその頂点である．</li>
	<li>各頂点は，右の子と呼ばれる頂点をちょうど1つ持つか，あるいは持たない．右の子を持つ場合，右の子とは辺で結ばれており，右の子の親はその頂点である．</li>
</ul>

<p style="text-align: center;"><img alt="" src="https://upload.acmicpc.net/4645131b-b1e3-42bb-8140-4bd1cd06bf58/-/preview/" style="width: 400px; height: 300px;"></p>

<p>図 1. 2 つの根付きの二分木とその合成の例</p>

<p>あなたは手作りの品を贈りたいと考えたので，市販の根付きの二分木を 2 つ買ってきて重ね合わせて合成することで，さらによい根付きの二分木を 1 つ作ることにした． あなたが買ってきた 2 つの木の各頂点には非負の整数が書かれている． みさわさんは少ない頂点数で各数値が大きいような，コストパフォーマンスがよい木が好みなので，以下の手順に沿って新しい二分木を作ることにする．</p>

<ol>
	<li>2 つの二分木それぞれの根に書かれた整数の和を，新しい二分木の根に書く整数とする．</li>
	<li>どちらの二分木の根も左の子を持っている場合，それらを根とする二分木それぞれを合成した二分木を作り，新しい二分木の根の左の子とする．そうでない場合，新しい二分木の根は左の子を持たない．</li>
	<li>どちらの二分木の根も右の子を持っている場合，それらを根とする二分木それぞれを合成した二分木を作り，新しい二分木の根の右の子とする．そうでない場合，新しい二分木の根は右の子を持たない．</li>
</ol>

<p>あなたは実際に合成する作業を行う前に，できあがる根付きの二分木がどのようになるのか確かめることにした． 買ってきた 2 つの根付きの二分木の情報が与えられるので，上記の手順に従って合成される新しい根付きの二分木を求めるプログラムを作成せよ．</p>

<p>ここで，根付きの二分木の情報は以下のような形式で文字列として表現するものとする．</p>

<blockquote>(左の子を表す文字列)[根に書かれた整数](右の子を表す文字列)</blockquote>

<p>節点が存在しない木は空文字列とする．例えば図 1 の合成されてできた新しい根付きの二分木は <code>(()[6]())[8](((()[4]())[7]())[9]())</code> のように書く．</p>

### 입력 

 <p>入力は次の形式で表される．</p>

<blockquote>
<p><mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"> <mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D434 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>A</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$A$</span> </mjx-container></p>

<p><mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"> <mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D435 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>B</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$B$</span> </mjx-container></p>
</blockquote>

<p><mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"> <mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D434 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>A</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$A$</span></mjx-container>，<mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D435 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>B</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$B$</span></mjx-container> はそれぞれ買ってきた根付きの二分木の情報を表す文字列であり，長さは <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c37"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>7</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$7$</span></mjx-container> 以上 <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>1000</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$1000$</span></mjx-container> 以下である． 与えられる情報は前述の形式に従っており，余計な空白文字等を含まない． また，節点が存在しない根付き木が入力されることはない． 各節点に書かれた整数は <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c30"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>0</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$0$</span></mjx-container> 以上 <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>1000</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$1000$</span></mjx-container> 以下であると仮定してよい． ただし，出力の各節点に書かれる整数はこの範囲に収まらない場合もあることに注意せよ．</p>

### 출력 

 <p>2 つの根付きの二分木を合成してできあがる新しい根付きの二分木の情報を 1 行で出力せよ．特に，行末の改行を除く余計な空白文字等を含まないよう注意せよ．</p>

