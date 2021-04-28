/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSStyles.framework/Versions/A/TSStyles
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSKit/TSKSosBase.h>

@interface TSSStylePropertyChangeSet : TSKSosBase
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setBoxedValue:(id)arg1 forProperty:(int)arg2 ;
-(void)setSpec:(id)arg1 forProperty:(int)arg2 ;
-(void)enumerateDefinedPropertiesWithBlock:(/*^block*/id)arg1 ;
-(id)p_variationPropertyMapFromStyle:(id)arg1 withPropertyMap:(id)arg2 ;
-(id)variationPropertyMapFromParentStyle:(id)arg1 ;
-(id)variationPropertyMapFromStyle:(id)arg1 ;
-(char)isEqualToChangeSet:(id)arg1 ;
-(void)setUnsetSpecForProperty:(int)arg1 ;
-(id)collectUndoForStyle:(id)arg1 ;
-(id)collectUnset;
-(id)variationStyleFrom:(id)arg1 inStylesheet:(id)arg2 ;
-(id)changedPropertyPaths;
-(char)isEmptyChangeSet;
-(id)propertyChangeFilteredByProperties:(id)arg1 ;
@end

