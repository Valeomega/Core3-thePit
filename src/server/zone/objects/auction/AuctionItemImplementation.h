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

#ifndef AUCTIONITEMIMPLEMENTATION_H_
#define AUCTIONITEMIMPLEMENTATION_H_

#include "engine/engine.h"

#include "AuctionItem.h"

class AuctionItemImplementation : public AuctionItemServant {
	
public:
	AuctionItemImplementation(uint64 objectid) : AuctionItemServant() {
		id = objectid;
	}
	
	AuctionItemImplementation(uint64 objectid, string& name, int itemprice, int time, bool isauction, int type, string& owner) 
		: AuctionItemServant() {

		id = objectid;
		itemType = type;
		itemName = name;
		
		price = price;
		remainingTime = time;
		auction = auction;

		ownerName = owner;
	}
	
	uint64 id;
	int itemType;
	
	uint64 ownerID;
	string ownerName;
	short ownerPointer;
	string bidderName;
	
	short planet;
	string region;
	string location;
	string terminalTitle;
	short locationPointer;
	uint64 vendorID;
	
	string itemName;
	string itemDescription;
	
	int price;
	
	bool auction;
	bool sold;

	uint64 buyerID;
	
	uint32 expireTime;
	int remainingTime;

	bool updated;
	
	AuctionItem* deploy() {
		return (AuctionItem*) ORBObjectServant::deploy("AuctionItem", id);
	}

	void setLocation(string& planet, string& header, long long vendorid, int x, int z, bool vendor) {
		location = header;
		
		stringstream title;
		title << planet << ".@";
		
		if (vendor)
			title << "planet_n:" << planet <<  ".Vendor: " << header;
		else
			title << planet << "_region_names:" << header << ".@:";
		
		title << "." << vendorid << "#" << x << "," << z;
		terminalTitle = title.str();
	}
	
	inline uint64 getId() {
		return id;
	}
	
	inline bool isSold() {
		return sold;
	}
	
	inline void setSold(bool sld) {
		sold = sld;
	}
	
	inline uint32 getItemType() {
		return itemType;
	}
	
	inline uint64 getOwnerId() {
		return ownerID;
	}
	
	inline void setOwnerId(uint64 ownerid) {
		ownerID = ownerid;
	}
	
	inline uint64 getBuyerId() {
		return buyerID;
	}
	
	inline string& getBidderName() {
		return bidderName;
	}
	
	inline void setBidderName(string& name) {
		bidderName = name;
	}
	
	inline void setBuyerId(uint64 buyerid) {
		buyerID = buyerid;
	}
	
	inline string& getTerminalTitle() {
		return terminalTitle;
	}
	
	inline string& getOwnerName() {
		return ownerName;
	}
		
	inline void setOwnerName(string& name) {
		ownerName =name;
	}
	
	inline void setLocationPointer(int locpt) {
		locationPointer = locpt;
	}
	
	inline int getLocationPointer() {
		return locationPointer;
	}
	
	inline void setOwnerPointer(int ownpt) {
		ownerPointer = ownpt;
	}
	
	inline int getOwnerPointer() {
		return ownerPointer;
	}
	
	inline string& getItemName() {
		return itemName;
	}
	
	inline void setItemDescription(string& description) {
		itemDescription = description;
	}
	
	inline string& getItemDescription() {
		return itemDescription;
	}
	
	inline int getPrice() {
		return price;
	}
	
	inline void setPrice(int prc) {
		price = prc;
	}
	
	inline uint32 getExpireTime() {
		return expireTime;
	}
	
	inline void setExpireTime(uint32 expiretime) {
		expireTime = expiretime;
	}
	
	inline bool getAuction() {
		return auction;
	}
	
	inline int getPlanet() {
		return planet;
	}
	
	inline string& getLocation() {
		return location;
	}
	
	void dump() {
		cout << "id: " << id <<
			" itemName: " << itemName <<
			" itemType: " << itemType <<
			" ownerID: " << ownerID << 
			" ownerName: " << ownerName <<
			" ownerPointer: " << ownerPointer <<
			" planet: " << planet <<
			" region: " << region <<
			" location: " << location <<
			" terminalTitle: " << terminalTitle <<
			" locationPointer: " << locationPointer <<
			" vendorID: " << vendorID <<
			" price: " << price <<
			" auction: " << auction <<
			" sold: " << sold <<
			" buyerID: " << buyerID <<
			" bidderName: " << bidderName <<
			" expireTime: " << expireTime <<
			" remainingTime: " << remainingTime <<
			" updated: " << updated << "\n";
	}

};

#endif /*AUCTIONITEMIMPLEMENTATION_H_*/
