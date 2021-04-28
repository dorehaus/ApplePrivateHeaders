/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BehaviorMiner.framework/Versions/A/BehaviorMiner
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BehaviorMiner/BehaviorMiner-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, _DKEventStream;

@interface BMItemType : NSObject <NSCopying, NSSecureCoding> {

	NSString* _identifier;
	Class _valueClass;
	long long _edge;
	_DKEventStream* _eventStream;
	/*^block*/id _valueExtractBlock;

}

@property (nonatomic,copy) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) Class valueClass;                          //@synthesize valueClass=_valueClass - In the implementation block
@property (assign,nonatomic) long long edge;                            //@synthesize edge=_edge - In the implementation block
@property (nonatomic,retain) _DKEventStream * eventStream;              //@synthesize eventStream=_eventStream - In the implementation block
@property (nonatomic,copy) id valueExtractBlock;                        //@synthesize valueExtractBlock=_valueExtractBlock - In the implementation block
+(char)supportsSecureCoding;
+(id)dayOfWeek;
+(id)hourOfDay;
+(id)interactionSender;
+(id)interactionRecipients;
+(id)interactionMechanism;
+(id)isWeekend;
+(id)toggledDoNotDisturb;
+(id)locationIdentifier;
+(id)interactionPhotoScene;
+(id)interactionPhotoContact;
+(id)interactionContentURL;
+(id)interactionUTIType;
+(id)interactionSharingSourceBundleID;
+(id)interactionTargetBundleID;
+(id)interactionExtractedTopicFromAttachment;
+(id)bundleIdOfShareExtensionOpened;
+(id)relevanceIntentHash;
+(id)relevanceCoarseIntentHash;
+(id)relevanceAppActivityHash;
+(id)relevanceCoarseAppActivityHash;
+(id)appIntentClass;
+(id)appIntentAutomationHash;
+(id)appActivityType;
+(id)toggledLowPowerMode;
+(id)firstBacklightAfterWakeup;
+(id)bluetoothConnectedToDevice;
+(id)bluetoothConnectedToDeviceWithName;
+(id)bluetoothConnectedToDeviceWithAddress;
+(id)enterLocation;
+(id)exitLocation;
+(id)mediaIsPlaying;
+(id)mediaGenreStartedPlaying;
+(id)hourOfDaySlot;
+(id)temporalItemTypes;
+(id)allItemTypesDictionary;
+(id)appOpened;
+(id)appLaunchedReason;
+(id)appInFocus;
+(id)bundleIdOfHostOpenedShareExtension;
+(id)alarmSnoozedAny;
+(id)alarmStoppedAny;
+(id)alarmSnoozedWithID;
+(id)alarmStoppedWithID;
+(id)connectedToCarPlay;
+(id)interactionDirection;
+(id)interactionPhotoLocation;
+(id)interactionTextTopic;
+(id)interactionItemTypes;
+(id)connectedToExternalAudioOutput;
+(id)allRegisteredItemTypes;
+(void)registerItemType:(id)arg1 ;
+(id)toggledAirplaneMode;
+(id)wifiConnectedToSSID;
+(id)wifiDisconnectedFromSSID;
+(id)wifiIsConnectedToSSID;
+(id)allItemTypes;
+(id)taskSpecificItemWithIdentifier:(id)arg1 valueClass:(Class)arg2 ;
+(void)unregisterItemType:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(long long)edge;
-(void)setEdge:(long long)arg1 ;
-(Class)valueClass;
-(_DKEventStream *)eventStream;
-(void)setValueClass:(Class)arg1 ;
-(void)setEventStream:(_DKEventStream *)arg1 ;
-(void)setValueExtractBlock:(id)arg1 ;
-(id)extractEventFromDKEvent:(id)arg1 ;
-(id)valueExtractBlock;
-(id)extractValueFromDKEvent:(id)arg1 ;
-(id)extractItemFromDKEvent:(id)arg1 ;
@end
