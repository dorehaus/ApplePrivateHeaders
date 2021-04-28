/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSSoundEngine <NSObject>
@property (readonly) double duration; 
@property (assign) double currentTime; 
@required
-(char)resume;
-(char)pause;
-(void)stop;
-(double)duration;
-(char)play;
-(id)initWithDelegate:(id)arg1;
-(void)resetPosition;
-(double)currentTime;
-(void)setCurrentTime:(double)arg1;
-(void)deviceUIDDidChange;
-(void)channelMappingDidChange;
-(void)volumeDidChange;
-(void)shouldLoopDidChange;

@end
