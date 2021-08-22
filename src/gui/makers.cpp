#include "button.h"
#include "checkBox.h"
#include "grid.h"
#include "label.h"
#include "textField.h"
#include "window.h"
#include <memory>

namespace gui { namespace internal {

std::shared_ptr<Button> makeButton()
{
    return std::make_shared<Button>();
}

std::shared_ptr<CheckBox> makeCheckBox()
{
    return std::make_shared<CheckBox>();
}

std::shared_ptr<Label> makeLabel()
{
    return std::make_shared<Label>();
}

std::shared_ptr<TextField> makeTextField()
{
    return std::make_shared<TextField>();
}

std::shared_ptr<Window> makeWindow()
{
    return std::make_shared<Window>();
}


// This is... counterintuitive.
// Multiple rows=Rows, one row=Columns.

std::shared_ptr<Grid> makeColumn()
{
    return Grid::rows(1);
}

std::shared_ptr<Grid> makeColumns(size_t size)
{
    return Grid::columns(size);
}

std::shared_ptr<Grid> makeRow()
{
    return Grid::columns(1);
}

std::shared_ptr<Grid> makeRows(size_t size)
{
    return Grid::rows(size);
}

}} // namespace gui::internal
