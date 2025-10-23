# [Platinum V] Discord Daisy Chain - 25808 

[문제 링크](https://www.acmicpc.net/problem/25808) 

### 성능 요약

메모리: 11840 KB, 시간: 84 ms

### 분류

그래프 이론, 강한 연결 요소

### 제출 일자

2025년 10월 23일 23:58:38

### 문제 설명

<p><img alt="" src="https://upload.acmicpc.net/ef5e8b81-7e61-408a-b5d9-3a148c278c1e/-/preview/" style="width: 258px; height: 240px; float: right;">You are working on several discord bots in one larger server. Each bot has a channel that it “listens” to (in nontechnical terms, a bot is in a channel and receives all the messages sent to that channel). When the channel the bot listens to gets a message, the bot will send the same message to a number of other channels (dependent on the bot), causing bots in those channels to receive the message and send the same message to other channels.</p>

<p>Note that all the bots in a channel receive a message sent to the channel and all the bots in the channel will forward the message to their receiving channels.</p>

<p>You have the list of bots, and now you're curious if there is a channel such that if you post a message inside of it, all the other channels will have at least one copy of the message. For example, in the configuration illustrated in the picture, if we post a message inside the channel containing bot b<sub>1</sub>, all the other channels will have (receive) at least one copy of the message.</p>

<p>Since there may be several such channels, you wonder how many are there?</p>

<p>Given the description of the server (number of channels and bot descriptions), determine the number of channels that can allow for a message to be sent to all the other channels.</p>

### 입력 

 <p>The first input line contains two integers: c (1 ≤ c ≤ 100,000), indicating the number of channels in the server, and b (1 ≤ b ≤ 100,000), indicating the number of bots in the server.</p>

<p>Each of the next b input lines starts with an integer, l<sub>i</sub> (1 ≤ l<sub>i</sub> ≤ c), indicating the channel the i th bot is listening to (i.e., the channel the bot is in), and m<sub>i</sub> (1 ≤ m<sub>i</sub> ≤ c) indicating the number of channels the i th bot will send the message to. The line will contain mi more integers, a<sub>1</sub>, a<sub>2</sub>, … a<sub>l<sub>i</sub></sub> (1 ≤ a<sub>j</sub> ≤ c), indicating the channels to which the i th bot will forward its messages to.</p>

<p>It is guaranteed that the total number of receiving channels in the input will not exceed 200,000.</p>

### 출력 

 <p>Print the number of channels that can be used to send a message to all the other channels.</p>

