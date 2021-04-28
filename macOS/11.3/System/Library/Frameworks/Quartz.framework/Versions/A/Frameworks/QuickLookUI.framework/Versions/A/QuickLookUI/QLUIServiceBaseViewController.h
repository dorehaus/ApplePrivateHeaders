/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLookUI/QuickLookUI-Structs.h>
#import <ViewBridge/NSServiceViewController.h>
#import <libobjc.A.dylib/NSGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/QLPreviewDragDelegate.h>

@class NSPanGestureRecognizer, NSClickGestureRecognizer, QLPreviewDragController, NSString;

@interface QLUIServiceBaseViewController : NSServiceViewController <NSGestureRecognizerDelegate, QLPreviewDragDelegate> {

	char _dragging;
	int _previewMode;
	NSPanGestureRecognizer* _dragRecognizer;
	NSClickGestureRecognizer* _doubleClickRecognizer;
	QLPreviewDragController* _dragController;

}

@property (retain) NSPanGestureRecognizer * dragRecognizer;                                         //@synthesize dragRecognizer=_dragRecognizer - In the implementation block
@property (retain) NSClickGestureRecognizer * doubleClickRecognizer;                                //@synthesize doubleClickRecognizer=_doubleClickRecognizer - In the implementation block
@property (retain) QLPreviewDragController * dragController;                                        //@synthesize dragController=_dragController - In the implementation block
@property (getter=isDragging) char dragging;                                                        //@synthesize dragging=_dragging - In the implementation block
@property (assign,nonatomic) int previewMode;                                                       //@synthesize previewMode=_previewMode - In the implementation block
@property (readonly) id<QLUIServiceBaseHostViewControllerProtocol> hostViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned)declinedEventMask;
-(void)receivedDragGesture:(id)arg1 ;
-(void)receivedDoubleClickGesture:(id)arg1 ;
-(void)setDoubleClickRecognizer:(NSClickGestureRecognizer *)arg1 ;
-(id)draggingSourceView;
-(char)useLegacyDragging;
-(id)exportedInterface;
-(CGRect)sourceFrame;
-(void)loadView;
-(id)beginDraggingSessionWithItems:(id)arg1 event:(id)arg2 source:(id)arg3 ;
-(char)isDragging;
-(void)setDragging:(char)arg1 ;
-(id)remoteViewControllerInterface;
-(CGRect)borderFrame;
-(int)previewMode;
-(void)setPreviewMode:(int)arg1 ;
-(QLPreviewDragController *)dragController;
-(id<QLUIServiceBaseHostViewControllerProtocol>)hostViewController;
-(void)doubleClickOnPreviewContent;
-(void)updateFullScreenFromMagnification:(double)arg1 ;
-(NSPanGestureRecognizer *)dragRecognizer;
-(void)setDragRecognizer:(NSPanGestureRecognizer *)arg1 ;
-(void)setDragController:(QLPreviewDragController *)arg1 ;
-(NSClickGestureRecognizer *)doubleClickRecognizer;
-(void)getImageRepresentationWithFrame:(CGRect)arg1 completion:(/*^block*/id)arg2 ;
-(char)windowSupportsRemoteViews;
-(id)draggedURL;
-(id)pasteboardWriter;
@end

