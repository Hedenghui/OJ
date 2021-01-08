#include<iostream>
using namespace std;
#include<vector>
class Solution {
public:
	vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
		int oldColor = image[sr][sc];
		if (image[sr][sc] == newColor)
			return image;
		image[sr][sc] = newColor;
		int sr1[4] = { -1, 1, 0, 0 }, sc1[4] = { 0, 0, -1, 1 };//иообвСср
		for (int i = 0; i<4; i++)
		{
			int x = sr + sr1[i];
			int y = sc + sc1[i];
			if ((x >= 0) && (y >= 0) && (x<image.size()) && (y<image[0].size()) && (image[x][y] == oldColor))
			{
				floodFill(image, x, y, newColor);
			}
		}
		return image;
	}
};
//int main()
//{
//	return 0;
//}