/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/Versions/A/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosPlayer/ISScrollViewVitalityController.h>

@class ISNSVisibilityOffsetHelper, NSScrollView;

@interface ISNSScrollViewVitalityController : ISScrollViewVitalityController {

	char _isListeningToScrollViewNotifications;
	ISNSVisibilityOffsetHelper* _visibilityOffsetHelper;
	NSScrollView* __scrollView;

}

@property (assign,setter=_setScrollView:,nonatomic,__weak) NSScrollView * _scrollView;              //@synthesize _scrollView=__scrollView - In the implementation block
-(void)dealloc;
-(NSScrollView *)_scrollView;
-(id)visibilityOffsetHelper;
-(void)_setScrollView:(id)arg1 ;
-(void)_startListeningToScrollViewNotifications;
-(void)_stopListeningToScrollViewNotifications;
-(void)_handleWillStartLiveScrollNotification:(id)arg1 ;
-(void)_handleDidLiveScrollNotification:(id)arg1 ;
-(void)_handleDidEndLiveScrollNotification:(id)arg1 ;
@end

