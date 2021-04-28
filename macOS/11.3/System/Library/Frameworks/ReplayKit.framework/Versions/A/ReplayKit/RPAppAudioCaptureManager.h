/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/Versions/A/ReplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <ReplayKit/ReplayKit-Structs.h>
@class NSObject, RPAppAudioHAL;

@interface RPAppAudioCaptureManager : NSObject {

	NSObject*<OS_dispatch_queue> _audioDispatchQueue;
	/*^block*/id _appAudioOutputHandler;
	RPAppAudioHAL* _appAudioHAL;

}
+(AudioStreamBasicDescription)audioStreamBasicDescriptionWithStereo:(char)arg1 ;
-(id)init;
-(void)stop;
-(void)startWithProcessID:(int)arg1 outputHandler:(/*^block*/id)arg2 didStartHandler:(/*^block*/id)arg3 ;
-(void)resumeWithProcessID:(int)arg1 ;
@end

