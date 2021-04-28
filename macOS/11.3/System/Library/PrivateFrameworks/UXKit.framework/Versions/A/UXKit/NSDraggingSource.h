/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UXKit.framework/Versions/A/UXKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSDraggingSource <NSObject>
@optional
-(void)draggingSession:(id)arg1 willBeginAtPoint:(CGPoint)arg2;
-(void)draggingSession:(id)arg1 endedAtPoint:(CGPoint)arg2 operation:(unsigned long long)arg3;
-(void)draggingSession:(id)arg1 movedToPoint:(CGPoint)arg2;
-(char)ignoreModifierKeysForDraggingSession:(id)arg1;

@required
-(unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;

@end

