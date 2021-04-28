/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSDraggingSource;
#import <AppKit/AppKit-Structs.h>
@class NSPasteboard, NSImage, NSArray;

@interface NSDraggingSession : NSObject {

	void* _private;
	CGPoint _offset;
	id<NSDraggingSource> _source;
	id _alternateDragSource;
	id<NSDraggingSource> _filePromiseDragSource;
	NSPasteboard* _pboard;
	NSImage* _compositeImageCache;
	char _animatesOnCancelOrFail;
	NSArray* _filePromiseProviders;

}

@property (assign) char animatesToDraggingFormationOnBeginDrag; 
@property (assign) OpaqueCoreDrag* dragRef; 
@property (assign) id alternateDragSource;                                      //@synthesize alternateDragSource=_alternateDragSource - In the implementation block
@property (readonly) id<NSDraggingSource> source;                               //@synthesize source=_source - In the implementation block
@property (readonly) id<NSDraggingSource> filePromiseDragSource;                //@synthesize filePromiseDragSource=_filePromiseDragSource - In the implementation block
@property (retain) NSArray * filePromiseProviders;                              //@synthesize filePromiseProviders=_filePromiseProviders - In the implementation block
@property (assign) CGPoint draggingLocation; 
@property (assign) CGPoint draggingImageOffset;                                 //@synthesize offset=_offset - In the implementation block
@property (assign) long long draggingFormation; 
@property (assign) char animatesToStartingPositionsOnCancelOrFail; 
@property (assign) long long draggingLeaderIndex; 
@property (readonly) NSPasteboard * draggingPasteboard; 
@property (readonly) long long draggingSequenceNumber; 
-(void)dealloc;
-(id<NSDraggingSource>)source;
-(CGPoint)draggingLocation;
-(NSPasteboard *)draggingPasteboard;
-(CGPoint)draggingImageOffset;
-(id)_compositeImage;
-(long long)draggingFormation;
-(void)setDraggingFormation:(long long)arg1 ;
-(void)enumerateDraggingItemsWithOptions:(unsigned long long)arg1 forView:(id)arg2 classes:(id)arg3 searchOptions:(id)arg4 usingBlock:(/*^block*/id)arg5 ;
-(long long)draggingSequenceNumber;
-(void)enumerateDraggingItemsForClass:(Class)arg1 view:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)setDraggingLocation:(CGPoint)arg1 ;
-(OpaqueCoreDrag*)dragRef;
-(id<NSDraggingSource>)filePromiseDragSource;
-(void)setAlternateDragSource:(id)arg1 ;
-(id)alternateDragSource;
-(void)setFilePromiseProviders:(NSArray *)arg1 ;
-(id)_initWithPasteboard:(id)arg1 draggingItems:(id)arg2 clippingRect:(CGRect)arg3 source:(id)arg4 ;
-(id)_initWithPasteboard:(id)arg1 image:(id)arg2 offset:(CGPoint)arg3 source:(id)arg4 ;
-(void)setAnimatesToStartingPositionsOnCancelOrFail:(char)arg1 ;
-(void)setDraggingLeaderIndex:(long long)arg1 ;
-(NSArray *)filePromiseProviders;
-(id)_commonInitWithPasteboard:(id)arg1 source:(id)arg2 ;
-(char)animatesToStartingPositionsOnCancelOrFail;
-(CGPoint)locationForSlideBack;
-(void)setLocationForSlideBack:(CGPoint)arg1 ;
-(char)animatesToDraggingFormationOnBeginDrag;
-(void)setAnimatesToDraggingFormationOnBeginDrag:(char)arg1 ;
-(long long)draggingLeaderIndex;
-(CGPoint)setDraggingLocation;
-(void)setDragRef:(OpaqueCoreDrag*)arg1 ;
-(void)setDraggingImageOffset:(CGPoint)arg1 ;
@end

