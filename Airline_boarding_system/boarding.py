name = str(input("Enter your name: "))
age = float(input("Enter your age: "))

print(f"\n Wellcome {name} , to Corona Checking Centre,\nIt is mandatory to get checked for corona symptoms before you board the flight!")
print("Enter the following details with full honesty to generate your report")
print("Instructions for users: Enter 0 for NO and 1 for YES")
print("-" * 60)

fever = bool(
    int(
        input("\n1. Have you've been feelings feverish past this day?: ")
    )
)

loss_of_taste = bool(
    int(
        input("2. Have you been feeling couldn't taste anything past this day?: ")
    )
)

loss_of_smell = bool(
    int(
        input("3. Have you couldn't smell things past this day?: ")
    )
)

cough = bool(
    int(
        input("4. Have you been coughing past this day?: ")
    )
)

tiredness = bool(
    int(
        input("5. Have you been feeling tired or exhausted past this day?: ")
    )
)

isPositive = fever and (loss_of_taste or loss_of_smell) and cough and tiredness

if isPositive:
    print(f"\n{name}, You seems are Positive on corona test based on your symptoms")
    print(f"\nSory we couldn't board you to the flight.")

else:
    print(f"\nAre you diagnosed with Covid-19? answer with (0) if no, (1) for yes: {'Yes' if isPositive else 'No'}\n")

    tickets = bool(int(input("Ansswer with no (0) or yes (1)")))
    luggage = bool(int(input("Do you want your luggage checked in? (0) No or (1) yes")))

    canBoard = luggage or not isPositive

    if not canBoard:
        print("\nBoarding process incomplite!")
    else:
        print(f"\nBoarding process complete have a nice trip, {name}")