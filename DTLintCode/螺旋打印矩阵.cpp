#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
	/*
	* @param matrix: a matrix of m x n elements
	* @return: an integer list
	*/
	vector<int> spiralOrder(vector<vector<int>> &matrix) {
		// write your code here
		if (matrix.size() == 0) {
			return {};
		}
		else if (matrix.at(0).size() > 1) {
			vector<vector<int>> mat;
			vector<int> firstrow = matrix.at(0);
			vector<int> lastrow = matrix.at(matrix.size() - 1);
			vector<int> firstcol;
			vector<int> lastcol;
			for (int i = 1; i < matrix.size() - 1; i++) {
				vector<int> tmp = matrix.at(i);
				cout << matrix.size() << " " << tmp.size() << endl;
				vector<int> inside;
				firstcol.push_back(tmp.at(0));
				for (int j = 1; j < tmp.size() - 1; j++) {
					inside.push_back(tmp.at(j));
				}
				lastcol.push_back(tmp.at(tmp.size() - 1));
				mat.push_back(inside);
			}
			vector<int> ans;
			for (int n : firstrow) {
				ans.push_back(n);
			}
			for (int n : lastcol) {
				ans.push_back(n);
			}
			for (int i = lastrow.size() - 1; i >= 0; i--) {
				ans.push_back(lastrow.at(i));
			}
			for (int i = firstcol.size() - 1; i >= 0; i--) {
				ans.push_back(firstcol.at(i));
			}
			vector<int> core = spiralOrder(mat);
			for (int n : core) {
				ans.push_back(n);
			}
			return ans;
		}
		else {
			vector<int> ans;
			for (vector<int> line : matrix) {
				if (line.size() > 0) {
					ans.push_back(line.at(0));
				}
			}
			return ans;
		}

	}
};

int main() {
	vector<vector<int>> mat =
	{ { 709,873,272,847,284,487,669,958,922,399,38,648,664,982,564,308,359,357,592,618 },
	  { 688,109,722,648,821,299,173,327,248,38,450,327,538,688,474,910,957,599,978,790 },
	  { 486,509,487,303,594,951,424,63,239,736,368,975,797,808,209,878,545,154,915,835 },
	  { 152,98,362,960,208,579,397,125,549,705,942,188,702,169,352,553,469,169,408,664 },
	  { 715,216,438,824,260,309,950,944,773,965,248,376,901,926,98,185,816,452,307,203 },
	  { 21,193,915,112,251,622,444,583,71,746,448,556,857,522,741,180,323,446,270,338 },
	  { 80,137,375,140,763,541,862,10,157,923,833,629,124,106,306,259,145,412,152,632 },
	  { 771,200,193,495,856,590,290,917,401,930,855,645,271,318,540,648,453,815,548,762 },
	  { 228,603,104,494,409,888,730,550,30,950,648,128,357,396,711,454,114,666,517,845 },
	  { 111,109,218,292,837,276,479,971,494,673,189,29,157,417,167,182,360,12,411,917 },
	  { 210,124,272,841,879,838,182,43,278,631,717,169,885,772,353,847,315,47,478,113 },
	  { 628,209,53,668,308,584,221,620,406,819,469,1000,129,832,478,891,499,82,134,384 },
	  { 855,444,304,821,82,991,109,404,922,404,374,145,105,428,509,319,37,822,774,754 },
	  { 850,801,291,340,176,616,196,921,435,836,852,777,919,716,192,562,84,894,452,451 },
	  { 717,105,186,337,821,910,982,841,176,471,22,280,567,368,455,220,78,518,669,291 },
	  { 350,242,468,520,344,975,22,951,501,513,787,610,625,690,195,222,313,861,226,343 },
	  { 694,206,181,498,686,905,735,282,109,168,749,251,51,209,824,619,676,838,346,139 },
	  { 989,889,889,906,864,361,829,474,380,818,526,654,116,539,978,730,63,268,233,579 },
	  { 494,499,902,595,230,999,398,745,294,544,308,671,103,29,49,808,161,597,925,945 },
	  { 754,606,154,415,326,985,233,694,720,741,109,967,367,661,71,198,348,903,879,641 },
	  { 839,598,794,598,144,870,439,196,32,793,906,64,612,206,53,770,923,939,181,595 },
	  { 561,907,35,143,565,974,175,74,185,160,288,333,39,971,300,931,958,118,751,759 },
	  { 90,282,804,749,991,832,955,934,988,770,862,674,24,697,628,395,446,526,938,419 },
	  { 140,132,605,646,98,70,50,627,566,422,159,149,227,23,822,534,527,519,18,154 },
	  { 822,289,586,410,310,907,463,888,289,592,763,141,198,576,288,917,641,599,671,454 } };

	Solution s;
	for (int n : s.spiralOrder(mat)) {
		cout << n << " ";
	}
	cout << endl;
}