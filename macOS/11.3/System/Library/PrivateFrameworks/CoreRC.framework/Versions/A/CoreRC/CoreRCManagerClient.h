/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/Versions/A/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRC/CoreRCManager.h>
#import <CoreRC/CoreRCXPCServiceCEC.h>
#import <CoreRC/CoreRCXPCClientCEC.h>
#import <CoreRC/CoreRCXPCServicePrivate.h>
#import <CoreRC/CoreRCXPCServiceCECPrivate.h>
#import <CoreRC/CoreRCXPCServiceIR.h>
#import <CoreRC/CoreRCXPCClientIR.h>
#import <CoreRC/CoreRCXPCService.h>
#import <CoreRC/CoreRCXPCClient.h>

@class NSXPCConnection, NSString;

@interface CoreRCManagerClient : CoreRCManager <CoreRCXPCServiceCEC, CoreRCXPCClientCEC, CoreRCXPCServicePrivate, CoreRCXPCServiceCECPrivate, CoreRCXPCServiceIR, CoreRCXPCClientIR, CoreRCXPCService, CoreRCXPCClient> {

	NSXPCConnection* _connection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(void)setDelegate:(id)arg1 ;
-(id)connection;
-(void)connectionInterrupted;
-(void)addDeviceOnBusAsync:(id)arg1 withType:(unsigned long long)arg2 matching:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)addDeviceOnBusAsync:(id)arg1 withType:(unsigned long long)arg2 matching:(id)arg3 withSessionOwningDevice:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)deleteDeviceAsync:(id)arg1 fromBus:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)setPairStateAsync:(char)arg1 forAppleRemote:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)performActiveSourceAsync:(id)arg1 withMenus:(char)arg2 reply:(/*^block*/id)arg3 ;
-(void)performDeckControlSetDeckStatusAsync:(unsigned long long)arg1 forDevice:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)performDeckControlCommandAsync:(id)arg1 controlMode:(unsigned long long)arg2 targetDevice:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)performDeckControlPlayAsync:(id)arg1 playMode:(unsigned long long)arg2 targetDevice:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)performDeckControlRefreshStatusAsync:(id)arg1 targetDevice:(id)arg2 requestType:(unsigned long long)arg3 reply:(/*^block*/id)arg4 ;
-(void)performInactiveSourceAsync:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)performRefreshDevicesAsync:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)performRefreshProperties:(id)arg1 ofDevice:(id)arg2 withDeviceAsync:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)performRequestActiveSourceAsync:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)performSetSystemAudioControlEnabled:(char)arg1 withDeviceAsync:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)performSystemAudioModeRequestAsync:(id)arg1 withDesiredState:(unsigned long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)performSetAudioReturnChannelControlEnabled:(char)arg1 withDeviceAsync:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)performRequestAudioReturnChannelStatusChangeTo:(unsigned long long)arg1 withDeviceAsync:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)performSetAudioVolumeStatus:(unsigned long long)arg1 withDeviceAsync:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)performSetAudioMuteStatus:(char)arg1 withDeviceAsync:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)performSetSupportedAudioFormats:(id)arg1 withDeviceAsync:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)performRequestSystemAudioModeStatusChangeTo:(unsigned long long)arg1 withDeviceAsync:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)performSetPowerStatus:(unsigned long long)arg1 withDeviceAsync:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)performStandbyAsync:(id)arg1 targetDevice:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)queryLocalInstanceAsync:(id)arg1 bus:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)setOsdNameAsync:(id)arg1 forBus:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)setTvLanguageCodeAsync:(id)arg1 forBus:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)cecBus:(id)arg1 activeSourceHasChangedTo:(id)arg2 fromDevice:(id)arg3 ;
-(void)cecDeviceShouldAssertActiveSource:(id)arg1 ;
-(void)cecDevice:(id)arg1 activeSourceStatusHasChanged:(char)arg2 ;
-(void)cecDevice:(id)arg1 deckControlPlayHasBeenReceived:(unsigned long long)arg2 fromDevice:(id)arg3 ;
-(void)cecDevice:(id)arg1 deckControlCommandHasBeenReceived:(unsigned long long)arg2 fromDevice:(id)arg3 ;
-(void)cecDevice:(id)arg1 deckControlStatusHasBeenUpdated:(unsigned long long)arg2 fromDevice:(id)arg3 ;
-(void)cecDevice:(id)arg1 featureAbort:(id)arg2 ;
-(void)cecDevice:(id)arg1 standbyRequestHasBeenReceived:(id)arg2 ;
-(void)cecDevice:(id)arg1 receivedRequestAudioReturnChannelStatusChangeTo:(unsigned long long)arg2 fromDevice:(id)arg3 ;
-(void)cecDevice:(id)arg1 requestAudioReturnChannelStatusChangeTo:(unsigned long long)arg2 didFinishWithResult:(char)arg3 error:(id)arg4 ;
-(void)cecDevice:(id)arg1 receivedRequestSystemAudioModeStatusChangeTo:(unsigned long long)arg2 fromDevice:(id)arg3 ;
-(void)cecDevice:(id)arg1 requestSystemAudioModeStatusChangeTo:(unsigned long long)arg2 didFinishWithResult:(char)arg3 error:(id)arg4 ;
-(void)bus:(id)arg1 deviceHasBeenAdded:(id)arg2 ;
-(void)bus:(id)arg1 deviceHasBeenRemoved:(id)arg2 ;
-(void)bus:(id)arg1 deviceHasBeenUpdated:(id)arg2 ;
-(void)device:(id)arg1 receivedHIDEvent:(id)arg2 fromDevice:(id)arg3 ;
-(char)setProperty:(id)arg1 forKey:(id)arg2 ofBus:(id)arg3 error:(id*)arg4 ;
-(id)propertyForKey:(id)arg1 ofBus:(id)arg2 error:(id*)arg3 ;
-(char)setExtendedProperty:(id)arg1 forKey:(id)arg2 ofDevice:(id)arg3 error:(id*)arg4 ;
-(id)extendedPropertyForKey:(id)arg1 ofDevice:(id)arg2 error:(id*)arg3 ;
-(void)queryLoggingAsync:(/*^block*/id)arg1 ;
-(void)setLoggingAsync:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)fakeCreateCECBusAsync:(unsigned long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)fakeRemoveCECBusAsync:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)fakeSetCECBusLinkStateAsync:(id)arg1 linkState:(char)arg2 physicalAddress:(unsigned long long)arg3 reply:(/*^block*/id)arg4 ;
-(void)fakeCreateRemoteCECDeviceAsync:(id)arg1 bus:(id)arg2 logicalAddress:(unsigned char)arg3 physicalAddress:(unsigned long long)arg4 reply:(/*^block*/id)arg5 ;
-(void)fakeSetCECDeviceLogicalAddressAsync:(id)arg1 logicalAddress:(unsigned char)arg2 reply:(/*^block*/id)arg3 ;
-(void)fakeRemoveCECDeviceAsync:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)learningSessionForDevice:(id)arg1 commandProgress:(id)arg2 ;
-(void)learningSessionForDevice:(id)arg1 status:(unsigned long long)arg2 ;
-(void)learningSessionForDevice:(id)arg1 duplicateCommand:(unsigned long long)arg2 target:(id)arg3 ;
-(void)learningSessionForDeviceCommandDone:(id)arg1 ;
-(void)setOSDNameAsync:(id)arg1 forDevice:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)startLearningSessionWithDeviceAsync:(id)arg1 forReason:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)updateMappingWithSessionOwningDeviceAsync:(id)arg1 forTargetDevice:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)sendCommandAsync:(id)arg1 fromDevice:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)clearAllStoredCommandsFromDeviceAsync:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setCommandAsync:(unsigned long long)arg1 target:(id)arg2 source:(id)arg3 forButtonCombination:(id)arg4 delay:(double)arg5 reply:(/*^block*/id)arg6 ;
-(void)changeButtonCombinationAsync:(id)arg1 delay:(double)arg2 enabled:(char)arg3 forDevice:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)startLearningCommandAsync:(unsigned long long)arg1 withDevice:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)endLearningWithDeviceAsync:(id)arg1 reply:(/*^block*/id)arg2 ;
-(char)sendHIDEvent:(id)arg1 fromDevice:(id)arg2 toDevice:(id)arg3 error:(id*)arg4 ;
-(char)sendCommand:(unsigned long long)arg1 fromDevice:(id)arg2 toDevice:(id)arg3 withDuration:(unsigned long long)arg4 error:(id*)arg5 ;
-(id)buses;
-(void)setPropertyAsync:(id)arg1 forKey:(id)arg2 ofBus:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)getPropertyAsyncForKey:(id)arg1 ofBus:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)setExtendedPropertyAsync:(id)arg1 forKey:(id)arg2 ofDevice:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)getExtendedPropertyAsyncForKey:(id)arg1 ofDevice:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)queryBusesAsync:(/*^block*/id)arg1 ;
-(void)synchBuses:(id)arg1 ;
-(void)mergeBus:(id)arg1 ;
-(void)sendHIDEventAsync:(id)arg1 fromDevice:(id)arg2 toDevice:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)sendCommandAsync:(unsigned long long)arg1 fromDevice:(id)arg2 toDevice:(id)arg3 withDuration:(unsigned long long)arg4 reply:(/*^block*/id)arg5 ;
-(void)setLogging:(id)arg1 ;
-(void)busHasBeenAdded:(id)arg1 ;
-(void)busHasBeenRemoved:(id)arg1 ;
-(void)busHasBeenUpdated:(id)arg1 ;
@end

