/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSDrawables.framework/Versions/A/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSDrawables/TSDCAPropertyAnimationContextCache.h>

@interface TSDCABasicAnimationContextCache : TSDCAPropertyAnimationContextCache {

	id _fromValue;
	id _toValue;

}

@property (nonatomic,readonly) id fromValue;              //@synthesize fromValue=_fromValue - In the implementation block
@property (nonatomic,readonly) id toValue;                //@synthesize toValue=_toValue - In the implementation block
-(id)fromValue;
-(id)toValue;
-(id)valueAtTime:(double)arg1 initialValue:(id)arg2 groupTimingFactor:(double)arg3 ;
-(double)percentAtTime:(double)arg1 ;
-(id)initWithAnimation:(id)arg1 ;
@end

