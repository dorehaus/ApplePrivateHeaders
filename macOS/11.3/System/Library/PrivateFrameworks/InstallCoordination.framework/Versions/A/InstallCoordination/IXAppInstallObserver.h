/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/Versions/A/InstallCoordination
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/IXAppInstallObserverProtocol.h>

@protocol IXAppInstallObserverDelegate, OS_dispatch_queue;
@class NSXPCListener, NSObject, NSString;

@interface IXAppInstallObserver : NSObject <NSXPCListenerDelegate, IXAppInstallObserverProtocol> {

	id<IXAppInstallObserverDelegate> _delegate;
	NSXPCListener* _listener;
	NSObject*<OS_dispatch_queue> _delegateQueue;

}

@property (nonatomic,retain) NSXPCListener * listener;                                        //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                      //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,__weak,readonly) id<IXAppInstallObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<IXAppInstallObserverDelegate>)delegate;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSXPCListener *)listener;
-(void)setListener:(NSXPCListener *)arg1 ;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)_internalInit;
-(id)_oncePerBootUniqueIdentifierForServiceName:(id)arg1 ;
-(oneway void)_client_coordinatorShouldPrioritizeWithSeed:(id)arg1 ;
-(oneway void)_client_shouldPrioritizeAppWithBundleID:(id)arg1 ;
-(oneway void)_client_coordinatorShouldResumeWithSeed:(id)arg1 ;
-(oneway void)_client_coordinatorShouldPauseWithSeed:(id)arg1 ;
-(oneway void)_client_coordinatorWithSeed:(id)arg1 configuredPromiseDidBeginFulfillment:(unsigned long long)arg2 ;
-(oneway void)_client_coordinatorShouldBeginRestoringUserDataWithSeed:(id)arg1 ;
-(oneway void)_client_coordinatorDidInstallPlaceholderWithSeed:(id)arg1 ;
-(oneway void)_client_coordinatorDidInstallPlaceholderWithSeed:(id)arg1 atURL:(id)arg2 ;
-(oneway void)_client_coordinatorDidCompleteSuccessfullyWithSeed:(id)arg1 ;
-(oneway void)_client_coordinatorDidCompleteSuccessfullyWithSeed:(id)arg1 forAppAtURL:(id)arg2 ;
-(oneway void)_client_coordinatorWithSeed:(id)arg1 didCancelWithReason:(id)arg2 client:(unsigned long long)arg3 ;
-(id)initWithMachServiceName:(id)arg1 forClients:(id)arg2 delegate:(id)arg3 ;
-(id)initTransientForClients:(id)arg1 delegate:(id)arg2 ;
@end

