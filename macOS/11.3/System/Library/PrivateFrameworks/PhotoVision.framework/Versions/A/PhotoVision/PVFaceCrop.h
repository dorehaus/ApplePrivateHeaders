/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/Versions/A/PhotoVision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoVision/PhotoVision-Structs.h>
#import <PhotoVision/PVObject.h>

@class NSData, PVFace;

@interface PVFaceCrop : PVObject {

	NSData* _faceCropData;
	PVFace* _originatingFace;
	CGSize _cachedImageDimensions;
	short _state;

}

@property (assign,nonatomic) short state;              //@synthesize state=_state - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(short)state;
-(void)setState:(short)arg1 ;
-(id)initWithFaceCropData:(id)arg1 originatingFace:(id)arg2 ;
-(id)originatingFace;
-(id)faceCropData;
-(CGSize)imageDimensions;
-(id)initWithLocalIdentifier:(id)arg1 faceCropData:(id)arg2 ;
@end

