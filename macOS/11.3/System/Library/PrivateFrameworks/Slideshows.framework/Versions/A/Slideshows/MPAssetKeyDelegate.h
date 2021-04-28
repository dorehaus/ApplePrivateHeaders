/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPAssetKeyDelegate <NSObject>
@optional
-(CGImageRef)retainedCGImageForAssetKey:(id)arg1 andSize:(CGSize)arg2;
-(id)mapTileCenteredAt:(id)arg1 size:(CGSize)arg2 inset:(CGSize)arg3;
-(id)mapTileForPath:(id)arg1;
-(id)flightPlanFrom:(CGPoint)arg1 to:(CGPoint)arg2;
-(id)updatedAssetPathForAssetPath:(id)arg1;
-(CGSize*)resolutionForAssetKey:(id)arg1;
-(id)relativePathForAssetWithAttributes:(id)arg1;
-(id)relativeTiledPathsForAssetWithAttributes:(id)arg1;
-(id)attributeForKey:(id)arg1 forAssetKey:(id)arg2 withOptions:(id)arg3;
-(id)attributesforAssetPath:(id)arg1;
-(CGImageRef)retainedCGImageForAssetKey:(id)arg1 andSize:(CGSize)arg2 orientation:(char*)arg3;
-(CGImageRef)retainedThumbnailCGImageForAssetKey:(id)arg1 andSize:(CGSize)arg2;
-(CGImageRef)retainedCGImageForAssetKey:(id)arg1 andSize:(CGSize)arg2 orientation:(char*)arg3 thumbnailIfPossible:(char)arg4 now:(char)arg5;
-(id)avAssetForAssetKey:(id)arg1;
-(id)imageDataForAssetKey:(id)arg1 andSize:(CGSize)arg2;
-(id)detectRegionsOfInterestForAssetKey:(id)arg1;
-(IOSurfaceRef)retainedIOSurfaceForAssetKey:(id)arg1 andSize:(CGSize)arg2;
-(IOSurfaceRef)retainedIOSurfaceForAssetKey:(id)arg1 andSize:(CGSize)arg2 orientation:(char*)arg3;
-(CGImageRef)cgImageForAssetKey:(id)arg1 andSize:(CGSize)arg2;

@required
-(id)absolutePathForAssetKey:(id)arg1;
-(id)absolutePathForAssetKey:(id)arg1 andSize:(CGSize)arg2;
-(id)absolutePathForStillAssetAtPath:(id)arg1 andSize:(CGSize)arg2;

@end

