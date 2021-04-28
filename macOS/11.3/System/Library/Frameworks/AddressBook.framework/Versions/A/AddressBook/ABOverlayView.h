/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <AppKit/NSView.h>

@class NSView;

@interface ABOverlayView : NSView {

	NSView* _overlaidView;

}

@property (retain) NSView * overlaidView;              //@synthesize overlaidView=_overlaidView - In the implementation block
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setOverlaidView:(NSView *)arg1 ;
-(NSView *)overlaidView;
-(id)constraintsAttachingOverlayToOverlaidView;
-(id)effectiveOverlaidView;
-(char)isOverlayDrawingNeeded;
@end

