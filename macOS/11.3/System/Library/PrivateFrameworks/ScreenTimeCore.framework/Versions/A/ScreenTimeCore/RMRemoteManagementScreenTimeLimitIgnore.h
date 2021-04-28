/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/Versions/A/ScreenTimeCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenTimeCore/ScreenTimeCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface RMRemoteManagementScreenTimeLimitIgnore : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _familyMemberType;
	char _hasPasscode;
	char _isManaged;
	char _isManaging;
	SCD_Struct_RM4 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) char hasFamilyMemberType; 
@property (nonatomic,retain) NSString * familyMemberType;               //@synthesize familyMemberType=_familyMemberType - In the implementation block
@property (assign,nonatomic) char hasIsManaged; 
@property (assign,nonatomic) char isManaged;                            //@synthesize isManaged=_isManaged - In the implementation block
@property (assign,nonatomic) char hasIsManaging; 
@property (assign,nonatomic) char isManaging;                           //@synthesize isManaging=_isManaging - In the implementation block
@property (assign,nonatomic) char hasHasPasscode; 
@property (assign,nonatomic) char hasPasscode;                          //@synthesize hasPasscode=_hasPasscode - In the implementation block
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
-(char)isManaged;
-(void)setFamilyMemberType:(NSString *)arg1 ;
-(char)hasFamilyMemberType;
-(void)setIsManaged:(char)arg1 ;
-(void)setHasIsManaged:(char)arg1 ;
-(char)hasIsManaged;
-(void)setIsManaging:(char)arg1 ;
-(void)setHasIsManaging:(char)arg1 ;
-(char)hasIsManaging;
-(void)setHasPasscode:(char)arg1 ;
-(void)setHasHasPasscode:(char)arg1 ;
-(char)hasHasPasscode;
-(NSString *)familyMemberType;
-(char)isManaging;
-(char)hasPasscode;
@end

