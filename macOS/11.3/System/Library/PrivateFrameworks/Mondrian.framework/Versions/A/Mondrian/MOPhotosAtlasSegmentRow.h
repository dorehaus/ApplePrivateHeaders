/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Mondrian.framework/Versions/A/Mondrian
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Mondrian/Mondrian-Structs.h>
@class MOPhotosAtlasSegment;

@interface MOPhotosAtlasSegmentRow : NSObject {

	MOPhotosAtlasSegment* _segment;
	NSRange _range;

}

@property (nonatomic,retain,readonly) MOPhotosAtlasSegment * segment;              //@synthesize segment=_segment - In the implementation block
@property (nonatomic,readonly) NSRange range;                                      //@synthesize range=_range - In the implementation block
-(MOPhotosAtlasSegment *)segment;
-(char)isComplete;
-(NSRange)range;
-(id)imageRef;
-(id)mediaItems;
-(CGRect)imageContentsRect;
-(id)invalidIndexes;
-(id)initWithSegment:(id)arg1 range:(NSRange)arg2 ;
@end

