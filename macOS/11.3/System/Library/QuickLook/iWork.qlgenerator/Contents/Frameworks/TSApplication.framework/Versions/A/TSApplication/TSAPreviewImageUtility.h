/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSApplication.framework/Versions/A/TSApplication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSApplication/TSApplication-Structs.h>
@interface TSAPreviewImageUtility : NSObject
+(id)scaleImage:(CGImageRef)arg1 toSize:(CGSize)arg2 scale:(double)arg3 ;
+(char)imageIsOpaque:(CGImageRef)arg1 ;
+(void)drawInContext:(CGContextRef)arg1 bounds:(CGRect)arg2 image:(CGImageRef)arg3 imageSize:(CGSize)arg4 scaledSize:(CGSize)arg5 scale:(double)arg6 flip:(char)arg7 ;
+(CGImageRef)newPrerenderedImageFromImage:(CGImageRef)arg1 preserveAlpha:(char)arg2 ;
+(CGImageRef)newPrerenderedImageFromImage:(CGImageRef)arg1 ;
@end

