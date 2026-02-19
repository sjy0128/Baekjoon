import sys
I = lambda: int(sys.stdin.readline())
st = []
for _ in I()*[0]:
    h = I()
    while st and st[-1] <= h:
        st.pop(-1)
    st.append(h)
print(len(st))