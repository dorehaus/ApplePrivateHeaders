/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/Versions/A/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate, NSUUID;

@interface _DKSyncPeer : NSObject {

	char _companion;
	char _me;
	NSString* _sourceDeviceID;
	NSString* _idsDeviceIdentifier;
	NSString* _zoneName;
	NSDate* _lastSeenDate;
	NSString* _name;
	NSString* _model;
	NSString* _version;
	NSUUID* _uuid;

}

@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy) NSString * sourceDeviceID;                        //@synthesize sourceDeviceID=_sourceDeviceID - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * sourceDeviceUUID; 
@property (nonatomic,copy) NSString * idsDeviceIdentifier;                   //@synthesize idsDeviceIdentifier=_idsDeviceIdentifier - In the implementation block
@property (nonatomic,copy) NSString * zoneName;                              //@synthesize zoneName=_zoneName - In the implementation block
@property (nonatomic,copy) NSDate * lastSeenDate;                            //@synthesize lastSeenDate=_lastSeenDate - In the implementation block
@property (nonatomic,copy) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * model;                                 //@synthesize model=_model - In the implementation block
@property (assign,getter=isCompanion,nonatomic) char companion;              //@synthesize companion=_companion - In the implementation block
@property (nonatomic,copy) NSString * version;                               //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) char me;                                        //@synthesize me=_me - In the implementation block
@property (nonatomic,copy) NSUUID * uuid;                                    //@synthesize uuid=_uuid - In the implementation block
-(id)description;
-(id)init;
-(NSString *)name;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)version;
-(void)setVersion:(NSString *)arg1 ;
-(char)me;
-(NSString *)model;
-(NSString *)sourceDeviceID;
-(id)initWithZoneName:(id)arg1 ;
-(NSDate *)lastSeenDate;
-(NSString *)zoneName;
-(void)setMe:(char)arg1 ;
-(void)setModel:(NSString *)arg1 ;
-(void)setZoneName:(NSString *)arg1 ;
-(void)setSourceDeviceID:(NSString *)arg1 ;
-(void)setIdsDeviceIdentifier:(NSString *)arg1 ;
-(void)setLastSeenDate:(NSDate *)arg1 ;
-(NSString *)idsDeviceIdentifier;
-(id)initWithIDSDeviceIdentifier:(id)arg1 zoneName:(id)arg2 ;
-(id)initWithIDSDeviceIdentifier:(id)arg1 ;
-(NSUUID *)sourceDeviceUUID;
-(char)isCompanion;
-(void)setCompanion:(char)arg1 ;
@end

