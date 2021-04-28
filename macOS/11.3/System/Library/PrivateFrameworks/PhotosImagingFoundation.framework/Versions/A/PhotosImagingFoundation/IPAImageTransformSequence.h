/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/Versions/A/PhotosImagingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <libobjc.A.dylib/IPAImageTransform.h>

@class NSArray;

@interface IPAImageTransformSequence : NSObject <IPAImageTransform> {

	NSArray* _transforms;

}
-(id)description;
-(id)inverseTransform;
-(id)initWithTransforms:(id)arg1 ;
-(char)canAlignToPixelsExactly;
-(id)intrinsicGeometry;
-(id)inputGeometry;
-(CGPoint)mapPoint:(CGPoint)arg1 ;
@end

