#ifndef SHARED_LINEGRAPH_LABELLINE_H_
#define SHARED_LINEGRAPH_LABELLINE_H_

#include <string>
#include <vector>

namespace shared {
namespace linegraph {

class LabelLine {
 public:
  LabelLine(const std::string& id, const std::string& label)
      : _id(id), _label(label) {}

  const std::string& id() const;
  const std::string& label() const;

 private:
  std::string _id, _label;
};
}
}

#endif  // SHARED_LINEGRAPH_LABELLINE_H_
