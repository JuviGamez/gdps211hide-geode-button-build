#include <Geode/modify/MenuLayer.hpp>
#include <Geode/utils/cocos.hpp>

class $modify(MenuLayer) {
    bool init() {
        if (!MenuLayer::init()) return false;

        // Hide the Geode button
        auto geodeButton = this->getChildByID<CCMenuItemSpriteExtra*>(geode::MenuItemIDs::GeodeButton);
        if (geodeButton) {
            geodeButton->setVisible(false);
            geodeButton->setEnabled(false);
        }

        return true;
    }
};
