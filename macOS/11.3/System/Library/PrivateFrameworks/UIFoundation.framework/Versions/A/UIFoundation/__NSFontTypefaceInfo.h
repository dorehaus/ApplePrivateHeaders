/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIFoundation/UIFoundation-Structs.h>
@class NSFontDescriptor, NSMapTable;

@interface __NSFontTypefaceInfo : NSObject {

	NSFontDescriptor* _normalizedFontDescriptor;
	NSMapTable* _liveInstances[3];
	CFStringRef _postscriptName;
	CFStringRef _familyName;
	double* _glyphAdvancementCache;
	CGSize* _verticalOriginDeltaCache;
	unsigned long long _hash;
	struct {
		unsigned _isSymbol : 1;
		unsigned _isDingbats : 1;
		unsigned _isDefaultFixedPitch : 1;
		unsigned _needValidation : 1;
		unsigned _hasVerticalMetrics : 2;
		unsigned _isSystemFont : 1;
		unsigned _reserved : 25;
	}  _tiFlags;

}
+(void)initialize;
+(id)typefaceInfoForFontDescriptor:(id)arg1 ;
+(id)typefaceInfoForPostscriptName:(id)arg1 options:(unsigned)arg2 ;
+(id)typefaceInfoForKnownFontDescriptor:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)hash;
-(id)_familyName;
-(id)initWithFontDescriptor:(id)arg1 ;
-(char)_validate;
-(id)_postscriptName;
-(id)normalizedFontDescriptor;
-(id)fontInstanceForKey:(id)arg1 renderingMode:(unsigned long long)arg2 ;
-(id)newFontInstanceForRenderingMode:(unsigned long long)arg1 key:(id)arg2 ;
-(CTFontRef)newPlatformFontWithKey:(id)arg1 ;
-(void)_setNeedsValidation:(char)arg1 ;
-(id)fontInstanceForFontDescriptor:(id)arg1 size:(double)arg2 affineTransform:(id)arg3 renderingMode:(unsigned long long)arg4 ;
-(char)_isSystemFont;
-(char)_isSymbol;
-(char)_isDingbats;
-(char)_isDefaultFixedPitch;
-(char)_hasVerticalMetricsWithPlatformFont:(CTFontRef)arg1 ;
-(double*)_glyphAdvancementCache:(long long)arg1 ;
-(CGSize*)_verticalOriginDeltaCache:(long long)arg1 ;
@end

