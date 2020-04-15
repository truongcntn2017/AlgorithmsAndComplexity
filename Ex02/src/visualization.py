import pandas as pd
import matplotlib.pyplot as plt

def visualization():
    df = pd.read_csv('reportcard.csv', sep = ',')
    
    x = df['n']
    y1 = df['countAssign']
    y2 = df['countCompare']
    
    countAssign,  = plt.plot(x, y1, label = 'countAssign')
    countCompare,  = plt.plot(x, y2, label = 'countCompare')
    plt.legend([countAssign, countCompare], ['countAssign', 'countCompare'] )
    return plt.show()

if __name__ == "__main__":
    visualization()