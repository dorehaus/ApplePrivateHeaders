/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppleScriptKit.framework/Versions/A/AppleScriptKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleScriptKit/ASKApplicationEventHandler.h>

@class NSTimer;

@interface ASKApplicationIdleEventHandler : ASKApplicationEventHandler {

	NSTimer* _idleTimer;
	char _applicationFinishedLaunching;

}
-(void)finalize;
-(void)dealloc;
-(id)init;
-(void)disable;
-(void)enable;
-(id)idleTimer;
-(void)setIdleTimer:(id)arg1 ;
-(void)idleUsingTimer:(id)arg1 ;
-(void)didFinishLaunching:(id)arg1 ;
-(void)willTerminate:(id)arg1 ;
@end

