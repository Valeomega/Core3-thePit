/*
Copyright (C) 2007 <SWGEmu>

This File is part of Core3.

This program is free software; you can redistribute
it and/or modify it under the terms of the GNU Lesser
General Public License as published by the Free Software
Foundation; either version 2 of the License,
or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
See the GNU Lesser General Public License for
more details.

You should have received a copy of the GNU Lesser General
Public License along with this program; if not, write to
the Free Software Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA

Linking Engine3 statically or dynamically with other modules
is making a combined work based on Engine3.
Thus, the terms and conditions of the GNU Lesser General Public License
cover the whole combination.

In addition, as a special exception, the copyright holders of Engine3
give you permission to combine Engine3 program with free software
programs or libraries that are released under the GNU LGPL and with
code included in the standard release of Core3 under the GNU LGPL
license (or modified versions of such code, with unchanged license).
You may copy and distribute such a system following the terms of the
GNU LGPL for Engine3 and the licenses of the other code concerned,
provided that you include the source code of that other code when
and as the GNU LGPL requires distribution of source code.

Note that people who make modified versions of Engine3 are not obligated
to grant this special exception for their modified versions;
it is their choice whether to do so. The GNU Lesser General Public License
gives permission to release a modified version without this exception;
this exception also makes it possible to release a modified version
which carries forward this exception.
*/

/*
 *	server/zone/objects/player/sui/SuiBox.cpp generated by Engine3 IDL compiler 0.51
 */

#include "../Player.h"

#include "SuiBox.h"

#include "SuiBoxImplementation.h"

/*
 *	SuiBoxStub
 */

SuiBox::SuiBox() : ORBObjectStub(NULL) {
}

SuiBox::SuiBox(ORBObjectServant* obj) : ORBObjectStub(obj) {
}

SuiBox::SuiBox(SuiBox& ref) : ORBObjectStub(ref) {
}

SuiBox::~SuiBox() {
}

SuiBox* SuiBox::clone() {
	return new SuiBox(*this);
}


void SuiBox::setPromptTitle(const string& name) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 6);
		invocation.addAsciiParameter(name);

		invocation.executeWithVoidReturn();
	} else
		((SuiBoxImplementation*) _impl)->setPromptTitle(name);
}

void SuiBox::setPromptText(const string& name) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 7);
		invocation.addAsciiParameter(name);

		invocation.executeWithVoidReturn();
	} else
		((SuiBoxImplementation*) _impl)->setPromptText(name);
}

void SuiBox::setCancelButton(bool value) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 8);
		invocation.addBooleanParameter(value);

		invocation.executeWithVoidReturn();
	} else
		((SuiBoxImplementation*) _impl)->setCancelButton(value);
}

void SuiBox::setUsingObjectID(unsigned long long oid) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 9);
		invocation.addUnsignedLongParameter(oid);

		invocation.executeWithVoidReturn();
	} else
		((SuiBoxImplementation*) _impl)->setUsingObjectID(oid);
}

bool SuiBox::isInputBox() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 10);

		return invocation.executeWithBooleanReturn();
	} else
		return ((SuiBoxImplementation*) _impl)->isInputBox();
}

bool SuiBox::isListBox() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 11);

		return invocation.executeWithBooleanReturn();
	} else
		return ((SuiBoxImplementation*) _impl)->isListBox();
}

bool SuiBox::isMessageBox() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 12);

		return invocation.executeWithBooleanReturn();
	} else
		return ((SuiBoxImplementation*) _impl)->isMessageBox();
}

bool SuiBox::isTransferBox() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 13);

		return invocation.executeWithBooleanReturn();
	} else
		return ((SuiBoxImplementation*) _impl)->isTransferBox();
}

bool SuiBox::isColorPicker() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 14);

		return invocation.executeWithBooleanReturn();
	} else
		return ((SuiBoxImplementation*) _impl)->isColorPicker();
}

bool SuiBox::isBankTransferBox() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 15);

		return invocation.executeWithBooleanReturn();
	} else
		return ((SuiBoxImplementation*) _impl)->isBankTransferBox();
}

unsigned long long SuiBox::getBoxID() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 16);

		return invocation.executeWithUnsignedLongReturn();
	} else
		return ((SuiBoxImplementation*) _impl)->getBoxID();
}

unsigned long long SuiBox::getUsingObjectID() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 17);

		return invocation.executeWithUnsignedLongReturn();
	} else
		return ((SuiBoxImplementation*) _impl)->getUsingObjectID();
}

Player* SuiBox::getPlayer() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 18);

		return (Player*) invocation.executeWithObjectReturn();
	} else
		return ((SuiBoxImplementation*) _impl)->getPlayer();
}

/*
 *	SuiBoxAdapter
 */

SuiBoxAdapter::SuiBoxAdapter(SuiBoxImplementation* obj) : ORBObjectAdapter((ORBObjectServant*) obj) {
}

Packet* SuiBoxAdapter::invokeMethod(uint32 methid, ORBMethodInvocation* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		setPromptTitle(inv->getAsciiParameter(_param0_setPromptTitle__string_));
		break;
	case 7:
		setPromptText(inv->getAsciiParameter(_param0_setPromptText__string_));
		break;
	case 8:
		setCancelButton(inv->getBooleanParameter());
		break;
	case 9:
		setUsingObjectID(inv->getUnsignedLongParameter());
		break;
	case 10:
		resp->insertBoolean(isInputBox());
		break;
	case 11:
		resp->insertBoolean(isListBox());
		break;
	case 12:
		resp->insertBoolean(isMessageBox());
		break;
	case 13:
		resp->insertBoolean(isTransferBox());
		break;
	case 14:
		resp->insertBoolean(isColorPicker());
		break;
	case 15:
		resp->insertBoolean(isBankTransferBox());
		break;
	case 16:
		resp->insertLong(getBoxID());
		break;
	case 17:
		resp->insertLong(getUsingObjectID());
		break;
	case 18:
		resp->insertLong(getPlayer()->_getORBObjectID());
		break;
	default:
		return NULL;
	}

	return resp;
}

void SuiBoxAdapter::setPromptTitle(const string& name) {
	return ((SuiBoxImplementation*) impl)->setPromptTitle(name);
}

void SuiBoxAdapter::setPromptText(const string& name) {
	return ((SuiBoxImplementation*) impl)->setPromptText(name);
}

void SuiBoxAdapter::setCancelButton(bool value) {
	return ((SuiBoxImplementation*) impl)->setCancelButton(value);
}

void SuiBoxAdapter::setUsingObjectID(unsigned long long oid) {
	return ((SuiBoxImplementation*) impl)->setUsingObjectID(oid);
}

bool SuiBoxAdapter::isInputBox() {
	return ((SuiBoxImplementation*) impl)->isInputBox();
}

bool SuiBoxAdapter::isListBox() {
	return ((SuiBoxImplementation*) impl)->isListBox();
}

bool SuiBoxAdapter::isMessageBox() {
	return ((SuiBoxImplementation*) impl)->isMessageBox();
}

bool SuiBoxAdapter::isTransferBox() {
	return ((SuiBoxImplementation*) impl)->isTransferBox();
}

bool SuiBoxAdapter::isColorPicker() {
	return ((SuiBoxImplementation*) impl)->isColorPicker();
}

bool SuiBoxAdapter::isBankTransferBox() {
	return ((SuiBoxImplementation*) impl)->isBankTransferBox();
}

unsigned long long SuiBoxAdapter::getBoxID() {
	return ((SuiBoxImplementation*) impl)->getBoxID();
}

unsigned long long SuiBoxAdapter::getUsingObjectID() {
	return ((SuiBoxImplementation*) impl)->getUsingObjectID();
}

Player* SuiBoxAdapter::getPlayer() {
	return ((SuiBoxImplementation*) impl)->getPlayer();
}

/*
 *	SuiBoxHelper
 */

SuiBoxHelper::SuiBoxHelper() {
	className = "SuiBox";

	ObjectRequestBroker::instance()->registerClass(className, this);
}

void SuiBoxHelper::finalizeHelper() {
	SuiBoxHelper::finalize();
}

ORBObject* SuiBoxHelper::instantiateObject() {
	return new SuiBox();
}

ORBObjectAdapter* SuiBoxHelper::createAdapter(ORBObjectServant* obj) {
	ORBObjectAdapter* adapter = new SuiBoxAdapter((SuiBoxImplementation*) obj);

	ORBObjectStub* stub = new SuiBox(obj);
	stub->_setORBClassName(className);
	stub->_setClassHelper(this);

	adapter->setStub(stub);

	obj->_setStub(stub);

	return adapter;
}

/*
 *	SuiBoxServant
 */

SuiBoxServant::SuiBoxServant() {
	_classHelper = SuiBoxHelper::instance();
}

SuiBoxServant::~SuiBoxServant() {
}

void SuiBoxServant::_setStub(ORBObjectStub* stub) {
	_this = (SuiBox*) stub;
}

ORBObjectStub* SuiBoxServant::_getStub() {
	return _this;
}

