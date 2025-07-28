# find out how many days,weeks,months..we have left if we get live untill 90 years old
# input your current age
# output "you have a days ,b weeks and c months left"

age = int(input("enter your age :"))
years = 90-age
weeks = (90*52)-(age*52)
days = (90*365)-(age*365)
months = (90*12)-(age*12)
print(f"you have {days} days, {weeks} weeks, {months} months, {years} years.")




