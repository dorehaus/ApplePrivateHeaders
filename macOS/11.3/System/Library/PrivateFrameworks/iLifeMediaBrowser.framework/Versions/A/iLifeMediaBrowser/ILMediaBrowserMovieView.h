/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iLifeMediaBrowser.framework/Versions/A/iLifeMediaBrowser
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iLifeMediaBrowser/iLifeMediaBrowser-Structs.h>
#import <AVKit/AVPlayerView.h>

@class NSWindow;

@interface ILMediaBrowserMovieView : AVPlayerView {

	id _representedGroup;
	id _representedObject;
	char _showingThumbnail;
	id _enterKeyTarget;
	SEL _enterKeyAction;
	id _viewDelegate;
	NSWindow* _flagWindow;

}
-(void)dealloc;
-(id)init;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(char)acceptsFirstResponder;
-(void)mouseDown:(id)arg1 ;
-(char)performKeyEquivalent:(id)arg1 ;
-(void)mouseMoved:(id)arg1 ;
-(void)keyDown:(id)arg1 ;
-(char)acceptsFirstMouse:(id)arg1 ;
-(void)draggedImage:(id)arg1 beganAt:(CGPoint)arg2 ;
-(void)draggedImage:(id)arg1 endedAt:(CGPoint)arg2 operation:(unsigned long long)arg3 ;
-(id)menuForEvent:(id)arg1 ;
-(unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2 ;
-(void)draggedImage:(id)arg1 movedTo:(CGPoint)arg2 ;
-(void)_dragSelectionWithEvent:(id)arg1 ;
-(void)setEnterKeyTarget:(id)arg1 ;
-(void)setEnterKeyAction:(SEL)arg1 ;
@end
