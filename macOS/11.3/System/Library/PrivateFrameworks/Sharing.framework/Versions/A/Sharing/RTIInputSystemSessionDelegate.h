/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Versions/A/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RTIInputSystemSessionDelegate <NSObject>
@optional
-(void)inputSessionDidBegin:(id)arg1;
-(void)inputSessionDidEnd:(id)arg1;
-(void)inputSession:(id)arg1 documentTraitsDidChange:(id)arg2;
-(void)inputSession:(id)arg1 documentStateDidChange:(id)arg2;
-(void)inputSessionDidDie:(id)arg1;
-(void)inputSession:(id)arg1 didChangePause:(char)arg2 withReason:(id)arg3;

@end

