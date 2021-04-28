/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDHomeKitWHAAccessControl : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _privilegeLevel;
	char _isP2PEnabled;
	char _isPasswordSet;
	SCD_Struct_AW8 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasIsP2PEnabled; 
@property (assign,nonatomic) char isP2PEnabled;                         //@synthesize isP2PEnabled=_isP2PEnabled - In the implementation block
@property (assign,nonatomic) char hasPrivilegeLevel; 
@property (assign,nonatomic) int privilegeLevel;                        //@synthesize privilegeLevel=_privilegeLevel - In the implementation block
@property (assign,nonatomic) char hasIsPasswordSet; 
@property (assign,nonatomic) char isPasswordSet;                        //@synthesize isPasswordSet=_isPasswordSet - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(char)hasTimestamp;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setIsP2PEnabled:(char)arg1 ;
-(void)setHasIsP2PEnabled:(char)arg1 ;
-(char)hasIsP2PEnabled;
-(int)privilegeLevel;
-(void)setPrivilegeLevel:(int)arg1 ;
-(void)setHasPrivilegeLevel:(char)arg1 ;
-(char)hasPrivilegeLevel;
-(id)privilegeLevelAsString:(int)arg1 ;
-(int)StringAsPrivilegeLevel:(id)arg1 ;
-(void)setIsPasswordSet:(char)arg1 ;
-(void)setHasIsPasswordSet:(char)arg1 ;
-(char)hasIsPasswordSet;
-(char)isP2PEnabled;
-(char)isPasswordSet;
@end

