/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <libobjc.A.dylib/NSDraggingInfo.h>
#import <libobjc.A.dylib/NSDraggingInfoPrivate.h>
#import <libobjc.A.dylib/NSDraggingInfo_Private.h>

@class NSWindow, NSImage, NSPasteboard, NSString, NSMutableSet;

@interface NSDragDestination : NSObject <NSDraggingInfo, NSDraggingInfoPrivate, NSDraggingInfo_Private> {

	NSWindow* _window;
	void* _windowReference;
	unsigned _dragID;
	OpaqueCoreDragHandlerRef trackingHandlerRef;
	OpaqueCoreDragHandlerRef receiveHandlerRef;
	NSString* _pasteboardName;
	char* _updateDraggingItemsTimerValid;
	struct {
		unsigned finalSlide : 1;
		unsigned animatesToDst : 1;
		unsigned needUpdateTimer : 1;
		unsigned springLoadedEnabled : 1;
		unsigned springLoadedArmed : 1;
		unsigned springLoadedHover : 1;
		unsigned springLoadedActivated : 1;
		unsigned springLoadedActivatedNotificationSent : 1;
		unsigned isSpringLoadingFlashing : 1;
		unsigned springLoadingFlashOn : 1;
		unsigned _reserved : 22;
	}  _flags;
	SCD_Struct_NS48 _respondsToSelector;
	unsigned long long _lastDragDestinationOperation;
	CGPoint _finalSlideLocation;
	id _target;
	CFRunLoopTimerRef _updateTimer;
	OpaqueCoreDrag* _drag;
	NSMutableSet* _dragCompletionTargets;
	CFRunLoopRef _runLoop;
	double _lastDragTimestamp;
	CGPoint _lastDragLocation;
	unsigned long long _lastSpringLoadingOptions;
	long long _springLoadingHighlight;
	long long _deviceID;

}

@property (setter=_setNeedUpdateTimer:) char _needUpdateTimer; 
@property (setter=_setLastDragTimestamp:) double _lastDragTimestamp;              //@synthesize lastDragTimestamp=_lastDragTimestamp - In the implementation block
@property (setter=_setLastDragLocation:) CGPoint _lastDragLocation;               //@synthesize lastDragLocation=_lastDragLocation - In the implementation block
@property (setter=_setDragID:) unsigned _dragID;                                  //@synthesize dragID=_dragID - In the implementation block
@property (readonly) NSWindow * draggingDestinationWindow; 
@property (readonly) unsigned long long draggingSourceOperationMask; 
@property (readonly) CGPoint draggingLocation; 
@property (readonly) CGPoint draggedImageLocation; 
@property (readonly) NSImage * draggedImage; 
@property (readonly) NSPasteboard * draggingPasteboard; 
@property (readonly) id draggingSource; 
@property (readonly) long long draggingSequenceNumber; 
@property (assign) long long draggingFormation; 
@property (assign) char animatesToDestination; 
@property (assign) long long numberOfValidItemsForDrop; 
@property (readonly) long long springLoadingHighlight; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(id)_target;
-(id)draggingSource;
-(CGPoint)draggingLocation;
-(unsigned long long)draggingSourceOperationMask;
-(id)namesOfPromisedFilesDroppedAtDestination:(id)arg1 ;
-(void)_setOnDemandSpringLoadingEnabled:(char)arg1 ;
-(char)_isOnDemandSpringLoadingArmed;
-(char)_isOnDemandSpringLoadingActivated;
-(long long)springLoadingHighlight;
-(long long)_draggingStage;
-(NSPasteboard *)draggingPasteboard;
-(void)slideDraggedImageTo:(CGPoint)arg1 ;
-(void)_setDragCompletionTargets:(id)arg1 ;
-(void)_stopDraggingUpdates;
-(void)_setTarget:(id)arg1 ;
-(double)_draggingForce;
-(void)_flashSpringLoading;
-(void)_springLoadingHighlightChanged;
-(void)_enableSpringLoading:(char)arg1 options:(unsigned long long)arg2 ;
-(long long)draggingFormation;
-(unsigned long long)_lastDragDestinationOperation;
-(void)setDraggingFormation:(long long)arg1 ;
-(void)_stopSpringLoadingFlash;
-(void)_springLoadingActivated:(char)arg1 ;
-(char)_isSpringLoadingEnabled;
-(char)_isOnDemandSpringLoadingHoverArmed;
-(void)_startSpringLoadingFlash;
-(void)_setNeedUpdateTimer:(char)arg1 ;
-(void)_setLastDragDestinationOperation:(unsigned long long)arg1 ;
-(void)_updateForSpringLoadingOptions:(unsigned long long)arg1 ;
-(void)resetSpringLoading;
-(void)_invalidateUpdateDraggingItemTimer;
-(void)_updateRespondsToSelectorFlags;
-(void)_startDraggingUpdates;
-(void)_updateDraggingItemsForDrag;
-(NSWindow *)draggingDestinationWindow;
-(void)enumerateDraggingItemsWithOptions:(unsigned long long)arg1 forView:(id)arg2 classes:(id)arg3 searchOptions:(id)arg4 usingBlock:(/*^block*/id)arg5 ;
-(CGPoint)draggedImageLocation;
-(NSImage *)draggedImage;
-(long long)draggingSequenceNumber;
-(char)animatesToDestination;
-(void)setAnimatesToDestination:(char)arg1 ;
-(long long)numberOfValidItemsForDrop;
-(void)setNumberOfValidItemsForDrop:(long long)arg1 ;
-(id)_initWithWindow:(id)arg1 ;
-(void)_setTrackingHandlerRef:(OpaqueCoreDragHandlerRef)arg1 ;
-(void)_setReceiveHandlerRef:(OpaqueCoreDragHandlerRef)arg1 ;
-(OpaqueCoreDragHandlerRef)_trackingHandlerRef;
-(OpaqueCoreDragHandlerRef)_receiveHandlerRef;
-(void)_setDragRef:(OpaqueCoreDrag*)arg1 ;
-(char)_needUpdateTimer;
-(double)_draggingFargo;
-(void)_setFinalSlideLocation:(CGPoint)arg1 ;
-(CGPoint)_finalSlideLocation;
-(unsigned long long)_lastSpringLoadingOptions;
-(void)_draggingEntered;
-(void)_draggingUpdate;
-(void)_draggingExited;
-(id)_dragCompletionTargets;
-(void)_unsetFinalSlide;
-(void)_startDraggingUpdatesIfNeeded;
-(void)_doAutoscroll:(id)arg1 ;
-(void)enumerateDraggingItemsForClass:(Class)arg1 view:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)_resetUpdateDraggingItemTimer;
-(char)_isRelatedToWindow:(id)arg1 ;
-(char)_isDragDeep;
-(void)_setDragDeepEnabled:(char)arg1 ;
-(void)_setOnDemandSpringLoadingActivated:(char)arg1 ;
-(void)_setOnDemandSpringLoadingArmed:(char)arg1 ;
-(void)_setOnDemandSpringLoadingHoverArmed:(char)arg1 ;
-(void)_resetOnDemandSpringLoading;
-(long long)_deviceID;
-(unsigned)_dragID;
-(void)_setDragID:(unsigned)arg1 ;
-(double)_lastDragTimestamp;
-(void)_setLastDragTimestamp:(double)arg1 ;
-(CGPoint)_lastDragLocation;
-(void)_setLastDragLocation:(CGPoint)arg1 ;
@end

