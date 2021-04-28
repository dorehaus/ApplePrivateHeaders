/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Virtualization.framework/Versions/A/Virtualization
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Virtualization/Virtualization-Structs.h>
#import <AppKit/NSView.h>
#import <libobjc.A.dylib/CALayerDelegate.h>
#import <libobjc.A.dylib/_VZFramebufferObserver.h>

@class _VZFramebuffer, NSCursor, NSImageView, NSString;

@interface _VZFramebufferView : NSView <CALayerDelegate, _VZFramebufferObserver> {

	_VZFramebuffer* _framebuffer;
	CGSize _intrinsicContentSize;
	id _occlusionObserver;
	optional<CGPoint> _currentCursorPosition;
	NSCursor* _currentCursor;
	NSImageView* _cursorView;

}

@property (retain) _VZFramebuffer * framebuffer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCoder:(id)arg1 ;
-(void)layout;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setWantsLayer:(char)arg1 ;
-(void)viewDidMoveToWindow;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(_VZFramebuffer *)framebuffer;
-(void)framebuffer:(id)arg1 didUpdateFrame:(shared_ptr<const VzCore::Hardware::FrameUpdate>*)arg2 ;
-(void)framebuffer:(id)arg1 didUpdateCursor:(shared_ptr<const VzCore::Hardware::CursorUpdate>*)arg2 ;
-(void)setFramebuffer:(_VZFramebuffer *)arg1 ;
@end

