/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/Versions/A/HearingUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class RPCompanionLinkDevice, RPCompanionLinkClient, NSMutableDictionary, NSSet;

@interface HUNearbyDevice : NSObject {

	char _activating;
	char _shouldTrack;
	RPCompanionLinkDevice* _device;
	unsigned long long _connectionStatus;
	RPCompanionLinkClient* _client;
	NSMutableDictionary* _previousMessageCache;
	NSSet* _cachableKeys;

}

@property (retain) RPCompanionLinkClient * client;                                    //@synthesize client=_client - In the implementation block
@property (assign,getter=isActivating,nonatomic) char activating;                     //@synthesize activating=_activating - In the implementation block
@property (assign,nonatomic) char shouldTrack;                                        //@synthesize shouldTrack=_shouldTrack - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * previousMessageCache;              //@synthesize previousMessageCache=_previousMessageCache - In the implementation block
@property (nonatomic,retain) NSSet * cachableKeys;                                    //@synthesize cachableKeys=_cachableKeys - In the implementation block
@property (nonatomic,retain) RPCompanionLinkDevice * device;                          //@synthesize device=_device - In the implementation block
@property (assign,nonatomic) unsigned long long connectionStatus;                     //@synthesize connectionStatus=_connectionStatus - In the implementation block
+(id)nearbyDeviceWithPeerDevice:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)name;
-(id)identifier;
-(RPCompanionLinkDevice *)device;
-(void)reset;
-(void)stop;
-(RPCompanionLinkClient *)client;
-(void)setClient:(RPCompanionLinkClient *)arg1 ;
-(void)sendMessage:(id)arg1 ;
-(void)setDevice:(RPCompanionLinkDevice *)arg1 ;
-(unsigned long long)connectionStatus;
-(void)setConnectionStatus:(unsigned long long)arg1 ;
-(char)shouldTrack;
-(char)isActivating;
-(void)setActivating:(char)arg1 ;
-(char)representsPeerDevice:(id)arg1 ;
-(void)purgeMessageCache;
-(char)representsAWatch;
-(id)initWithPeerDevice:(id)arg1 ;
-(void)setShouldTrack:(char)arg1 ;
-(void)setupSessionIfNecessary;
-(void)setCachableKeys:(NSSet *)arg1 ;
-(NSSet *)cachableKeys;
-(NSMutableDictionary *)previousMessageCache;
-(void)setPreviousMessageCache:(NSMutableDictionary *)arg1 ;
@end

