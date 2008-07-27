/*
 *	server/zone/objects/mission/MissionObject.h generated by engine3 IDL compiler 0.55
 */

#ifndef MISSIONOBJECT_H_
#define MISSIONOBJECT_H_

#include "engine/orb/DistributedObjectBroker.h"

class SceneObject;

class Player;

#include "../scene/SceneObject.h"

class MissionObject : public SceneObject {
public:
	MissionObject(unsigned long long oid);

	void init();

	void sendTo(Player* player, bool doClose = true);

	void sendDeltaTo(Player* player);

	void doLinkToPlayer(Player* player);

	void sendDestroyTo(Player* player);

	void setDBKey(string& tdbk);

	string& getDBKey();

	void applyTerminalMask(int tam);

	int getTerminalMask();

	void setTypeStr(const string& tstr);

	string& getTypeStr();

	void setDescKey(int tdk);

	unsigned int getDescKey();

	void setTitleKey(int ttk);

	unsigned int getTitleKey();

	void setDifficultyLevel(unsigned int tdlv);

	unsigned int getDifficultyLevel();

	void setDestX(float tdx);

	float getDestX();

	void setDestY(float tdy);

	float getDestY();

	void setDestPlanetCrc(unsigned int tpc);

	unsigned int getDestPlanetCrc();

	void setCreatorName(const unicode& tcn);

	unicode& getCreatorName();

	void setReward(unsigned int tr);

	unsigned int getReward();

	void setTargetX(float ttx);

	float getTargetX();

	void setTargetY(float tty);

	float getTargetY();

	void setTargetPlanetCrc(unsigned int tpc);

	unsigned int getTargetPlanetCrc();

	void setDepictedObjCrc(unsigned int tsdc);

	unsigned int getDepictedObjCrc();

	void setDescriptionStf(const string& tds);

	string& getDescriptionStf();

	void setTitleStf(const string& tts);

	string& getTitleStf();

	void setRefreshCount(unsigned int trc);

	unsigned int getRefreshCount();

	void setTypeCrc(unsigned int ttc);

	unsigned int getTypeCrc();

protected:
	MissionObject(DummyConstructorParameter* param);

	virtual ~MissionObject();

	string _return_getDBKey;
	string _return_getDescriptionStf;
	string _return_getTitleStf;
	string _return_getTypeStr;

	unicode _return_getCreatorName;

	friend class MissionObjectHelper;
};

class MissionObjectImplementation;

class MissionObjectAdapter : public SceneObjectAdapter {
public:
	MissionObjectAdapter(MissionObjectImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void init();

	void sendTo(Player* player, bool doClose);

	void sendDeltaTo(Player* player);

	void doLinkToPlayer(Player* player);

	void sendDestroyTo(Player* player);

	void setDBKey(string& tdbk);

	string& getDBKey();

	void applyTerminalMask(int tam);

	int getTerminalMask();

	void setTypeStr(const string& tstr);

	string& getTypeStr();

	void setDescKey(int tdk);

	unsigned int getDescKey();

	void setTitleKey(int ttk);

	unsigned int getTitleKey();

	void setDifficultyLevel(unsigned int tdlv);

	unsigned int getDifficultyLevel();

	void setDestX(float tdx);

	float getDestX();

	void setDestY(float tdy);

	float getDestY();

	void setDestPlanetCrc(unsigned int tpc);

	unsigned int getDestPlanetCrc();

	void setCreatorName(const unicode& tcn);

	unicode& getCreatorName();

	void setReward(unsigned int tr);

	unsigned int getReward();

	void setTargetX(float ttx);

	float getTargetX();

	void setTargetY(float tty);

	float getTargetY();

	void setTargetPlanetCrc(unsigned int tpc);

	unsigned int getTargetPlanetCrc();

	void setDepictedObjCrc(unsigned int tsdc);

	unsigned int getDepictedObjCrc();

	void setDescriptionStf(const string& tds);

	string& getDescriptionStf();

	void setTitleStf(const string& tts);

	string& getTitleStf();

	void setRefreshCount(unsigned int trc);

	unsigned int getRefreshCount();

	void setTypeCrc(unsigned int ttc);

	unsigned int getTypeCrc();

protected:
	string _param0_setDBKey__string_;
	string _param0_setTypeStr__string_;
	unicode _param0_setCreatorName__unicode_;
	string _param0_setDescriptionStf__string_;
	string _param0_setTitleStf__string_;
};

class MissionObjectHelper : public DistributedObjectClassHelper, public Singleton<MissionObjectHelper> {
	static MissionObjectHelper* staticInitializer;

public:
	MissionObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class SingletonWrapper<MissionObjectHelper>;
};

#include "../scene/SceneObjectImplementation.h"

class MissionObjectServant : public SceneObjectImplementation {
public:
	MissionObject* _this;

public:
	MissionObjectServant(unsigned long long oid);
	virtual ~MissionObjectServant();

	void _setStub(DistributedObjectStub* stub);
	DistributedObjectStub* _getStub();

};

#endif /*MISSIONOBJECT_H_*/
