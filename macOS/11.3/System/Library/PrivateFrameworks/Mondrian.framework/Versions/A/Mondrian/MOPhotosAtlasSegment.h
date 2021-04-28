/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Mondrian.framework/Versions/A/Mondrian
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Mondrian/Mondrian-Structs.h>
@class NSString, NSColorSpace, NSArray, NSMutableIndexSet, NSRecursiveLock, NSMutableDictionary;

@interface MOPhotosAtlasSegment : NSObject {

	NSString* _uniqueIdentifier;
	NSColorSpace* _colorSpace;
	double _thumbnailResolution;
	unsigned long long _numberOfColumns;
	unsigned long long _numberOfRows;
	CGSize _size;
	NSArray* _mediaItems;
	CGColorRef _emptyColorRef;
	CGColorRef _backgroundColorRef;
	unsigned long long _availableIndexesCount;
	NSMutableIndexSet* _invalidIndexes;
	id _imageRef;
	NSRecursiveLock* _imageLock;
	unsigned long long _version;
	NSMutableDictionary* _pendingThumbnails;

}
+(id)uniqueIdentifierWithMediaItems:(id)arg1 ;
-(CGSize)size;
-(void)dealloc;
-(char)isEmpty;
-(id)uniqueIdentifier;
-(unsigned long long)version;
-(char)isComplete;
-(CGColorRef)backgroundColor;
-(unsigned long long)numberOfColumns;
-(unsigned long long)numberOfRows;
-(id)imageRef;
-(id)mediaItems;
-(void)setImageRef:(id)arg1 ;
-(id)initWithThumbnailResolution:(double)arg1 numberOfColumns:(unsigned long long)arg2 numberOfRows:(unsigned long long)arg3 mediaItems:(id)arg4 emptyColor:(CGColorRef)arg5 backgroundColor:(CGColorRef)arg6 colorSpace:(id)arg7 ;
-(unsigned long long)availableIndexesCount;
-(id)invalidIndexes;
-(double)thumbnailResolution;
-(id)mediaItemVersions:(char)arg1 ;
-(id)invalidIndexesComparingToMediaItemVersions:(id)arg1 includingInvalidation:(char)arg2 ;
-(void)invalidateMediaItems:(id)arg1 ;
-(void)invalidateIndexes:(id)arg1 ;
-(id)updateWithThumbnails:(id)arg1 atIndexes:(id)arg2 succeededIndexes:(id*)arg3 colorSpace:(id)arg4 ;
-(void)addPendingThumbnails:(id)arg1 atIndexes:(id)arg2 ;
-(char)hasPendingThumbnails;
-(void)updateWithPendingThumbnails;
@end

