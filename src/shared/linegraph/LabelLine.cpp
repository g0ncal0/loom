#include "shared/linegraph/LabelLine.h"

using shared::linegraph::LabelLine;

// _____________________________________________________________________________
const std::string& LabelLine::id() const { return _id; }

// _____________________________________________________________________________
const std::string& LabelLine::label() const { return _label; }

// _____________________________________________________________________________
const std::string& LabelLine::color() const { return _color; }
