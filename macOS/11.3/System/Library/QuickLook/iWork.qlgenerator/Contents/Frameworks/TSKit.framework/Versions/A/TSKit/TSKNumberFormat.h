/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSKit.framework/Versions/A/TSKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSKit/TSKit-Structs.h>
#import <TSKit/TSKFormat.h>
#import <TSKit/TSCHNumericFormat.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSString;

@interface TSKNumberFormat : TSKFormat <TSCHNumericFormat, NSCopying> {

	NSNumber* _propertiesCacheKey;
	char _showThousandsSeparator;
	char _usePlusSign;
	int _negativeStyle;
	unsigned long long _decimalPlaces;

}

@property (nonatomic,readonly) unsigned long long decimalPlaces; 
@property (nonatomic,readonly) int negativeStyle; 
@property (nonatomic,readonly) char showThousandsSeparator; 
@property (nonatomic,readonly) TSCHNumericFormatProperties chartNumericFormatProperties; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long decimalPlaces;                                      //@synthesize decimalPlaces=_decimalPlaces - In the implementation block
@property (nonatomic,readonly) int negativeStyle;                                                     //@synthesize negativeStyle=_negativeStyle - In the implementation block
@property (nonatomic,readonly) char showThousandsSeparator;                                           //@synthesize showThousandsSeparator=_showThousandsSeparator - In the implementation block
@property (nonatomic,readonly) char usePlusSign;                                                      //@synthesize usePlusSign=_usePlusSign - In the implementation block
-(TSCHNumericFormatProperties)chartNumericFormatProperties;
-(id)chartNumericFormatByApplyingTSCHNumericFormatProperties:(TSCHNumericFormatProperties)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(unsigned long long)decimalPlaces;
-(char)showThousandsSeparator;
-(int)negativeStyle;
-(id)stringFromDouble:(double)arg1 locale:(id)arg2 ;
-(id)initWithFormatType:(unsigned)arg1 ;
-(id)asNumberFormat;
-(id)initWithFormatType:(unsigned)arg1 decimalPlaces:(unsigned long long)arg2 negativeStyle:(int)arg3 showSeparator:(char)arg4 ;
-(char)usePlusSign;
-(id)decimalFormatterForLocale:(id)arg1 ;
@end

