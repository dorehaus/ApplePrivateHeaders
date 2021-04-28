/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>

@interface NSScrubberContainerView : NSView {

	id _innerView;
	char _center;

}

@property (assign) char centerSubviews;              //@synthesize center=_center - In the implementation block
@property (retain) id innerView;                     //@synthesize innerView=_innerView - In the implementation block
+(id)keyPathsForValuesInvalidatingLayout;
-(void)dealloc;
-(void)layout;
-(char)wantsUpdateLayer;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setInnerView:(id)arg1 ;
-(id)innerView;
-(char)centerSubviews;
-(void)setCenterSubviews:(char)arg1 ;
@end
