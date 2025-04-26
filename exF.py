import sys

input = sys.stdin.read
print = sys.stdout.write

def find_limit():
    t = int(input().strip())  # Number of test cases
    results = []
    
    for _ in range(t):
        low, high = 0, 10**14
        balance = 1
        
        while low < high:
            mid = (low + high + 1) // 2
            print(f"? {mid}\n")
            sys.stdout.flush()
            
            response = input().strip()
            
            if response == "Lucky!":
                low = mid
                balance += mid
            elif response == "Fraudster!":
                high = mid - 1
                balance -= mid
                if balance < 0:
                    return  # Terminate if fired
            elif response == "Fired!":
                return  # Terminate if fired
        
        # Output the determined value of M
        results.append(f"! {low}\n")
    
    # Print all results at the end
    for result in results:
        print(result)
        sys.stdout.flush()