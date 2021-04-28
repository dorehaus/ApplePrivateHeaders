/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/Versions/A/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AXMVisionEngineNodeConnectionDelegate <NSObject>
@required
-(void)triggerWithSource:(id)arg1 context:(id)arg2;
-(char)engineWillAcceptTiggerWithSource:(id)arg1;
-(char)diagnosticsEnabled:(id)arg1;
-(void)captureSessionNodeDidBeginProcessingFrames:(id)arg1;
-(void)captureSessionNodeDidEndProcessingFrames:(id)arg1;
-(void)captureSessionNodeWillProcessFrame:(id)arg1;
-(void)captureSessionNodeDidDropFrame:(id)arg1;

@end

