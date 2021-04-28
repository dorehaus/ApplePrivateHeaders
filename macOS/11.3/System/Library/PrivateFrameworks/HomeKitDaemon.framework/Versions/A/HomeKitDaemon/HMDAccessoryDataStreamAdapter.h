/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDDataStreamBulkSendListener.h>

@protocol HMDAccessoryDataStreamAdapterDelegate, OS_dispatch_queue, HMDDataStreamBulkSendSession;
@class HMDHAPAccessory, NSObject, NSString, NSDictionary;

@interface HMDAccessoryDataStreamAdapter : HMFObject <HMFLogging, HMDDataStreamBulkSendListener> {

	char _transportReady;
	char _didBulkSendFail;
	char _didBulkSendComplete;
	id<HMDAccessoryDataStreamAdapterDelegate> _delegate;
	HMDHAPAccessory* _accessory;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSString* _fileType;
	NSDictionary* _metadata;
	NSString* _reason;
	id<HMDDataStreamBulkSendSession> _currentBulkSendSession;
	/*^block*/id _pendingOpenSessionCallback;

}

@property (getter=isSessionOpenInProgress,readonly) char sessionOpenInProgress; 
@property (getter=isBulkSendActive,readonly) char bulkSendActive; 
@property (retain) id<HMDDataStreamBulkSendSession> currentBulkSendSession;                  //@synthesize currentBulkSendSession=_currentBulkSendSession - In the implementation block
@property (copy) id pendingOpenSessionCallback;                                              //@synthesize pendingOpenSessionCallback=_pendingOpenSessionCallback - In the implementation block
@property (assign) char transportReady;                                                      //@synthesize transportReady=_transportReady - In the implementation block
@property (assign) char didBulkSendFail;                                                     //@synthesize didBulkSendFail=_didBulkSendFail - In the implementation block
@property (assign) char didBulkSendComplete;                                                 //@synthesize didBulkSendComplete=_didBulkSendComplete - In the implementation block
@property (__weak) id<HMDAccessoryDataStreamAdapterDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (__weak,readonly) HMDHAPAccessory * accessory;                                     //@synthesize accessory=_accessory - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                                 //@synthesize workQueue=_workQueue - In the implementation block
@property (copy,readonly) NSString * fileType;                                               //@synthesize fileType=_fileType - In the implementation block
@property (readonly) NSDictionary * metadata;                                                //@synthesize metadata=_metadata - In the implementation block
@property (readonly) NSString * reason;                                                      //@synthesize reason=_reason - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)dealloc;
-(id<HMDAccessoryDataStreamAdapterDelegate>)delegate;
-(void)setDelegate:(id<HMDAccessoryDataStreamAdapterDelegate>)arg1 ;
-(NSString *)reason;
-(NSString *)fileType;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSDictionary *)metadata;
-(void)readData;
-(HMDHAPAccessory *)accessory;
-(void)shutDown;
-(id)logIdentifier;
-(id)attributeDescriptions;
-(void)accessoryDidCloseDataStream:(id)arg1 ;
-(char)transportReady;
-(char)didBulkSendFail;
-(char)didBulkSendComplete;
-(id<HMDDataStreamBulkSendSession>)currentBulkSendSession;
-(void)setCurrentBulkSendSession:(id<HMDDataStreamBulkSendSession>)arg1 ;
-(id)pendingOpenSessionCallback;
-(void)_callPendingOpenSessionCallbackWithResult:(id)arg1 error:(id)arg2 ;
-(void)setTransportReady:(char)arg1 ;
-(void)_setUpTransport;
-(void)setPendingOpenSessionCallback:(id)arg1 ;
-(void)_bulkSendDidFail;
-(char)_handleFrame:(id)arg1 ;
-(void)_bulkSendDidComplete;
-(void)callPendingOpenSessionCallbackWithResult:(id)arg1 error:(id)arg2 ;
-(char)isBulkSendActive;
-(void)setDidBulkSendFail:(char)arg1 ;
-(void)setDidBulkSendComplete:(char)arg1 ;
-(void)_openSession;
-(void)_handleAccessoryDidClose;
-(void)accessory:(id)arg1 didReceiveBulkSessionCandidate:(id)arg2 ;
-(void)accessoryDidStartListening:(id)arg1 ;
-(id)initWithAccessory:(id)arg1 workQueue:(id)arg2 fileType:(id)arg3 metadata:(id)arg4 reason:(id)arg5 ;
-(void)setUpWithCallback:(/*^block*/id)arg1 ;
-(char)isSessionOpenInProgress;
@end

