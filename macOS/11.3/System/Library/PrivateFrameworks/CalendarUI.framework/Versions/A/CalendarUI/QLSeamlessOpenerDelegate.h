/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol QLSeamlessOpenerDelegate <NSObject>
@optional
-(CGRect*)seamlessOpener:(id)arg1 sourceFrameOnScreenForPreviewItem:(id)arg2;
-(id)seamlessOpener:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(CGRect*)arg3;
-(id)seamlessOpener:(id)arg1 sourcePreviewViewForPreviewItem:(id)arg2;
-(id)seamlessOpener:(id)arg1 sourceBubbleForPreviewItem:(id)arg2;
-(id)seamlessOpener:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(CGRect*)arg3 windowLevel:(long long*)arg4;
-(int)seamlessOpener:(id)arg1 supportForPreviewItem:(id)arg2;
-(id)seamlessOpenerTransientWindow:(id)arg1 level:(long long*)arg2;
-(void)seamlessOpener:(id)arg1 openedItem:(id)arg2 seamlessly:(char)arg3;
-(void)seamlessOpener:(id)arg1 failedToOpenItems:(id)arg2 withError:(id)arg3;
-(id)seamlessOpener:(id)arg1 transientImageAtFrame:(CGRect*)arg2 forItem:(id)arg3;
-(id)seamlessOpener:(id)arg1 transientWindowForItem:(id)arg2;

@end

