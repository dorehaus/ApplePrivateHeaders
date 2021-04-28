/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/InstantMessage.framework/Versions/A/InstantMessage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IMAuxVideoProvider.h>

@protocol IMAuxVideoProvider
@required
-(oneway void)provideFrameAtFramerate:(double)arg1;
-(oneway void)setBufferPoolDescription:(id)arg1 audioDeviceUID:(id)arg2 channels:(id)arg3;
-(oneway void)disconnectAndActivate:(char)arg1;
-(oneway void)performActionForControlWithDictionaryRepresentation:(id)arg1;

@end


@class NSString, NSThread, IMSharedPixelBufferPool;

@interface IMAuxVideoProvider : NSObject <IMAuxVideoProvider> {

	unsigned long long _clientState;
	NSString* _providerID;
	char _didConnect;
	char _willUpdateSettings;
	NSThread* _callbackThread;
	IMSharedPixelBufferPool* _sharedBufferPool;
	double _frameRate;
	unsigned long long _shouldExit;
	unsigned long long _isAboutToExitThread;

}
-(id)init;
-(unsigned long long)clientState;
-(oneway void)provideFrameAtFramerate:(double)arg1 ;
-(oneway void)setBufferPoolDescription:(id)arg1 audioDeviceUID:(id)arg2 channels:(id)arg3 ;
-(oneway void)disconnectAndActivate:(char)arg1 ;
-(oneway void)performActionForControlWithDictionaryRepresentation:(id)arg1 ;
-(id)auxVideoReceiverTarget;
-(void)_setClientState:(unsigned long long)arg1 ;
-(void)deactivateVideoProvider;
-(void)_connectToReceiver;
-(void)updateVideoProvider;
-(void)startClient;
-(void)stopClient;
-(void)makeInactive;
-(void)updateControlBarFromDictionaryRepresentation:(id)arg1 ;
-(void)deliverFrameWithBufferID:(long long)arg1 attachments:(id)arg2 ;
@end

