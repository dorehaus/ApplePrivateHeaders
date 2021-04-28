/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/Versions/A/BiometricKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BiometricKit/BiometricKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSString, NSDate, BiometricKitAccessory;

@interface BiometricKitIdentity : NSObject <NSSecureCoding, NSCopying> {

	unsigned _userID;
	int _type;
	int _attribute;
	int _entity;
	NSUUID* _uuid;
	NSString* _name;
	NSDate* _creationTime;
	long long _matchCount;
	long long _updateCount;
	BiometricKitAccessory* _accessory;

}

@property (nonatomic,retain) NSUUID * uuid;                                  //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) unsigned userID;                                //@synthesize userID=_userID - In the implementation block
@property (assign,nonatomic) int type;                                       //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int attribute;                                  //@synthesize attribute=_attribute - In the implementation block
@property (assign,nonatomic) int entity;                                     //@synthesize entity=_entity - In the implementation block
@property (nonatomic,copy) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSDate * creationTime;                          //@synthesize creationTime=_creationTime - In the implementation block
@property (assign,nonatomic) long long matchCount;                           //@synthesize matchCount=_matchCount - In the implementation block
@property (assign,nonatomic) long long updateCount;                          //@synthesize updateCount=_updateCount - In the implementation block
@property (nonatomic,retain) BiometricKitAccessory * accessory;              //@synthesize accessory=_accessory - In the implementation block
+(char)supportsSecureCoding;
+(id)biometricKitIdentity;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(NSString *)name;
-(void)setType:(int)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)uuid;
-(int)type;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(unsigned)userID;
-(int)attribute;
-(void)setAttribute:(int)arg1 ;
-(int)entity;
-(void)setEntity:(int)arg1 ;
-(long long)updateCount;
-(void)setUpdateCount:(long long)arg1 ;
-(void)setUserID:(unsigned)arg1 ;
-(char)isEqualToIdentity:(id)arg1 ;
-(BiometricKitAccessory *)accessory;
-(void)setAccessory:(BiometricKitAccessory *)arg1 ;
-(NSDate *)creationTime;
-(void)setCreationTime:(NSDate *)arg1 ;
-(long long)matchCount;
-(void)setMatchCount:(long long)arg1 ;
@end

