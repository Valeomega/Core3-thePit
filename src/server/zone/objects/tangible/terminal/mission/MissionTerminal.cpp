/*
 *	server/zone/objects/tangible/terminal/mission/MissionTerminal.cpp generated by engine3 IDL compiler 0.60
 */

#include "MissionTerminal.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/Zone.h"

/*
 *	MissionTerminalStub
 */

MissionTerminal::MissionTerminal() : Terminal(DummyConstructorParameter::instance()) {
	_impl = new MissionTerminalImplementation();
	_impl->_setStub(this);
}

MissionTerminal::MissionTerminal(DummyConstructorParameter* param) : Terminal(param) {
}

MissionTerminal::~MissionTerminal() {
}


TransactionalObject* MissionTerminal::clone() {
	MissionTerminal* objectCopy = new MissionTerminal(DummyConstructorParameter::instance());
	objectCopy->_impl = new MissionTerminalImplementation(DummyConstructorParameter::instance());
	*((MissionTerminalImplementation*) objectCopy->_impl) = *((MissionTerminalImplementation*) _impl);
	objectCopy->_impl->_setStub(objectCopy);
	return (TransactionalObject*) objectCopy;
}


void MissionTerminal::initializeTransientMembers() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		((MissionTerminalImplementation*) _impl)->initializeTransientMembers();
}

/*
 *	MissionTerminalImplementation
 */

MissionTerminalImplementation::MissionTerminalImplementation(DummyConstructorParameter* param) : TerminalImplementation(param) {
	_initializeImplementation();
}

MissionTerminalImplementation::~MissionTerminalImplementation() {
}


void MissionTerminalImplementation::finalize() {
}

void MissionTerminalImplementation::_initializeImplementation() {
	_setClassHelper(MissionTerminalHelper::instance());

	_serializationHelperMethod();
}

void MissionTerminalImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (MissionTerminal*) stub;
	TerminalImplementation::_setStub(stub);
}

DistributedObjectStub* MissionTerminalImplementation::_getStub() {
	return _this;
}

MissionTerminalImplementation::operator const MissionTerminal*() {
	return _this;
}

void MissionTerminalImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void MissionTerminalImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void MissionTerminalImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void MissionTerminalImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void MissionTerminalImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void MissionTerminalImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void MissionTerminalImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void MissionTerminalImplementation::_serializationHelperMethod() {
	TerminalImplementation::_serializationHelperMethod();

	_setClassName("MissionTerminal");

}

MissionTerminalImplementation::MissionTerminalImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/terminal/mission/MissionTerminal.idl(55):  		Logger.setLoggingName("MissionTerminal");
	Logger::setLoggingName("MissionTerminal");
}

void MissionTerminalImplementation::initializeTransientMembers() {
	// server/zone/objects/tangible/terminal/mission/MissionTerminal.idl(59):  		super.initializeTransientMembers();
	TerminalImplementation::initializeTransientMembers();
	// server/zone/objects/tangible/terminal/mission/MissionTerminal.idl(61):  		Logger.setLoggingName("MissionTerminal");
	Logger::setLoggingName("MissionTerminal");
}

/*
 *	MissionTerminalAdapter
 */

MissionTerminalAdapter::MissionTerminalAdapter(MissionTerminalImplementation* obj) : TerminalAdapter(obj) {
}

Packet* MissionTerminalAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		initializeTransientMembers();
		break;
	default:
		return NULL;
	}

	return resp;
}

void MissionTerminalAdapter::initializeTransientMembers() {
	((MissionTerminalImplementation*) impl)->initializeTransientMembers();
}

/*
 *	MissionTerminalHelper
 */

MissionTerminalHelper* MissionTerminalHelper::staticInitializer = MissionTerminalHelper::instance();

MissionTerminalHelper::MissionTerminalHelper() {
	className = "MissionTerminal";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void MissionTerminalHelper::finalizeHelper() {
	MissionTerminalHelper::finalize();
}

DistributedObject* MissionTerminalHelper::instantiateObject() {
	return new MissionTerminal(DummyConstructorParameter::instance());
}

DistributedObjectServant* MissionTerminalHelper::instantiateServant() {
	return new MissionTerminalImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* MissionTerminalHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new MissionTerminalAdapter((MissionTerminalImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

