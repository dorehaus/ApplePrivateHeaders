/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/Versions/A/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AudioToolbox/AudioToolbox-Structs.h>
@class AudioSessionPropertyManager, AVAudioSession;

@interface AudioSessionClientImpl : NSObject {

	AudioSessionPropertyManager* mAVAudioSessionPropertyManager;
	AudioSessionPropertyListeners* propertyListeners;
	char _isInitialized;
	unsigned _interruptionType;
	CFRunLoopRef _clientRunLoop;
	CFStringRef _clientRunLoopMode;
	/*function pointer*/void* _clientInterruptionListenerProc;
	void* _clientUserData;

}

@property (assign) CFRunLoopRef clientRunLoop;                                            //@synthesize clientRunLoop=_clientRunLoop - In the implementation block
@property (assign) CFStringRef clientRunLoopMode;                                         //@synthesize clientRunLoopMode=_clientRunLoopMode - In the implementation block
@property (assign) /*function pointer*/void* clientInterruptionListenerProc;              //@synthesize clientInterruptionListenerProc=_clientInterruptionListenerProc - In the implementation block
@property (assign) void* clientUserData;                                                  //@synthesize clientUserData=_clientUserData - In the implementation block
@property (assign) char isInitialized;                                                    //@synthesize isInitialized=_isInitialized - In the implementation block
@property (readonly) AVAudioSession * avas; 
@property (assign) unsigned interruptionType;                                             //@synthesize interruptionType=_interruptionType - In the implementation block
+(id)sharedInstance;
-(int)initializeAVAudioSession:(CFRunLoopRef)arg1 runLoopMode:(CFStringRef)arg2 listenerProc:(/*function pointer*/void*)arg3 userData:(void*)arg4 ;
-(int)resetAudioSessionClientConfiguration;
-(AVAudioSession *)avas;
-(int)AudioSessionSetActiveImpl:(unsigned char)arg1 flags:(unsigned)arg2 ;
-(int)AudioSessionGetPropertyImpl:(unsigned)arg1 size:(unsigned*)arg2 data:(void*)arg3 ;
-(int)AudioSessionSetPropertyImpl:(unsigned)arg1 size:(unsigned)arg2 data:(const void*)arg3 ;
-(int)AudioSessionGetPropertySizeImpl:(unsigned)arg1 size:(unsigned*)arg2 ;
-(int)AudioSessionAddPropertyListenerImpl:(unsigned)arg1 userProc:(/*function pointer*/void*)arg2 userData:(void*)arg3 ;
-(int)AudioSessionRemovePropertyListenerImpl:(unsigned)arg1 ;
-(int)AudioSessionRemovePropertyListenerWithUserDataImpl:(unsigned)arg1 userProc:(/*function pointer*/void*)arg2 userData:(void*)arg3 ;
-(void)addNSNotificationListenerFor:(id)arg1 selector:(SEL)arg2 ;
-(void)addAVAudioSessionKVOObservers:(unsigned)arg1 ;
-(void)removeAVAudioSessionKVOObservers:(unsigned)arg1 ;
-(void)handleRouteChange:(id)arg1 ;
-(void)handleServerDeath:(id)arg1 ;
-(void)handleServerReset:(id)arg1 ;
-(void)callPropertyListeners:(unsigned)arg1 data:(id)arg2 ;
-(unsigned)interruptionType;
-(void)setInterruptionType:(unsigned)arg1 ;
-(CFRunLoopRef)clientRunLoop;
-(void)setClientRunLoop:(CFRunLoopRef)arg1 ;
-(CFStringRef)clientRunLoopMode;
-(void)setClientRunLoopMode:(CFStringRef)arg1 ;
-(/*function pointer*/void*)clientInterruptionListenerProc;
-(void)setClientInterruptionListenerProc:(/*function pointer*/void*)arg1 ;
-(void*)clientUserData;
-(void)setClientUserData:(void*)arg1 ;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(char)isInitialized;
-(void)handleInterruption:(id)arg1 ;
-(void)setIsInitialized:(char)arg1 ;
@end
