# [Gold I] Hotel Rooms - 32322 

[문제 링크](https://www.acmicpc.net/problem/32322) 

### 성능 요약

메모리: 8928 KB, 시간: 64 ms

### 분류

자료 구조, 세그먼트 트리

### 제출 일자

2025년 11월 1일 17:23:13

### 문제 설명

<p>When the UCF Programming Team travels, the coaches would like to get hotel rooms that are close to each other. There is a hotel where rooms are numbered 1 through n and these rooms are in a straight line, i.e., Room 2 is next to Room 1, Room 3 is next to Room 2, and so on. So, it is easier to find large number of available rooms that are close to each other.</p>

<p>Given the room reservations, you are to determine the availability of rooms to accommodate the UCF Programing Team (a large group).</p>

### 입력 

 <p>The first input line contains two integers: n (1 ≤ n ≤ 5 ×10<sup>5</sup>), indicating the number of hotel rooms and t (1 ≤ t ≤ 10<sup>5</sup>), indicating the number of transactions. Each of the next t input lines contains a transaction to be processed. There will be two types of transactions:</p>

<ul>
	<li>Room Reservation: This input line starts with the letter R in the first column, followed by one space, followed by a valid room number. This transaction is reserving the given room (assume that the room is not already reserved).</li>
	<li>Group Room Availability: This input line starts with the letter A in the first column, followed by one space, followed by a valid starting room number, followed by a space, followed by a valid ending room number. This transaction is asking how many rooms are available in the given range. Assume that the ending room number will not be less than the starting room number, i.e., the requested range is valid.</li>
</ul>

### 출력 

 <p>There is no output required for the room-reservation transactions. For each group-roomavailability transaction, output a separate line providing the total number of available rooms in the requested range.</p>

