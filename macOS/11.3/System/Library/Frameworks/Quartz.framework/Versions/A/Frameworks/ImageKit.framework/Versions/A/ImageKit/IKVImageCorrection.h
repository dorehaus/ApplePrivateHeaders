/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <ImageKit/IKImageCorrection.h>

@interface IKVImageCorrection : IKImageCorrection
+(id)filterWithName:(id)arg1 identifier:(id)arg2 ;
-(void)setCorrectionEnabled:(char)arg1 ;
-(id)processedImage:(id)arg1 ciContext:(id)arg2 cgContext:(CGContextRef)arg3 ;
-(id)description;
-(char)isIdentity;
@end
