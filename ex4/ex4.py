def swap(arr, a, b):
    arr[a], arr[b] = arr[b], arr[a]

def count_rounds(arr):
    rounds = 1
    for i in range(1, len(arr)):
        if arr[i] < arr[i - 1]:
            rounds += 1
    return rounds

def main():
    n, m = map(int, input().split())
    arr = list(map(int, input().split()))

    positions = [0] * (n + 1)
    for i in range(n):
        positions[arr[i]] = i

    rounds = count_rounds(arr)
    print(rounds)

    for _ in range(m):
        a, b = map(int, input().split())
        a -= 1
        b -= 1

        swap(arr, a, b)
        positions[arr[a]] = a
        positions[arr[b]] = b

        rounds = count_rounds(arr)
        print(rounds)

if __name__ == "__main__":
    main()