/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/Versions/A/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IDSFoundation/IDSFoundation-Structs.h>
@class IDSSockAddrWrapper, NSString, NSData;

@interface IDSInterfaceAddress : NSObject {

	IDSSockAddrWrapper* _address;
	IDSSockAddrWrapper* _external;
	IDSSockAddrWrapper* _netmask;
	IDSSockAddrWrapper* _destination;
	NSString* _name;
	unsigned _index;
	NSString* _delegatedName;
	unsigned _delegatedIndex;
	NSData* _bssid;
	char _AWDL;
	char _Cellular;
	char _temporary;
	char _companionLink;
	char _expensive;
	char _constrained;

}

@property (readonly) unsigned long long IPVersion; 
@property (readonly) IDSSockAddrWrapper * address;                           //@synthesize address=_address - In the implementation block
@property (copy) IDSSockAddrWrapper * external;                              //@synthesize external=_external - In the implementation block
@property (readonly) IDSSockAddrWrapper * netmask;                           //@synthesize netmask=_netmask - In the implementation block
@property (readonly) IDSSockAddrWrapper * destination;                       //@synthesize destination=_destination - In the implementation block
@property (readonly) NSString * name;                                        //@synthesize name=_name - In the implementation block
@property (readonly) unsigned index;                                         //@synthesize index=_index - In the implementation block
@property (readonly) NSString * delegatedName;                               //@synthesize delegatedName=_delegatedName - In the implementation block
@property (readonly) unsigned delegatedIndex;                                //@synthesize delegatedIndex=_delegatedIndex - In the implementation block
@property (readonly) NSData * bssid;                                         //@synthesize bssid=_bssid - In the implementation block
@property (getter=isAWDL,readonly) char AWDL;                                //@synthesize AWDL=_AWDL - In the implementation block
@property (getter=isCellular,readonly) char Cellular;                        //@synthesize Cellular=_Cellular - In the implementation block
@property (getter=isTemporaryIPv6,readonly) char temporary;                  //@synthesize temporary=_temporary - In the implementation block
@property (getter=isCompanionLink,readonly) char companionLink;              //@synthesize companionLink=_companionLink - In the implementation block
@property (nonatomic,readonly) char expensive;                               //@synthesize expensive=_expensive - In the implementation block
@property (assign,nonatomic) char constrained;                               //@synthesize constrained=_constrained - In the implementation block
+(id)interfaceAddress:(ifaddrs*)arg1 eflags:(unsigned long long)arg2 v6flags:(int)arg3 iftype:(int)arg4 ;
+(id)BSSIDWithInterfaceName:(id)arg1 ;
+(id)interfaceAddressWithTransmittedBytes:(char*)arg1 length:(long long)arg2 withLocalInterfaceName:(id)arg3 ;
-(id)description;
-(NSString *)name;
-(unsigned)index;
-(IDSSockAddrWrapper *)address;
-(IDSSockAddrWrapper *)external;
-(IDSSockAddrWrapper *)destination;
-(NSData *)bssid;
-(void)setExternal:(IDSSockAddrWrapper *)arg1 ;
-(char)isCellular;
-(unsigned long long)IPVersion;
-(char)isCompanionLink;
-(char)expensive;
-(char)constrained;
-(NSString *)delegatedName;
-(unsigned)delegatedIndex;
-(char)isTemporaryIPv6;
-(id)initWithInterfaceAddress:(ifaddrs*)arg1 bflags:(unsigned char)arg2 bssid:(char*)arg3 bssidLength:(unsigned char)arg4 ;
-(long long)getTransmittableBytes:(char*)arg1 withPrefixByte:(unsigned char)arg2 ;
-(IDSSockAddrWrapper *)netmask;
-(char)isAWDL;
-(void)setConstrained:(char)arg1 ;
@end

