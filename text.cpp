#include <iostream>
using namespace std;


#include <fstream>
#include <cstdlib>
#include <ctime>



void generateTest(int testNumber, int n) {
  // Sinh test có số thứ tự là testNumber, với giá trị input là input
  srand(time(NULL)); // Khởi tạo seed cho hàm rand()

  int minInput = 1; // Giá trị input tối thiểu
  int maxInput = 1000; // Giá trị input tối đa
  // Tạo tên file input và mở file
  string inputFilename = "test" + to_string(testNumber) + ".inp";
  ofstream inputFile(inputFilename);

  // Ghi giá trị input vào file input
  inputFile << n << endl;
  int a[100];
  for(int i = 1; i <= n; i++)
  {
  	int input = rand() % (maxInput - minInput + 1) + minInput;
  	inputFile << input << " ";
  	a[i]=input;
  }
    int luu, maxx;
    int t = 3;
    for (int j = 1; j <= 3; j++) {
        maxx = 0;
        luu;
        for (int i = 1; i <= n; i++) {
            if (maxx <= a[i]) {
                maxx = a[i];
                luu = i;
            }
        }
        if (j != 3) a[luu] = -1;
    }

  // Giải quyết problem với giá trị input


  // Tạo tên file output và mở file
  string outputFilename = "test" + to_string(testNumber) + ".out";
  ofstream outputFile(outputFilename);

  // Ghi giá trị output vào file output

  	outputFile << maxx;

  // Đóng file input và output
  inputFile.close();
  outputFile.close();
}

int main() {

	  int numTests = 30;
  // Sinh test
  for (int i = 1; i <= numTests; i++) {
    // Sinh giá trị input ngẫu nhiên trong khoảng từ minInput đến maxInput

	int so_luong_phan_tu = rand() % (100-3+1) + 3;
    generateTest(i, so_luong_phan_tu); // Sinh test có số thứ tự là i, với giá trị input là input
  }

  return 0;
}
