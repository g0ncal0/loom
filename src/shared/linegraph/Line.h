// Copyright 2017, University of Freiburg,
// Chair of Algorithms and Data Structures.
// Authors: Patrick Brosi <brosi@informatik.uni-freiburg.de>

#ifndef SHARED_LINEGRAPH_LINE_H_
#define SHARED_LINEGRAPH_LINE_H_

#include <string>
#include <vector>

namespace shared {
namespace linegraph {

class Line {
 public:
  Line(const std::string& id, const std::string& label,
       const std::string& color, const std::string& labelId = "")
      : _id(id), _label(label), _color(color), _labelId(labelId) {}

  const std::string& id() const;
  const std::string& label() const;
  const std::string& color() const;
  const std::string& labelId() const;
  void setColor(const std::string& c) { _color = c; };

 private:
  std::string _id, _label, _color, _labelId;
};
}
}

#endif  // SHARED_LINEGRAPH_LINE_H_
