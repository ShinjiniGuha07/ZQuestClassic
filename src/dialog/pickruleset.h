#ifndef ZC_DIALOG_PICKRULESET_H
#define ZC_DIALOG_PICKRULESET_H

#include <gui/dialog.h>
#include "gui/radioset.h"
#include "gui/label.h"
#include <functional>
#include <string_view>

void call_ruleset_dlg();

class PickRulesetDialog: public GUI::Dialog<PickRulesetDialog>
{
public:
	enum class message { OK, CANCEL, RULESET };

	PickRulesetDialog(std::function<void(int)> setRuleset);

	std::shared_ptr<GUI::Widget> view() override;
	bool handleMessage(message msg, GUI::MessageArg messageArg);

private:
	std::shared_ptr<GUI::RadioSet> rulesetChoice;
	std::shared_ptr<GUI::Label> rulesetInfo;
	std::function<void(int)> setRuleset;
};

#endif
