/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/Versions/A/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@class _FBSDisplayLayoutServiceAssertion, BSServiceConnectionEndpoint, NSMapTable, FBSDisplayLayout, NSString;

@interface FBSDisplayLayoutMonitor : NSObject <BSInvalidatable> {

	os_unfair_lock_s _lock;
	_FBSDisplayLayoutServiceAssertion* _lock_handlerAssertion;
	char _lock_invalidated;
	BSServiceConnectionEndpoint* _deprecated_endpoint;
	/*^block*/id _lock_deprecated_handler;
	NSMapTable* _lock_deprecated_observerAssertions;
	char _deprecated_qos;
	long long _deprecated_displayType;
	char _deprecated_singleton;
	char _deprecated_mutable;

}

@property (nonatomic,readonly) FBSDisplayLayout * currentLayout; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceIdentifier;
+(id)interface;
+(id)monitorWithConfiguration:(id)arg1 ;
+(id)_endpointForDisplayType:(long long)arg1 ;
+(id)mainDisplayInstanceIdentifier;
+(id)sharedMonitorForDisplayType:(long long)arg1 ;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(/*^block*/id)handler;
-(void)setHandler:(/*^block*/id)arg1 ;
-(unsigned long long)qualityOfService;
-(FBSDisplayLayout *)currentLayout;
-(long long)displayType;
-(id)_initWithConfiguration:(id)arg1 singleton:(char)arg2 needsDefaultPriority:(char)arg3 mutable:(char)arg4 displayType:(long long)arg5 mutableHandler:(/*^block*/id)arg6 ;
-(id)initWithDisplayType:(long long)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithDisplayType:(long long)arg1 qualityOfService:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(id)initWithDisplayType:(long long)arg1 ;
@end
