/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/Versions/A/SPOwner
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SPOwner/SPOwner-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSDate, NSNumber, SPHandle, NSString;

@interface SPCommand : NSObject <NSCopying, NSSecureCoding> {

	char _enableLostMode;
	NSUUID* _identifier;
	NSUUID* _beaconIdentifier;
	long long _type;
	NSDate* _expiration;
	NSNumber* _duration;
	long long _playSoundContext;
	SPHandle* _handle;
	NSString* _lostModeMessage;
	NSString* _lostModePhoneNumber;
	NSString* _obfuscatedIdentifier;

}

@property (nonatomic,copy) NSUUID * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSUUID * beaconIdentifier;                    //@synthesize beaconIdentifier=_beaconIdentifier - In the implementation block
@property (assign,nonatomic) long long type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSDate * expiration;                          //@synthesize expiration=_expiration - In the implementation block
@property (nonatomic,copy) NSNumber * duration;                          //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) long long playSoundContext;                 //@synthesize playSoundContext=_playSoundContext - In the implementation block
@property (nonatomic,copy) SPHandle * handle;                            //@synthesize handle=_handle - In the implementation block
@property (nonatomic,copy) NSString * lostModeMessage;                   //@synthesize lostModeMessage=_lostModeMessage - In the implementation block
@property (nonatomic,copy) NSString * lostModePhoneNumber;               //@synthesize lostModePhoneNumber=_lostModePhoneNumber - In the implementation block
@property (nonatomic,copy) NSString * obfuscatedIdentifier;              //@synthesize obfuscatedIdentifier=_obfuscatedIdentifier - In the implementation block
@property (assign,nonatomic) char enableLostMode;                        //@synthesize enableLostMode=_enableLostMode - In the implementation block
@property (nonatomic,copy,readonly) NSString * taskName; 
+(char)supportsSecureCoding;
+(id)playSoundWithBeaconUUID:(id)arg1 withContext:(long long)arg2 ;
+(id)enableNotifyWhenFound:(id)arg1 ;
+(id)disableNotifyWhenFound:(id)arg1 ;
+(id)setObfuscatedIdentifier:(id)arg1 ;
+(id)locate:(id)arg1 ;
+(id)startSharingWithBeaconUUID:(id)arg1 handle:(id)arg2 expiration:(id)arg3 ;
+(id)stopSharingWithBeaconUUID:(id)arg1 handle:(id)arg2 ;
+(id)acceptShareWithBeaconUUID:(id)arg1 ;
+(id)declineShareWithBeaconUUID:(id)arg1 ;
+(id)playSoundWithBeaconUUID:(id)arg1 duration:(double)arg2 ;
+(id)playSoundWithBeaconUUID:(id)arg1 ;
+(id)stopSoundWithBeaconUUID:(id)arg1 ;
+(id)enableLostModeForBeaconUUID:(id)arg1 message:(id)arg2 phoneNumber:(id)arg3 ;
+(id)disableLostModeForBeaconUUID:(id)arg1 ;
+(id)beginLeashingWithBeaconUUID:(id)arg1 ;
+(id)endLeashingWithBeaconUUID:(id)arg1 ;
+(id)connectToBeaconUUID:(id)arg1 ;
+(id)updateAccessoryFirmware:(id)arg1 ;
+(id)startNotifyWhenFound:(id)arg1 ;
+(id)stopNotifyWhenFound:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setType:(long long)arg1 ;
-(SPHandle *)handle;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)type;
-(NSUUID *)identifier;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSNumber *)duration;
-(void)setDuration:(NSNumber *)arg1 ;
-(void)setHandle:(SPHandle *)arg1 ;
-(NSDate *)expiration;
-(NSString *)taskName;
-(void)setExpiration:(NSDate *)arg1 ;
-(id)initWithBeaconUUID:(id)arg1 type:(long long)arg2 expiration:(id)arg3 duration:(id)arg4 handle:(id)arg5 lostModeMessage:(id)arg6 lostModePhoneNumber:(id)arg7 obfuscatedIdentifier:(id)arg8 ;
-(id)initWithBeaconUUID:(id)arg1 type:(long long)arg2 expiration:(id)arg3 duration:(id)arg4 playSoundContext:(long long)arg5 handle:(id)arg6 lostModeMessage:(id)arg7 lostModePhoneNumber:(id)arg8 obfuscatedIdentifier:(id)arg9 identifier:(id)arg10 ;
-(id)initWithBeaconUUID:(id)arg1 type:(long long)arg2 expiration:(id)arg3 duration:(id)arg4 handle:(id)arg5 lostModeMessage:(id)arg6 lostModePhoneNumber:(id)arg7 obfuscatedIdentifier:(id)arg8 identifier:(id)arg9 ;
-(void)setBeaconIdentifier:(NSUUID *)arg1 ;
-(void)setLostModeMessage:(NSString *)arg1 ;
-(void)setLostModePhoneNumber:(NSString *)arg1 ;
-(void)setObfuscatedIdentifier:(NSString *)arg1 ;
-(NSString *)lostModeMessage;
-(NSString *)lostModePhoneNumber;
-(NSString *)obfuscatedIdentifier;
-(NSUUID *)beaconIdentifier;
-(long long)playSoundContext;
-(void)setPlaySoundContext:(long long)arg1 ;
-(char)enableLostMode;
-(void)setEnableLostMode:(char)arg1 ;
@end

