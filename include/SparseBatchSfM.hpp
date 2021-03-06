#ifndef SPARSEBATCHSFM_HPP_
#define SPARSEBATCHSFM_HPP_

#include <memory>
#include <string>

#include "ImageCapture.hpp"
#include "FeatureProcessor.hpp"
#include "utils.hpp"

namespace sparse_batch_sfm {

class SparseBatchSfM {
 public:
  explicit SparseBatchSfM();
  virtual ~SparseBatchSfM();

  static SparseBatchSfM* getInstance();
  static void run(const std::string& input_path);

 private:
  static SparseBatchSfM* instance_;

  // input images
  std::unique_ptr<ImageCapture> image_capture_;
  std::unique_ptr<FeatureProcessor> feature_processor_;

 private:
  // input video sequence
  std::vector<std::unique_ptr<cv::Mat>> image_seq_;
  FeatureStruct feature_struct_;
};

} // namespace sparse_batch_sfm

#endif
