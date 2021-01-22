#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int rock, scissor, paper;
double dpTable[150][150][150];
double rChance, sChance, pChance;

void CalcProb();
void FindAnswer();

int main()
{
	cin >> rock >> scissor >> paper;
	CalcProb();
	FindAnswer();
	cout << setprecision(12) << rChance << " " << sChance << " " << pChance << endl;
}

void CalcProb()
{
	dpTable[rock][scissor][paper] = 1.0;
	for (int r = rock; r >=0; r--)
		for (int s = scissor; s >= 0; s--)
			for (int p = paper; p >= 0; p--)
			{
				if ((!r && !s) || (!s && !p) || (!p && !r))
					continue;

				double current = dpTable[r][s][p];
				int rKillS = r * s, sKillP = s * p, pKillR = p * r;
				int totalWays = rKillS + sKillP + pKillR;

				if (s > 0)
					dpTable[r][s - 1][p] += current * rKillS / totalWays;

				if (p > 0)
					dpTable[r][s][p - 1] += current * sKillP / totalWays;

				if (r > 0)
					dpTable[r - 1][s][p] += current * pKillR / totalWays;
			}
}

void FindAnswer()
{
	rChance = 0;
	sChance = 0;
	pChance = 0;
	
	for (int r = 1; r <= rock; r++)
		rChance += dpTable[r][0][0];

	for (int s = 1; s <= scissor; s++)
		sChance += dpTable[0][s][0];

	for (int p = 1; p <= paper; p++)
		pChance += dpTable[0][0][p];

}