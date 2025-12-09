#ifndef SHARED_LINEGRAPH_LABELLINE_H_
#define SHARED_LINEGRAPH_LABELLINE_H_

#include <string>
#include <vector>

namespace shared {
namespace linegraph {

class LabelLine {
 public:
  LabelLine(const std::string& id, const std::string& label, const std::string& color)
      : _id(id), _label(label), _color(color) {}

  const std::string& id() const;
  const std::string& label() const;
  const std::string& color() const;

 private:
  std::string _id, _label, _color;
};
}
}

#endif  // SHARED_LINEGRAPH_LABELLINE_H_
