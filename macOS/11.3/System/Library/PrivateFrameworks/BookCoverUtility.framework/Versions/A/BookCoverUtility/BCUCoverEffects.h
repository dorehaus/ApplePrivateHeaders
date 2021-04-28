/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BookCoverUtility.framework/Versions/A/BookCoverUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BookCoverUtility/BookCoverUtility-Structs.h>
@class BCULayerRenderer, NSArray;

@interface BCUCoverEffects : NSObject {

	BCULayerRenderer* _renderer;
	NSArray* _bookFilters;
	NSArray* _seriesFilters;
	NSArray* _templateImageFilters;

}
+(CGImageRef)restrictedImageFrom:(CGImageRef)arg1 size:(CGSize)arg2 ;
+(id)_effectIdentifierForEffectIndex:(unsigned long long)arg1 ;
+(id)effectIdentifierWithRTL:(char)arg1 style:(unsigned long long)arg2 content:(unsigned long long)arg3 nightMode:(char)arg4 ;
+(id)effectIdentifierForAsset:(id)arg1 withEnvironment:(id)arg2 ;
+(id)effectIdentifierForFilterInfo:(id)arg1 ;
-(id)initWithRenderer:(id)arg1 ;
-(id)bookCoverEffectFilters;
-(id)bookCoverEffectFilterForEffectIdentifier:(id)arg1 ;
-(id)seriesCoverEffectFilters;
-(id)templateImageFilters;
-(id)welcomeScreenBookCoverEffectFilters;
@end

