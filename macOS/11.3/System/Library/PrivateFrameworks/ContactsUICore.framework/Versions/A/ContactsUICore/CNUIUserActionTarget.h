/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/Versions/A/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNTUCallProvider;
@class NSString;

@interface CNUIUserActionTarget : NSObject {

	NSString* _name;
	NSString* _bundleIdentifier;
	NSString* _teamIdentifier;
	NSString* _actionType;
	id<CNTUCallProvider> _callProvider;

}

@property (nonatomic,copy) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * teamIdentifier;                //@synthesize teamIdentifier=_teamIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * actionType;                //@synthesize actionType=_actionType - In the implementation block
@property (retain) id<CNTUCallProvider> callProvider;                //@synthesize callProvider=_callProvider - In the implementation block
+(id)descriptorForRequiredKeysForActionDiscovering;
+(id)targetForEmailWithMail;
+(id)targetForPayWithWallet;
+(id)targetForDirections;
+(id)targetForVoiceWithTelephony;
+(id)targetForVoiceWithFaceTime;
+(id)targetForVoiceWithSkype;
+(id)targetForVideoWithFaceTime;
+(id)targetForVideoWithSkype;
+(id)targetForTextWithMessages;
+(id)targetForTextWithSkype;
+(id)targetForVoiceWithCallProvider:(id)arg1 ;
+(id)targetForVideoWithCallProvider:(id)arg1 ;
+(id)targetForStartAudioCallIntentWithAppProxy:(id)arg1 ;
+(id)targetForStartVideoCallIntentWithAppProxy:(id)arg1 ;
+(id)targetForSendMessageIntentWithAppProxy:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)teamIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setTeamIdentifier:(NSString *)arg1 ;
-(NSString *)actionType;
-(id)actionsForEmailAddresses:(id)arg1 contact:(id)arg2 discoveringEnvironment:(id)arg3 ;
-(id)actionsForPhoneNumbers:(id)arg1 contact:(id)arg2 discoveringEnvironment:(id)arg3 ;
-(id)actionsForSocialProfiles:(id)arg1 contact:(id)arg2 discoveringEnvironment:(id)arg3 ;
-(id)actionsForInstantMessageAddresses:(id)arg1 contact:(id)arg2 discoveringEnvironment:(id)arg3 ;
-(id)initWithName:(id)arg1 bundleIdentifier:(id)arg2 teamIdentifier:(id)arg3 ;
-(id)actionsForContact:(id)arg1 discoveringEnvironment:(id)arg2 ;
-(id<CNTUCallProvider>)callProvider;
-(id)actionsForPostalAddresses:(id)arg1 contact:(id)arg2 discoveringEnvironment:(id)arg3 ;
-(void)setCallProvider:(id<CNTUCallProvider>)arg1 ;
@end
