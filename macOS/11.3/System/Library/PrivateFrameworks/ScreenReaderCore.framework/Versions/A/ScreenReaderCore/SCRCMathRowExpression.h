/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/Versions/A/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenReaderCore/SCRCMathArrayExpression.h>

@interface SCRCMathRowExpression : SCRCMathArrayExpression
-(long long)integerValue;
-(char)isNumber;
-(char)isInteger;
-(id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(char)arg2 ;
-(id)childSpeakableSegmentsWithSpeakingStyle:(long long)arg1 upToDepth:(unsigned long long)arg2 parentTreePosition:(id)arg3 childIndex:(unsigned long long*)arg4 ;
-(id)mathMLTag;
-(id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2 ;
-(id)latexDescriptionInMathMode:(char)arg1 ;
-(unsigned long long)fractionLevel;
-(id)speakableSummary;
-(char)canBeUsedWithRange;
-(char)canBeUsedWithBase;
-(char)isFunctionName;
-(char)isWordOrAbbreviation;
-(char)beginsWithSpace;
-(char)endsWithSpace;
-(id)_indexesOfCharactersInWords;
-(void)_addSpacingAndChild:(id)arg1 toResult:(id)arg2 nextChild:(id)arg3 previousChild:(id)arg4 numberOfOuterRadicals:(unsigned long long)arg5 treePosition:(id)arg6 ;
@end

