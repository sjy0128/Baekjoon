word = input()
n_word = ""
for i in range(2, 0, -1):
    m = min(word[:-i])
    m_idxs = []
    m_idx = 0
    for j in range(len(word)-i):
        if word[j] == m:
            m_idxs.append(j)
    for j in range(len(m_idxs)):
        if word[m_idxs[j]::-1] < word[m_idx::-1]:
            m_idx = m_idxs[j]
        elif len(word[m_idx::-1]) < len(word[m_idxs[j]::-1]) and word[m_idx::-1]*(len(word[m_idxs[j]::-1])//len(word[m_idx::-1])) == word[m_idxs[j]::-1] and max(word[m_idx::-1]) <= max(word[m_idx+1:]):
            m_idx = m_idxs[j]
    n_word += word[m_idx::-1]
    word = word[m_idx+1:]
n_word += word[::-1]
print(n_word)