/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AdPlatformsCommon.framework/Versions/A/AdPlatformsCommon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AdPlatformsCommon/APXPCActionRequester.h>
#import <libobjc.A.dylib/APPCControllerClientInterface.h>

@class NSMutableDictionary, APUnfairRecursiveLock;

@interface APControllerRequesterCoordinator : APXPCActionRequester <APPCControllerClientInterface> {

	NSMutableDictionary* _requestDelegates;
	APUnfairRecursiveLock* _lock;

}

@property (nonatomic,retain) NSMutableDictionary * requestDelegates;              //@synthesize requestDelegates=_requestDelegates - In the implementation block
@property (nonatomic,retain) APUnfairRecursiveLock * lock;                        //@synthesize lock=_lock - In the implementation block
+(id)machService;
+(char)canShareConnection;
+(id)requestCoordinator;
-(id)init;
-(APUnfairRecursiveLock *)lock;
-(void)connectionInterrupted;
-(id)exportedObject;
-(id)exportedInterface;
-(id)remoteObjectInterface;
-(void)connectionInvalidated;
-(void)setLock:(APUnfairRecursiveLock *)arg1 ;
-(id)proxyURL;
-(void)extendCollectionClassesForExportedInterface:(id)arg1 ;
-(void)_addDelegate:(id)arg1 withID:(id)arg2 ;
-(NSMutableDictionary *)requestDelegates;
-(void)proxyURLWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)contentResponses:(id)arg1 requester:(id)arg2 ;
-(void)requestPromotedContentOfTypes:(id)arg1 forRequester:(id)arg2 forContext:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)finishedWithRequestsForID:(id)arg1 ;
-(void)setRequestDelegates:(NSMutableDictionary *)arg1 ;
@end
