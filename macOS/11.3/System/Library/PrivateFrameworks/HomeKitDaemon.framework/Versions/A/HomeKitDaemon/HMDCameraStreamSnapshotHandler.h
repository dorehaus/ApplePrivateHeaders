/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDCameraStreamSnapshotCaptureDelegate.h>
#import <libobjc.A.dylib/HMDCameraGetSnapshotProtocol.h>

@protocol HMFLocking, OS_dispatch_queue;
@class NSMutableSet, NSObject, NSMutableDictionary, NSMapTable, NSString;

@interface HMDCameraStreamSnapshotHandler : HMFObject <HMFLogging, HMDCameraStreamSnapshotCaptureDelegate, HMDCameraGetSnapshotProtocol> {

	id<HMFLocking> _lock;
	char _streamAvailable;
	char _streamSetupInProgress;
	NSMutableSet* _streamSnapshotCaptures;
	NSMutableSet* _retiredStreamSnapshotCaptures;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	NSMutableDictionary* _serviceInstanceStreamStatus;
	NSMapTable* _delegateTable;
	NSString* _logIdentifier;

}

@property (readonly) NSString * logIdentifier;                                               //@synthesize logIdentifier=_logIdentifier - In the implementation block
@property (getter=isStreamAvailable,readonly) char streamAvailable;                          //@synthesize streamAvailable=_streamAvailable - In the implementation block
@property (getter=isStreamSetupInProgress,readonly) char streamSetupInProgress;              //@synthesize streamSetupInProgress=_streamSetupInProgress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)removeDelegate:(id)arg1 ;
-(NSString *)logIdentifier;
-(void)getSnapshot:(unsigned long long)arg1 ;
-(void)removeVideoStreamInterface:(id)arg1 ;
-(void)addVideoStreamInterface:(id)arg1 ;
-(void)streamSnapshotCapture:(id)arg1 didGetNewSnapshot:(id)arg2 ;
-(void)streamSnapshotCapture:(id)arg1 didGetLastSnapshot:(id)arg2 ;
-(id)initWithWorkQueue:(id)arg1 services:(id)arg2 logID:(id)arg3 ;
-(void)addDelegate:(id)arg1 delegateQueue:(id)arg2 ;
-(char)isStreamAvailable;
-(char)isStreamSetupInProgress;
-(void)setStreamSetupStatusForService:(id)arg1 inProgress:(char)arg2 ;
@end

