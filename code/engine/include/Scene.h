//
// Created by crazy on 02.04.2022.
//

#ifndef MYMINDUSTRY_SCENE_H
#define MYMINDUSTRY_SCENE_H

#include <SFML/Graphics.hpp>
#include "managers/EntitiesManager.h"

namespace engine {
    class Scene {
    private:
        EntitiesManager *m_pEntitiesManager;
    public:
        Scene();

        void update();

        void draw(sf::RenderTarget &rt);

        virtual void onInitializeScene() {};

        virtual void onLoadResources() {};

        virtual void onUpdate() {};

        virtual void onDraw(sf::RenderTarget &rt) {};

        virtual void onDestroy() {};

        virtual void onSFMLEvent(sf::Event &event) {};
    };
}


#endif //MYMINDUSTRY_SCENE_H