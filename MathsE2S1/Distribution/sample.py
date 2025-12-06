import random

n = 60

population = []

for i in range(n):
    population.append(random.randint(140, 172))

print(population)
print("Average height of the population is :", sum(population) / n)

sample_size = 10
sample = random.choices(population, k=sample_size)
print("Sample is :", sample)
print("Average height of the sample is :", sum(sample) / sample_size)