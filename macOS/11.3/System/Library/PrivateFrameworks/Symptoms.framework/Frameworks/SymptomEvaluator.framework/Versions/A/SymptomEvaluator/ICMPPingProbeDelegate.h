/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/Versions/A/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ICMPPingProbeDelegate <NSObject>
@optional
-(void)icmpPingProbe:(id)arg1 completedIterations:(unsigned long long)arg2 successfulCount:(unsigned long long)arg3 withError:(id)arg4;
-(void)icmpPingProbe:(id)arg1 echoRequestSent:(id)arg2 success:(char)arg3;
-(void)icmpPingProbe:(id)arg1 echoResponseReceived:(id)arg2 success:(char)arg3;

@end
