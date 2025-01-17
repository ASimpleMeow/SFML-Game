#ifndef GAME_HPP
#define GAME_HPP

#include <functional>
#include "bitshifter/ObjectPool.hpp"
#include "game-imap/IMap.h"
#include "Scene.hpp"
#include "Level.hpp"
#include "PhysicsCollisionListener.hpp"
#include "SFMLDebugDraw.hpp"
#include "GameObject.hpp"

class Game: public Scene {
public:
	Game(std::shared_ptr<Window> windowprt);
	~Game();

	virtual void Update();
	virtual void Render();
	virtual void RestartClock();
	virtual void Initialize(sf::IpAddress ip, bool networking = false, bool host = false);

	sf::Time GetElapsed();

private:
	void SetupNewLevel();
	std::shared_ptr<GameObject> SetupGameObject(std::string texture, std::string sound, uint16 physicsCategory, bool isEntity, int frames = ANIMATION_FRAMES);

	// Callbacks to collisions
	std::function<void(GameObject*, GameObject*)> m_newLevelCallback;
	std::function<void(GameObject*, GameObject*)> m_unlockDoorCallback;
	std::function<void(GameObject*, GameObject*)> m_collectScoreCallback;
	std::function<void(GameObject*, GameObject*)> m_damagePlayerCallback;
	std::function<void(GameObject*, GameObject*)> m_damageEnemyCallback;

	Level m_level;
	b2World m_world;
	GameIMap::InfluenceMap m_imap;

	PhysicsCollisionListener m_collisionListener;
	SFMLDebugDraw m_debugDraw;
	sf::TcpListener m_hostListener;
	sf::TcpListener m_clientListener;
	sf::TcpSocket m_hostSocket;
	sf::TcpSocket m_clientSocket;

	std::shared_ptr<GameObject> m_player;
	std::shared_ptr<GameObject> m_networkPlayer;

	std::vector<std::shared_ptr<GameObject>> m_gameObjects;

	std::vector<std::shared_ptr<InputComponent>> m_inputComponents;
	std::vector<std::shared_ptr<AIComponent>> m_aiComponents;
	std::vector<std::shared_ptr<NetworkComponent>> m_networkComponents;
	std::vector<std::shared_ptr<PhysicsComponent>> m_physicComponents;
	std::vector<std::shared_ptr<AnimatorComponent>> m_animatorComponents;
	std::vector<std::shared_ptr<SpriteComponent>> m_spriteComponents;
	std::vector<std::shared_ptr<HealthComponent>> m_healthComponents;
	std::vector<std::shared_ptr<SoundComponent>> m_soundComponents;
	std::vector<std::shared_ptr<AttackComponent>> m_attackComponents;
	std::vector<std::shared_ptr<InfluenceComponent>> m_influenceComponents;

	sf::Clock m_clock;
	sf::Time m_previousTime;
	sf::Font m_font;

	float m_deathCountdown;
	int m_scoreTotal;
	bool m_generateNewLevel;
	bool m_networking;
};

#endif // !GAME_HPP
