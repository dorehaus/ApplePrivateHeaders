/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/Versions/A/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CSIndexExtensionDelegate <NSObject>
@required
-(void)indexRequestsPerformJob:(id)arg1 forBundle:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)indexRequestsPerformJob:(id)arg1 perExtensionCompletionHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)indexRequestsPerformJob:(id)arg1 extensions:(id)arg2 perExtensionCompletionHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)indexRequestsPerformDataJob:(id)arg1 forBundle:(id)arg2 completionHandler:(/*^block*/id)arg3;

@end
