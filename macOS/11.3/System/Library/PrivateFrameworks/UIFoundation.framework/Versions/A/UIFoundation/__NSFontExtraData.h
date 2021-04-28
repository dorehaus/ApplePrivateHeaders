/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIFoundation/UIFoundation-Structs.h>
@class __NSFontTypefaceInfo, NSString;

@interface __NSFontExtraData : NSObject {

	double _ascender;
	double _lineHeight;
	struct {
		unsigned _isSystemFont : 1;
		unsigned _isIBScaledFont : 1;
		unsigned _isUIFont : 1;
		unsigned _renderingMode : 3;
		unsigned _systemFontType : 8;
		unsigned _appearanceSize : 1;
		unsigned _forceAscenderDelta : 1;
		unsigned _isHiragino : 1;
	}  _fFlags;
	CGAffineTransform _matrix;
	double _defaultLineHeight;
	double _defaultLineHeightForUI;
	double _ascenderDelta;
	__NSFontTypefaceInfo* _typeface;
	char* _glyphAdvancementCache;
	id _key;
	NSString* _textStyleForScaling;
	double _pointSizeForScaling;
	double _maximumPointSizeAfterScaling;

}
-(void)dealloc;
-(unsigned long long)hash;
-(char)isEqualToExtraData:(id)arg1 ;
@end

