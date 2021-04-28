/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSColorSpaceSliders.h>

@class NSView;

@interface NSCMYKSliders : NSColorSpaceSliders {

	id cyanSlider;
	id yellowSlider;
	id magentaSlider;
	id blackSlider;
	id cyanText;
	id yellowText;
	id magentaText;
	id blackText;
	NSView* _cmykView;

}

@property (retain) NSView * cmykView;              //@synthesize cmykView=_cmykView - In the implementation block
+(id)genericColorSpace;
-(void)dealloc;
-(char)worksWhenModal;
-(void)viewSizeChanged:(id)arg1 ;
-(id)provideNewSubview:(id)arg1 ;
-(id)regularColorIfPossible:(id)arg1 ;
-(void)setMatchedColor:(id)arg1 ;
-(void)_adjustControls:(id)arg1 andSetColor:(char)arg2 ;
-(void)adjustControls:(id)arg1 ;
-(id)fieldEditableControl;
-(CGSize)requiredMinSize;
-(void)setCmykView:(NSView *)arg1 ;
-(NSView *)cmykView;
@end
