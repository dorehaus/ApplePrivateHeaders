/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/Versions/A/IconServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IconServices/IconServices-Structs.h>
#import <libobjc.A.dylib/ISCompositorRecipe.h>

@class NSString;

@interface ISiosDocumentRecipe : NSObject <ISCompositorRecipe> {

	unsigned long long _options;

}

@property (assign,nonatomic) unsigned long long options;              //@synthesize options=_options - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)layerTreeForSize:(CGSize)arg1 scale:(double)arg2 ;
-(CGSize)badgeSizeForSize:(CGSize)arg1 scale:(double)arg2 ;
-(CGSize)backgroundSizeForSize:(CGSize)arg1 scale:(double)arg2 ;
-(id)init;
-(void)setOptions:(unsigned long long)arg1 ;
-(unsigned long long)options;
@end

