/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Assistant/Plugins/HMAssistant.assistantBundle/Contents/MacOS/HMAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMAssistant/HMHomeManagerDelegate.h>
#import <HMAssistant/HMFLogging.h>
#import <libobjc.A.dylib/AFSyncHandler.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSMutableArray, NSString, NSObject, HMHomeManager;

@interface HMAssistantSyncHome : NSObject <HMHomeManagerDelegate, HMFLogging, AFSyncHandler> {

	char _done;
	NSMutableArray* _anchors;
	NSMutableArray* _entities;
	NSString* _finalAnchor;
	NSObject*<OS_dispatch_queue> _queue;
	HMHomeManager* _homeManager;
	unsigned long long _fetchHomeConfigurationStartTime;
	NSObject*<OS_dispatch_group> _waitGroup;

}

@property (nonatomic,retain) NSMutableArray * anchors;                                        //@synthesize anchors=_anchors - In the implementation block
@property (nonatomic,retain) NSMutableArray * entities;                                       //@synthesize entities=_entities - In the implementation block
@property (nonatomic,retain) NSString * finalAnchor;                                          //@synthesize finalAnchor=_finalAnchor - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) char done;                                                       //@synthesize done=_done - In the implementation block
@property (nonatomic,retain) HMHomeManager * homeManager;                                     //@synthesize homeManager=_homeManager - In the implementation block
@property (assign,nonatomic) unsigned long long fetchHomeConfigurationStartTime;              //@synthesize fetchHomeConfigurationStartTime=_fetchHomeConfigurationStartTime - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> waitGroup;                          //@synthesize waitGroup=_waitGroup - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSObject*<OS_dispatch_group>)waitGroup;
-(unsigned long long)fetchHomeConfigurationStartTime;
-(char)shouldSyncForAnchor:(id)arg1 ;
-(void)setFinalAnchor:(NSString *)arg1 ;
-(NSString *)finalAnchor;
-(void)setFetchHomeConfigurationStartTime:(unsigned long long)arg1 ;
-(void)setWaitGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)dealloc;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableArray *)entities;
-(char)done;
-(void)homeManagerDidUpdateHomes:(id)arg1 ;
-(NSMutableArray *)anchors;
-(void)setAnchors:(NSMutableArray *)arg1 ;
-(void)setEntities:(NSMutableArray *)arg1 ;
-(HMHomeManager *)homeManager;
-(void)setHomeManager:(HMHomeManager *)arg1 ;
-(void)setDone:(char)arg1 ;
-(void)getChangeAfterAnchor:(id)arg1 changeInfo:(id)arg2 ;
-(void)beginSyncWithAnchor:(id)arg1 validity:(id)arg2 count:(long long)arg3 forKey:(id)arg4 beginInfo:(id)arg5 ;
-(void)syncDidEnd;
-(id)currentSyncSnapshot;
@end

