/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CIFilterShape : NSObject <NSCopying> {

	unsigned _pad;
	void* _priv;

}

@property (readonly) CGRect extent; 
+(id)_shapeInfinite;
+(id)shapeWithRect:(CGRect)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(CGRect)extent;
-(id)initWithRect:(CGRect)arg1 ;
-(id)intersectWithRect:(CGRect)arg1 ;
-(CGSRegionObjectRef)CGSRegion;
-(id)unionWith:(id)arg1 ;
-(id)intersectWith:(id)arg1 ;
-(id)insetByX:(int)arg1 Y:(int)arg2 ;
-(id)transformBy:(CGAffineTransform)arg1 interior:(char)arg2 ;
-(id)unionWithRect:(CGRect)arg1 ;
-(id)initWithStruct:(filterShape*)arg1 ;
@end
