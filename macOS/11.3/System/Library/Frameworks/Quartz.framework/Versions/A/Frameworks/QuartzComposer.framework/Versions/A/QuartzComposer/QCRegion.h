/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuartzComposer/QuartzComposer-Structs.h>
@interface QCRegion : NSObject {

	CGRect _bounds;
	void* _region;
	void** _unused[4];

}
+(void)initialize;
+(id)regionWithCGSRegion:(CGSRegionObjectRef)arg1 ;
+(id)regionWithCGRect:(CGRect)arg1 ;
+(id)regionWithRect:(CGRect)arg1 ;
+(id)emptyRegion;
+(id)infiniteRegion;
+(id)regionWithCIFilterShape:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(char)isEmpty;
-(id)rotateByDegrees:(double)arg1 ;
-(CGRect)bounds;
-(char)containsPoint:(CGPoint)arg1 ;
-(id)initWithRect:(CGRect)arg1 ;
-(id)subtractRect:(CGRect)arg1 ;
-(id)subtractRegion:(id)arg1 ;
-(char)isInfinite;
-(char)intersectsRect:(CGRect)arg1 ;
-(char)isRectangular;
-(char)containsRect:(CGRect)arg1 ;
-(char)containsRegion:(id)arg1 ;
-(char)intersectsRegion:(id)arg1 ;
-(id)intersectWithRect:(CGRect)arg1 ;
-(CGRect)CGRect;
-(id)scaleByX:(double)arg1 Y:(double)arg2 ;
-(id)initWithCIFilterShape:(id)arg1 ;
-(CGSRegionObjectRef)CGSRegion;
-(id)insetByX:(double)arg1 Y:(double)arg2 ;
-(id)offsetByX:(double)arg1 Y:(double)arg2 ;
-(id)transformWith:(CGAffineTransform*)arg1 ;
-(id)transformBy:(id)arg1 ;
-(id)pixelBufferRepresentation;
-(id)initWithCGRect:(CGRect)arg1 ;
-(id)initWithCGSRegion:(CGSRegionObjectRef)arg1 ;
-(void*)enumerateRects:(void*)arg1 outRect:(CGRect*)arg2 ;
-(id)listRects;
-(id)unionWithRect:(CGRect)arg1 ;
-(id)unionWithRegion:(id)arg1 ;
-(id)intersectWithRegion:(id)arg1 ;
-(id)CIFilterShape;
@end

