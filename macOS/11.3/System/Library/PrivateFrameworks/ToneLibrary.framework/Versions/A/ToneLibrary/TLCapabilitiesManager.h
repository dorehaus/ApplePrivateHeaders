/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/Versions/A/ToneLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString;

@interface TLCapabilitiesManager : NSObject {

	NSDictionary* _deviceCodeNameSimplicationMapping;

}

@property (getter=isRingtoneStoreAvailable,nonatomic,readonly) char ringtoneStoreAvailable; 
@property (getter=isAlertToneStoreAvailable,nonatomic,readonly) char alertToneStoreAvailable; 
@property (nonatomic,readonly) char hasVibratorCapability; 
@property (nonatomic,readonly) char hasUserGeneratedVibrationsCapability; 
@property (nonatomic,readonly) NSString * deviceCodeName; 
@property (nonatomic,readonly) NSString * simplifiedDeviceCodeName; 
@property (getter=isHomePod,nonatomic,readonly) char homePod; 
+(id)sharedCapabilitiesManager;
-(void)dealloc;
-(id)init;
-(char)isHomePod;
-(char)hasVibratorCapability;
-(NSString *)deviceCodeName;
-(char)isRingtoneStoreAvailable;
-(char)isAlertToneStoreAvailable;
-(char)hasUserGeneratedVibrationsCapability;
-(NSString *)simplifiedDeviceCodeName;
@end

