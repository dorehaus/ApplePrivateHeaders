/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/Versions/A/AppleMediaServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServicesUI/AMSUICommonView.h>

@class NSView;

@interface AMSUIWebSnapshotView : AMSUICommonView {

	NSView* _snapshot;

}

@property (retain) NSView * snapshot;              //@synthesize snapshot=_snapshot - In the implementation block
+(void)_screenCapFromView:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)_imageViewForImage:(id)arg1 ;
-(NSView *)snapshot;
-(void)setSnapshot:(NSView *)arg1 ;
-(void)_updateSnapshot:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithView:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

