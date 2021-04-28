/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/Versions/A/CoreAutoLayout
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreAutoLayout/NSLayoutAnchor.h>

@interface NSLayoutDimension : NSLayoutAnchor
-(id)ruleLessThanOrEqualToConstant:(double)arg1 ;
-(id)ruleGreaterThanOrEqualToConstant:(double)arg1 ;
-(id)ruleEqualToConstant:(double)arg1 priority:(float)arg2 identifier:(id)arg3 ;
-(id)ruleGreaterThanOrEqualToConstant:(double)arg1 priority:(float)arg2 identifier:(id)arg3 ;
-(id)ruleLessThanOrEqualToConstant:(double)arg1 priority:(float)arg2 identifier:(id)arg3 ;
-(char)isCompatibleWithAnchor:(id)arg1 ;
-(id)anchorByAddingDimension:(id)arg1 ;
-(id)times:(double)arg1 ;
-(id)plusDimension:(id)arg1 ;
-(id)minusDimension:(id)arg1 ;
-(char)validateOtherAttribute:(long long)arg1 ;
-(id)constraintLessThanOrEqualToConstant:(double)arg1 ;
-(id)constraintEqualToConstant:(double)arg1 ;
-(id)constraintGreaterThanOrEqualToConstant:(double)arg1 ;
-(id)anchorBySubtractingDimension:(id)arg1 ;
-(id)anchorByAddingConstant:(double)arg1 ;
-(id)anchorByMultiplyingByConstant:(double)arg1 ;
-(id)constraintEqualToAnchor:(id)arg1 multiplier:(double)arg2 constant:(double)arg3 ;
-(id)constraintEqualToAnchor:(id)arg1 multiplier:(double)arg2 ;
-(id)ruleEqualToConstant:(double)arg1 ;
-(id)constraintLessThanOrEqualToAnchor:(id)arg1 multiplier:(double)arg2 ;
-(id)constraintLessThanOrEqualToAnchor:(id)arg1 multiplier:(double)arg2 constant:(double)arg3 ;
-(id)constraintGreaterThanOrEqualToAnchor:(id)arg1 multiplier:(double)arg2 ;
-(id)plus:(double)arg1 ;
-(id)constraintGreaterThanOrEqualToAnchor:(id)arg1 multiplier:(double)arg2 constant:(double)arg3 ;
@end

