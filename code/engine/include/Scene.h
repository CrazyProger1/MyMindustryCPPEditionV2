//
// Created by crazy on 02.04.2022.
//

#ifndef MYMINDUSTRY_SCENE_H
#define MYMINDUSTRY_SCENE_H

#include <SFML/Graphics.hpp>

#include "managers/EntitiesManager.h"
#include "managers/AssetsManager.h"
#include "managers/CameraManager.h"

namespace engine {
    class Scene {
    private:
        EntitiesManager *m_pEntitiesManager;
        LoggingManager *m_pLoggingManager;
        AssetsManager *m_pAssetsManager;
        CameraManager *m_pCameraManager;

    public:
        Scene();


        void init();

        void destroy();

        void update();

        void draw(sf::RenderTarget &rt);

        void handleSFMLEvent(sf::Event &event);

        int attachEntity(const EntityPtr &entity);


        virtual void onInitializeScene() {};

        virtual void onLoadResources() {};

        virtual void onUpdate() {};

        virtual void onDraw(sf::RenderTarget &rt) {};

        virtual void onDestroy() {};

        virtual void onSFMLEvent(sf::Event &event) {};
    };
}


#endif //MYMINDUSTRY_SCENE_H
