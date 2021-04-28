/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Versions/A/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, CUXPCAgent, NSXPCConnection, CUXPCAgentConnection, NSString;

@interface SFNFCTagReaderUIController : NSObject {

	char _activateCalled;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	char _invalidateCalled;
	char _invalidateDone;
	long long _nfcTagScanCount;
	char _nfcTagScanPending;
	CUXPCAgent* _xpcAgent;
	NSXPCConnection* _xpcCnx;
	CUXPCAgentConnection* _xpcUICnx;
	/*^block*/id _invalidationHandler;
	long long _mode;
	NSString* _purpose;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (assign,nonatomic) long long mode;                                          //@synthesize mode=_mode - In the implementation block
@property (nonatomic,copy) NSString * purpose;                                        //@synthesize purpose=_purpose - In the implementation block
-(void)uiActivatedWithCompletion:(/*^block*/id)arg1 ;
-(void)uiInvalidatedWithCompletion:(/*^block*/id)arg1 ;
-(void)nfcTagScannedCount:(long long)arg1 ;
-(void)_nfcTagScannedCount;
-(void)nfcTagScanned;
-(id)init;
-(void)invalidate;
-(void)setMode:(long long)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(long long)mode;
-(id)invalidationHandler;
-(void)_invalidated;
-(void)_interrupted;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_ensureXPCStarted;
-(void)setPurpose:(NSString *)arg1 ;
-(NSString *)purpose;
@end

