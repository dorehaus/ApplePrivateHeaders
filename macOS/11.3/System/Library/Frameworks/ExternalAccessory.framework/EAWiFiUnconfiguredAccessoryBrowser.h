/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EAWiFiUnconfiguredAccessoryBrowserDelegate, OS_dispatch_queue;
@class NSSet, NSObject, NSPredicate;

@interface EAWiFiUnconfiguredAccessoryBrowser : NSObject {

	char __debugLog;
	id<EAWiFiUnconfiguredAccessoryBrowserDelegate> _delegate;
	NSSet* _unconfiguredAccessories;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSPredicate* _accessorySearchPredicate;

}

@property (retain) NSObject*<OS_dispatch_queue> delegateQueue;                                            //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (retain) NSPredicate * accessorySearchPredicate;                                                //@synthesize accessorySearchPredicate=_accessorySearchPredicate - In the implementation block
@property (assign,nonatomic,__weak) id<EAWiFiUnconfiguredAccessoryBrowserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (copy,readonly) NSSet * unconfiguredAccessories;                                                //@synthesize unconfiguredAccessories=_unconfiguredAccessories - In the implementation block
-(void)dealloc;
-(id)init;
-(id<EAWiFiUnconfiguredAccessoryBrowserDelegate>)delegate;
-(void)setDelegate:(id<EAWiFiUnconfiguredAccessoryBrowserDelegate>)arg1 ;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)startSearchingForUnconfiguredAccessoriesMatchingPredicate:(id)arg1 ;
-(void)stopSearchingForUnconfiguredAccessories;
-(void)configureAccessory:(id)arg1 withConfigurationUIOnViewController:(id)arg2 ;
-(NSSet *)unconfiguredAccessories;
-(NSPredicate *)accessorySearchPredicate;
-(void)setAccessorySearchPredicate:(NSPredicate *)arg1 ;
@end
