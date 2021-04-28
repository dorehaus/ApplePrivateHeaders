/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Vision.framework/Versions/A/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNObservation.h>

@class NSData, NSArray;

@interface VNContoursObservation : VNObservation {

	NSData* _compressedPoints;
	CGSize _imageSize;
	os_unfair_lock_s _pathLock;
	CGPathRef _normalizedPath;
	EPolygonList* _polygonList;
	vector<unsigned int, std::__1::allocator<unsigned int>>* _topLevelContoursIndices;
	vector<std::__1::vector<unsigned int, std::__1::allocator<unsigned int>>, std::__1::allocator<std::__1::vector<unsigned int, std::__1::allocator<unsigned int>>>>* _contourChildrenIndices;

}

@property (readonly) long long contourCount; 
@property (readonly) long long topLevelContourCount; 
@property (readonly) NSArray * topLevelContours; 
@property (readonly) const CGPathRef normalizedPath; 
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithRequestRevision:(unsigned long long)arg1 compressedPoints:(id)arg2 imageSize:(CGSize)arg3 ;
-(char)_initializePolygonContainers;
-(long long)contourCount;
-(long long)topLevelContourCount;
-(NSArray *)topLevelContours;
-(id)contourAtIndex:(long long)arg1 error:(id*)arg2 ;
-(id)contourAtIndexPath:(id)arg1 error:(id*)arg2 ;
-(const CGPathRef)normalizedPath;
-(const EPolygonList*)polygonList;
-(const vector<unsigned int, std::__1::allocator<unsigned int>>*)childContourIndicesAtIndex:(long long)arg1 ;
@end

