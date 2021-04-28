/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NSDisplayLink1 : NSObject

@property (getter=isValid,readonly) char valid; 
@property (getter=isPaused) char paused; 
@property (readonly) double timestamp; 
@property (readonly) double duration; 
+(double)currentTimestamp;
-(void)invalidate;
-(char)isValid;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(double)timestamp;
-(double)duration;
-(char)isPaused;
-(void)addToRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)setPaused:(char)arg1 ;
@end

