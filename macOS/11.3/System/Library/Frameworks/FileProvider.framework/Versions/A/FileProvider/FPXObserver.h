/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/FileProvider.framework/Versions/A/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, NSFileProviderReplicatedExtension;
@class FPItemID, FPXDomainContext, NSObject, FPXExtensionContext;

@interface FPXObserver : NSObject {

	FPItemID* _observedItemID;
	FPXDomainContext* _domainContext;
	NSObject*<OS_dispatch_queue> _queue;
	id<NSFileProviderReplicatedExtension> _strongVendorInstance;
	FPXExtensionContext* _strongExtensionContext;
	char _invalidated;

}

@property (getter=isInvalidated,readonly) char invalidated;              //@synthesize invalidated=_invalidated - In the implementation block
-(id)init;
-(void)invalidate;
-(char)isInvalidated;
-(void)_fixupFavoriteRank:(id)arg1 ;
-(id)initWithObservedItemID:(id)arg1 domainContext:(id)arg2 ;
-(id)updateForProviderItem:(id)arg1 ;
-(void)verifyVendorToken:(id)arg1 ;
@end
