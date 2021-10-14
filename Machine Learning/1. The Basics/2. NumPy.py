import numpy as np

data = [15, 16, 18, 19, 22, 24, 29, 30, 34]

print(f'mean: {np.mean(data)}')  # 23.0
print(f'median: {np.median(data)}')  # 22.0
print(f'50th percentile (median): {np.percentile(data, 50)}')  # 22.0
print(f'25th percentile: {np.percentile(data, 25)}')  # 18.0
print(f'75th percentile: {np.percentile(data, 75)}')  # 29.0
print(f'standard deviation: {np.std(data)}')  # 6.342
print(f'variance: {np.var(data)}')  # 40.2(2)
