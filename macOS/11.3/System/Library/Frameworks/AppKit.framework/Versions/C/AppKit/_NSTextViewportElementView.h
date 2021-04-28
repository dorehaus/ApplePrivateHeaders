/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>

@protocol NSTextViewportElement;
@class NSTextView;

@interface _NSTextViewportElementView : NSView {

	NSTextView* _textView;
	id<NSTextViewportElement> _element;

}

@property (readonly) id<NSTextViewportElement> element;              //@synthesize element=_element - In the implementation block
-(void)dealloc;
-(id<NSTextViewportElement>)element;
-(void)layout;
-(char)isFlipped;
-(void)drawRect:(CGRect)arg1 ;
-(void)viewDidMoveToSuperview;
-(char)shouldBeArchived;
-(id)initWithElement:(id)arg1 ;
-(void)updateWithTextView:(id)arg1 display:(char)arg2 ;
-(CGRect)renderingSurfaceBounds;
@end

