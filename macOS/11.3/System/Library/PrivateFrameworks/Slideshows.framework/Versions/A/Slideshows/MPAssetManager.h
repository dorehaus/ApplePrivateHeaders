/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Slideshows/Slideshows-Structs.h>
@interface MPAssetManager : NSObject
+(id)sharedManager;
+(void)releaseSharedManager;
+(void)setInhibitSharedManagerInit:(char)arg1 ;
+(id)convertCGImageToBufferUsingDataProvider:(CGImageRef)arg1 ;
+(id)convertCGImageToBufferUsingRGBDevice:(CGImageRef)arg1 ;
+(id)convertCGImageToBuffer:(CGImageRef)arg1 ;
-(id)regionsOfInterestForAsset:(CGImageRef)arg1 ;
-(unsigned long long)mediaTypeForAssetAtPath:(id)arg1 ;
-(double)durationForAssetAtPath:(id)arg1 ;
-(double)startTimeForAssetAtPath:(id)arg1 ;
-(double)stopTimeForAssetAtPath:(id)arg1 ;
-(CGSize)resolutionForAssetAtPath:(id)arg1 ;
-(id)creationDateForAssetAtPath:(id)arg1 ;
-(id)keywordsForAssetAtPath:(id)arg1 ;
-(double)latitudeForAssetAtPath:(id)arg1 ;
-(double)longitudeForAssetAtPath:(id)arg1 ;
-(double)altitudeForAssetAtPath:(id)arg1 ;
-(id)locationHierarchyForAssetAtPath:(id)arg1 ;
-(id)regionsOfInterestForAssetAtPath:(id)arg1 ;
-(id)absolutePathFromPath:(id)arg1 ;
-(double)posterTimeForAssetAtPath:(id)arg1 ;
-(void)cacheAttributes:(id)arg1 forPath:(id)arg2 ;
@end

