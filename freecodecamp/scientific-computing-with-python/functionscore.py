def computegrade(score):
    if score <= 1.0 and score >= 0.0:
        if score >= 0.9:
            print('A')
        elif score >= 0.8:
            print('B')
        elif score >= 0.7:
            print('C')
        elif score >= 0.6:
            print('D')
        else:
            print('F')
    else:
        print('Bad score')
try:
    score = float(input('Enter score: '))
    computegrade(score)
except:
    print('Bad score')