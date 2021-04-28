/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <libobjc.A.dylib/TabDraggingInfo.h>

@protocol TabBarViewItem;
@class NSWindow, NSImage, NSString;

@interface MutableDraggingInfo : NSObject <TabDraggingInfo> {

	NSWindow* _draggingDestinationWindow;
	unsigned long long _draggingSourceOperationMask;
	NSImage* _draggedImage;
	id _draggingSource;
	id<TabBarViewItem> _draggingItem;
	CGPoint _draggingLocation;

}

@property (nonatomic,retain) NSWindow * draggingDestinationWindow;                        //@synthesize draggingDestinationWindow=_draggingDestinationWindow - In the implementation block
@property (assign,nonatomic) unsigned long long draggingSourceOperationMask;              //@synthesize draggingSourceOperationMask=_draggingSourceOperationMask - In the implementation block
@property (assign,nonatomic) CGPoint draggingLocation;                                    //@synthesize draggingLocation=_draggingLocation - In the implementation block
@property (nonatomic,retain) NSImage * draggedImage;                                      //@synthesize draggedImage=_draggedImage - In the implementation block
@property (nonatomic,retain) id draggingSource;                                           //@synthesize draggingSource=_draggingSource - In the implementation block
@property (nonatomic,retain) id<TabBarViewItem> draggingItem;                             //@synthesize draggingItem=_draggingItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)draggingSource;
-(CGPoint)draggingLocation;
-(unsigned long long)draggingSourceOperationMask;
-(NSWindow *)draggingDestinationWindow;
-(NSImage *)draggedImage;
-(void)setDraggingLocation:(CGPoint)arg1 ;
-(id<TabBarViewItem>)draggingItem;
-(void)setDraggingItem:(id<TabBarViewItem>)arg1 ;
-(void)setDraggingDestinationWindow:(NSWindow *)arg1 ;
-(void)setDraggingSourceOperationMask:(unsigned long long)arg1 ;
-(void)setDraggingSource:(id)arg1 ;
-(void)setDraggedImage:(NSImage *)arg1 ;
@end
