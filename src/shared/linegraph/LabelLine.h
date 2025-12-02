#ifndef SHARED_LINEGRAPH_LABELLINE_H_
#define SHARED_LINEGRAPH_LABELLINE_H_

#include <string>
#include <vector>
#include <set>
#include <sstream>

namespace shared {
namespace linegraph {

class LabelLine {
 public:
  LabelLine(const std::string& id, const std::string& label, const std::string& color)
      : _id(id), _label(label), _color(color) {
        std::stringstream ss(label);
        std::string token;

        while (std::getline(ss, token, '-')) {
          _linesLabels.insert(token);
        }
      }

  const std::string& id() const;
  const std::string& label() const;
  const std::string& color() const;
  const std::set<std::string>& lineLabels() const;

 private:
  std::string _id, _label, _color;
  std::set<std::string> _linesLabels;
};
}
}

#endif  // SHARED_LINEGRAPH_LABELLINE_H_
