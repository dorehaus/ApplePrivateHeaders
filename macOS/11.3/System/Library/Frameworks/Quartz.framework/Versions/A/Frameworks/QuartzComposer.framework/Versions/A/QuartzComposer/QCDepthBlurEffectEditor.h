/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/QCPatch.h>

@class QCStructurePort, QCNumberPort, QCImagePort, NSMutableArray, CIFilter;

@interface QCDepthBlurEffectEditor : QCPatch {

	QCStructurePort* inputImages;
	QCNumberPort* inputAperture;
	QCImagePort* outputImage;
	QCImagePort* outputMainImage;
	QCImagePort* outputDisparityImage;
	QCImagePort* outputAlphaMatteImage;
	NSMutableArray* _inputImages;
	CIFilter* _cachedFilter;

}
+(char)isSafe;
+(char)allowsSubpatchesWithIdentifier:(id)arg1 ;
-(char)setup:(id)arg1 ;
-(char)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3 ;
-(id)transformImage:(id)arg1 transform:(CGAffineTransform)arg2 ;
-(CGAffineTransform)transformForProvider:(id)arg1 ;
-(id)getCIImage:(id)arg1 context:(id)arg2 ;
@end
