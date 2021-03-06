#include <iostream>
#include <string>
//#include <sstream>
//#include <memory>
//#include <opencv2/imgproc/imgproc.hpp>
//#include <opencv2/highgui/highgui.hpp>
#include <opencv2/core/core.hpp>

#include "SparseBatchSfM.hpp"
#include "utils.hpp"

// static const char* arg_keys = {
//   "{ @input_path          |./photos| Input path }"
// };

int main(int argc, char** argv) {

  std::string input_path;

  if (argc < 2) {
    input_path = "photos";
  } else {
    input_path = argv[1];
  }


  // if (!arg_parser(argc, argv, arg_keys,
  //                &input_path)) {
  //   return -1;
  // }

  sparse_batch_sfm::SparseBatchSfM::run(input_path);

  return 0;

}
