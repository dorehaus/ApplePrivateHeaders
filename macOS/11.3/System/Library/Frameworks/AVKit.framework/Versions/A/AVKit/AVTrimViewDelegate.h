/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVTrimViewDelegate <NSObject>
@optional
-(void)trimView:(id)arg1 willStartTracking:(unsigned long long)arg2;
-(void)trimView:(id)arg1 didStopTracking:(unsigned long long)arg2;
-(void)trimView:(id)arg1 showTimeIndicatorPopoverWithValue:(double)arg2;
-(void)trimView:(id)arg1 didChangeTimeIndicatorPopoverValue:(double)arg2;
-(void)trimViewHideTimeIndicatorPopover:(id)arg1;
-(void)trimView:(id)arg1 didZoomBy:(double)arg2;
-(char)trimViewCanStartTracking:(id)arg1;
-(float)trimView:(id)arg1 minimumNudgeAmountInDirection:(long long)arg2 forTrimPart:(unsigned long long)arg3;

@end

