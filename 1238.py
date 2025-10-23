N = int(input())
for i in range(N):
    A, B = input().strip().split(" ")
    tam = min(len(A), len(B))
    resposta = ''.join([A[j] + B[j] for j in range(tam)])
    resposta = resposta +  (A[tam:] if tam < len(A) else B[tam:])
    print(resposta)