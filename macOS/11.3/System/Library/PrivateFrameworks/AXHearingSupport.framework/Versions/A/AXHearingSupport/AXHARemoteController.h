/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AXHearingSupport.framework/Versions/A/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXHearingSupport/AXIDCRemoteController.h>
#import <AXHearingSupport/AXHARemoteControllerProtocol.h>

@protocol OS_dispatch_queue;
@class AXDispatchTimer, NSObject, NSString;

@interface AXHARemoteController : AXIDCRemoteController <AXHARemoteControllerProtocol> {

	NSObject*<OS_dispatch_queue> _receivedPacketQueue;
	char didValidateHIID;
	AXDispatchTimer* _communicationTimer;

}

@property (assign,nonatomic) char didValidateHIID; 
@property (nonatomic,retain) AXDispatchTimer * communicationTimer;              //@synthesize communicationTimer=_communicationTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(void)receivedData:(id)arg1 ;
-(void)closeConnectionWithError:(id)arg1 ;
-(void)acceptConnection:(int)arg1 ;
-(void)didCommunicate;
-(void)sendDataChunk;
-(char)outputStreamReady;
-(char)sendObject:(id)arg1 withSendCompletion:(/*^block*/id)arg2 ;
-(void)setCommunicationTimer:(AXDispatchTimer *)arg1 ;
-(void)setDidValidateHIID:(char)arg1 ;
-(AXDispatchTimer *)communicationTimer;
-(char)didValidateHIID;
-(void)validatePairedAid;
@end

