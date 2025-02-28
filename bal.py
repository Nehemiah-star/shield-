bal=float(input("enter the balanceof your acc:\n"))
withdraw_money= 1000

if bal >withdraw_money:
    print("checking account status.....")
    
if bal > 0:
    print("withdrawl of money 1000rs is debited")
    print("remaining balance",bal-withdraw_money)
else:
    print("insuffient balnce ")
i=0
sum=0
while i<=10:
    if i%2==0:
        print("its evn",i)
    else:
        c=i**3
        print("its odd",c)
        sum=sum+c
    i+=1
    
print(sum)
ffggfgfgf
