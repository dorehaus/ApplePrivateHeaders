/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/_MKUIViewControllerRootView.h>

@class NSLayoutConstraint, NSView;

@interface _MKStackingContentView : _MKUIViewControllerRootView {

	NSLayoutConstraint* _topConstraint;
	NSLayoutConstraint* _middleConstraint;
	NSLayoutConstraint* _bottomConstraint;
	NSView* _topView;
	NSView* _bottomView;

}

@property (nonatomic,retain) NSView * topView;                                     //@synthesize topView=_topView - In the implementation block
@property (nonatomic,retain) NSView * bottomView;                                  //@synthesize bottomView=_bottomView - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * bottomConstraint; 
-(void)updateConstraints;
-(NSLayoutConstraint *)bottomConstraint;
-(id)initWithViewController:(id)arg1 ;
-(void)setTopView:(NSView *)arg1 ;
-(void)setBottomView:(NSView *)arg1 ;
-(id)vibrancyGroupName;
-(NSView *)topView;
-(NSView *)bottomView;
@end

