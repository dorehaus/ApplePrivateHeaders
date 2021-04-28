/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/FileProvider.framework/Versions/A/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FPXEnumerator.h>

@protocol FPXEnumerator <NSObject>
@required
-(void)invalidate;
-(void)currentSyncAnchorWithCompletion:(/*^block*/id)arg1;
-(void)enumerateItemsFromPage:(id)arg1 suggestedPageSize:(long long)arg2 reply:(/*^block*/id)arg3;
-(void)enumerateChangesFromToken:(id)arg1 suggestedBatchSize:(long long)arg2 reply:(/*^block*/id)arg3;
-(void)keepAliveConnectionForRegisteredObserver:(/*^block*/id)arg1;
-(void)enumeratorBecameFrontmost:(char)arg1 inWindow:(id)arg2 completionHandler:(/*^block*/id)arg3;

@end


@protocol NSFileProviderEnumerator, OS_dispatch_queue, OS_os_log, FPXEnumeratorObserver;
@class FPXDomainContext, FPItemID, NSObject, NSString;

@interface FPXEnumerator : NSObject <FPXEnumerator> {

	FPXDomainContext* _domainContext;
	id<NSFileProviderEnumerator> _vendorEnumerator;
	FPItemID* _observedItemID;
	char _invalidated;
	char _isWorkingSetEnum;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_os_log> _log;
	id<FPXEnumeratorObserver> _observer;

}

@property (readonly) id<FPXEnumeratorObserver> observer;              //@synthesize observer=_observer - In the implementation block
@property (readonly) FPItemID * observedItemID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(void)invalidate;
-(void)_invalidate;
-(id<FPXEnumeratorObserver>)observer;
-(FPItemID *)observedItemID;
-(void)alternateContentsWereUpdatedAtURL:(id)arg1 forItem:(id)arg2 ;
-(id)initWithObservedItemID:(id)arg1 domainContext:(id)arg2 vendorEnumerator:(id)arg3 observer:(id)arg4 isWorkingSetEnum:(char)arg5 queue:(id)arg6 ;
-(void)forceItemUpdate:(id)arg1 ;
-(id)vendorEnumerator;
-(void)invalidateVendorEnumeration;
-(void)forceAddFileURLsForItems:(id)arg1 ;
-(void)currentSyncAnchorWithCompletion:(/*^block*/id)arg1 ;
-(void)enumerateItemsFromPage:(id)arg1 suggestedPageSize:(long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)enumerateChangesFromToken:(id)arg1 suggestedBatchSize:(long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)keepAliveConnectionForRegisteredObserver:(/*^block*/id)arg1 ;
-(void)enumeratorBecameFrontmost:(char)arg1 inWindow:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

