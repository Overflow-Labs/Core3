/*
 *	server/zone/objects/creature/pet/CreaturePet.cpp generated by engine3 IDL compiler 0.55
 */

#include "CreaturePet.h"

#include "CreaturePetImplementation.h"

#include "../../../managers/creature/CreatureManagerImplementation.h"

#include "../Creature.h"

#include "../CreatureObject.h"

#include "../../player/Player.h"

#include "../../intangible/IntangibleObject.h"

#include "../../scene/SceneObject.h"

/*
 *	CreaturePetStub
 */

CreaturePet::CreaturePet(Player* owner, unsigned long long oid) : Creature(DummyConstructorParameter::instance()) {
	_impl = new CreaturePetImplementation(owner, oid);
	_impl->_setStub(this);
}

CreaturePet::CreaturePet(DummyConstructorParameter* param) : Creature(param) {
}

CreaturePet::~CreaturePet() {
}

void CreaturePet::init(Creature* creature, float growth) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);
		method.addObjectParameter(creature);
		method.addFloatParameter(growth);

		method.executeWithVoidReturn();
	} else
		((CreaturePetImplementation*) _impl)->init(creature, growth);
}

void CreaturePet::createDataPad() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);

		method.executeWithVoidReturn();
	} else
		((CreaturePetImplementation*) _impl)->createDataPad();
}

void CreaturePet::setLinkedCreature(Player* linkCreature) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addObjectParameter(linkCreature);

		method.executeWithVoidReturn();
	} else
		((CreaturePetImplementation*) _impl)->setLinkedCreature(linkCreature);
}

Player* CreaturePet::getLinkedCreature() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);

		return (Player*) method.executeWithObjectReturn();
	} else
		return ((CreaturePetImplementation*) _impl)->getLinkedCreature();
}

void CreaturePet::setDatapadItem(SceneObject* item) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addObjectParameter(item);

		method.executeWithVoidReturn();
	} else
		((CreaturePetImplementation*) _impl)->setDatapadItem(item);
}

IntangibleObject* CreaturePet::getDatapadItem() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);

		return (IntangibleObject*) method.executeWithObjectReturn();
	} else
		return ((CreaturePetImplementation*) _impl)->getDatapadItem();
}

void CreaturePet::parseItemAttributes() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);

		method.executeWithVoidReturn();
	} else
		((CreaturePetImplementation*) _impl)->parseItemAttributes();
}

void CreaturePet::call() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);

		method.executeWithVoidReturn();
	} else
		((CreaturePetImplementation*) _impl)->call();
}

void CreaturePet::store(bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((CreaturePetImplementation*) _impl)->store(doLock);
}

bool CreaturePet::canCall() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);

		return method.executeWithBooleanReturn();
	} else
		return ((CreaturePetImplementation*) _impl)->canCall();
}

bool CreaturePet::isAttackable() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);

		return method.executeWithBooleanReturn();
	} else
		return ((CreaturePetImplementation*) _impl)->isAttackable();
}

bool CreaturePet::isAttackableBy(CreatureObject* creature) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);
		method.addObjectParameter(creature);

		return method.executeWithBooleanReturn();
	} else
		return ((CreaturePetImplementation*) _impl)->isAttackableBy(creature);
}

void CreaturePet::onIncapacitated(SceneObject* attacker) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);
		method.addObjectParameter(attacker);

		method.executeWithVoidReturn();
	} else
		((CreaturePetImplementation*) _impl)->onIncapacitated(attacker);
}

void CreaturePet::recoverFromIncapacitation() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);

		method.executeWithVoidReturn();
	} else
		((CreaturePetImplementation*) _impl)->recoverFromIncapacitation();
}

void CreaturePet::setFaction(unsigned int fac) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 20);
		method.addUnsignedIntParameter(fac);

		method.executeWithVoidReturn();
	} else
		((CreaturePetImplementation*) _impl)->setFaction(fac);
}

void CreaturePet::setMaxLevel(unsigned int level) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 21);
		method.addUnsignedIntParameter(level);

		method.executeWithVoidReturn();
	} else
		((CreaturePetImplementation*) _impl)->setMaxLevel(level);
}

bool CreaturePet::isCHPet() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 22);

		return method.executeWithBooleanReturn();
	} else
		return ((CreaturePetImplementation*) _impl)->isCHPet();
}

bool CreaturePet::isDroid() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 23);

		return method.executeWithBooleanReturn();
	} else
		return ((CreaturePetImplementation*) _impl)->isDroid();
}

bool CreaturePet::isFactionPet() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 24);

		return method.executeWithBooleanReturn();
	} else
		return ((CreaturePetImplementation*) _impl)->isFactionPet();
}

bool CreaturePet::isInFollowState() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 25);

		return method.executeWithBooleanReturn();
	} else
		return ((CreaturePetImplementation*) _impl)->isInFollowState();
}

bool CreaturePet::isInStayState() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 26);

		return method.executeWithBooleanReturn();
	} else
		return ((CreaturePetImplementation*) _impl)->isInStayState();
}

bool CreaturePet::isInGuardState() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 27);

		return method.executeWithBooleanReturn();
	} else
		return ((CreaturePetImplementation*) _impl)->isInGuardState();
}

void CreaturePet::doGrowUp(bool updateTime) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 28);
		method.addBooleanParameter(updateTime);

		method.executeWithVoidReturn();
	} else
		((CreaturePetImplementation*) _impl)->doGrowUp(updateTime);
}

void CreaturePet::setGrowth(float gr) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 29);
		method.addFloatParameter(gr);

		method.executeWithVoidReturn();
	} else
		((CreaturePetImplementation*) _impl)->setGrowth(gr);
}

void CreaturePet::setLastGrowth(unsigned long long stamp) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 30);
		method.addUnsignedLongParameter(stamp);

		method.executeWithVoidReturn();
	} else
		((CreaturePetImplementation*) _impl)->setLastGrowth(stamp);
}

void CreaturePet::initTrainingState(int command) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 31);
		method.addSignedIntParameter(command);

		method.executeWithVoidReturn();
	} else
		((CreaturePetImplementation*) _impl)->initTrainingState(command);
}

void CreaturePet::setPetName(String& name) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 32);
		method.addAsciiParameter(name);

		method.executeWithVoidReturn();
	} else
		((CreaturePetImplementation*) _impl)->setPetName(name);
}

void CreaturePet::parseCommandMessage(Player* player, const UnicodeString& message) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 33);
		method.addObjectParameter(player);
		method.addUnicodeParameter(message);

		method.executeWithVoidReturn();
	} else
		((CreaturePetImplementation*) _impl)->parseCommandMessage(player, message);
}

void CreaturePet::setCommmandState(int command) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 34);
		method.addSignedIntParameter(command);

		method.executeWithVoidReturn();
	} else
		((CreaturePetImplementation*) _impl)->setCommmandState(command);
}

bool CreaturePet::hasCommandTrained(unsigned int state) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 35);
		method.addUnsignedIntParameter(state);

		return method.executeWithBooleanReturn();
	} else
		return ((CreaturePetImplementation*) _impl)->hasCommandTrained(state);
}

bool CreaturePet::activate() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 36);

		return method.executeWithBooleanReturn();
	} else
		return ((CreaturePetImplementation*) _impl)->activate();
}

void CreaturePet::deaggro() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 37);

		method.executeWithVoidReturn();
	} else
		((CreaturePetImplementation*) _impl)->deaggro();
}

void CreaturePet::handleAttackCommand(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 38);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((CreaturePetImplementation*) _impl)->handleAttackCommand(player);
}

void CreaturePet::handleFollowCommand(Player* target) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 39);
		method.addObjectParameter(target);

		method.executeWithVoidReturn();
	} else
		((CreaturePetImplementation*) _impl)->handleFollowCommand(target);
}

void CreaturePet::handleStayCommand() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 40);

		method.executeWithVoidReturn();
	} else
		((CreaturePetImplementation*) _impl)->handleStayCommand();
}

void CreaturePet::handleGuardCommand() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 41);

		method.executeWithVoidReturn();
	} else
		((CreaturePetImplementation*) _impl)->handleGuardCommand();
}

void CreaturePet::handleStoreCommand() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 42);

		method.executeWithVoidReturn();
	} else
		((CreaturePetImplementation*) _impl)->handleStoreCommand();
}

void CreaturePet::handleTransferCommand() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 43);

		method.executeWithVoidReturn();
	} else
		((CreaturePetImplementation*) _impl)->handleTransferCommand();
}

void CreaturePet::handleTrickCommand(String& anim, int mod, int cost) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 44);
		method.addAsciiParameter(anim);
		method.addSignedIntParameter(mod);
		method.addSignedIntParameter(cost);

		method.executeWithVoidReturn();
	} else
		((CreaturePetImplementation*) _impl)->handleTrickCommand(anim, mod, cost);
}

void CreaturePet::handleEnrageCommand() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 45);

		method.executeWithVoidReturn();
	} else
		((CreaturePetImplementation*) _impl)->handleEnrageCommand();
}

void CreaturePet::handleEmboldenCommand() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 46);

		method.executeWithVoidReturn();
	} else
		((CreaturePetImplementation*) _impl)->handleEmboldenCommand();
}

void CreaturePet::handleSpecialAttackCommand(Player* player, int att) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 47);
		method.addObjectParameter(player);
		method.addSignedIntParameter(att);

		method.executeWithVoidReturn();
	} else
		((CreaturePetImplementation*) _impl)->handleSpecialAttackCommand(player, att);
}

void CreaturePet::handleGroupCommand(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 48);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((CreaturePetImplementation*) _impl)->handleGroupCommand(player);
}

void CreaturePet::handleFriendCommand() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 49);

		method.executeWithVoidReturn();
	} else
		((CreaturePetImplementation*) _impl)->handleFriendCommand();
}

void CreaturePet::handleFormationCommand(unsigned int form) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 50);
		method.addUnsignedIntParameter(form);

		method.executeWithVoidReturn();
	} else
		((CreaturePetImplementation*) _impl)->handleFormationCommand(form);
}

void CreaturePet::trainMount() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 51);

		method.executeWithVoidReturn();
	} else
		((CreaturePetImplementation*) _impl)->trainMount();
}

void CreaturePet::setPositionNumber(int posNumber) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 52);
		method.addSignedIntParameter(posNumber);

		method.executeWithVoidReturn();
	} else
		((CreaturePetImplementation*) _impl)->setPositionNumber(posNumber);
}

/*
 *	CreaturePetAdapter
 */

CreaturePetAdapter::CreaturePetAdapter(CreaturePetImplementation* obj) : CreatureAdapter(obj) {
}

Packet* CreaturePetAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		init((Creature*) inv->getObjectParameter(), inv->getFloatParameter());
		break;
	case 7:
		createDataPad();
		break;
	case 8:
		setLinkedCreature((Player*) inv->getObjectParameter());
		break;
	case 9:
		resp->insertLong(getLinkedCreature()->_getObjectID());
		break;
	case 10:
		setDatapadItem((SceneObject*) inv->getObjectParameter());
		break;
	case 11:
		resp->insertLong(getDatapadItem()->_getObjectID());
		break;
	case 12:
		parseItemAttributes();
		break;
	case 13:
		call();
		break;
	case 14:
		store(inv->getBooleanParameter());
		break;
	case 15:
		resp->insertBoolean(canCall());
		break;
	case 16:
		resp->insertBoolean(isAttackable());
		break;
	case 17:
		resp->insertBoolean(isAttackableBy((CreatureObject*) inv->getObjectParameter()));
		break;
	case 18:
		onIncapacitated((SceneObject*) inv->getObjectParameter());
		break;
	case 19:
		recoverFromIncapacitation();
		break;
	case 20:
		setFaction(inv->getUnsignedIntParameter());
		break;
	case 21:
		setMaxLevel(inv->getUnsignedIntParameter());
		break;
	case 22:
		resp->insertBoolean(isCHPet());
		break;
	case 23:
		resp->insertBoolean(isDroid());
		break;
	case 24:
		resp->insertBoolean(isFactionPet());
		break;
	case 25:
		resp->insertBoolean(isInFollowState());
		break;
	case 26:
		resp->insertBoolean(isInStayState());
		break;
	case 27:
		resp->insertBoolean(isInGuardState());
		break;
	case 28:
		doGrowUp(inv->getBooleanParameter());
		break;
	case 29:
		setGrowth(inv->getFloatParameter());
		break;
	case 30:
		setLastGrowth(inv->getUnsignedLongParameter());
		break;
	case 31:
		initTrainingState(inv->getSignedIntParameter());
		break;
	case 32:
		setPetName(inv->getAsciiParameter(_param0_setPetName__String_));
		break;
	case 33:
		parseCommandMessage((Player*) inv->getObjectParameter(), inv->getUnicodeParameter(_param1_parseCommandMessage__Player_UnicodeString_));
		break;
	case 34:
		setCommmandState(inv->getSignedIntParameter());
		break;
	case 35:
		resp->insertBoolean(hasCommandTrained(inv->getUnsignedIntParameter()));
		break;
	case 36:
		resp->insertBoolean(activate());
		break;
	case 37:
		deaggro();
		break;
	case 38:
		handleAttackCommand((Player*) inv->getObjectParameter());
		break;
	case 39:
		handleFollowCommand((Player*) inv->getObjectParameter());
		break;
	case 40:
		handleStayCommand();
		break;
	case 41:
		handleGuardCommand();
		break;
	case 42:
		handleStoreCommand();
		break;
	case 43:
		handleTransferCommand();
		break;
	case 44:
		handleTrickCommand(inv->getAsciiParameter(_param0_handleTrickCommand__String_int_int_), inv->getSignedIntParameter(), inv->getSignedIntParameter());
		break;
	case 45:
		handleEnrageCommand();
		break;
	case 46:
		handleEmboldenCommand();
		break;
	case 47:
		handleSpecialAttackCommand((Player*) inv->getObjectParameter(), inv->getSignedIntParameter());
		break;
	case 48:
		handleGroupCommand((Player*) inv->getObjectParameter());
		break;
	case 49:
		handleFriendCommand();
		break;
	case 50:
		handleFormationCommand(inv->getUnsignedIntParameter());
		break;
	case 51:
		trainMount();
		break;
	case 52:
		setPositionNumber(inv->getSignedIntParameter());
		break;
	default:
		return NULL;
	}

	return resp;
}

void CreaturePetAdapter::init(Creature* creature, float growth) {
	return ((CreaturePetImplementation*) impl)->init(creature, growth);
}

void CreaturePetAdapter::createDataPad() {
	return ((CreaturePetImplementation*) impl)->createDataPad();
}

void CreaturePetAdapter::setLinkedCreature(Player* linkCreature) {
	return ((CreaturePetImplementation*) impl)->setLinkedCreature(linkCreature);
}

Player* CreaturePetAdapter::getLinkedCreature() {
	return ((CreaturePetImplementation*) impl)->getLinkedCreature();
}

void CreaturePetAdapter::setDatapadItem(SceneObject* item) {
	return ((CreaturePetImplementation*) impl)->setDatapadItem(item);
}

IntangibleObject* CreaturePetAdapter::getDatapadItem() {
	return ((CreaturePetImplementation*) impl)->getDatapadItem();
}

void CreaturePetAdapter::parseItemAttributes() {
	return ((CreaturePetImplementation*) impl)->parseItemAttributes();
}

void CreaturePetAdapter::call() {
	return ((CreaturePetImplementation*) impl)->call();
}

void CreaturePetAdapter::store(bool doLock) {
	return ((CreaturePetImplementation*) impl)->store(doLock);
}

bool CreaturePetAdapter::canCall() {
	return ((CreaturePetImplementation*) impl)->canCall();
}

bool CreaturePetAdapter::isAttackable() {
	return ((CreaturePetImplementation*) impl)->isAttackable();
}

bool CreaturePetAdapter::isAttackableBy(CreatureObject* creature) {
	return ((CreaturePetImplementation*) impl)->isAttackableBy(creature);
}

void CreaturePetAdapter::onIncapacitated(SceneObject* attacker) {
	return ((CreaturePetImplementation*) impl)->onIncapacitated(attacker);
}

void CreaturePetAdapter::recoverFromIncapacitation() {
	return ((CreaturePetImplementation*) impl)->recoverFromIncapacitation();
}

void CreaturePetAdapter::setFaction(unsigned int fac) {
	return ((CreaturePetImplementation*) impl)->setFaction(fac);
}

void CreaturePetAdapter::setMaxLevel(unsigned int level) {
	return ((CreaturePetImplementation*) impl)->setMaxLevel(level);
}

bool CreaturePetAdapter::isCHPet() {
	return ((CreaturePetImplementation*) impl)->isCHPet();
}

bool CreaturePetAdapter::isDroid() {
	return ((CreaturePetImplementation*) impl)->isDroid();
}

bool CreaturePetAdapter::isFactionPet() {
	return ((CreaturePetImplementation*) impl)->isFactionPet();
}

bool CreaturePetAdapter::isInFollowState() {
	return ((CreaturePetImplementation*) impl)->isInFollowState();
}

bool CreaturePetAdapter::isInStayState() {
	return ((CreaturePetImplementation*) impl)->isInStayState();
}

bool CreaturePetAdapter::isInGuardState() {
	return ((CreaturePetImplementation*) impl)->isInGuardState();
}

void CreaturePetAdapter::doGrowUp(bool updateTime) {
	return ((CreaturePetImplementation*) impl)->doGrowUp(updateTime);
}

void CreaturePetAdapter::setGrowth(float gr) {
	return ((CreaturePetImplementation*) impl)->setGrowth(gr);
}

void CreaturePetAdapter::setLastGrowth(unsigned long long stamp) {
	return ((CreaturePetImplementation*) impl)->setLastGrowth(stamp);
}

void CreaturePetAdapter::initTrainingState(int command) {
	return ((CreaturePetImplementation*) impl)->initTrainingState(command);
}

void CreaturePetAdapter::setPetName(String& name) {
	return ((CreaturePetImplementation*) impl)->setPetName(name);
}

void CreaturePetAdapter::parseCommandMessage(Player* player, const UnicodeString& message) {
	return ((CreaturePetImplementation*) impl)->parseCommandMessage(player, message);
}

void CreaturePetAdapter::setCommmandState(int command) {
	return ((CreaturePetImplementation*) impl)->setCommmandState(command);
}

bool CreaturePetAdapter::hasCommandTrained(unsigned int state) {
	return ((CreaturePetImplementation*) impl)->hasCommandTrained(state);
}

bool CreaturePetAdapter::activate() {
	return ((CreaturePetImplementation*) impl)->activate();
}

void CreaturePetAdapter::deaggro() {
	return ((CreaturePetImplementation*) impl)->deaggro();
}

void CreaturePetAdapter::handleAttackCommand(Player* player) {
	return ((CreaturePetImplementation*) impl)->handleAttackCommand(player);
}

void CreaturePetAdapter::handleFollowCommand(Player* target) {
	return ((CreaturePetImplementation*) impl)->handleFollowCommand(target);
}

void CreaturePetAdapter::handleStayCommand() {
	return ((CreaturePetImplementation*) impl)->handleStayCommand();
}

void CreaturePetAdapter::handleGuardCommand() {
	return ((CreaturePetImplementation*) impl)->handleGuardCommand();
}

void CreaturePetAdapter::handleStoreCommand() {
	return ((CreaturePetImplementation*) impl)->handleStoreCommand();
}

void CreaturePetAdapter::handleTransferCommand() {
	return ((CreaturePetImplementation*) impl)->handleTransferCommand();
}

void CreaturePetAdapter::handleTrickCommand(String& anim, int mod, int cost) {
	return ((CreaturePetImplementation*) impl)->handleTrickCommand(anim, mod, cost);
}

void CreaturePetAdapter::handleEnrageCommand() {
	return ((CreaturePetImplementation*) impl)->handleEnrageCommand();
}

void CreaturePetAdapter::handleEmboldenCommand() {
	return ((CreaturePetImplementation*) impl)->handleEmboldenCommand();
}

void CreaturePetAdapter::handleSpecialAttackCommand(Player* player, int att) {
	return ((CreaturePetImplementation*) impl)->handleSpecialAttackCommand(player, att);
}

void CreaturePetAdapter::handleGroupCommand(Player* player) {
	return ((CreaturePetImplementation*) impl)->handleGroupCommand(player);
}

void CreaturePetAdapter::handleFriendCommand() {
	return ((CreaturePetImplementation*) impl)->handleFriendCommand();
}

void CreaturePetAdapter::handleFormationCommand(unsigned int form) {
	return ((CreaturePetImplementation*) impl)->handleFormationCommand(form);
}

void CreaturePetAdapter::trainMount() {
	return ((CreaturePetImplementation*) impl)->trainMount();
}

void CreaturePetAdapter::setPositionNumber(int posNumber) {
	return ((CreaturePetImplementation*) impl)->setPositionNumber(posNumber);
}

/*
 *	CreaturePetHelper
 */

CreaturePetHelper* CreaturePetHelper::staticInitializer = CreaturePetHelper::instance();

CreaturePetHelper::CreaturePetHelper() {
	className = "CreaturePet";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void CreaturePetHelper::finalizeHelper() {
	CreaturePetHelper::finalize();
}

DistributedObject* CreaturePetHelper::instantiateObject() {
	return new CreaturePet(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* CreaturePetHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new CreaturePetAdapter((CreaturePetImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	CreaturePetServant
 */

CreaturePetServant::CreaturePetServant(unsigned long long oid) : CreatureImplementation(oid) {
	_classHelper = CreaturePetHelper::instance();
}

CreaturePetServant::~CreaturePetServant() {
}

void CreaturePetServant::_setStub(DistributedObjectStub* stub) {
	_this = (CreaturePet*) stub;
	CreatureServant::_setStub(stub);
}

DistributedObjectStub* CreaturePetServant::_getStub() {
	return _this;
}

