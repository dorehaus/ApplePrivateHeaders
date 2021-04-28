/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppleScriptKit.framework/Versions/A/AppleScriptKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleScriptKit/AppleScriptKit-Structs.h>
#import <libobjc.A.dylib/NSDraggingInfo.h>

@class NSWindow, NSImage, NSPasteboard, NSString;

@interface ASKDragInfo : NSObject <NSDraggingInfo> {

	id _sender;

}

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
+(id)dragInfoWithSender:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)objectSpecifier;
-(id)draggingSource;
-(CGPoint)draggingLocation;
-(unsigned long long)draggingSourceOperationMask;
-(id)namesOfPromisedFilesDroppedAtDestination:(id)arg1 ;
-(NSPasteboard *)draggingPasteboard;
-(void)slideDraggedImageTo:(CGPoint)arg1 ;
-(NSWindow *)draggingDestinationWindow;
-(CGPoint)draggedImageLocation;
-(NSImage *)draggedImage;
-(long long)draggingSequenceNumber;
-(id)sender;
-(void)setSender:(id)arg1 ;
-(id)initWithSender:(id)arg1 ;
@end
