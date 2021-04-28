/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/Versions/A/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNUIIDSAvailabilityProvider.h>

@protocol CNUIIDSAvailabilityProvider <NSObject>
@required
-(id)validateHandlesForFaceTime:(id)arg1 schedulerProvider:(id)arg2;
-(id)validateHandlesForIMessage:(id)arg1 schedulerProvider:(id)arg2;

@end


@protocol CNUIIDSIDQueryControllerWrapper, CNScheduler;
@class CNUIDSHandleAvailabilityCache, NSArray, NSString;

@interface CNUIIDSAvailabilityProvider : NSObject <CNUIIDSAvailabilityProvider> {

	id<CNUIIDSIDQueryControllerWrapper> _queryControllerWrapper;
	CNUIDSHandleAvailabilityCache* _faceTimeRequests;
	CNUIDSHandleAvailabilityCache* _iMessageRequests;
	NSArray* _requestFutures;
	id<CNScheduler> _resourceLock;

}

@property (nonatomic,retain) id<CNUIIDSIDQueryControllerWrapper> queryControllerWrapper;              //@synthesize queryControllerWrapper=_queryControllerWrapper - In the implementation block
@property (nonatomic,retain) CNUIDSHandleAvailabilityCache * faceTimeRequests;                        //@synthesize faceTimeRequests=_faceTimeRequests - In the implementation block
@property (nonatomic,retain) CNUIDSHandleAvailabilityCache * iMessageRequests;                        //@synthesize iMessageRequests=_iMessageRequests - In the implementation block
@property (nonatomic,retain) NSArray * requestFutures;                                                //@synthesize requestFutures=_requestFutures - In the implementation block
@property (nonatomic,retain) id<CNScheduler> resourceLock;                                            //@synthesize resourceLock=_resourceLock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)makeFaceTimeRequestsCache;
+(id)makeIMessageRequestsCache;
-(id)init;
-(id<CNScheduler>)resourceLock;
-(id)initWithQueryControllerWrapper:(id)arg1 ;
-(id<CNUIIDSIDQueryControllerWrapper>)queryControllerWrapper;
-(CNUIDSHandleAvailabilityCache *)faceTimeRequests;
-(CNUIDSHandleAvailabilityCache *)iMessageRequests;
-(void)startRequestForCacheMisses:(id)arg1 service:(long long)arg2 scheduler:(id)arg3 ;
-(id)validateHandles:(id)arg1 forService:(long long)arg2 schedulerProvider:(id)arg3 ;
-(id)validateHandlesForFaceTime:(id)arg1 schedulerProvider:(id)arg2 ;
-(id)validateHandlesForIMessage:(id)arg1 schedulerProvider:(id)arg2 ;
-(void)setQueryControllerWrapper:(id<CNUIIDSIDQueryControllerWrapper>)arg1 ;
-(void)setFaceTimeRequests:(CNUIDSHandleAvailabilityCache *)arg1 ;
-(void)setIMessageRequests:(CNUIDSHandleAvailabilityCache *)arg1 ;
-(NSArray *)requestFutures;
-(void)setRequestFutures:(NSArray *)arg1 ;
-(void)setResourceLock:(id<CNScheduler>)arg1 ;
@end

