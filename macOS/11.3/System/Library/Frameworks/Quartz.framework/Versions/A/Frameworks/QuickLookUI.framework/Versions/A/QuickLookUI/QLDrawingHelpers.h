/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuickLookUI/QuickLookUI-Structs.h>
@interface QLDrawingHelpers : NSObject
+(CGColorRef)cgColorWithColor:(id)arg1 ;
+(CGImageRef)CGImageNamed:(id)arg1 fromBundle:(id)arg2 ;
+(CGColorRef)cgColorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
+(CGImageRef)CGImageNamed:(id)arg1 ;
+(CGColorRef)cgColorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 ;
+(id)colorWithCGColor:(CGColorRef)arg1 colorSpace:(CGColorSpaceRef)arg2 ;
+(id)_pathOfImageWithName:(id)arg1 inBundle:(id)arg2 ;
+(char)loadCGImageNamed:(id)arg1 fromBundle:(id)arg2 into:(CGImage*)arg3 ;
+(char)loadNSImageNamed:(id)arg1 fromBundle:(id)arg2 into:(id*)arg3 ;
+(id)imageNamed:(id)arg1 fromBundle:(id)arg2 ;
+(id)imageNamed:(id)arg1 ;
@end
