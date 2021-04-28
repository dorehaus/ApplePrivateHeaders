/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PAImagingCore.framework/Versions/A/PAImagingCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PAImagingCore/PAImagingCore-Structs.h>
@class NSDictionary;

@interface PAImageDifferencer : NSObject {

	CGImageRef _image1;
	CGImageRef _image2;
	CGImageRef _diffImage;
	NSDictionary* _differenceDictionary;

}
+(id)imageDifferencerWithImageURL1:(id)arg1 imageURL2:(id)arg2 ;
+(id)imageDifferencerWithImagePath1:(id)arg1 imagePath2:(id)arg2 ;
-(void)dealloc;
-(void)_calculateDifference:(long long)arg1 ;
-(CGImageRef)_newImageFromURL:(id)arg1 ;
-(CGImageRef)_newImageFromPath:(id)arg1 ;
-(id)initWithCGImage1:(CGImageRef)arg1 CGImage2:(CGImageRef)arg2 ;
-(id)initWithImageURL1:(id)arg1 imageURL2:(id)arg2 ;
-(id)initWithImagePath1:(id)arg1 imagePath2:(id)arg2 ;
-(long long)differenceCount;
-(id)differenceDictionary;
-(double)differenceMaxDeltaE;
-(id)differencePercentageOfPixelsExceedingDeltaE;
-(id)differencePercentageOfPixelsWithAnyDifference;
-(id)differenceFailure;
-(CGImageRef)differenceImage;
@end

