if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    arr.sort(reverse=True)
    for element in arr:
        if element<max(arr):
            print(element)
            break
