/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IOBluetooth/IOBluetooth-Structs.h>
#import <IOBluetooth/IOBluetoothHandsFree.h>

@class NSTimer, IOBluetoothHandsFreeDeviceExpansion, NSMutableArray;

@interface IOBluetoothHandsFreeDevice : IOBluetoothHandsFree {

	char _rejectSCOConnection;
	int _ringAttempt;
	char _outstandingCommand;
	NSTimer* _outstandingCommandTimer;
	IOBluetoothHandsFreeDeviceExpansion* _expansion;
	NSMutableArray* _commandQueue;

}

@property (assign) int ringAttempt;                                     //@synthesize ringAttempt=_ringAttempt - In the implementation block
@property (assign) char rejectSCOConnection;                            //@synthesize rejectSCOConnection=_rejectSCOConnection - In the implementation block
@property (assign) char outstandingCommand;                             //@synthesize outstandingCommand=_outstandingCommand - In the implementation block
@property (assign) NSTimer * outstandingCommandTimer;                   //@synthesize outstandingCommandTimer=_outstandingCommandTimer - In the implementation block
@property (assign) ComponentInstanceRecord* VPIOUnit; 
@property (assign) double prevInputSampleTime; 
@property (assign) double prevOutputSampleTime; 
@property (assign) IOBluetoothRingBuffer* SCOInputBuffer; 
@property (assign) IOBluetoothRingBuffer* SCOOutputBuffer; 
@property (assign) unsigned driverConnect; 
@property (assign) AudioBufferList* outputBufferList; 
+(id)localUUID;
+(id)deviceUUID;
-(void)processIncomingData:(char*)arg1 length:(unsigned long long)arg2 ;
-(void)sendInputVolumePrivate:(id)arg1 ;
-(void)sendOutputVolumePrivate:(id)arg1 ;
-(id)driverID;
-(void)sendInputVolume;
-(ComponentInstanceRecord*)VPIOUnit;
-(void)setVPIOUnit:(ComponentInstanceRecord*)arg1 ;
-(double)prevInputSampleTime;
-(void)setPrevInputSampleTime:(double)arg1 ;
-(double)prevOutputSampleTime;
-(void)setPrevOutputSampleTime:(double)arg1 ;
-(IOBluetoothRingBuffer*)SCOInputBuffer;
-(void)setSCOInputBuffer:(IOBluetoothRingBuffer*)arg1 ;
-(IOBluetoothRingBuffer*)SCOOutputBuffer;
-(void)setSCOOutputBuffer:(IOBluetoothRingBuffer*)arg1 ;
-(AudioBufferList*)outputBufferList;
-(void)setOutputBufferList:(AudioBufferList*)arg1 ;
-(void)sendATCommand:(id)arg1 ;
-(char)rejectSCOConnection;
-(void)setRejectSCOConnection:(char)arg1 ;
-(int)configureVPAU;
-(int)teardownVPAU;
-(void)sendATCommand:(id)arg1 timeout:(float)arg2 selector:(SEL)arg3 target:(id)arg4 ;
-(void)commandComplete:(id)arg1 ;
-(void)sendPendingATCommand;
-(char)outstandingCommand;
-(void)setOutstandingCommand:(char)arg1 ;
-(NSTimer *)outstandingCommandTimer;
-(void)setOutstandingCommandTimer:(NSTimer *)arg1 ;
-(void)slcConnected:(id)arg1 ;
-(void)processResultCode:(id)arg1 ;
-(void)startConfiguration;
-(void)processIndicatorMapping:(id)arg1 ;
-(void)processIndicatorStatus:(id)arg1 ;
-(void)processIndicatorEvent:(id)arg1 ;
-(void)processCallHoldModes:(id)arg1 ;
-(void)processCurrentCall:(id)arg1 ;
-(void)processSubscriberNumber:(id)arg1 ;
-(void)processMessageService:(id)arg1 ;
-(void)processMessageModes:(id)arg1 ;
-(void)processMessageNotificationCMT:(id)arg1 ;
-(void)processMessageNotificationCMTI:(id)arg1 ;
-(void)processReadMessageCMGR:(id)arg1 ;
-(void)processLineIdentificationNotification:(id)arg1 ;
-(int)ringAttempt;
-(void)setRingAttempt:(int)arg1 ;
-(void)SMSMode:(id)arg1 ;
-(void)dialNumber:(id)arg1 ;
-(void)memoryDial:(int)arg1 ;
-(void)endCall;
-(void)acceptCall;
-(void)acceptCallOnPhone;
-(void)sendDTMF:(id)arg1 ;
-(void)subscriberNumber;
-(void)currentCallList;
-(void)releaseHeldCalls;
-(void)releaseActiveCalls;
-(void)releaseCall:(int)arg1 ;
-(void)holdCall;
-(void)placeAllOthersOnHold:(int)arg1 ;
-(void)addHeldCall;
-(void)callTransfer;
-(void)transferAudioToComputer;
-(void)transferAudioToPhone;
-(void)sendSMS:(id)arg1 message:(id)arg2 ;
-(int)fill:(unsigned*)arg1 timeStamp:(const AudioTimeStamp*)arg2 busNumber:(unsigned)arg3 numberFrames:(unsigned)arg4 outputBuffer:(AudioBufferList*)arg5 ;
-(int)receiveVoiceProcessedData:(unsigned*)arg1 timeStamp:(const AudioTimeStamp*)arg2 busNumber:(unsigned)arg3 numberFrames:(unsigned)arg4 outputBuffer:(AudioBufferList*)arg5 ;
-(void)saveToFile:(char*)arg1 bufferSize:(int)arg2 ;
-(void)redial;
-(id)initWithDevice:(id)arg1 delegate:(id)arg2 ;
-(void)timeout:(id)arg1 ;
-(void)setHandsFreeState:(int)arg1 ;
-(void)setDriverConnect:(unsigned)arg1 ;
-(unsigned)driverConnect;
-(void)sendOutputVolume;
-(void)handleDeviceDisconnectedNotification:(id)arg1 ;
@end
